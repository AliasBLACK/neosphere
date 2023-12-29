import json
import re
import os
import math

# Replace this with your steamworks folder.
steamworks_dir = "steam"

# Max array size to reserve for dynamic arrays.
max_array_size_reserved = 64

# Interfaces to bind
interfaces_to_bind = [
	"ISteamApps",
	"ISteamUser",
	"ISteamInput",
	"ISteamFriends",
	"ISteamUserStats"
]

# Methods to ignore due to deprecation.
methods_to_ignore = [
	"SteamAPI_ISteamUser_GetAvailableVoice"
]

# Typedef dictionary.
typedefs = {
	"CSteamID": "uint64_t",
	"CGameID": "uint64_t",
}

# Params to ignore (too much work to get them working)
forbidden_types = [
	"ScePadTriggerEffectParam"
]

# Convert type to one already defined or base C type.
enums_to_bind = []
structs_to_bind = []
def convert_type(type):

	# Check if type is pointer and/or const.
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
	
	# Check if type defined as enum.
	if type in enums:
		if not type in enums_to_bind:
			enums_to_bind.append(type)
		type = "uint32_t"
	
	# Check if type defined as struct.
	if type in structs:
		if not type in structs_to_bind:
			structs_to_bind.append(type)
	
	# Check if type defined in typedefs, else convert to base C type.
	type = typedefs[type] if type in typedefs else convert_base_type(type)
	
	# Assemble result.
	result = "const " if is_const else ""
	result += type
	result += " **" if is_pointer_to_pointer else " *" if is_pointer else ""
	return result

# Convert type to base C type.
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

# Parse struct.
unparsed_methods = []
struct_string = ""
def parse_struct(struct):

	# If struct has no fields, ignore.
	if not struct['fields']:
		return

	# Check if internal enum defined.
	if 'enums' in i:
		for enum in struct['enums']:
			enums[enum['enumname']] = []
			for value in enum['values']:
				enums[enum['enumname']].append(value['name'])
	
	# Check if there are methods.
	if 'methods' in i:
		for method in struct['methods']:
			method['params'] = [{ "paramtype": struct['struct'] + " *", "paramname": "self" }] + method['params']
			parse_method([method, struct['struct'], "struct_method"])

	global struct_string
	struct_string += "typedef struct {\n"
	for prop in struct['fields']:

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

		# Convert type.
		prop['fieldtype'] = convert_type(prop['fieldtype'])

		# Append to output.
		struct_string += "	" + prop['fieldtype'] + " " + prop['fieldname'] + ";\n"
	struct_string += "} " + struct['struct'] + ";\n\n"

# Create/Find existing function pointers.
function_pointers = {}
def create_function_ptr(ptr_key, returntype, params):
	if not ptr_key in function_pointers:
		# ptr_name = "FuncPtr_" + ''.join(random.choices(string.ascii_uppercase + string.digits, k=7))
		ptr_name = "FuncPtr_" + "{:03d}".format(len(function_pointers))
		function_pointers[ptr_key] = {
			"name": ptr_name,
			"returntype": returntype,
			"params": params
		}
		return ptr_name
	else:
		return function_pointers[ptr_key]["name"]

# Create basic function pointers for steam api init functions.
boolfunc = create_function_ptr("bool", "bool", [])
pointerfunc = create_function_ptr("void *", "void *", [])
voidfunc = create_function_ptr("void", "void", [])

