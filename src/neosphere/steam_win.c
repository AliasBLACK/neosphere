#include <stdbool.h>
#include <windows.h>
#include <stdint.h>

#include "neosphere.h"
#include "steam_win.h"

bool
steam_init(void)
{
	steam_api = LoadLibrary(TEXT("steam_api64.dll"));
	return steam_api ? true : false;
}

bool
steam_exit(void)
{
	return FreeLibrary(steam_api);
}

bool
SteamAPI_Init(void)
{
	BoolFunc SteamAPI_Init;
	SteamAPI_Init = (BoolFunc)GetProcAddress(steam_api, "SteamAPI_Init");
	if (SteamAPI_Init && SteamAPI_Init())
	{
		PointerFunc SteamAPI_SteamApp;
		SteamAPI_SteamApp = (PointerFunc)GetProcAddress(steam_api, "SteamAPI_SteamApps_v008");
		steam_app = SteamAPI_SteamApp();
		return true;
	}
	return false;
}

void
SteamAPI_Shutdown(void)
{
	VoidFunc SteamAPI_Shutdown;
	SteamAPI_Shutdown = (VoidFunc)GetProcAddress(steam_api, "SteamAPI_Shutdown");
	SteamAPI_Shutdown();
}

bool
SteamAPI_ISteamInput_Init(bool bExplicitlyCallRunFrame)
{
	PointerFunc SteamAPI_SteamInput;
	SteamAPI_SteamInput = (PointerFunc)GetProcAddress(steam_api, "SteamAPI_SteamInput_v006");
	steam_input = SteamAPI_SteamInput();

	ISteamInput_Init_Func SteamAPI_ISteamInput_Init;
	SteamAPI_ISteamInput_Init = (ISteamInput_Init_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_Init");
	return SteamAPI_ISteamInput_Init(steam_input, bExplicitlyCallRunFrame);
}

bool
SteamAPI_ISteamInput_Shutdown()
{
	ISteamInput_Shutdown_Func SteamAPI_ISteamInput_Shutdown;
	SteamAPI_ISteamInput_Shutdown = (ISteamInput_Shutdown_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_Shutdown");
	return SteamAPI_ISteamInput_Shutdown(steam_input);
}

bool
SteamAPI_RestartAppIfNecessary(uint32_t appId)
{
	RestartAppIfNecessary_Func SteamAPI_RestartAppIfNecessary;
	SteamAPI_RestartAppIfNecessary = (RestartAppIfNecessary_Func)GetProcAddress(steam_api, "SteamAPI_RestartAppIfNecessary");
	return SteamAPI_RestartAppIfNecessary(appId);
}

void
SteamAPI_ISteamInput_RunFrame()
{
	ISteamInput_RunFrame_Func SteamAPI_ISteamInput_RunFrame;
	SteamAPI_ISteamInput_RunFrame = (ISteamInput_RunFrame_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_RunFrame");
	SteamAPI_ISteamInput_RunFrame(steam_input, true);
}

void
SteamAPI_ISteamInput_ActivateActionSet(uint64_t controller, uint64_t actionSetHandle)
{
	ActivateActionSet_Func SteamAPI_ISteamInput_ActivateActionSet;
	SteamAPI_ISteamInput_ActivateActionSet = (ActivateActionSet_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_ActivateActionSet");
	SteamAPI_ISteamInput_ActivateActionSet(steam_input, controller, actionSetHandle);
}

int
SteamAPI_ISteamInput_GetDigitalActionOrigins(uint64_t controller, uint64_t actionSetHandle, uint64_t actionHandle)
{
	GetDigitalActionOrigins_Func SteamAPI_ISteamInput_GetDigitalActionOrigins;
	SteamAPI_ISteamInput_GetDigitalActionOrigins = (GetDigitalActionOrigins_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetDigitalActionOrigins");
	return SteamAPI_ISteamInput_GetDigitalActionOrigins(steam_input, controller, actionSetHandle, actionHandle, &button_origins[0]);
}
int
SteamAPI_ISteamInput_GetConnectedControllers()
{
	GetConnectedControllers_Func SteamAPI_ISteamInput_GetConnectedControllers;
	SteamAPI_ISteamInput_GetConnectedControllers = (GetConnectedControllers_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetConnectedControllers");
	return SteamAPI_ISteamInput_GetConnectedControllers(steam_input, &connected_controllers[0]);
}

uint64_t
SteamAPI_ISteamInput_GetControllerForGamepadIndex(int index)
{
	GetControllerForGamepadIndex_Func SteamAPI_ISteamInput_GetControllerForGamepadIndex;
	SteamAPI_ISteamInput_GetControllerForGamepadIndex = (GetControllerForGamepadIndex_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetControllerForGamepadIndex");
	return SteamAPI_ISteamInput_GetControllerForGamepadIndex(steam_input, index);
}

uint64_t
SteamAPI_ISteamInput_GetDigitalActionHandle(const char* actionName)
{
	StringToHandle_Func SteamAPI_ISteamInput_GetDigitalActionHandle;
	SteamAPI_ISteamInput_GetDigitalActionHandle = (StringToHandle_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetDigitalActionHandle");
	return SteamAPI_ISteamInput_GetDigitalActionHandle(steam_input, actionName);
}

uint64_t
SteamAPI_ISteamInput_GetActionSetHandle(const char* actionSetName)
{
	StringToHandle_Func SteamAPI_ISteamInput_GetActionSetHandle;
	SteamAPI_ISteamInput_GetActionSetHandle = (StringToHandle_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetActionSetHandle");
	return SteamAPI_ISteamInput_GetActionSetHandle(steam_input, actionSetName);
}

InputDigitalActionData_t
SteamAPI_ISteamInput_GetDigitalActionData(uint64_t controller, uint64_t action)
{
	GetDigitalActionData_Func SteamAPI_ISteamInput_GetDigitalActionData;
	SteamAPI_ISteamInput_GetDigitalActionData = (GetDigitalActionData_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetDigitalActionData");
	return SteamAPI_ISteamInput_GetDigitalActionData(steam_input, controller, action);
}

char*
SteamAPI_ISteamApps_GetCurrentGameLanguage()
{
	GetCurrentGameLanguage_Func SteamAPI_ISteamApps_GetCurrentGameLanguage;
	SteamAPI_ISteamApps_GetCurrentGameLanguage = (GetCurrentGameLanguage_Func)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetCurrentGameLanguage");
	return SteamAPI_ISteamApps_GetCurrentGameLanguage(steam_app);
}