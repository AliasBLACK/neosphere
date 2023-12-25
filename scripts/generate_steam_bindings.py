import json
import re
import os
import string
import random
import math

# Replace this with your steamworks folder.
steamworks_dir = "steam"

# Functions that don't work due to missing definitions or accessors.
blacklist = [
	"SteamAPI_ISteamInput_SetDualSenseTriggerEffect"
]

# Typedef dictionary.
typedefs = {
	"CSteamID": "uint64_t",
	"CGameID": "uint64_t",
}

# These structs have no accessors, so to initialize them just create an empty struct.
empty_structs = {
	"ISteamNetworkingConnectionSignaling",
	"SteamDatagramRelayAuthTicket",
	"ISteamNetworkingSignalingRecvContext"
}
# Give these structs void types.
for structname in empty_structs:
	typedefs[structname] = "void"

# Convert type to base c type.
basic_types = ["int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t", "int64_t", "uint64_t", "size_t", "void", "void *", "char", "intptr_t", "bool", "float", "double", "char [1024]"]
types_needing_js_classes = []
def convert_type(type):
	is_pointer_to_pointer = False
	is_pointer = False
	is_const = False
	if not type.find("**") < 0:
		is_pointer_to_pointer = True
		type = type.replace("**", "").strip()
	elif not type.find("*") < 0:
		is_pointer = True
		type = type.replace("*", "").strip()
	elif not type.find("&") < 0:
		is_pointer = True
		type = type.replace("&", "").strip()
	if not type.find("const") < 0:
		is_const = True
		type = type.replace("const", "").strip()
	
	# Check if type already defined.
	type = "uint32_t" if type in enums else type
	type = typedefs[type] if type in typedefs else convert_base_type(type)
	if not type in basic_types:
		if not type in types_needing_js_classes:
			types_needing_js_classes.append(type)
	
	# Assemble result.
	result = "const " if is_const else ""
	result += type
	result += " **" if is_pointer_to_pointer else " *" if is_pointer else ""
	return result

def convert_base_type(type):
	match (type):
		case "unsigned char" | "uint8":
			return "uint8_t"
		case "signed char" | "int8":
			return "int8_t"
		case "short" | "int16":
			return "int16_t"
		case "unsigned short" | "uint16":
			return "uint16_t"
		case "int" | "int32":
			return "int32_t"
		case "unsigned int" | "uint32":
			return "uint32_t"
		case "long long" | "int64":
			return "int64_t"
		case "unsigned long long" | "uint64":
			return "uint64_t"
		case _:
			return type

# Create/Find existing function pointers.
function_pointers = {}
def create_function_ptr(ptr_key, returntype, params):
	if not ptr_key in function_pointers:
		ptr_name = "FuncPtr_" + ''.join(random.choices(string.ascii_uppercase + string.digits, k=7))
		function_pointers[ptr_key] = {
			"name": ptr_name,
			"returntype": returntype,
			"params": params
		}
		return ptr_name
	else:
		return function_pointers[ptr_key]["name"]