# Parse methods.
methods = {}
skipped_methods = []
out_arrays = {}
js_name_max_length = 0
def parse_method(method, category, type):

	# Skip if in methods_to_ignore.
	if method['methodname_flat'] in methods_to_ignore:
		skipped_methods.append(method['methodname_flat'] + " (listed in methods_to_ignore)")
		return
	
	# Skip if method returns a SteamAPICall_t.
	# TODO: Figure out how to do this.
	if "SteamAPICall_t" in method['returntype']:
		skipped_methods.append(method['methodname_flat'] + " (returns SteamAPICall_t)")
		return
	
	# Parse params.
	params = []
	global out_arrays
	for param in method['params']:

		# Remove namespace.
		param['paramtype'] = re.sub(r"^.*::", "", param['paramtype'])

		# Check if array.
		array_size = re.search(r"\[([0-9]*?)\]", param['paramtype'])
		if not array_size is None:
			param['paramtype'] = param['paramtype'].replace("[" + array_size.group(1) + "] ", "").strip()
			param['paramname'] += " [" + array_size.group(1) + "]"

		# Skip if struct is required in param.
		# TODO: Add this later.
		if param['paramtype'].replace("*", "").replace("const", "").strip() in structs:
			skipped_methods.append(method['methodname_flat'] + " (struct argument required)")
			return
		
		# Mark param if enum for documentation.
		if param['paramtype'] in enums:
			param['enumtype'] = param['paramtype']
		
		# Convert type.
		param['paramtype'] = convert_type(param['paramtype'])

		# Homogenize 'out_array_call' (there is only one in entire api)
		if "out_array_call" in param:
			param['out_array_count'] = param['out_array_call'].split(",")[0]

		# Check if method outputs an array.
		if "out_array_count" in param:

			# If fixed sized array, create a static one and keep using it.
			if param['out_array_count'] in defines:
				return_array = method['methodname'] + "_" + param['paramname']
				out_arrays[return_array] = [defines[param['out_array_count']], param['paramtype'].replace("*", "").strip()]
				param['out_array_size'] = defines[param['out_array_count']]
				param['out_array_name'] = return_array
			
			# Skip if dynamically typed array.
			# TODO: Figure out how to do this.
			else:
				skipped_methods.append(method['methodname_flat'] + " (dynamically sized array out)")
				return
		
		# Skip if require pointer to data blob.
		# TODO: Figure out how to do this.
		if "void *" in param['paramtype'] and not param['paramname'] == "self":
			skipped_methods.append(method['methodname_flat'] + " (pointer to raw data argument required)")
			return
		
		# Skip if params contain callback function pointer.
		# TODO: Figure out how to do this.
		if param['paramtype'].replace("*", "").replace("const", "").strip() in forbidden_types:
			skipped_methods.append(method['methodname_flat'] + " (callback pointer argument required)")
			return
		
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

# Insert tabs to align blocks for neatness.
def calc_tabs_for_alignment(input):
	return input + ("	" * (math.ceil(js_name_max_length / 4) - math.floor(len(input) / 4)))

# Return equivalent jsal require function.
def jsal_require_function(type, index, param_name):
	req_string = require_string(type)
	if len(req_string) > 0:
		return param_name + " = " + req_string + str(index) + ");\n"

def require_string(type):
	match type:
		case "void *" | "const void *":
			return "jsal_require_buffer_ptr("
		case "bool":
			return "jsal_require_boolean("
		case "int8_t" | "int16_t" | "int32_t" | "int" | "char":
			return "jsal_require_int("
		case "uint8_t" | "uint16_t" | "uint32_t" | "unsigned int":
			return  "jsal_require_uint("
		case "int64_t" | "uint64_t" | "float" | "double":
			return  "jsal_require_number("
		case "char *" | "const char *":
			return "jsal_require_string("
		case _:
			print("Input type " + type + " not recognized!")
			return ""

# Return equivalent jsal push function.
def jsal_push_function(type):
	match(type):
		case "bool":
			return "jsal_push_boolean("
		case "int8_t" | "int16_t" | "int32_t" | "int" | "char":
			return "jsal_push_int("
		case "uint8_t" | "uint16_t" | "uint32_t" | "unsigned int":
			return  "jsal_push_uint("
		case "int64_t" | "uint64_t" | "float" | "double":
			return  "jsal_push_number("
		case "char *" | "const char *":
			return "jsal_push_string("
		case _:
			print("Return type " + type + " not recognized!")
			return ""

# Return struct as js object.
def jsal_push_object(type, name, indents = 0):
	global structs
	if type in structs:
		result = "	" * indents + "jsal_push_new_object();\n"
		for field in structs[type]['fields']:
			result += "	" * indents + jsal_push_function(field['fieldtype']) + name + "." + field['fieldname'] + ");\n"
			result += "	" * indents + 'jsal_put_prop_string(-2, "' + field['fieldname']  +'");\n'
		return result
	else:
		return ""
	
# Return js friendly type for documentation.
def js_type_convert(type):
	match(type):
		case "bool":
			return "bool"
		case "int8_t" | "int16_t" | "int32_t" | "int" | "char" | "uint8_t" | "uint16_t" | "uint32_t" | "unsigned int" | "int64_t" | "uint64_t" | "double":
			return "int"
		case "float":
			return "float"
		case "const char":
			return "string"
		case _:
			print("Javascript type " + type + " not recognized!")
			return ""

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

documentation = ""

# Enums.
enums = {}
for enum in data['enums']:
	enums[enum['enumname']] = []
	for entry in enum['values']:
		enums[enum['enumname']].append(entry['name'])

