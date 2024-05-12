// WARNING: This file is auto-generated. Do not edit.
// Generator script is located at scripts/generate_steam_bindings.py

#include <stdbool.h>
#include <stdint.h>

#ifdef _WIN32
	#include <windows.h>
	#define GETADDRESS(lib, proc) GetProcAddress(lib, proc)
	HMODULE steam_api;
#else
	#include <dlfcn.h>
	#define GETADDRESS(lib, proc) dlsym(lib, proc)
	void* steam_api;
#endif

void * ISteamUser;
void * ISteamFriends;
void * ISteamUtils;
void * ISteamUserStats;
void * ISteamApps;
void * ISteamInput;

typedef struct {
	bool bState;
	bool bActive;
} InputDigitalActionData_t;

typedef struct {
	uint32_t eMode;
	float x;
	float y;
	bool bActive;
} InputAnalogActionData_t;

typedef struct {
	float rotQuatX;
	float rotQuatY;
	float rotQuatZ;
	float rotQuatW;
	float posAccelX;
	float posAccelY;
	float posAccelZ;
	float rotVelX;
	float rotVelY;
	float rotVelZ;
} InputMotionData_t;

typedef void * (*FuncPtr_001) ();
typedef void (*FuncPtr_002) ();
typedef void (*FuncPtr_006) (void *, uint32_t, uint16_t);
typedef void (*FuncPtr_007) (void *, uint64_t, int32_t, const char *);
typedef void (*FuncPtr_009) (void *);
typedef void (*FuncPtr_012) (void *, uint64_t);
typedef void (*FuncPtr_013) (void *, uint32_t);
typedef void (*FuncPtr_015) (void *, uint64_t, uint32_t, uint16_t);
typedef void (*FuncPtr_028) (void *, int16_t, uint64_t *, int32_t);
typedef void (*FuncPtr_034) (void *, uint64_t, bool);
typedef void (*FuncPtr_035) (void *, const char *);
typedef void (*FuncPtr_036) (void *, const char *, uint64_t);
typedef void (*FuncPtr_037) (void *, const char *, uint32_t);
typedef void (*FuncPtr_038) (void *, uint32_t, uint32_t);
typedef void (*FuncPtr_056) (void *, int32_t, int32_t);
typedef void (*FuncPtr_057) (void *, bool);
typedef void (*FuncPtr_094) (void *, uint64_t, uint64_t);
typedef void (*FuncPtr_102) (void *, uint64_t, uint16_t, uint16_t);
typedef void (*FuncPtr_103) (void *, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t);
typedef void (*FuncPtr_104) (void *, uint64_t, uint32_t, uint8_t, char, uint8_t, char);
typedef void (*FuncPtr_105) (void *, uint64_t, uint8_t, uint8_t, uint8_t, uint32_t);
typedef void (*FuncPtr_106) (void *, uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t);
typedef uint8_t (*FuncPtr_052) (void *);
typedef uint64_t (*FuncPtr_005) (void *);
typedef uint64_t (*FuncPtr_020) (void *, int32_t, int32_t);
typedef uint64_t (*FuncPtr_030) (void *, int32_t);
typedef uint64_t (*FuncPtr_032) (void *, uint64_t, int32_t);
typedef uint64_t (*FuncPtr_040) (void *, uint64_t);
typedef uint64_t (*FuncPtr_093) (void *, const char *);
typedef uint32_t (*FuncPtr_010) (void *);
typedef uint32_t (*FuncPtr_011) (void *, const char *);
typedef uint32_t (*FuncPtr_014) (void *, uint64_t, uint32_t);
typedef uint32_t (*FuncPtr_021) (void *, uint64_t);
typedef uint32_t (*FuncPtr_049) (void *, uint64_t, uint32_t, uint32_t);
typedef uint32_t (*FuncPtr_059) (void *, uint32_t);
typedef uint32_t (*FuncPtr_085) (void *, uint32_t, uint32_t *, uint32_t);
typedef uint32_t (*FuncPtr_086) (void *, uint32_t, char *, uint32_t);
typedef uint32_t (*FuncPtr_107) (void *, uint32_t, uint32_t);
typedef uint16_t (*FuncPtr_109) (void *);
typedef int32_t (*FuncPtr_003) (void *);
typedef int32_t (*FuncPtr_016) (void *, int32_t, bool);
typedef int32_t (*FuncPtr_019) (void *, int32_t);
typedef int32_t (*FuncPtr_024) (void *, uint64_t);
typedef int32_t (*FuncPtr_027) (void *, int16_t);
typedef int32_t (*FuncPtr_058) (void *, uint32_t, uint64_t, const char *, char *, uint32_t);
typedef int32_t (*FuncPtr_068) (void *, const char *);
typedef int32_t (*FuncPtr_076) (void *, char *, uint32_t, float *, bool *);
typedef int32_t (*FuncPtr_077) (void *, int32_t, char *, uint32_t, float *, bool *);
typedef int32_t (*FuncPtr_080) (void *, const char *, int64_t *, uint32_t);
typedef int32_t (*FuncPtr_081) (void *, const char *, double *, uint32_t);
typedef int32_t (*FuncPtr_089) (void *, char *, int32_t);
typedef int32_t (*FuncPtr_092) (void *, uint64_t *);
typedef int32_t (*FuncPtr_095) (void *, uint64_t, uint64_t *);
typedef int32_t (*FuncPtr_097) (void *, uint64_t, uint64_t, uint64_t, uint32_t *);
typedef int16_t (*FuncPtr_025) (void *, int32_t);
typedef int (*FuncPtr_000) (const char *, char *);
typedef const char * (*FuncPtr_018) (void *);
typedef const char * (*FuncPtr_022) (void *, uint64_t);
typedef const char * (*FuncPtr_023) (void *, uint64_t, int32_t);
typedef const char * (*FuncPtr_026) (void *, int16_t);
typedef const char * (*FuncPtr_042) (void *, uint64_t, const char *);
typedef const char * (*FuncPtr_048) (void *, uint64_t, uint32_t, uint32_t);
typedef const char * (*FuncPtr_069) (void *, const char *, const char *);
typedef const char * (*FuncPtr_071) (void *, uint32_t);
typedef const char * (*FuncPtr_087) (void *, const char *);
typedef const char * (*FuncPtr_099) (void *, uint32_t, uint32_t, uint32_t);
typedef const char * (*FuncPtr_100) (void *, uint32_t, uint32_t);
typedef bool (*FuncPtr_004) (void *);
typedef bool (*FuncPtr_008) (void *, char *, int32_t);
typedef bool (*FuncPtr_017) (void *, uint32_t);
typedef bool (*FuncPtr_029) (void *, uint64_t, int32_t);
typedef bool (*FuncPtr_031) (void *, uint64_t, int32_t *, int32_t *, int32_t *);
typedef bool (*FuncPtr_033) (void *, uint64_t, uint64_t);
typedef bool (*FuncPtr_039) (void *, uint64_t, bool);
typedef bool (*FuncPtr_041) (void *, const char *, const char *);
typedef bool (*FuncPtr_043) (void *, uint64_t, const char *);
typedef bool (*FuncPtr_044) (void *, uint64_t);
typedef bool (*FuncPtr_045) (void *, bool);
typedef bool (*FuncPtr_046) (void *, const char *);
typedef bool (*FuncPtr_047) (void *, uint64_t, uint32_t);
typedef bool (*FuncPtr_050) (void *, int32_t, uint32_t *, uint32_t *);
typedef bool (*FuncPtr_051) (void *, int32_t, uint8_t *, int32_t);
typedef bool (*FuncPtr_053) (void *, uint64_t, bool *);
typedef bool (*FuncPtr_054) (void *, uint32_t, uint32_t, const char *, uint32_t, const char *);
typedef bool (*FuncPtr_055) (void *, char *, uint32_t);
typedef bool (*FuncPtr_060) (void *, uint32_t, int32_t, int32_t, int32_t, int32_t);
typedef bool (*FuncPtr_061) (void *, const char *, int32_t *);
typedef bool (*FuncPtr_062) (void *, const char *, float *);
typedef bool (*FuncPtr_063) (void *, const char *, int32_t);
typedef bool (*FuncPtr_064) (void *, const char *, float);
typedef bool (*FuncPtr_065) (void *, const char *, float, double);
typedef bool (*FuncPtr_066) (void *, const char *, bool *);
typedef bool (*FuncPtr_067) (void *, const char *, bool *, uint32_t *);
typedef bool (*FuncPtr_070) (void *, const char *, uint32_t, uint32_t);
typedef bool (*FuncPtr_072) (void *, uint64_t, const char *, int32_t *);
typedef bool (*FuncPtr_073) (void *, uint64_t, const char *, float *);
typedef bool (*FuncPtr_074) (void *, uint64_t, const char *, bool *);
typedef bool (*FuncPtr_075) (void *, uint64_t, const char *, bool *, uint32_t *);
typedef bool (*FuncPtr_078) (void *, const char *, int64_t *);
typedef bool (*FuncPtr_079) (void *, const char *, double *);
typedef bool (*FuncPtr_082) (void *, const char *, int32_t *, int32_t *);
typedef bool (*FuncPtr_083) (void *, const char *, float *, float *);
typedef bool (*FuncPtr_084) (void *, int32_t, uint32_t *, bool *, char *, int32_t);
typedef bool (*FuncPtr_088) (void *, uint32_t, uint64_t *, uint64_t *);
typedef bool (*FuncPtr_090) (void *, uint32_t *, uint32_t *);
typedef bool (*FuncPtr_091) (void *, bool, uint32_t);
typedef bool (*FuncPtr_108) (void *, uint64_t, int32_t *, int32_t *);
typedef InputMotionData_t (*FuncPtr_101) (void *, uint64_t);
typedef InputDigitalActionData_t (*FuncPtr_096) (void *, uint64_t, uint64_t);
typedef InputAnalogActionData_t (*FuncPtr_098) (void *, uint64_t, uint64_t);

