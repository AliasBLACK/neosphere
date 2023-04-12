#include <stdbool.h>
#include <windows.h>
#include <stdint.h>

HMODULE steam_api;
void* steam_input;
uint64_t connected_controllers[16];

typedef bool (*BoolFunc)();
typedef bool (*ISteamInput_Init_Func)(void*, bool);
typedef bool (*ISteamInput_Shutdown_Func)(void*);
typedef void (*VoidFunc)();
typedef void (*ISteamInput_RunFrame_Func)(void*, bool);
typedef void* (*PointerFunc)();
typedef uint64_t (*GetControllerForGamepadIndex_Func)(void*, int);

// Steam base API.
bool steam_init(void);
bool steam_exit(void);
bool SteamAPI_Init(void);
void SteamAPI_Shutdown(void);

// Steam Input.
bool SteamAPI_ISteamInput_Init(bool bExplicitlyCallRunFrame);
bool SteamAPI_ISteamInput_Shutdown(void);
void SteamAPI_ISteamInput_RunFrame();
uint64_t SteamAPI_ISteamInput_GetControllerForGamepadIndex(int index);
