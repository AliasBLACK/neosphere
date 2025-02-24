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

int32_t hSteamPipe;

void * ISteamUser;
void * ISteamFriends;
void * ISteamUtils;
void * ISteamUserStats;
void * ISteamApps;
void * ISteamInput;
void * ISteamUGC;

typedef struct {
	int32_t m_steamUser;
	int32_t m_iCallback;
	uint8_t* m_pubParam;
	int32_t m_cubParam;
} CallbackMsg_t;

typedef struct {
	uint8_t m_bActive;
	bool m_bUserInitiated;
	uint32_t m_nAppID;
	uint32_t m_dwOverlayPID;
} GameOverlayActivated_t;

typedef struct {
	uint64_t m_hAsyncCall;
	int32_t m_iCallback;
	uint32_t m_cubParam;
} SteamAPICallCompleted_t;

typedef struct {
	uint32_t m_eResult;
} EncryptedAppTicketResponse_t;

typedef struct {
	char m_szURL [512];
} StoreAuthURLResponse_t;

typedef struct {
	bool m_bAllowed;
	uint32_t m_eNotAllowedReason;
	uint32_t m_rtAllowedAtTime;
	int32_t m_cdaySteamGuardRequiredDays;
	int32_t m_cdayNewDeviceCooldown;
} MarketEligibilityResponse_t;

typedef struct {
	uint32_t m_eResult;
	uint32_t m_appid;
	bool m_bApplicable;
	int32_t m_csecsLast5h;
	uint32_t m_progress;
	uint32_t m_notification;
	int32_t m_csecsToday;
	int32_t m_csecsRemaining;
} DurationControl_t;

typedef struct {
	bool m_bSuccess;
	bool m_bLocalSuccess;
	uint32_t m_result;
} SetPersonaNameResponse_t;

typedef struct {
	uint64_t m_gameID;
	uint32_t m_unGameIP;
	uint16_t m_usGamePort;
	uint16_t m_usQueryPort;
	uint64_t m_steamIDLobby;
} FriendGameInfo_t;

typedef struct {
	bool m_bSuccess;
} DownloadClanActivityCountsResult_t;

typedef struct {
	uint64_t m_steamIDClan;
	int32_t m_cOfficers;
	uint8_t m_bSuccess;
} ClanOfficerListResponse_t;

typedef struct {
	uint64_t m_steamIDClanChat;
	uint32_t m_eChatRoomEnterResponse;
} JoinClanChatRoomCompletionResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_steamID;
	int32_t m_nCount;
} FriendsGetFollowerCount_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_steamID;
	bool m_bIsFollowing;
} FriendsIsFollowing_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_rgSteamID [50];
	int32_t m_nResultsReturned;
	int32_t m_nTotalResultCount;
} FriendsEnumerateFollowingList_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_steamID;
	bool m_bHasAnimatedAvatar;
	bool m_bHasAvatarFrame;
	bool m_bHasProfileModifier;
	bool m_bHasProfileBackground;
	bool m_bHasMiniProfileBackground;
} EquippedProfileItems_t;

typedef struct {
	uint32_t m_eCheckFileSignature;
} CheckFileSignature_t;

typedef struct {
	uint64_t m_nGameID;
	uint32_t m_eResult;
	uint64_t m_steamIDUser;
} UserStatsReceived_t;

typedef struct {
	uint64_t m_hSteamLeaderboard;
	uint8_t m_bLeaderboardFound;
} LeaderboardFindResult_t;

typedef struct {
	uint64_t m_hSteamLeaderboard;
	uint64_t m_hSteamLeaderboardEntries;
	int32_t m_cEntryCount;
} LeaderboardScoresDownloaded_t;

typedef struct {
	uint64_t m_steamIDUser;
	int32_t m_nGlobalRank;
	int32_t m_nScore;
	int32_t m_cDetails;
	uint64_t m_hUGC;
} LeaderboardEntry_t;

typedef struct {
	uint8_t m_bSuccess;
	uint64_t m_hSteamLeaderboard;
	int32_t m_nScore;
	uint8_t m_bScoreChanged;
	int32_t m_nGlobalRankNew;
	int32_t m_nGlobalRankPrevious;
} LeaderboardScoreUploaded_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_hSteamLeaderboard;
} LeaderboardUGCSet_t;

typedef struct {
	uint8_t m_bSuccess;
	int32_t m_cPlayers;
} NumberOfCurrentPlayers_t;

typedef struct {
	uint64_t m_nGameID;
	uint32_t m_eResult;
} GlobalAchievementPercentagesReady_t;