// The following functions have not been exported:
//	- SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_GetAvailableVoice (listed in methods_to_ignore)
//	- SteamAPI_ISteamUser_GetVoice (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_DecompressVoice (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_GetAuthSessionTicket (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_BeginAuthSession (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_RequestEncryptedAppTicket (returns SteamAPICall_t)
//	- SteamAPI_ISteamUser_GetEncryptedAppTicket (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_RequestStoreAuthURL (returns SteamAPICall_t)
//	- SteamAPI_ISteamUser_GetMarketEligibility (returns SteamAPICall_t)
//	- SteamAPI_ISteamUser_GetDurationControl (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_SetPersonaName (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_GetFriendGamePlayed (struct argument required)
//	- SteamAPI_ISteamFriends_DownloadClanActivityCounts (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_RequestClanOfficerList (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_JoinClanChatRoom (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_GetClanChatMessage (pointer to raw data argument required)
//	- SteamAPI_ISteamFriends_GetFriendMessage (pointer to raw data argument required)
//	- SteamAPI_ISteamFriends_GetFollowerCount (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_IsFollowing (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_EnumerateFollowingList (returns SteamAPICall_t)
//	- SteamAPI_ISteamFriends_RequestEquippedProfileItems (returns SteamAPICall_t)
//	- SteamAPI_ISteamUtils_GetAPICallResult (pointer to raw data argument required)
//	- SteamAPI_ISteamUtils_SetWarningMessageHook (callback pointer argument required)
//	- SteamAPI_ISteamUtils_CheckFileSignature (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_RequestUserStats (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_FindOrCreateLeaderboard (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_FindLeaderboard (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_DownloadLeaderboardEntries (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry (struct argument required)
//	- SteamAPI_ISteamUserStats_UploadLeaderboardScore (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_AttachLeaderboardUGC (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages (returns SteamAPICall_t)
//	- SteamAPI_ISteamUserStats_RequestGlobalStats (returns SteamAPICall_t)
//	- SteamAPI_ISteamApps_GetFileDetails (returns SteamAPICall_t)
//	- SteamAPI_ISteamInput_EnableActionEventCallbacks (callback pointer argument required)
//	- SteamAPI_ISteamInput_SetDualSenseTriggerEffect (callback pointer argument required)