# Parse methods.
methods = {}
unparsed_params = []
js_name_max_length = 0
def parse_method(method, category, type):

	# Ignore method if in blacklist.
	if method['methodname_flat'] in blacklist:
		return
	
	# Parse params.
	params = []
	for param in method['params']:

		# Remove namespace.
		param['paramtype'] = re.sub(r"^.*::", "", param['paramtype'])

		# Convert type.
		param['paramtype'] = convert_type(param['paramtype'])

		# Check if array.
		array_size = re.search(r"\[([0-9]*?)\]", param['paramtype'])
		if not array_size is None:
			param['paramtype'] = param['paramtype'].replace("[" + array_size.group(1) + "] ", "").strip()
			param["paramname"] += " [" + array_size.group(1) + "]"
		
		# If params contain func ptr, skip method.
		if (param['paramtype'] in steam_func_ptrs):
			blacklist.append(method['methodname_flat'])
			return
		
		# TODO: REMOVE LATER. FOR DEBUG PURPOSE.
		for key in param:
			if not key in unparsed_params:
				unparsed_params.append(key)
		
		# Append param to param list.
		params.append(param['paramtype'])

	# Parse category.
	if not category in methods:
		methods[category] = {}
	
	# Return type.
	method['returntype'] = convert_type(method['returntype'])
	if not method['returntype'] in methods[category]:
		methods[category][method['returntype']] = []
	
	# Create function pointer.
	ptr_key = method['returntype'] + ", ".join(params)
	ptr_name = create_function_ptr(ptr_key, method['returntype'], params)
	
	# Append to methods.
	js_name = method['methodname_flat'].replace("SteamAPI", "js")
	global js_name_max_length
	js_name_max_length = len(js_name) if len(js_name) > js_name_max_length else js_name_max_length
	methods[category][method['returntype']].append({
		"type": type,
		"category": category,
		"js_name": js_name,
		"name": method['methodname'] if method['methodname'].find("operator") < 0 else method['methodname_flat'].split("_").pop(),
		"name_flat": method['methodname_flat'],
		"ptr": ptr_name,
		"params": method['params']
	})

def calc_tabs_for_alignment(input):
	return input + ("	" * (math.ceil(js_name_max_length / 4) - math.floor(len(input) / 4)))

# ==========
# PARSE DATA
# ==========

# Read steam json.
f = open(steamworks_dir + '/steam_api.json')
data = json.load(f)

# File content strings.
header = """// WARNING: This file is auto-generated. Do not edit.
// Generator script is located at scripts/generate_steam_bindings.py

#include <stdbool.h>
#include <windows.h>
#include <stdint.h>

HMODULE steam_api;

"""
source = """// WARNING: This file is auto-generated. Do not edit.
// Generator script is located at scripts/generate_steam_bindings.py

#include "neosphere.h"
#include "pegasus.h"
#include "api.h"
#include "steam.h"
#include "jsal.h"

"""

# Enums.
enums = {}
for enum in data['enums']:
	enums[enum['enumname']] = []
	for entry in enum['values']:
		enums[enum['enumname']].append(entry['name'])

# Grab all #defines.
# (Not exported, for reference only)
defines = {}
for filename in os.listdir(steamworks_dir):
	if ".h" in filename:
		with open(steamworks_dir + '/' + filename, "r") as f:
			for define in re.findall(r"#define ([A-Z_]*? .*)", f.read()):
				pair = define.split(" ")
				defines[pair[0]] = pair[1]

# Typedefs
typedef_string = ""
steam_func_ptrs = []
for i in data['typedefs']:
	
	# Check if function pointer.
	result = i['type'].find("(*)")
	if not result < 0:
		i['type'] = i['type'].replace("(*)", "")
		result = re.search(r"\((.*)\)", i['type'])
		if not result is None:
			arguments = [] 
			for arg in result.group(1).split(","):
				arguments.append(convert_type(arg.strip()))
			steam_func_ptrs.append(i['typedef'])
			typedef_string += "typedef " + i['type'].replace("(" + result.group(1) + ")", "").strip() + " (*" + i['typedef'] + ") (" + ", ".join(arguments) + ");\n"
			continue

	# Convert type to C type.
	type = convert_base_type(i['type'])

	# Append type to dictionary.
	typedefs[i['typedef']] = type

# Callbacks.
# Ignore all for now, not sure how to pass callbacks to js.
for i in data['callback_structs']:
	steam_func_ptrs.append(i["struct"])