typedef struct {
	uint64_t m_nGameID;
	uint32_t m_eResult;
} GlobalStatsReceived_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_ulFileSize;
	uint8_t m_FileSHA [20];
	uint32_t m_unFlags;
} FileDetailsResult_t;

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

typedef struct {
	uint64_t m_handle;
	uint32_t m_eResult;
	uint32_t m_unNumResultsReturned;
	uint32_t m_unTotalMatchingResults;
	bool m_bCachedData;
	char m_rgchNextCursor [256];
} SteamUGCQueryCompleted_t;

typedef struct {
	uint64_t m_nPublishedFileId;
	uint32_t m_eResult;
	uint32_t m_eFileType;
	uint32_t m_nCreatorAppID;
	uint32_t m_nConsumerAppID;
	char m_rgchTitle [129];
	char m_rgchDescription [8000];
	uint64_t m_ulSteamIDOwner;
	uint32_t m_rtimeCreated;
	uint32_t m_rtimeUpdated;
	uint32_t m_rtimeAddedToUserList;
	uint32_t m_eVisibility;
	bool m_bBanned;
	bool m_bAcceptedForUse;
	bool m_bTagsTruncated;
	char m_rgchTags [1025];
	uint64_t m_hFile;
	uint64_t m_hPreviewFile;
	char m_pchFileName [260];
	int32_t m_nFileSize;
	int32_t m_nPreviewFileSize;
	char m_rgchURL [256];
	uint32_t m_unVotesUp;
	uint32_t m_unVotesDown;
	float m_flScore;
	uint32_t m_unNumChildren;
} SteamUGCDetails_t;

typedef struct {
	const char ** m_ppStrings;
	int32_t m_nNumStrings;
} SteamParamStringArray_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
} CreateItemResult_t;

typedef struct {
	uint32_t m_eResult;
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
	uint64_t m_nPublishedFileId;
} SubmitItemUpdateResult_t;

typedef struct {
	uint64_t m_nPublishedFileId;
	uint32_t m_eResult;
	bool m_bVoteUp;
} SetUserItemVoteResult_t;

typedef struct {
	uint64_t m_nPublishedFileId;
	uint32_t m_eResult;
	bool m_bVotedUp;
	bool m_bVotedDown;
	bool m_bVoteSkipped;
} GetUserItemVoteResult_t;

typedef struct {
	uint64_t m_nPublishedFileId;
	uint32_t m_eResult;
	bool m_bWasAddRequest;
} UserFavoriteItemsListChanged_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
} RemoteStorageSubscribePublishedFileResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
} RemoteStorageUnsubscribePublishedFileResult_t;

typedef struct {
	uint32_t m_eResult;
} StartPlaytimeTrackingResult_t;

typedef struct {
	uint32_t m_eResult;
} StopPlaytimeTrackingResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
	uint64_t m_nChildPublishedFileId;
} AddUGCDependencyResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
	uint64_t m_nChildPublishedFileId;
} RemoveUGCDependencyResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
	uint32_t m_nAppID;
} AddAppDependencyResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
	uint32_t m_nAppID;
} RemoveAppDependencyResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
	uint32_t m_rgAppIDs [32];
	uint32_t m_nNumAppDependencies;
	uint32_t m_nTotalNumAppDependencies;
} GetAppDependenciesResult_t;

typedef struct {
	uint32_t m_eResult;
	uint64_t m_nPublishedFileId;
} DeleteItemResult_t;

typedef struct {
	uint32_t m_eResult;
	uint32_t m_nAppID;
	uint32_t m_unVersion;
	uint32_t m_rtAction;
	bool m_bAccepted;
	bool m_bNeedsAction;
} WorkshopEULAStatus_t;