void steamapi_init (void);
static bool js_SteamAPI_Init                                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_SteamAPI_Shutdown                                               (int num_args, bool is_ctor, intptr_t magic);

// ISteamUser
static bool js_ISteamUser_GetHSteamUser                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetGameBadgeLevel                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetPlayerSteamLevel                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BLoggedOn                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetUserDataFolder                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsBehindNAT                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsPhoneVerified                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsTwoFactorEnabled                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsPhoneIdentifying                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BIsPhoneRequiringVerification                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_BSetDurationControlOnlineState                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetSteamID                                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_TerminateGameConnection_DEPRECATED                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_TrackAppUsageEvent                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_StartVoiceRecording                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_StopVoiceRecording                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_EndAuthSession                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_CancelAuthTicket                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_AdvertiseGame                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetVoiceOptimalSampleRate                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_GetAuthTicketForWebApi                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUser_UserHasLicenseForApp                                 (int num_args, bool is_ctor, intptr_t magic);

// ISteamFriends
static bool js_ISteamFriends_GetPersonaName                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendPersonaName                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendPersonaNameHistory                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetPlayerNickname                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupName                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanName                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanTag                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRichPresence                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRichPresenceKeyByIndex                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetProfileItemPropertyString                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetPersonaState                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRelationship                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendPersonaState                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetUserRestrictions                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCoplayGame                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetProfileItemPropertyUint                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCount                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendSteamLevel                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupCount                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupMembersCount                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanCount                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCountFromSource                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetSmallFriendAvatar                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetMediumFriendAvatar                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetLargeFriendAvatar                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanOfficerCount                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendRichPresenceKeyCount                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetCoplayFriendCount                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendCoplayTime                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanChatMemberCount                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendByIndex                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanByIndex                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendFromSourceByIndex                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanOwner                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanOfficerByIndex                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetCoplayFriend                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetChatMemberByIndex                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupIDByIndex                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetFriendsGroupMembersList                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetInGameVoiceSpeaking                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlay                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayToUser                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayToWebPage                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayToStore                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetPlayedWith                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayInviteDialog                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ClearRichPresence                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RequestFriendRichPresence                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ActivateGameOverlayInviteDialogConnectString      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_HasFriend                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_GetClanActivityCounts                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsUserInSource                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RequestUserInformation                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetRichPresence                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_InviteUserToGame                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_LeaveClanChatRoom                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SendClanChatMessage                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanChatAdmin                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanChatWindowOpenInSteam                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_OpenClanChatWindowInSteam                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_CloseClanChatWindowInSteam                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_SetListenForFriendsMessages                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_ReplyToFriendMessage                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanPublic                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_IsClanOfficialGameGroup                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_RegisterProtocolInOverlayBrowser                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamFriends_BHasEquippedProfileItem                           (int num_args, bool is_ctor, intptr_t magic);

