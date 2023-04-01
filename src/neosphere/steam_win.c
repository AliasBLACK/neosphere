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
SteamAPI_Init(void)
{
	BoolFunc SteamAPI_Init;
	SteamAPI_Init = (BoolFunc)GetProcAddress(steam_api, "SteamAPI_Init");
	return SteamAPI_Init ? SteamAPI_Init() ? true : false : false;
}