typedef void * (*FuncPtr_001) ();
typedef void (*FuncPtr_002) ();
typedef void (*FuncPtr_004) (int32_t);
typedef void (*FuncPtr_010) (void *, uint64_t, int32_t, const char *);
typedef void (*FuncPtr_012) (void *);
typedef void (*FuncPtr_015) (void *, uint64_t);
typedef void (*FuncPtr_016) (void *, uint32_t);
typedef void (*FuncPtr_018) (void *, uint64_t, uint32_t, uint16_t);
typedef void (*FuncPtr_033) (void *, int16_t, uint64_t *, int32_t);
typedef void (*FuncPtr_040) (void *, uint64_t, bool);
typedef void (*FuncPtr_041) (void *, const char *);
typedef void (*FuncPtr_042) (void *, const char *, uint64_t);
typedef void (*FuncPtr_043) (void *, const char *, uint32_t);
typedef void (*FuncPtr_044) (void *, uint32_t, uint32_t);
typedef void (*FuncPtr_063) (void *, int32_t, int32_t);
typedef void (*FuncPtr_064) (void *, bool);
typedef void (*FuncPtr_106) (void *, uint64_t, uint64_t);
typedef void (*FuncPtr_114) (void *, uint64_t, uint16_t, uint16_t);
typedef void (*FuncPtr_115) (void *, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t);
typedef void (*FuncPtr_116) (void *, uint64_t, uint32_t, uint8_t, char, uint8_t, char);
typedef void (*FuncPtr_117) (void *, uint64_t, uint8_t, uint8_t, uint8_t, uint32_t);
typedef void (*FuncPtr_118) (void *, uint64_t, uint32_t, uint16_t, uint16_t, uint16_t, uint32_t);
typedef uint8_t (*FuncPtr_059) (void *);
typedef uint64_t (*FuncPtr_009) (void *);
typedef uint64_t (*FuncPtr_020) (void *, const char *);
typedef uint64_t (*FuncPtr_024) (void *, int32_t, int32_t);
typedef uint64_t (*FuncPtr_035) (void *, int32_t);
typedef uint64_t (*FuncPtr_037) (void *, uint64_t *, int32_t);
typedef uint64_t (*FuncPtr_038) (void *, uint64_t, int32_t);
typedef uint64_t (*FuncPtr_046) (void *, uint64_t);
typedef uint64_t (*FuncPtr_052) (void *, uint32_t);
typedef uint64_t (*FuncPtr_083) (void *, const char *, uint32_t, uint32_t);
typedef uint64_t (*FuncPtr_084) (void *, uint64_t, uint32_t, int32_t, int32_t);
typedef uint64_t (*FuncPtr_085) (void *, uint64_t, uint64_t *, int32_t);
typedef uint64_t (*FuncPtr_087) (void *, uint64_t, uint32_t, int32_t, const int32_t *, int32_t);
typedef uint64_t (*FuncPtr_088) (void *, uint64_t, uint64_t);
typedef uint64_t (*FuncPtr_122) (void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
typedef uint64_t (*FuncPtr_123) (void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
typedef uint64_t (*FuncPtr_124) (void *, uint32_t, uint32_t, uint32_t, uint32_t, const char *);
typedef uint64_t (*FuncPtr_125) (void *, uint64_t *, uint32_t);
typedef uint64_t (*FuncPtr_138) (void *, uint32_t, uint32_t);
typedef uint64_t (*FuncPtr_139) (void *, uint32_t, uint64_t);
typedef uint64_t (*FuncPtr_143) (void *, uint64_t, const char *);
typedef uint64_t (*FuncPtr_145) (void *, uint64_t, bool);
typedef uint64_t (*FuncPtr_150) (void *, uint64_t, uint32_t);
typedef uint32_t (*FuncPtr_013) (void *);
typedef uint32_t (*FuncPtr_014) (void *, const char *);
typedef uint32_t (*FuncPtr_017) (void *, uint64_t, uint32_t);
typedef uint32_t (*FuncPtr_025) (void *, uint64_t);
typedef uint32_t (*FuncPtr_056) (void *, uint64_t, uint32_t, uint32_t);
typedef uint32_t (*FuncPtr_066) (void *, uint32_t);
typedef uint32_t (*FuncPtr_098) (void *, uint32_t, uint32_t *, uint32_t);
typedef uint32_t (*FuncPtr_099) (void *, uint32_t, char *, uint32_t);
typedef uint32_t (*FuncPtr_119) (void *, uint32_t, uint32_t);
typedef uint32_t (*FuncPtr_134) (void *, uint64_t, uint32_t, uint32_t *, uint32_t);
typedef uint32_t (*FuncPtr_144) (void *, uint64_t, uint64_t *, uint64_t *);
typedef uint32_t (*FuncPtr_146) (void *, uint64_t *, uint32_t);
typedef uint32_t (*FuncPtr_151) (void *, uint32_t *, uint32_t);
typedef uint16_t (*FuncPtr_121) (void *);
typedef int32_t (*FuncPtr_000) (const char *, char *);
typedef int32_t (*FuncPtr_003) ();
typedef int32_t (*FuncPtr_007) (void *);
typedef int32_t (*FuncPtr_019) (void *, int32_t, bool);
typedef int32_t (*FuncPtr_023) (void *, int32_t);
typedef int32_t (*FuncPtr_029) (void *, uint64_t);
typedef int32_t (*FuncPtr_032) (void *, int16_t);
typedef int32_t (*FuncPtr_065) (void *, uint32_t, uint64_t, const char *, char *, uint32_t);
typedef int32_t (*FuncPtr_075) (void *, const char *);
typedef int32_t (*FuncPtr_089) (void *, char *, uint32_t, float *, bool *);
typedef int32_t (*FuncPtr_090) (void *, int32_t, char *, uint32_t, float *, bool *);
typedef int32_t (*FuncPtr_093) (void *, const char *, int64_t *, uint32_t);
typedef int32_t (*FuncPtr_094) (void *, const char *, double *, uint32_t);
typedef int32_t (*FuncPtr_102) (void *, char *, int32_t);
typedef int32_t (*FuncPtr_105) (void *, uint64_t *);
typedef int32_t (*FuncPtr_107) (void *, uint64_t, uint64_t *);
typedef int32_t (*FuncPtr_109) (void *, uint64_t, uint64_t, uint64_t, uint32_t *);
typedef int16_t (*FuncPtr_030) (void *, int32_t);
typedef const char * (*FuncPtr_022) (void *);
typedef const char * (*FuncPtr_026) (void *, uint64_t);
typedef const char * (*FuncPtr_028) (void *, uint64_t, int32_t);
typedef const char * (*FuncPtr_031) (void *, int16_t);
typedef const char * (*FuncPtr_048) (void *, uint64_t, const char *);
typedef const char * (*FuncPtr_055) (void *, uint64_t, uint32_t, uint32_t);
typedef const char * (*FuncPtr_076) (void *, const char *, const char *);
typedef const char * (*FuncPtr_078) (void *, uint32_t);
typedef const char * (*FuncPtr_100) (void *, const char *);
typedef const char * (*FuncPtr_111) (void *, uint32_t, uint32_t, uint32_t);
typedef const char * (*FuncPtr_112) (void *, uint32_t, uint32_t);
typedef bool (*FuncPtr_005) (int32_t, CallbackMsg_t *);
typedef bool (*FuncPtr_006) (int32_t, uint64_t, void *, int32_t, int32_t, bool *);
typedef bool (*FuncPtr_008) (void *);
typedef bool (*FuncPtr_011) (void *, char *, int32_t);
typedef bool (*FuncPtr_021) (void *, uint32_t);
typedef bool (*FuncPtr_027) (void *, uint64_t, FriendGameInfo_t *);
typedef bool (*FuncPtr_034) (void *, uint64_t, int32_t);
typedef bool (*FuncPtr_036) (void *, uint64_t, int32_t *, int32_t *, int32_t *);
typedef bool (*FuncPtr_039) (void *, uint64_t, uint64_t);
typedef bool (*FuncPtr_045) (void *, uint64_t, bool);
typedef bool (*FuncPtr_047) (void *, const char *, const char *);
typedef bool (*FuncPtr_049) (void *, uint64_t, const char *);
typedef bool (*FuncPtr_050) (void *, uint64_t);
typedef bool (*FuncPtr_051) (void *, bool);
typedef bool (*FuncPtr_053) (void *, const char *);
typedef bool (*FuncPtr_054) (void *, uint64_t, uint32_t);
typedef bool (*FuncPtr_057) (void *, int32_t, uint32_t *, uint32_t *);
typedef bool (*FuncPtr_058) (void *, int32_t, uint8_t *, int32_t);
typedef bool (*FuncPtr_060) (void *, uint64_t, bool *);
typedef bool (*FuncPtr_061) (void *, uint32_t, uint32_t, const char *, uint32_t, const char *);
typedef bool (*FuncPtr_062) (void *, char *, uint32_t);
typedef bool (*FuncPtr_067) (void *, uint32_t, int32_t, int32_t, int32_t, int32_t);
typedef bool (*FuncPtr_068) (void *, const char *, int32_t *);
typedef bool (*FuncPtr_069) (void *, const char *, float *);
typedef bool (*FuncPtr_070) (void *, const char *, int32_t);
typedef bool (*FuncPtr_071) (void *, const char *, float);
typedef bool (*FuncPtr_072) (void *, const char *, float, double);
typedef bool (*FuncPtr_073) (void *, const char *, bool *);
typedef bool (*FuncPtr_074) (void *, const char *, bool *, uint32_t *);
typedef bool (*FuncPtr_077) (void *, const char *, uint32_t, uint32_t);
typedef bool (*FuncPtr_079) (void *, uint64_t, const char *, int32_t *);
typedef bool (*FuncPtr_080) (void *, uint64_t, const char *, float *);
typedef bool (*FuncPtr_081) (void *, uint64_t, const char *, bool *);
typedef bool (*FuncPtr_082) (void *, uint64_t, const char *, bool *, uint32_t *);
typedef bool (*FuncPtr_086) (void *, uint64_t, int32_t, LeaderboardEntry_t *, int32_t *, int32_t);
typedef bool (*FuncPtr_091) (void *, const char *, int64_t *);
typedef bool (*FuncPtr_092) (void *, const char *, double *);
typedef bool (*FuncPtr_095) (void *, const char *, int32_t *, int32_t *);
typedef bool (*FuncPtr_096) (void *, const char *, float *, float *);
typedef bool (*FuncPtr_097) (void *, int32_t, uint32_t *, bool *, char *, int32_t);
typedef bool (*FuncPtr_101) (void *, uint32_t, uint64_t *, uint64_t *);
typedef bool (*FuncPtr_103) (void *, uint32_t *, uint32_t *);
typedef bool (*FuncPtr_104) (void *, bool, uint32_t);
typedef bool (*FuncPtr_120) (void *, uint64_t, int32_t *, int32_t *);
typedef bool (*FuncPtr_126) (void *, uint64_t, uint32_t, SteamUGCDetails_t *);
typedef bool (*FuncPtr_127) (void *, uint64_t, uint32_t, uint32_t, char *, uint32_t);
typedef bool (*FuncPtr_128) (void *, uint64_t, uint32_t, char *, uint32_t);
typedef bool (*FuncPtr_129) (void *, uint64_t, uint32_t, uint64_t *, uint32_t);
typedef bool (*FuncPtr_130) (void *, uint64_t, uint32_t, uint32_t, uint64_t *);
typedef bool (*FuncPtr_131) (void *, uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t, uint32_t *);
typedef bool (*FuncPtr_132) (void *, uint64_t, uint32_t, uint32_t, char *, uint32_t, char *, uint32_t);
typedef bool (*FuncPtr_133) (void *, uint64_t, uint32_t, const char *, char *, uint32_t);
typedef bool (*FuncPtr_135) (void *, uint64_t, const SteamParamStringArray_t *);
typedef bool (*FuncPtr_136) (void *, uint64_t, uint32_t, uint32_t);
typedef bool (*FuncPtr_137) (void *, uint64_t, const char *, const char *);
typedef bool (*FuncPtr_140) (void *, uint64_t, const SteamParamStringArray_t *, bool);
typedef bool (*FuncPtr_141) (void *, uint64_t, const char *, uint32_t);
typedef bool (*FuncPtr_142) (void *, uint64_t, uint32_t, const char *);
typedef bool (*FuncPtr_147) (void *, uint64_t, uint64_t *, char *, uint32_t, uint32_t *);
typedef bool (*FuncPtr_148) (void *, uint64_t, uint64_t *, uint64_t *);
typedef bool (*FuncPtr_149) (void *, uint32_t, const char *);
typedef InputMotionData_t (*FuncPtr_113) (void *, uint64_t);
typedef InputDigitalActionData_t (*FuncPtr_108) (void *, uint64_t, uint64_t);
typedef InputAnalogActionData_t (*FuncPtr_110) (void *, uint64_t, uint64_t);

// The following functions have not been exported:
//	- SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED (listed in methods_to_ignore)
//	- SteamAPI_ISteamUser_GetAvailableVoice (listed in methods_to_ignore)
//	- SteamAPI_ISteamUser_GetVoice (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_DecompressVoice (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_GetAuthSessionTicket (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_BeginAuthSession (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_RequestEncryptedAppTicket (pointer to raw data argument required)
//	- SteamAPI_ISteamUser_GetEncryptedAppTicket (pointer to raw data argument required)
//	- SteamAPI_ISteamFriends_GetClanChatMessage (pointer to raw data argument required)
//	- SteamAPI_ISteamFriends_GetFriendMessage (pointer to raw data argument required)
//	- SteamAPI_ISteamUtils_GetAPICallResult (pointer to raw data argument required)
//	- SteamAPI_ISteamUtils_SetWarningMessageHook (callback pointer argument required)
//	- SteamAPI_ISteamInput_EnableActionEventCallbacks (callback pointer argument required)
//	- SteamAPI_ISteamInput_SetDualSenseTriggerEffect (callback pointer argument required)
//	- SteamAPI_ISteamUGC_RequestUGCDetails (listed in methods_to_ignore)

void steamapi_init (void);