// ISteamUtils
static bool js_ISteamUtils_GetSecondsSinceAppActive                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetSecondsSinceComputerActive                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetConnectedUniverse                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetServerRealTime                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetAppID                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetAPICallFailureReason                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetIPCCallCount                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetEnteredGamepadTextLength                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetIPv6ConnectivityState                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetIPCountry                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetSteamUILanguage                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetImageSize                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetImageRGBA                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsAPICallCompleted                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsOverlayEnabled                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_BOverlayNeedsPresent                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_ShowGamepadTextInput                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetEnteredGamepadTextInput                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamRunningInVR                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamInBigPictureMode                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsVRHeadsetStreamingEnabled                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamChinaLauncher                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_InitFilterText                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_IsSteamRunningOnSteamDeck                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_ShowFloatingGamepadTextInput                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_DismissFloatingGamepadTextInput                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_GetCurrentBatteryPower                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetOverlayNotificationPosition                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetOverlayNotificationInset                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_StartVRDashboard                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetVRHeadsetStreamingEnabled                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_SetGameLauncherMode                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUtils_FilterText                                          (int num_args, bool is_ctor, intptr_t magic);

// ISteamUserStats
static bool js_ISteamUserStats_RequestCurrentStats                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetStatInt32                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetStatFloat                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_SetStatInt32                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_SetStatFloat                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_UpdateAvgRateStat                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievement                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_SetAchievement                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_ClearAchievement                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementAndUnlockTime                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_StoreStats                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_IndicateAchievementProgress                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserStatInt32                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserStatFloat                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserAchievement                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetUserAchievementAndUnlockTime                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_ResetAllStats                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementAchievedPercent                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatInt64                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatDouble                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementProgressLimitsInt32               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementProgressLimitsFloat               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementIcon                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardEntryCount                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetMostAchievedAchievementInfo                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetNextMostAchievedAchievementInfo              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatHistoryInt64                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetGlobalStatHistoryDouble                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementDisplayAttribute                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetAchievementName                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardName                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetNumAchievements                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardSortMethod                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamUserStats_GetLeaderboardDisplayType                       (int num_args, bool is_ctor, intptr_t magic);