# Structs.
unparsed_methods = []
struct_string = ""
for i in data['structs']:

	# If struct has no fields, ignore.
	if not i['fields']:
		continue

	# Check if internal enum defined.
	if 'enums' in i:
		for enum in i['enums']:
			enums[enum['enumname']] = []
			for value in enum['values']:
				enums[enum['enumname']].append(value['name'])
	
	# Check if there are methods.
	if 'methods' in i:
		for method in i['methods']:
			method['params'] = [{ "paramtype": i['struct'] + " *", "paramname": "self" }] + method['params']
			unparsed_methods.append([method, i['struct'], "struct_method"])

	struct_string += "typedef struct {\n"
	for prop in i['fields']:

		# Check if array.
		array_size = re.search(r"\[([0-9]*?)\]", prop['fieldtype'])
		if not array_size is None:
			prop['fieldtype'] = prop['fieldtype'].replace("[" + array_size.group(1) + "]", "").strip()
			prop["fieldname"] += " [" + array_size.group(1) + "]"
		
		# Check if function pointer.
		result = prop['fieldtype'].find("(*)")
		if not result < 0:
			prop['fieldtype'] = prop['fieldtype'].replace("(*)", "")
			result = re.search(r"\((.*)\)", prop['fieldtype'])
			if not result is None:
				prop['fieldname'] = "(*" + prop['fieldname'] + ")(" + result.group(1) + ")"
				prop['fieldtype'] = "void"

		# Remove namespace if any.
		prop['fieldtype'] = re.sub(r"^.*::", "", prop['fieldtype'])

		# Convert type to C types.
		prop['fieldtype'] = convert_type(prop['fieldtype'])

		# Append to output.
		struct_string += "	" + prop['fieldtype'] + " " + prop['fieldname'] + ";\n"
	struct_string += "} " + i['struct'] + ";\n\n"

# Constants.
const = {}
for i in data['consts']:
	
	# Replace all type casts in const value.
	i['constval'] = i['constval'].replace(" ", "")
	for type in typedefs:
		i['constval'] = i['constval'].replace("(" + type + ")", "(" + typedefs[type] + ")")
	
	# Replace all defined consts in const value.
	for type in const:
		for constant in const[type]:
			i['constval'] = i['constval'].replace(constant[0], constant[1])

	# Replace const type with C type.
	i['consttype'] = convert_type(i['consttype'])
	
	# Add to dictionary for sorting.
	if not i['consttype'] in const:
		const[i['consttype']] = []
	const[i['consttype']].append([i['constname'], i['constval']])

# Interfaces.
interfaces = []
boolfunc = create_function_ptr("bool", "bool", [])
voidfunc = create_function_ptr("void", "void", [])
for interface in data['interfaces']:

	# Get interface name.
	interface_name = interface['classname']
	typedefs[interface_name] = "void"

	# Get accessor.
	interfaces.append(interface_name)
	if 'accessors' in interface:
		for accessor in interface['accessors']:
			if accessor['kind'] == 'user':
				unparsed_methods.append([{
					"methodname": accessor['name'],
					"methodname_flat": accessor['name_flat'],
					"returntype": "void *",
					"params": []
				}, interface_name, "accessor"])
	
	# Get enums.
	if 'enums' in interface:
		for enum in interface['enums']:
			enums[enum['enumname']] = []
			for value in enum['values']:
				enums[enum['enumname']].append(value['name'])
	
	# Get methods.
	for method in interface['methods']:
		method['params'] = [{ 'paramname': 'self', 'paramtype': 'void *'}] + method['params']
		unparsed_methods.append([method, interface_name, "interface_method"])

# Parse all methods.
for method in unparsed_methods:
	parse_method(method[0], method[1], method[2])

# Sort function pointers by returntype.
function_pointers = sorted(function_pointers.items(), key = lambda x: x[1]['returntype'], reverse = True)

# Print unparse parameters.
# for type in types_needing_js_classes:
# 	print(type)
# for key in unparsed_params:
#	 print(key)

f.close()

# =============
# GENERATE CODE
# =============

# Print structs to header file.
header += "// #######\n"
header += "// STRUCTS\n"
header += "// #######\n\n"
header += struct_string
header += "\n"

# Print function pointers to header file.
header += "// #################\n"
header += "// FUNCTION POINTERS\n"
header += "// #################\n\n"
# header += typedef_string
for ptr in function_pointers:
	header += "typedef " + ptr[1]["returntype"] + " (*" + ptr[1]["name"] + ") (" + ", ".join(ptr[1]["params"]) + ");\n"
header += "\n"

