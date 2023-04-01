#include <stdbool.h>
#include <windows.h>
#include <stdint.h>

HMODULE steam_api;

typedef bool (*BoolFunc)();

bool steam_init(void);
bool SteamAPI_Init(void);