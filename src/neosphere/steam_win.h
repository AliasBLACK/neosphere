#include <stdbool.h>
#include <windows.h>
#include <stdint.h>

HMODULE steam_api;
void* steam_input;
int button_origins[8];
uint64_t connected_controllers[16];

typedef
struct InputDigitalActionData
{
	bool	bState;
	bool	bActive;

} InputDigitalActionData_t;

typedef bool						(*BoolFunc)();
typedef bool						(*ISteamInput_Init_Func)(void*, bool);
typedef bool						(*ISteamInput_Shutdown_Func)(void*);
typedef void						(*VoidFunc)();
typedef void						(*ISteamInput_RunFrame_Func)(void*, bool);
typedef void						(*ActivateActionSet_Func)(void*, uint64_t, uint64_t);
typedef void*						(*PointerFunc)();
typedef int							(*GetDigitalActionOrigins_Func)(void*, uint64_t, uint64_t, uint64_t, int*);
typedef int							(*GetConnectedControllers_Func)(void*, uint64_t*);
typedef uint64_t					(*GetControllerForGamepadIndex_Func)(void*, int);
typedef uint64_t					(*StringToHandle_Func)(void*, const char*);
typedef InputDigitalActionData_t	(*GetDigitalActionData_Func)(void*, uint64_t, uint64_t);

// Steam base API.
bool steam_init(void);
bool steam_exit(void);
bool SteamAPI_Init(void);
void SteamAPI_Shutdown(void);

// Steam Input.
bool SteamAPI_ISteamInput_Init(bool bExplicitlyCallRunFrame);
bool SteamAPI_ISteamInput_Shutdown(void);
void SteamAPI_ISteamInput_RunFrame();
void SteamAPI_ISteamInput_ActivateActionSet(uint64_t controller, uint64_t actionSetHandle);
int SteamAPI_ISteamInput_GetDigitalActionOrigins(uint64_t controller, uint64_t actionSetHandle, uint64_t actionHandle);
int SteamAPI_ISteamInput_GetConnectedControllers();
uint64_t SteamAPI_ISteamInput_GetControllerForGamepadIndex(int index);
uint64_t SteamAPI_ISteamInput_GetDigitalActionHandle(const char* actionName);
uint64_t SteamAPI_ISteamInput_GetActionSetHandle(const char* actionSetName);
InputDigitalActionData_t SteamAPI_ISteamInput_GetDigitalActionData(uint64_t controller, uint64_t action);