# Scrape header files for required info.
defines = {}
comments = {}
for filename in os.listdir(steamworks_dir):
	if ".h" in filename:
		with open(steamworks_dir + '/' + filename, "r") as f:
			txt = f.read()

			# Grab all defines for reference.
			for define in re.findall(r"#define ([A-Z_]*? .*)", txt):
				pair = define.split(" ")
				defines[pair[0]] = pair[1]
			
			# Grab all comments (if any).
			result = re.search(r'^class ([A-Za-z0-9_]*?)\s', txt, flags = re.MULTILINE)
			if not result:
				continue
			else:
				classname = result.group(1)
				if not classname in comments:
					comments[classname] = {}
				result = re.search(r'public:\s(.*?)\}', txt, flags = re.S)
				if not result:
					continue
				else:
					result = re.sub(r'\(.*?\).*?$', "()", result.group(1), flags = re.MULTILINE)
					result = result.split("()")
					for entry in result:
						parts = re.split("virtual", entry)
						if len(parts) < 2:
							continue
						else:
							functionname = re.split(r'\s+', parts[1].strip())
							if len(functionname) < 2:
								continue
							else:
								comments[classname][functionname[1]] = re.split(r'\s*\/+\s*', parts[0].strip())
								while "" in comments[classname][functionname[1]]:
									comments[classname][functionname[1]].remove("")

# Typedefs
for i in data['typedefs']:
	
	# Check if function pointer.
	if not i['type'].find("(*)") < 0:
		forbidden_types.append(i['typedef'])
		continue

	# Convert type to C type.
	type = convert_base_type(i['type'])

	# Append type to dictionary.
	typedefs[i['typedef']] = type

# Callbacks.
# Ignore all for now, not sure how to pass callbacks to js.
for i in data['callback_structs']:
	forbidden_types.append(i['struct'])

# Structs.
structs = {}
for i in data['structs']:
	structs[i['struct']] = i

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
for interface in data['interfaces']:

	# Get interface name.
	interface_name = interface['classname']
	typedefs[interface_name] = "void"

	# Check if interface is required to be parsed.
	if not interface_name in interfaces_to_bind:
		continue

	# Get accessor.
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

# Parse all structs.
for struct in structs_to_bind:
	parse_struct(structs[struct])

# Sort function pointers by returntype.
function_pointers = sorted(function_pointers.items(), key = lambda x: x[1]['returntype'], reverse = True)

f.close()

# =============
# GENERATE CODE
# =============

# ---------------------
# HEADER FILE (steam.h)
# ---------------------

# Write interface pointers in header file.
for category in methods:
	for returntype in methods[category]:
		for method in methods[category][returntype]:
			if method['type'] == "accessor":
				header += "void * " + category + ";\n"
header += "\n"

# Write global arrays in header file.
for arrayname in out_arrays:
	header += out_arrays[arrayname][1] + " " + arrayname + "[" + out_arrays[arrayname][0] + "];\n"
header += "\n"

# Write structs in header file.
if len(struct_string) > 0:
	header += struct_string
	# header += "\n"

# Write function pointers in header file.
for ptr in function_pointers:
	header += "typedef " + ptr[1]["returntype"] + " (*" + ptr[1]["name"] + ") (" + ", ".join(ptr[1]["params"]) + ");\n"
header += "\n"

# Write methods in header file.
header += "// The following functions have not been exported:\n"
for func in skipped_methods:
	header += "//	- " + func + "\n"
header += "\n"
header += "void steamapi_init (void);\n"
header += "static bool " + calc_tabs_for_alignment("js_SteamAPI_Init") + "(int num_args, bool is_ctor, intptr_t magic);\n"
header += "static bool " + calc_tabs_for_alignment("js_SteamAPI_Shutdown") + "(int num_args, bool is_ctor, intptr_t magic);\n\n"
for category in methods:
	header += "// " + category + "\n"
	for returntype in methods[category]:
		for method in methods[category][returntype]:
			if method['type'] == "accessor":
				continue
			header += "static bool " + calc_tabs_for_alignment(method["js_name"]) + "(int num_args, bool is_ctor, intptr_t magic);\n"
	header += "\n"

# ---------------------
# SOURCE FILE (steam.c)
# ---------------------

# Write init function in source file.
source += """void
steamapi_init(void)
{
"""

# Write constants to source file.
for type in const:
	for constant in const[type]:
		source += '	api_define_const("Steam", "' + constant[0] + '", ' + constant[1] + ');\n'

# Write enums to source file.
for enum in enums_to_bind:
	source += "\n	// Enum " + enum + "\n"
	for entry in enumerate(enums[enum]):
		source += '	api_define_const("' + enum + '", "' + entry[1] + '", ' + str(entry[0]) + ');\n'

