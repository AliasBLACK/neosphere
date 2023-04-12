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
	return SteamAPI_Init ? SteamAPI_Init() ? true : false : false;
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

void
SteamAPI_ISteamInput_RunFrame()
{
	ISteamInput_RunFrame_Func SteamAPI_ISteamInput_RunFrame;
	SteamAPI_ISteamInput_RunFrame = (ISteamInput_RunFrame_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_RunFrame");
	SteamAPI_ISteamInput_RunFrame(steam_input, true);
}

uint64_t
SteamAPI_ISteamInput_GetControllerForGamepadIndex(int index)
{
	GetControllerForGamepadIndex_Func SteamAPI_ISteamInput_GetControllerForGamepadIndex;
	SteamAPI_ISteamInput_GetControllerForGamepadIndex = (GetControllerForGamepadIndex_Func)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetControllerForGamepadIndex");
	return SteamAPI_ISteamInput_GetControllerForGamepadIndex(steam_input, index);
}