# Print methods to header file.
header += "// #######\n"
header += "// METHODS\n"
header += "// #######\n\n"
header += "// The following functions/methods are not exported:\n"
for func in blacklist:
	header += "//	" + func + "\n"
header += "\n"
header += "void steamapi_init (void);\n"
header += "static bool " + calc_tabs_for_alignment("js_SteamAPI_Init") + "(int num_args, bool is_ctor, intptr_t magic);\n"
header += "static bool " + calc_tabs_for_alignment("js_SteamAPI_Shutdown") + "(int num_args, bool is_ctor, intptr_t magic);\n\n"
for category in methods:
	header += "// " + category + "\n"
	for returntype in methods[category]:
		longest_length_in_tabs = 0
		for method in methods[category][returntype]:
			tab_amount = math.ceil(js_name_max_length / 4) - math.floor(len(method["js_name"]) / 4)
			header += "static bool " + method["js_name"] + ("	" * tab_amount) + "(int num_args, bool is_ctor, intptr_t magic);\n"
	header += "\n"

# Start init function in source file.
source += """void
steamapi_init(void)
{
"""

# Print constants to source file.
source += "	// #########\n"
source += "	// CONSTANTS\n"
source += "	// #########\n\n"
for type in const:
	for constant in const[type]:
		source += '	api_define_const("Steam", "' + constant[0] + '", ' + constant[1] + ');\n'
source += "\n"

# Print enums to source file.
source += "	// #####\n"
source += "	// ENUMS\n"
source += "	// #####\n\n"
for enum in enums:
	for entry in enumerate(enums[enum]):
		source += '	api_define_const("' + enum + '", "' + entry[1] + '", ' + str(entry[0]) + ');\n'
source += "\n"

# Print function definitions to source file.
source += "	// #######\n"
source += "	// METHODS\n"
source += "	// #######\n\n"
for category in methods:
	source += "	// " + category + "\n"
	for returntype in methods[category]:
		for method in methods[category][returntype]:
			if method['type'] == "accessor":
				continue
			source += '	api_define_func("' + category + '", "' + method['name'] + '", ' + method['js_name'] + ", 0);\n"
	source += "\n"

# End init function in source file.
source += "}\n\n"

# Write function bodies.
source += """static bool
js_SteamAPI_Init(int num_args, bool is_ctor, intptr_t magic)
{
	steam_api = LoadLibrary(TEXT("steam_api64.dll"));
	if (steam_api)
	{
		""" + boolfunc + """ SteamAPI_Init;
		SteamAPI_Init = (""" + boolfunc + """)GetProcAddress(steam_api, "SteamAPI_Init");
	}
	else
	{
		jsal_error(JS_ERROR, "Failed to link to 'steam_api64.dll'.");
	}
}

"""
for category in methods:
	for returntype in methods[category]:
		for method in methods[category][returntype]:
			internal_name = method['js_name'].replace('js_', "")
			if method['type'] == "accessor":
				continue
			source += "static bool\n" + method['js_name'] + "(int num_args, bool is_ctor, intptr_t magic)\n{\n"
			for param in method['params']:
				source += "	" + param['paramtype'] + " " + param['paramname'] + ";\n"
				type = param['paramtype'].replace("const", "").replace("*","").strip()
				if type not in basic_types and type in methods:
					print(param['paramtype'])
			if returntype != "void":
				source += "	" + returntype + " result;\n"
			source += "	" + method['ptr'] + " " + internal_name + ";\n"
			source += "\n"
			source += "	" + internal_name + " = (" + method['ptr'] + ')GetProcAddress(steam_api, "' + method['name_flat'] + '");\n'
			source += "	" + ("result = " if returntype != "void" else "") + internal_name + "(" + ", ".join(param['paramname'] for param in method['params']) + ");\n"
			source += "}\n\n"

# Write header file.
out = open("..//src/neosphere/steam.h", "w")
out.write(header)
out.close()

# Write source file.
out = open("..//src/neosphere/steam.c", "w")
out.write(source)
out.close()