// ISteamApps
static bool js_ISteamApps_BIsSubscribed                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsLowViolence                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsCybercafe                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsVACBanned                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsSubscribedApp                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsDlcInstalled                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsSubscribedFromFreeWeekend                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BGetDLCDataByIndex                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetCurrentBetaName                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_MarkContentCorrupt                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsAppInstalled                                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetDlcDownloadProgress                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsSubscribedFromFamilySharing                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_BIsTimedTrial                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_SetDlcContext                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetCurrentGameLanguage                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAvailableGameLanguages                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetLaunchQueryParam                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetEarliestPurchaseUnixTime                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetInstalledDepots                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAppInstallDir                                     (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetDLCCount                                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAppBuildId                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetLaunchCommandLine                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_InstallDLC                                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_UninstallDLC                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_RequestAppProofOfPurchaseKey                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_RequestAllProofOfPurchaseKeys                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamApps_GetAppOwner                                          (int num_args, bool is_ctor, intptr_t magic);

// ISteamInput
static bool js_ISteamInput_Init                                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_Shutdown                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_SetInputActionManifestFilePath                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_BWaitForData                                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_BNewDataAvailable                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_ShowBindingPanel                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDeviceBindingRevision                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_RunFrame                                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_EnableDeviceCallbacks                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_ActivateActionSet                                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_ActivateActionSetLayer                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_DeactivateActionSetLayer                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_DeactivateAllActionSetLayers                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_StopAnalogActionMomentum                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TriggerVibration                                    (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TriggerVibrationExtended                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TriggerSimpleHapticEvent                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_SetLEDColor                                         (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_Legacy_TriggerHapticPulse                           (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_Legacy_TriggerRepeatedHapticPulse                   (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetConnectedControllers                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetActiveActionSetLayers                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDigitalActionOrigins                             (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetAnalogActionOrigins                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGamepadIndexForController                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetActionSetHandle                                  (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetCurrentActionSet                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDigitalActionHandle                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetAnalogActionHandle                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetControllerForGamepadIndex                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetDigitalActionData                                (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForDigitalActionName                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphPNGForActionOrigin                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphSVGForActionOrigin                          (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphForActionOrigin_Legacy                      (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForActionOrigin                            (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForAnalogActionName                        (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetStringForXboxOrigin                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetGlyphForXboxOrigin                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetAnalogActionData                                 (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetMotionData                                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetInputTypeForHandle                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetActionOriginFromXboxOrigin                       (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_TranslateActionOrigin                               (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetRemotePlaySessionID                              (int num_args, bool is_ctor, intptr_t magic);
static bool js_ISteamInput_GetSessionInputConfigurationSettings                (int num_args, bool is_ctor, intptr_t magic);