# Write sphere api function defines to source file.
source += "\n"
source += "	// API Init/Shutdown functions.\n"
source += '	api_define_func("SteamAPI", "Init", js_SteamAPI_Init, 0);\n'
source += '	api_define_func("SteamAPI", "Shutdown", js_SteamAPI_Shutdown, 0);\n'
for category in methods:
	source += "\n"
	source += "	// " + category + "\n"
	for returntype in methods[category]:
		for method in methods[category][returntype]:
			if method['type'] == "accessor":
				continue
			source += '	api_define_func("' + category + '", "' + method['name'] + '", ' + method['js_name'] + ", 0);\n"

# End init function in source file.
source += "}\n\n"

# Write Steam API init function.
source += """static bool
js_SteamAPI_Init(int num_args, bool is_ctor, intptr_t magic)
{
	steam_api = LoadLibrary(TEXT("steam_api64.dll"));
	if (steam_api)
	{
		""" + boolfunc + """ SteamAPI_Init;
		SteamAPI_Init = (""" + boolfunc + """)GetProcAddress(steam_api, "SteamAPI_Init");
		if (SteamAPI_Init())
		{"""

# Write all accessors for interfaces in init function.
for category in methods:
	for returntype in methods[category]:
		for method in methods[category][returntype]:
			if method['type'] == "accessor":
				source += "\n			" + pointerfunc + ' ' + category + "_Accessor = (" + pointerfunc + ')GetProcAddress(steam_api, "' + method['name_flat'] + '");\n'
				source += "			" + category + " = " + category + "_Accessor();\n"

source += """		}
		else
			jsal_error(JS_ERROR, "SteamAPI_Init() failed. Is Steam running or is steam_appid.txt missing from executable folder?");
	}
	else
		jsal_error(JS_ERROR, "Failed to link to 'steam_api64.dll'.");
	
	return false;
}

"""

# Write steam shutdown function.
source += """static bool
js_SteamAPI_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	""" + voidfunc + """ SteamAPI_Shutdown;
	SteamAPI_Shutdown = (""" + voidfunc + """)GetProcAddress(steam_api, "SteamAPI_Shutdown");
	SteamAPI_Shutdown();

	return false;
}

"""

for category in methods:

	# Write interface header in documentation.
	documentation += "\n`" + category + "`" + " Interface\n"
	documentation += "-" * len("`" + category + "`" + " Interface") + "\n\n"

	for returntype in methods[category]:
		for method in methods[category][returntype]:
			internal_name = method['js_name'].replace('js_', "")

			# Skip accessors (these are handled in steamapi_init)
			if method['type'] == "accessor":
				continue

			# Function header.
			source += "static bool\n" + method['js_name'] + "(int num_args, bool is_ctor, intptr_t magic)\n{\n"

			# Declare required vars.
			initialized_i = False
			param_arg_array = []
			jsal_requires = []
			out_params = []
			arg_index = 0

			# Declare documentation vars.
			doc_params = []
			doc_enum = ""
			doc_resulttype = ""
			doc_returntypes = ""

			# Print params.
			for param in method['params']:

				# If accessor.
				if param['paramname'] == 'self':
					param_arg_array.append(category)
					continue

				# If static array.
				elif "out_array_size" in param:
					param_arg_array.append("&" + param['out_array_name'] if 'out_array_name' in param else param['paramname'])
					out_params.append(param['paramname'])
					continue

				# If pointer type.
				elif "*" in param['paramtype'] and not "char *" in param['paramtype']:
					source += "	" + param['paramtype'].replace("*", "").strip() + " " + param['paramname'] + ";\n"
					param_arg_array.append("&" + param['paramname'])
					out_params.append(param['paramname'])
					continue

				# Else, print param as normal.
				else:
					if "enumtype" in param:
						if len(enums[param['enumtype']]) < 20:
							doc_enum += "		" + param['paramname'] + " is an enum with the following members:\n\n"
							for member in enums[param['enumtype']]:
								doc_enum += "			" + param['enumtype'] + "." + member + "\n"
							doc_enum += "\n"
						else:
							doc_enum += "		" + param['paramname'] + " is an enum type named " + param['enumtype'] + ".\n"
							doc_enum += "		Due to the length of the enum, refer to Steamworks documentation for details."
					param_arg_array.append(param['paramname'])
					jsal_requires.append(jsal_require_function(param['paramtype'], arg_index, param['paramname']))
					source += "	" + param['paramtype'] + " " + param['paramname'] + ";\n"
					doc_params.append(js_type_convert(param['paramtype'].replace("*", "").strip()) + " " + param['paramname'])
					arg_index += 1

			# Print return type.
			if returntype != "void":
				source += "	" + returntype + " result;\n"
			
			# Print function ptr.
			source += "	" + method['ptr'] + " " + internal_name + ";\n"
			source += "\n"

			# Print jsal requires.
			if len(jsal_requires) > 0:
				for require in jsal_requires:
					if len(require) > 0:
						source += "	" + require
				source += "\n"

			# Execute steam api function.
			source += "	" + internal_name + " = (" + method['ptr'] + ')GetProcAddress(steam_api, "' + method['name_flat'] + '");\n'
			source += "	" + ("result = " if returntype != "void" else "") + internal_name + "(" + ", ".join(param_arg_array) + ");\n"
			source += "\n"

			# Push returns.
			if len(out_params) <= 0:

				# Nothing returned.
				if returntype == "void":
					source += "	return(false);\n"
				
				# Returns a struct.
				elif returntype in structs:
					source += jsal_push_object(returntype, "result", 1)
					source += "\n"
					source += "	return(true);\n"

				# Single var return.
				else:
					doc_resulttype = js_type_convert(returntype.replace("*","").strip())
					source += "	" + jsal_push_function(returntype) + "result);\n"
					source += "\n"
					source += "	return(true);\n"
			
			else:

				# If multiple var returned, return a js object.
				source += "	jsal_push_new_object();\n"

				# Push returned var (if any) as first item in array.
				if returntype != "void":
					source += "	" + jsal_push_function(returntype) + "result);\n"
					source += '	jsal_put_prop_string(-2, "result");\n'

				# Push rest of returned params.
				for param in method['params']:
					if param['paramname'] in out_params:

						# If array.
						if "out_array_size" in param:
							if not initialized_i:
								initialized_i = True
								source += "	int i;\n"
							source += "	jsal_push_new_array();\n"
							source += "	for (i = 0; i < " + param['out_array_size'] + "; ++i)\n"
							source += "	{\n"
							source += "		" + jsal_push_function(param['paramtype'].replace("*", "").strip()) + (param['out_array_name'] if 'out_array_name' in param else param['paramname']) + "[i]);\n"
							source += "		jsal_put_prop_index(-2, i);\n"
							source += "	}\n"
							doc_returntypes += ("			" + "value." + (param['out_array_name'] if 'out_array_name' in param else param['paramname']) + " (" + js_type_convert(param['paramtype'].replace("*","").strip()) + "[])\n")
						
						# Else, return normally based on type.
						else:
							source += "	" + jsal_push_function(param['paramtype'].replace("*", "").strip()) + param['paramname'] + ");\n"
							doc_returntypes += ("			" + "value." + param['paramname'] + " (" + js_type_convert(param['paramtype'].replace("*","").strip()) + ")\n")
						
						# Next param please.
						source += '	jsal_put_prop_string(-2, "' + param['paramname'] + '");\n'
					
				# Close out return portion of function.
				source += "\n"
				source += "	return(true);\n"
			
			# Close function definition.
			source += "}\n\n"

			# Write documentation for function.
			documentation += "	" + category + "." + method['name'] + "(" + ", ".join(doc_params) + ")\n\n"

			# Print comments to documentation (if any)
			if len(doc_resulttype) > 0:
				documentation += "		Returns var of type `" + doc_resulttype + "`.\n"
			if category in comments:
				if method['name'] in comments[category] and len(comments[category][method['name']]) > 0:
					for line in comments[category][method['name']]:
						documentation += "		" + line + "\n"
			documentation += "\n"
			
			# Print enum documentation, if any.
			documentation += doc_enum

			# Print output documentation, if any.
			if len(out_params) > 0:
				documentation += "		Returns a javascript object with the following members:\n\n"
				if not returntype == "void":
					if not returntype in structs:
						documentation += "			value.result (" + js_type_convert(returntype.replace("*", "").strip()) + ")\n"
					else:
						documentation += "			value.result\n"
						for field in structs[returntype]['fields']:
							documentation += "				result." + field['fieldname'] + " (" + js_type_convert(field['fieldtype']) + ")\n"
				documentation += doc_returntypes
				documentation += "\n"
				


# Write header file.
out = open("..//src/neosphere/steam.h", "w")
out.write(header)
out.close()

# Write source file.
out = open("..//src/neosphere/steam.c", "w")
out.write(source)
out.close()

# Write documentation file.
out = open("..//docs/steam_api.txt", "w")
out.write(documentation)
out.close()