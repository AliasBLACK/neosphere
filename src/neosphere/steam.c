// WARNING: This file is auto-generated. Do not edit.
// Generator script is located at scripts/generate_steam_bindings.py

#include "neosphere.h"
#include "pegasus.h"
#include "api.h"
#include "steam.h"
#include "jsal.h"

void
steamapi_init(void)
{
	api_define_const("Steam", "k_uAppIdInvalid", 0x0);
	api_define_const("Steam", "k_uDepotIdInvalid", 0x0);
	api_define_const("Steam", "k_HAuthTicketInvalid", 0);
	api_define_const("Steam", "k_unSteamAccountIDMask", 0xFFFFFFFF);
	api_define_const("Steam", "k_unSteamAccountInstanceMask", 0x000FFFFF);
	api_define_const("Steam", "k_unSteamUserDefaultInstance", 1);
	api_define_const("Steam", "k_cubChatMetadataMax", 8192);
	api_define_const("Steam", "k_unFavoriteFlagNone", 0x00);
	api_define_const("Steam", "k_unFavoriteFlagFavorite", 0x01);
	api_define_const("Steam", "k_unFavoriteFlagHistory", 0x02);
	api_define_const("Steam", "k_unMaxCloudFileChunkSize", 100*1024*1024);
	api_define_const("Steam", "k_cchPublishedDocumentTitleMax", 128+1);
	api_define_const("Steam", "k_cchPublishedDocumentDescriptionMax", 8000);
	api_define_const("Steam", "k_cchPublishedDocumentChangeDescriptionMax", 8000);
	api_define_const("Steam", "k_unEnumeratePublishedFilesMaxResults", 50);
	api_define_const("Steam", "k_cchTagListMax", 1024+1);
	api_define_const("Steam", "k_cchFilenameMax", 260);
	api_define_const("Steam", "k_cchPublishedFileURLMax", 256);
	api_define_const("Steam", "k_nScreenshotMaxTaggedUsers", 32);
	api_define_const("Steam", "k_nScreenshotMaxTaggedPublishedFiles", 32);
	api_define_const("Steam", "kNumUGCResultsPerPage", 50);
	api_define_const("Steam", "k_cchDeveloperMetadataMax", 5000);
	api_define_const("Steam", "INVALID_HTMLBROWSER", 0);
	api_define_const("Steam", "k_HSteamNetConnection_Invalid", 0);
	api_define_const("Steam", "k_HSteamListenSocket_Invalid", 0);
	api_define_const("Steam", "k_HSteamNetPollGroup_Invalid", 0);
	api_define_const("Steam", "k_SteamDatagramPOPID_dev", ((uint32_t)'d'<<16U)|((uint32_t)'e'<<8U)|(uint32_t)'v');
	api_define_const("Steam", "k_cbSteamDatagramMaxSerializedTicket", 512);
	api_define_const("Steam", "k_cbMaxSteamDatagramGameCoordinatorServerLoginAppData", 2048);
	api_define_const("Steam", "k_cbMaxSteamDatagramGameCoordinatorServerLoginSerialized", 4096);
	api_define_const("Steam", "k_uAPICallInvalid", 0x0);
	api_define_const("Steam", "k_ulPartyBeaconIdInvalid", 0);
	api_define_const("Steam", "k_PublishedFileIdInvalid", 0);
	api_define_const("Steam", "k_UGCHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_PublishedFileUpdateHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_UGCFileStreamHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_UGCQueryHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_UGCUpdateHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_SteamItemInstanceIDInvalid", (uint64_t)~0);
	api_define_const("Steam", "k_SteamInventoryUpdateHandleInvalid", 0xffffffffffffffffull);
	api_define_const("Steam", "k_cchGameExtraInfoMax", 64);
	api_define_const("Steam", "k_cchMaxSteamErrMsg", 1024);
	api_define_const("Steam", "k_cchMaxFriendsGroupName", 64);
	api_define_const("Steam", "k_cFriendsGroupLimit", 100);
	api_define_const("Steam", "k_cEnumerateFollowersMax", 50);
	api_define_const("Steam", "k_cbMaxGameServerGameDir", 32);
	api_define_const("Steam", "k_cbMaxGameServerMapName", 32);
	api_define_const("Steam", "k_cbMaxGameServerGameDescription", 64);
	api_define_const("Steam", "k_cbMaxGameServerName", 64);
	api_define_const("Steam", "k_cbMaxGameServerTags", 128);
	api_define_const("Steam", "k_cbMaxGameServerGameData", 2048);
	api_define_const("Steam", "HSERVERQUERY_INVALID", 0xffffffff);
	api_define_const("Steam", "k_cubAppProofOfPurchaseKeyMax", 240);
	api_define_const("Steam", "k_cubUFSTagTypeMax", 255);
	api_define_const("Steam", "k_cubUFSTagValueMax", 255);
	api_define_const("Steam", "k_ScreenshotThumbWidth", 200);
	api_define_const("Steam", "k_SteamInventoryResultInvalid", -1);
	api_define_const("Steam", "k_nMaxTimelineRangeIDLength", 64);
	api_define_const("Steam", "k_cchMaxSteamNetworkingErrMsg", 1024);
	api_define_const("Steam", "k_cchSteamNetworkingMaxConnectionCloseReason", 128);
	api_define_const("Steam", "k_cchSteamNetworkingMaxConnectionDescription", 128);
	api_define_const("Steam", "k_cchSteamNetworkingMaxConnectionAppName", 32);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Unauthenticated", 1);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Unencrypted", 2);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_LoopbackBuffers", 4);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Fast", 8);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_Relayed", 16);
	api_define_const("Steam", "k_nSteamNetworkConnectionInfoFlags_DualWifi", 32);
	api_define_const("Steam", "k_cbMaxSteamNetworkingSocketsMessageSizeSend", 512*1024);
	api_define_const("Steam", "k_nSteamNetworkingSend_Unreliable", 0);
	api_define_const("Steam", "k_nSteamNetworkingSend_NoNagle", 1);
	api_define_const("Steam", "k_nSteamNetworkingSend_UnreliableNoNagle", 0|1);
	api_define_const("Steam", "k_nSteamNetworkingSend_NoDelay", 4);
	api_define_const("Steam", "k_nSteamNetworkingSend_UnreliableNoDelay", 0|4|1);
	api_define_const("Steam", "k_nSteamNetworkingSend_Reliable", 8);
	api_define_const("Steam", "k_nSteamNetworkingSend_ReliableNoNagle", 8|1);
	api_define_const("Steam", "k_nSteamNetworkingSend_UseCurrentThread", 16);
	api_define_const("Steam", "k_nSteamNetworkingSend_AutoRestartBrokenSession", 32);
	api_define_const("Steam", "k_cchMaxSteamNetworkingPingLocationString", 1024);
	api_define_const("Steam", "k_nSteamNetworkingPing_Failed", -1);
	api_define_const("Steam", "k_nSteamNetworkingPing_Unknown", -2);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Default", -1);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Disable", 0);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Relay", 1);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Private", 2);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_Public", 4);
	api_define_const("Steam", "k_nSteamNetworkingConfig_P2P_Transport_ICE_Enable_All", 0x7fffffff);
	api_define_const("Steam", "k_cbSteamNetworkingSocketsFakeUDPPortRecommendedMTU", 1200);
	api_define_const("Steam", "k_cbSteamNetworkingSocketsFakeUDPPortMaxMessageSize", 4096);
	api_define_const("Steam", "k_FriendsGroupID_Invalid", -1);
	api_define_const("Steam", "STEAMGAMESERVER_QUERY_PORT_SHARED", 0xffff);
	api_define_const("Steam", "MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE", 0xffff);

	// Enum EUserHasLicenseForAppResult
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultHasLicense", 0);
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultDoesNotHaveLicense", 1);
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultNoAuth", 2);

	// Enum EDurationControlOnlineState
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Invalid", 0);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Offline", 1);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Online", 2);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_OnlineHighPri", 3);

	// Enum EPersonaState
	api_define_const("EPersonaState", "k_EPersonaStateOffline", 0);
	api_define_const("EPersonaState", "k_EPersonaStateOnline", 1);
	api_define_const("EPersonaState", "k_EPersonaStateBusy", 2);
	api_define_const("EPersonaState", "k_EPersonaStateAway", 3);
	api_define_const("EPersonaState", "k_EPersonaStateSnooze", 4);
	api_define_const("EPersonaState", "k_EPersonaStateLookingToTrade", 5);
	api_define_const("EPersonaState", "k_EPersonaStateLookingToPlay", 6);
	api_define_const("EPersonaState", "k_EPersonaStateInvisible", 7);
	api_define_const("EPersonaState", "k_EPersonaStateMax", 8);

	// Enum EFriendRelationship
	api_define_const("EFriendRelationship", "k_EFriendRelationshipNone", 0);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipBlocked", 1);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipRequestRecipient", 2);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipFriend", 3);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipRequestInitiator", 4);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipIgnored", 5);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipIgnoredFriend", 6);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipSuggested_DEPRECATED", 7);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipMax", 8);

	// Enum EActivateGameOverlayToWebPageMode
	api_define_const("EActivateGameOverlayToWebPageMode", "k_EActivateGameOverlayToWebPageMode_Default", 0);
	api_define_const("EActivateGameOverlayToWebPageMode", "k_EActivateGameOverlayToWebPageMode_Modal", 1);

	// Enum EOverlayToStoreFlag
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_None", 0);
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_AddToCart", 1);
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_AddToCartAndShow", 2);

	// Enum ECommunityProfileItemType
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_AnimatedAvatar", 0);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_AvatarFrame", 1);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_ProfileModifier", 2);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_ProfileBackground", 3);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_MiniProfileBackground", 4);

	// Enum ECommunityProfileItemProperty
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_ImageSmall", 0);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_ImageLarge", 1);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_InternalName", 2);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_Title", 3);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_Description", 4);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_AppID", 5);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_TypeID", 6);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_Class", 7);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieWebM", 8);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieMP4", 9);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieWebMSmall", 10);
	api_define_const("ECommunityProfileItemProperty", "k_ECommunityProfileItemProperty_MovieMP4Small", 11);

	// Enum EUniverse
	api_define_const("EUniverse", "k_EUniverseInvalid", 0);
	api_define_const("EUniverse", "k_EUniversePublic", 1);
	api_define_const("EUniverse", "k_EUniverseBeta", 2);
	api_define_const("EUniverse", "k_EUniverseInternal", 3);
	api_define_const("EUniverse", "k_EUniverseDev", 4);
	api_define_const("EUniverse", "k_EUniverseMax", 5);

	// Enum ENotificationPosition
	api_define_const("ENotificationPosition", "k_EPositionInvalid", 0);
	api_define_const("ENotificationPosition", "k_EPositionTopLeft", 1);
	api_define_const("ENotificationPosition", "k_EPositionTopRight", 2);
	api_define_const("ENotificationPosition", "k_EPositionBottomLeft", 3);
	api_define_const("ENotificationPosition", "k_EPositionBottomRight", 4);

	// Enum ESteamAPICallFailure
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureNone", 0);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureSteamGone", 1);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureNetworkFailure", 2);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureInvalidHandle", 3);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureMismatchedCallback", 4);

	// Enum EGamepadTextInputMode
	api_define_const("EGamepadTextInputMode", "k_EGamepadTextInputModeNormal", 0);
	api_define_const("EGamepadTextInputMode", "k_EGamepadTextInputModePassword", 1);

	// Enum EGamepadTextInputLineMode
	api_define_const("EGamepadTextInputLineMode", "k_EGamepadTextInputLineModeSingleLine", 0);
	api_define_const("EGamepadTextInputLineMode", "k_EGamepadTextInputLineModeMultipleLines", 1);

	// Enum ETextFilteringContext
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextUnknown", 0);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextGameContent", 1);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextChat", 2);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextName", 3);

	// Enum ESteamIPv6ConnectivityProtocol
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_Invalid", 0);
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_HTTP", 1);
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_UDP", 2);

	// Enum ESteamIPv6ConnectivityState
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Unknown", 0);
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Good", 1);
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Bad", 2);

	// Enum EFloatingGamepadTextInputMode
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeSingleLine", 0);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeMultipleLines", 1);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeEmail", 2);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeNumeric", 3);

	// Enum ELeaderboardSortMethod
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodNone", 0);
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodAscending", 1);
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodDescending", 2);

	// Enum ELeaderboardDisplayType
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeNone", 0);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeNumeric", 1);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeTimeSeconds", 2);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeTimeMilliSeconds", 3);

	// Enum EInputActionOrigin
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_None", 0);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_A", 1);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_B", 2);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_X", 3);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Y", 4);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftBumper", 5);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightBumper", 6);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftGrip", 7);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightGrip", 8);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Start", 9);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Back", 10);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_Touch", 11);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_Swipe", 12);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_Click", 13);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadNorth", 14);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadSouth", 15);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadWest", 16);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftPad_DPadEast", 17);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_Touch", 18);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_Swipe", 19);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_Click", 20);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadNorth", 21);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadSouth", 22);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadWest", 23);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightPad_DPadEast", 24);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftTrigger_Pull", 25);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftTrigger_Click", 26);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightTrigger_Pull", 27);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_RightTrigger_Click", 28);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_Move", 29);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_Click", 30);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadNorth", 31);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadSouth", 32);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadWest", 33);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_LeftStick_DPadEast", 34);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Move", 35);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Pitch", 36);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Yaw", 37);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Gyro_Roll", 38);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved0", 39);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved1", 40);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved2", 41);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved3", 42);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved4", 43);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved5", 44);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved6", 45);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved7", 46);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved8", 47);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved9", 48);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamController_Reserved10", 49);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_X", 50);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Circle", 51);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Triangle", 52);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Square", 53);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftBumper", 54);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightBumper", 55);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Options", 56);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Share", 57);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_Touch", 58);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_Swipe", 59);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_Click", 60);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadNorth", 61);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadSouth", 62);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadWest", 63);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftPad_DPadEast", 64);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_Touch", 65);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_Swipe", 66);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_Click", 67);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadNorth", 68);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadSouth", 69);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadWest", 70);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightPad_DPadEast", 71);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_Touch", 72);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_Swipe", 73);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_Click", 74);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadNorth", 75);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadSouth", 76);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadWest", 77);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_CenterPad_DPadEast", 78);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftTrigger_Pull", 79);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftTrigger_Click", 80);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightTrigger_Pull", 81);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightTrigger_Click", 82);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_Move", 83);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_Click", 84);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadNorth", 85);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadSouth", 86);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadWest", 87);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_LeftStick_DPadEast", 88);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_Move", 89);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_Click", 90);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadNorth", 91);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadSouth", 92);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadWest", 93);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_RightStick_DPadEast", 94);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_North", 95);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_South", 96);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_West", 97);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_East", 98);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Move", 99);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Pitch", 100);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Yaw", 101);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Gyro_Roll", 102);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_DPad_Move", 103);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved1", 104);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved2", 105);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved3", 106);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved4", 107);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved5", 108);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved6", 109);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved7", 110);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved8", 111);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved9", 112);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS4_Reserved10", 113);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_A", 114);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_B", 115);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_X", 116);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Y", 117);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftBumper", 118);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightBumper", 119);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Menu", 120);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_View", 121);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftTrigger_Pull", 122);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftTrigger_Click", 123);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightTrigger_Pull", 124);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightTrigger_Click", 125);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_Move", 126);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_Click", 127);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadNorth", 128);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadSouth", 129);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadWest", 130);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftStick_DPadEast", 131);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_Move", 132);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_Click", 133);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadNorth", 134);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadSouth", 135);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadWest", 136);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightStick_DPadEast", 137);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_North", 138);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_South", 139);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_West", 140);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_East", 141);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_DPad_Move", 142);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftGrip_Lower", 143);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_LeftGrip_Upper", 144);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightGrip_Lower", 145);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_RightGrip_Upper", 146);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Share", 147);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved6", 148);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved7", 149);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved8", 150);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved9", 151);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBoxOne_Reserved10", 152);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_A", 153);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_B", 154);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_X", 155);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Y", 156);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftBumper", 157);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightBumper", 158);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Start", 159);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Back", 160);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftTrigger_Pull", 161);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftTrigger_Click", 162);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightTrigger_Pull", 163);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightTrigger_Click", 164);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_Move", 165);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_Click", 166);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadNorth", 167);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadSouth", 168);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadWest", 169);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_LeftStick_DPadEast", 170);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_Move", 171);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_Click", 172);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadNorth", 173);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadSouth", 174);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadWest", 175);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_RightStick_DPadEast", 176);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_North", 177);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_South", 178);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_West", 179);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_East", 180);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_DPad_Move", 181);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved1", 182);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved2", 183);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved3", 184);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved4", 185);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved5", 186);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved6", 187);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved7", 188);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved8", 189);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved9", 190);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_XBox360_Reserved10", 191);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_A", 192);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_B", 193);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_X", 194);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Y", 195);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftBumper", 196);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightBumper", 197);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Plus", 198);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Minus", 199);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Capture", 200);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftTrigger_Pull", 201);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftTrigger_Click", 202);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightTrigger_Pull", 203);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightTrigger_Click", 204);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_Move", 205);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_Click", 206);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadNorth", 207);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadSouth", 208);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadWest", 209);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftStick_DPadEast", 210);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_Move", 211);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_Click", 212);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadNorth", 213);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadSouth", 214);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadWest", 215);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightStick_DPadEast", 216);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_North", 217);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_South", 218);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_West", 219);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_East", 220);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Move", 221);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Pitch", 222);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Yaw", 223);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_ProGyro_Roll", 224);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_DPad_Move", 225);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved1", 226);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved2", 227);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved3", 228);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved4", 229);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved5", 230);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved6", 231);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved7", 232);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved8", 233);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved9", 234);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved10", 235);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Move", 236);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Pitch", 237);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Yaw", 238);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGyro_Roll", 239);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Move", 240);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Pitch", 241);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Yaw", 242);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGyro_Roll", 243);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGrip_Lower", 244);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_LeftGrip_Upper", 245);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGrip_Lower", 246);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_RightGrip_Upper", 247);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_N", 248);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_E", 249);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_S", 250);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_JoyConButton_W", 251);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved15", 252);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved16", 253);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved17", 254);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved18", 255);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved19", 256);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Switch_Reserved20", 257);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_X", 258);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Circle", 259);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Triangle", 260);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Square", 261);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftBumper", 262);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightBumper", 263);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Option", 264);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Create", 265);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Mute", 266);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_Touch", 267);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_Swipe", 268);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_Click", 269);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadNorth", 270);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadSouth", 271);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadWest", 272);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftPad_DPadEast", 273);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_Touch", 274);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_Swipe", 275);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_Click", 276);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadNorth", 277);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadSouth", 278);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadWest", 279);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightPad_DPadEast", 280);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_Touch", 281);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_Swipe", 282);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_Click", 283);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadNorth", 284);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadSouth", 285);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadWest", 286);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_CenterPad_DPadEast", 287);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftTrigger_Pull", 288);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftTrigger_Click", 289);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightTrigger_Pull", 290);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightTrigger_Click", 291);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_Move", 292);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_Click", 293);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadNorth", 294);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadSouth", 295);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadWest", 296);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftStick_DPadEast", 297);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_Move", 298);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_Click", 299);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadNorth", 300);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadSouth", 301);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadWest", 302);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightStick_DPadEast", 303);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_North", 304);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_South", 305);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_West", 306);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_East", 307);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Move", 308);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Pitch", 309);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Yaw", 310);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Gyro_Roll", 311);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_DPad_Move", 312);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftGrip", 313);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightGrip", 314);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_LeftFn", 315);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_RightFn", 316);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved5", 317);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved6", 318);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved7", 319);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved8", 320);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved9", 321);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved10", 322);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved11", 323);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved12", 324);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved13", 325);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved14", 326);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved15", 327);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved16", 328);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved17", 329);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved18", 330);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved19", 331);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_PS5_Reserved20", 332);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_A", 333);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_B", 334);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_X", 335);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Y", 336);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L1", 337);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R1", 338);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Menu", 339);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_View", 340);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_Touch", 341);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_Swipe", 342);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_Click", 343);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadNorth", 344);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadSouth", 345);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadWest", 346);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftPad_DPadEast", 347);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_Touch", 348);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_Swipe", 349);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_Click", 350);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadNorth", 351);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadSouth", 352);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadWest", 353);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightPad_DPadEast", 354);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L2_SoftPull", 355);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L2", 356);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R2_SoftPull", 357);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R2", 358);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_Move", 359);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L3", 360);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadNorth", 361);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadSouth", 362);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadWest", 363);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_DPadEast", 364);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_LeftStick_Touch", 365);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_Move", 366);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R3", 367);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadNorth", 368);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadSouth", 369);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadWest", 370);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_DPadEast", 371);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_RightStick_Touch", 372);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L4", 373);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R4", 374);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_L5", 375);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_R5", 376);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_Move", 377);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_North", 378);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_South", 379);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_West", 380);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_DPad_East", 381);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Move", 382);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Pitch", 383);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Yaw", 384);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Gyro_Roll", 385);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved1", 386);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved2", 387);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved3", 388);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved4", 389);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved5", 390);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved6", 391);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved7", 392);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved8", 393);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved9", 394);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved10", 395);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved11", 396);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved12", 397);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved13", 398);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved14", 399);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved15", 400);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved16", 401);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved17", 402);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved18", 403);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved19", 404);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_SteamDeck_Reserved20", 405);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_Count", 406);
	api_define_const("EInputActionOrigin", "k_EInputActionOrigin_MaximumPossibleValue", 407);

	// Enum ESteamInputGlyphSize
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Small", 0);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Medium", 1);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Large", 2);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Count", 3);

	// Enum EControllerHapticLocation
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Left", 0);
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Right", 1);
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Both", 2);

	// Enum ESteamControllerPad
	api_define_const("ESteamControllerPad", "k_ESteamControllerPad_Left", 0);
	api_define_const("ESteamControllerPad", "k_ESteamControllerPad_Right", 1);

	// Enum ESteamInputType
	api_define_const("ESteamInputType", "k_ESteamInputType_Unknown", 0);
	api_define_const("ESteamInputType", "k_ESteamInputType_SteamController", 1);
	api_define_const("ESteamInputType", "k_ESteamInputType_XBox360Controller", 2);
	api_define_const("ESteamInputType", "k_ESteamInputType_XBoxOneController", 3);
	api_define_const("ESteamInputType", "k_ESteamInputType_GenericGamepad", 4);
	api_define_const("ESteamInputType", "k_ESteamInputType_PS4Controller", 5);
	api_define_const("ESteamInputType", "k_ESteamInputType_AppleMFiController", 6);
	api_define_const("ESteamInputType", "k_ESteamInputType_AndroidController", 7);
	api_define_const("ESteamInputType", "k_ESteamInputType_SwitchJoyConPair", 8);
	api_define_const("ESteamInputType", "k_ESteamInputType_SwitchJoyConSingle", 9);
	api_define_const("ESteamInputType", "k_ESteamInputType_SwitchProController", 10);
	api_define_const("ESteamInputType", "k_ESteamInputType_MobileTouch", 11);
	api_define_const("ESteamInputType", "k_ESteamInputType_PS3Controller", 12);
	api_define_const("ESteamInputType", "k_ESteamInputType_PS5Controller", 13);
	api_define_const("ESteamInputType", "k_ESteamInputType_SteamDeckController", 14);
	api_define_const("ESteamInputType", "k_ESteamInputType_Count", 15);
	api_define_const("ESteamInputType", "k_ESteamInputType_MaximumPossibleValue", 16);

	// Enum EXboxOrigin
	api_define_const("EXboxOrigin", "k_EXboxOrigin_A", 0);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_B", 1);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_X", 2);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_Y", 3);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftBumper", 4);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightBumper", 5);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_Menu", 6);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_View", 7);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftTrigger_Pull", 8);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftTrigger_Click", 9);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightTrigger_Pull", 10);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightTrigger_Click", 11);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_Move", 12);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_Click", 13);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadNorth", 14);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadSouth", 15);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadWest", 16);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_LeftStick_DPadEast", 17);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_Move", 18);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_Click", 19);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadNorth", 20);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadSouth", 21);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadWest", 22);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_RightStick_DPadEast", 23);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_North", 24);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_South", 25);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_West", 26);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_DPad_East", 27);
	api_define_const("EXboxOrigin", "k_EXboxOrigin_Count", 28);

	// Enum EInputSourceMode
	api_define_const("EInputSourceMode", "k_EInputSourceMode_None", 0);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Dpad", 1);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Buttons", 2);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_FourButtons", 3);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_AbsoluteMouse", 4);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_RelativeMouse", 5);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_JoystickMove", 6);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_JoystickMouse", 7);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_JoystickCamera", 8);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_ScrollWheel", 9);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Trigger", 10);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_TouchMenu", 11);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_MouseJoystick", 12);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_MouseRegion", 13);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_RadialMenu", 14);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_SingleButton", 15);
	api_define_const("EInputSourceMode", "k_EInputSourceMode_Switches", 16);

	// API Init/Shutdown functions.
	api_define_func("SteamAPI", "Init", js_SteamAPI_Init, 0);
	api_define_func("SteamAPI", "Shutdown", js_SteamAPI_Shutdown, 0);
	api_define_func("SteamAPI", "RunCallbacks", js_SteamAPI_RunCallbacks, 0);

	// ISteamUser
	api_define_func("ISteamUser", "GetHSteamUser", js_ISteamUser_GetHSteamUser, 0);
	api_define_func("ISteamUser", "GetGameBadgeLevel", js_ISteamUser_GetGameBadgeLevel, 0);
	api_define_func("ISteamUser", "GetPlayerSteamLevel", js_ISteamUser_GetPlayerSteamLevel, 0);
	api_define_func("ISteamUser", "BLoggedOn", js_ISteamUser_BLoggedOn, 0);
	api_define_func("ISteamUser", "GetUserDataFolder", js_ISteamUser_GetUserDataFolder, 0);
	api_define_func("ISteamUser", "BIsBehindNAT", js_ISteamUser_BIsBehindNAT, 0);
	api_define_func("ISteamUser", "BIsPhoneVerified", js_ISteamUser_BIsPhoneVerified, 0);
	api_define_func("ISteamUser", "BIsTwoFactorEnabled", js_ISteamUser_BIsTwoFactorEnabled, 0);
	api_define_func("ISteamUser", "BIsPhoneIdentifying", js_ISteamUser_BIsPhoneIdentifying, 0);
	api_define_func("ISteamUser", "BIsPhoneRequiringVerification", js_ISteamUser_BIsPhoneRequiringVerification, 0);
	api_define_func("ISteamUser", "BSetDurationControlOnlineState", js_ISteamUser_BSetDurationControlOnlineState, 0);
	api_define_func("ISteamUser", "GetSteamID", js_ISteamUser_GetSteamID, 0);
	api_define_func("ISteamUser", "TrackAppUsageEvent", js_ISteamUser_TrackAppUsageEvent, 0);
	api_define_func("ISteamUser", "StartVoiceRecording", js_ISteamUser_StartVoiceRecording, 0);
	api_define_func("ISteamUser", "StopVoiceRecording", js_ISteamUser_StopVoiceRecording, 0);
	api_define_func("ISteamUser", "EndAuthSession", js_ISteamUser_EndAuthSession, 0);
	api_define_func("ISteamUser", "CancelAuthTicket", js_ISteamUser_CancelAuthTicket, 0);
	api_define_func("ISteamUser", "AdvertiseGame", js_ISteamUser_AdvertiseGame, 0);
	api_define_func("ISteamUser", "GetVoiceOptimalSampleRate", js_ISteamUser_GetVoiceOptimalSampleRate, 0);
	api_define_func("ISteamUser", "GetAuthTicketForWebApi", js_ISteamUser_GetAuthTicketForWebApi, 0);
	api_define_func("ISteamUser", "UserHasLicenseForApp", js_ISteamUser_UserHasLicenseForApp, 0);

	// ISteamFriends
	api_define_func("ISteamFriends", "GetPersonaName", js_ISteamFriends_GetPersonaName, 0);
	api_define_func("ISteamFriends", "GetFriendPersonaName", js_ISteamFriends_GetFriendPersonaName, 0);
	api_define_func("ISteamFriends", "GetFriendPersonaNameHistory", js_ISteamFriends_GetFriendPersonaNameHistory, 0);
	api_define_func("ISteamFriends", "GetPlayerNickname", js_ISteamFriends_GetPlayerNickname, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupName", js_ISteamFriends_GetFriendsGroupName, 0);
	api_define_func("ISteamFriends", "GetClanName", js_ISteamFriends_GetClanName, 0);
	api_define_func("ISteamFriends", "GetClanTag", js_ISteamFriends_GetClanTag, 0);
	api_define_func("ISteamFriends", "GetFriendRichPresence", js_ISteamFriends_GetFriendRichPresence, 0);
	api_define_func("ISteamFriends", "GetFriendRichPresenceKeyByIndex", js_ISteamFriends_GetFriendRichPresenceKeyByIndex, 0);
	api_define_func("ISteamFriends", "GetProfileItemPropertyString", js_ISteamFriends_GetProfileItemPropertyString, 0);
	api_define_func("ISteamFriends", "GetPersonaState", js_ISteamFriends_GetPersonaState, 0);
	api_define_func("ISteamFriends", "GetFriendRelationship", js_ISteamFriends_GetFriendRelationship, 0);
	api_define_func("ISteamFriends", "GetFriendPersonaState", js_ISteamFriends_GetFriendPersonaState, 0);
	api_define_func("ISteamFriends", "GetUserRestrictions", js_ISteamFriends_GetUserRestrictions, 0);
	api_define_func("ISteamFriends", "GetFriendCoplayGame", js_ISteamFriends_GetFriendCoplayGame, 0);
	api_define_func("ISteamFriends", "GetProfileItemPropertyUint", js_ISteamFriends_GetProfileItemPropertyUint, 0);
	api_define_func("ISteamFriends", "GetFriendCount", js_ISteamFriends_GetFriendCount, 0);
	api_define_func("ISteamFriends", "GetFriendSteamLevel", js_ISteamFriends_GetFriendSteamLevel, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupCount", js_ISteamFriends_GetFriendsGroupCount, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupMembersCount", js_ISteamFriends_GetFriendsGroupMembersCount, 0);
	api_define_func("ISteamFriends", "GetClanCount", js_ISteamFriends_GetClanCount, 0);
	api_define_func("ISteamFriends", "GetFriendCountFromSource", js_ISteamFriends_GetFriendCountFromSource, 0);
	api_define_func("ISteamFriends", "GetSmallFriendAvatar", js_ISteamFriends_GetSmallFriendAvatar, 0);
	api_define_func("ISteamFriends", "GetMediumFriendAvatar", js_ISteamFriends_GetMediumFriendAvatar, 0);
	api_define_func("ISteamFriends", "GetLargeFriendAvatar", js_ISteamFriends_GetLargeFriendAvatar, 0);
	api_define_func("ISteamFriends", "GetClanOfficerCount", js_ISteamFriends_GetClanOfficerCount, 0);
	api_define_func("ISteamFriends", "GetFriendRichPresenceKeyCount", js_ISteamFriends_GetFriendRichPresenceKeyCount, 0);
	api_define_func("ISteamFriends", "GetCoplayFriendCount", js_ISteamFriends_GetCoplayFriendCount, 0);
	api_define_func("ISteamFriends", "GetFriendCoplayTime", js_ISteamFriends_GetFriendCoplayTime, 0);
	api_define_func("ISteamFriends", "GetClanChatMemberCount", js_ISteamFriends_GetClanChatMemberCount, 0);
	api_define_func("ISteamFriends", "GetNumChatsWithUnreadPriorityMessages", js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages, 0);
	api_define_func("ISteamFriends", "GetFriendByIndex", js_ISteamFriends_GetFriendByIndex, 0);
	api_define_func("ISteamFriends", "GetClanByIndex", js_ISteamFriends_GetClanByIndex, 0);
	api_define_func("ISteamFriends", "GetFriendFromSourceByIndex", js_ISteamFriends_GetFriendFromSourceByIndex, 0);
	api_define_func("ISteamFriends", "GetClanOwner", js_ISteamFriends_GetClanOwner, 0);
	api_define_func("ISteamFriends", "GetClanOfficerByIndex", js_ISteamFriends_GetClanOfficerByIndex, 0);
	api_define_func("ISteamFriends", "GetCoplayFriend", js_ISteamFriends_GetCoplayFriend, 0);
	api_define_func("ISteamFriends", "GetChatMemberByIndex", js_ISteamFriends_GetChatMemberByIndex, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupIDByIndex", js_ISteamFriends_GetFriendsGroupIDByIndex, 0);
	api_define_func("ISteamFriends", "GetFriendsGroupMembersList", js_ISteamFriends_GetFriendsGroupMembersList, 0);
	api_define_func("ISteamFriends", "SetInGameVoiceSpeaking", js_ISteamFriends_SetInGameVoiceSpeaking, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlay", js_ISteamFriends_ActivateGameOverlay, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayToUser", js_ISteamFriends_ActivateGameOverlayToUser, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayToWebPage", js_ISteamFriends_ActivateGameOverlayToWebPage, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayToStore", js_ISteamFriends_ActivateGameOverlayToStore, 0);
	api_define_func("ISteamFriends", "SetPlayedWith", js_ISteamFriends_SetPlayedWith, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayInviteDialog", js_ISteamFriends_ActivateGameOverlayInviteDialog, 0);
	api_define_func("ISteamFriends", "ClearRichPresence", js_ISteamFriends_ClearRichPresence, 0);
	api_define_func("ISteamFriends", "RequestFriendRichPresence", js_ISteamFriends_RequestFriendRichPresence, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayRemotePlayTogetherInviteDialog", js_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog, 0);
	api_define_func("ISteamFriends", "ActivateGameOverlayInviteDialogConnectString", js_ISteamFriends_ActivateGameOverlayInviteDialogConnectString, 0);
	api_define_func("ISteamFriends", "HasFriend", js_ISteamFriends_HasFriend, 0);
	api_define_func("ISteamFriends", "GetClanActivityCounts", js_ISteamFriends_GetClanActivityCounts, 0);
	api_define_func("ISteamFriends", "IsUserInSource", js_ISteamFriends_IsUserInSource, 0);
	api_define_func("ISteamFriends", "RequestUserInformation", js_ISteamFriends_RequestUserInformation, 0);
	api_define_func("ISteamFriends", "SetRichPresence", js_ISteamFriends_SetRichPresence, 0);
	api_define_func("ISteamFriends", "InviteUserToGame", js_ISteamFriends_InviteUserToGame, 0);
	api_define_func("ISteamFriends", "LeaveClanChatRoom", js_ISteamFriends_LeaveClanChatRoom, 0);
	api_define_func("ISteamFriends", "SendClanChatMessage", js_ISteamFriends_SendClanChatMessage, 0);
	api_define_func("ISteamFriends", "IsClanChatAdmin", js_ISteamFriends_IsClanChatAdmin, 0);
	api_define_func("ISteamFriends", "IsClanChatWindowOpenInSteam", js_ISteamFriends_IsClanChatWindowOpenInSteam, 0);
	api_define_func("ISteamFriends", "OpenClanChatWindowInSteam", js_ISteamFriends_OpenClanChatWindowInSteam, 0);
	api_define_func("ISteamFriends", "CloseClanChatWindowInSteam", js_ISteamFriends_CloseClanChatWindowInSteam, 0);
	api_define_func("ISteamFriends", "SetListenForFriendsMessages", js_ISteamFriends_SetListenForFriendsMessages, 0);
	api_define_func("ISteamFriends", "ReplyToFriendMessage", js_ISteamFriends_ReplyToFriendMessage, 0);
	api_define_func("ISteamFriends", "IsClanPublic", js_ISteamFriends_IsClanPublic, 0);
	api_define_func("ISteamFriends", "IsClanOfficialGameGroup", js_ISteamFriends_IsClanOfficialGameGroup, 0);
	api_define_func("ISteamFriends", "RegisterProtocolInOverlayBrowser", js_ISteamFriends_RegisterProtocolInOverlayBrowser, 0);
	api_define_func("ISteamFriends", "BHasEquippedProfileItem", js_ISteamFriends_BHasEquippedProfileItem, 0);

	// ISteamUtils
	api_define_func("ISteamUtils", "GetSecondsSinceAppActive", js_ISteamUtils_GetSecondsSinceAppActive, 0);
	api_define_func("ISteamUtils", "GetSecondsSinceComputerActive", js_ISteamUtils_GetSecondsSinceComputerActive, 0);
	api_define_func("ISteamUtils", "GetConnectedUniverse", js_ISteamUtils_GetConnectedUniverse, 0);
	api_define_func("ISteamUtils", "GetServerRealTime", js_ISteamUtils_GetServerRealTime, 0);
	api_define_func("ISteamUtils", "GetAppID", js_ISteamUtils_GetAppID, 0);
	api_define_func("ISteamUtils", "GetAPICallFailureReason", js_ISteamUtils_GetAPICallFailureReason, 0);
	api_define_func("ISteamUtils", "GetIPCCallCount", js_ISteamUtils_GetIPCCallCount, 0);
	api_define_func("ISteamUtils", "GetEnteredGamepadTextLength", js_ISteamUtils_GetEnteredGamepadTextLength, 0);
	api_define_func("ISteamUtils", "GetIPv6ConnectivityState", js_ISteamUtils_GetIPv6ConnectivityState, 0);
	api_define_func("ISteamUtils", "GetIPCountry", js_ISteamUtils_GetIPCountry, 0);
	api_define_func("ISteamUtils", "GetSteamUILanguage", js_ISteamUtils_GetSteamUILanguage, 0);
	api_define_func("ISteamUtils", "GetImageSize", js_ISteamUtils_GetImageSize, 0);
	api_define_func("ISteamUtils", "GetImageRGBA", js_ISteamUtils_GetImageRGBA, 0);
	api_define_func("ISteamUtils", "IsAPICallCompleted", js_ISteamUtils_IsAPICallCompleted, 0);
	api_define_func("ISteamUtils", "IsOverlayEnabled", js_ISteamUtils_IsOverlayEnabled, 0);
	api_define_func("ISteamUtils", "BOverlayNeedsPresent", js_ISteamUtils_BOverlayNeedsPresent, 0);
	api_define_func("ISteamUtils", "ShowGamepadTextInput", js_ISteamUtils_ShowGamepadTextInput, 0);
	api_define_func("ISteamUtils", "GetEnteredGamepadTextInput", js_ISteamUtils_GetEnteredGamepadTextInput, 0);
	api_define_func("ISteamUtils", "IsSteamRunningInVR", js_ISteamUtils_IsSteamRunningInVR, 0);
	api_define_func("ISteamUtils", "IsSteamInBigPictureMode", js_ISteamUtils_IsSteamInBigPictureMode, 0);
	api_define_func("ISteamUtils", "IsVRHeadsetStreamingEnabled", js_ISteamUtils_IsVRHeadsetStreamingEnabled, 0);
	api_define_func("ISteamUtils", "IsSteamChinaLauncher", js_ISteamUtils_IsSteamChinaLauncher, 0);
	api_define_func("ISteamUtils", "InitFilterText", js_ISteamUtils_InitFilterText, 0);
	api_define_func("ISteamUtils", "IsSteamRunningOnSteamDeck", js_ISteamUtils_IsSteamRunningOnSteamDeck, 0);
	api_define_func("ISteamUtils", "ShowFloatingGamepadTextInput", js_ISteamUtils_ShowFloatingGamepadTextInput, 0);
	api_define_func("ISteamUtils", "DismissFloatingGamepadTextInput", js_ISteamUtils_DismissFloatingGamepadTextInput, 0);
	api_define_func("ISteamUtils", "GetCurrentBatteryPower", js_ISteamUtils_GetCurrentBatteryPower, 0);
	api_define_func("ISteamUtils", "SetOverlayNotificationPosition", js_ISteamUtils_SetOverlayNotificationPosition, 0);
	api_define_func("ISteamUtils", "SetOverlayNotificationInset", js_ISteamUtils_SetOverlayNotificationInset, 0);
	api_define_func("ISteamUtils", "StartVRDashboard", js_ISteamUtils_StartVRDashboard, 0);
	api_define_func("ISteamUtils", "SetVRHeadsetStreamingEnabled", js_ISteamUtils_SetVRHeadsetStreamingEnabled, 0);
	api_define_func("ISteamUtils", "SetGameLauncherMode", js_ISteamUtils_SetGameLauncherMode, 0);
	api_define_func("ISteamUtils", "FilterText", js_ISteamUtils_FilterText, 0);

	// ISteamUserStats
	api_define_func("ISteamUserStats", "RequestCurrentStats", js_ISteamUserStats_RequestCurrentStats, 0);
	api_define_func("ISteamUserStats", "GetStatInt32", js_ISteamUserStats_GetStatInt32, 0);
	api_define_func("ISteamUserStats", "GetStatFloat", js_ISteamUserStats_GetStatFloat, 0);
	api_define_func("ISteamUserStats", "SetStatInt32", js_ISteamUserStats_SetStatInt32, 0);
	api_define_func("ISteamUserStats", "SetStatFloat", js_ISteamUserStats_SetStatFloat, 0);
	api_define_func("ISteamUserStats", "UpdateAvgRateStat", js_ISteamUserStats_UpdateAvgRateStat, 0);
	api_define_func("ISteamUserStats", "GetAchievement", js_ISteamUserStats_GetAchievement, 0);
	api_define_func("ISteamUserStats", "SetAchievement", js_ISteamUserStats_SetAchievement, 0);
	api_define_func("ISteamUserStats", "ClearAchievement", js_ISteamUserStats_ClearAchievement, 0);
	api_define_func("ISteamUserStats", "GetAchievementAndUnlockTime", js_ISteamUserStats_GetAchievementAndUnlockTime, 0);
	api_define_func("ISteamUserStats", "StoreStats", js_ISteamUserStats_StoreStats, 0);
	api_define_func("ISteamUserStats", "IndicateAchievementProgress", js_ISteamUserStats_IndicateAchievementProgress, 0);
	api_define_func("ISteamUserStats", "GetUserStatInt32", js_ISteamUserStats_GetUserStatInt32, 0);
	api_define_func("ISteamUserStats", "GetUserStatFloat", js_ISteamUserStats_GetUserStatFloat, 0);
	api_define_func("ISteamUserStats", "GetUserAchievement", js_ISteamUserStats_GetUserAchievement, 0);
	api_define_func("ISteamUserStats", "GetUserAchievementAndUnlockTime", js_ISteamUserStats_GetUserAchievementAndUnlockTime, 0);
	api_define_func("ISteamUserStats", "ResetAllStats", js_ISteamUserStats_ResetAllStats, 0);
	api_define_func("ISteamUserStats", "GetAchievementAchievedPercent", js_ISteamUserStats_GetAchievementAchievedPercent, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatInt64", js_ISteamUserStats_GetGlobalStatInt64, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatDouble", js_ISteamUserStats_GetGlobalStatDouble, 0);
	api_define_func("ISteamUserStats", "GetAchievementProgressLimitsInt32", js_ISteamUserStats_GetAchievementProgressLimitsInt32, 0);
	api_define_func("ISteamUserStats", "GetAchievementProgressLimitsFloat", js_ISteamUserStats_GetAchievementProgressLimitsFloat, 0);
	api_define_func("ISteamUserStats", "GetAchievementIcon", js_ISteamUserStats_GetAchievementIcon, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardEntryCount", js_ISteamUserStats_GetLeaderboardEntryCount, 0);
	api_define_func("ISteamUserStats", "GetMostAchievedAchievementInfo", js_ISteamUserStats_GetMostAchievedAchievementInfo, 0);
	api_define_func("ISteamUserStats", "GetNextMostAchievedAchievementInfo", js_ISteamUserStats_GetNextMostAchievedAchievementInfo, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatHistoryInt64", js_ISteamUserStats_GetGlobalStatHistoryInt64, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatHistoryDouble", js_ISteamUserStats_GetGlobalStatHistoryDouble, 0);
	api_define_func("ISteamUserStats", "GetAchievementDisplayAttribute", js_ISteamUserStats_GetAchievementDisplayAttribute, 0);
	api_define_func("ISteamUserStats", "GetAchievementName", js_ISteamUserStats_GetAchievementName, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardName", js_ISteamUserStats_GetLeaderboardName, 0);
	api_define_func("ISteamUserStats", "GetNumAchievements", js_ISteamUserStats_GetNumAchievements, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardSortMethod", js_ISteamUserStats_GetLeaderboardSortMethod, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardDisplayType", js_ISteamUserStats_GetLeaderboardDisplayType, 0);

	// ISteamApps
	api_define_func("ISteamApps", "BIsSubscribed", js_ISteamApps_BIsSubscribed, 0);
	api_define_func("ISteamApps", "BIsLowViolence", js_ISteamApps_BIsLowViolence, 0);
	api_define_func("ISteamApps", "BIsCybercafe", js_ISteamApps_BIsCybercafe, 0);
	api_define_func("ISteamApps", "BIsVACBanned", js_ISteamApps_BIsVACBanned, 0);
	api_define_func("ISteamApps", "BIsSubscribedApp", js_ISteamApps_BIsSubscribedApp, 0);
	api_define_func("ISteamApps", "BIsDlcInstalled", js_ISteamApps_BIsDlcInstalled, 0);
	api_define_func("ISteamApps", "BIsSubscribedFromFreeWeekend", js_ISteamApps_BIsSubscribedFromFreeWeekend, 0);
	api_define_func("ISteamApps", "BGetDLCDataByIndex", js_ISteamApps_BGetDLCDataByIndex, 0);
	api_define_func("ISteamApps", "GetCurrentBetaName", js_ISteamApps_GetCurrentBetaName, 0);
	api_define_func("ISteamApps", "MarkContentCorrupt", js_ISteamApps_MarkContentCorrupt, 0);
	api_define_func("ISteamApps", "BIsAppInstalled", js_ISteamApps_BIsAppInstalled, 0);
	api_define_func("ISteamApps", "GetDlcDownloadProgress", js_ISteamApps_GetDlcDownloadProgress, 0);
	api_define_func("ISteamApps", "BIsSubscribedFromFamilySharing", js_ISteamApps_BIsSubscribedFromFamilySharing, 0);
	api_define_func("ISteamApps", "BIsTimedTrial", js_ISteamApps_BIsTimedTrial, 0);
	api_define_func("ISteamApps", "SetDlcContext", js_ISteamApps_SetDlcContext, 0);
	api_define_func("ISteamApps", "GetCurrentGameLanguage", js_ISteamApps_GetCurrentGameLanguage, 0);
	api_define_func("ISteamApps", "GetAvailableGameLanguages", js_ISteamApps_GetAvailableGameLanguages, 0);
	api_define_func("ISteamApps", "GetLaunchQueryParam", js_ISteamApps_GetLaunchQueryParam, 0);
	api_define_func("ISteamApps", "GetEarliestPurchaseUnixTime", js_ISteamApps_GetEarliestPurchaseUnixTime, 0);
	api_define_func("ISteamApps", "GetInstalledDepots", js_ISteamApps_GetInstalledDepots, 0);
	api_define_func("ISteamApps", "GetAppInstallDir", js_ISteamApps_GetAppInstallDir, 0);
	api_define_func("ISteamApps", "GetDLCCount", js_ISteamApps_GetDLCCount, 0);
	api_define_func("ISteamApps", "GetAppBuildId", js_ISteamApps_GetAppBuildId, 0);
	api_define_func("ISteamApps", "GetLaunchCommandLine", js_ISteamApps_GetLaunchCommandLine, 0);
	api_define_func("ISteamApps", "InstallDLC", js_ISteamApps_InstallDLC, 0);
	api_define_func("ISteamApps", "UninstallDLC", js_ISteamApps_UninstallDLC, 0);
	api_define_func("ISteamApps", "RequestAppProofOfPurchaseKey", js_ISteamApps_RequestAppProofOfPurchaseKey, 0);
	api_define_func("ISteamApps", "RequestAllProofOfPurchaseKeys", js_ISteamApps_RequestAllProofOfPurchaseKeys, 0);
	api_define_func("ISteamApps", "GetAppOwner", js_ISteamApps_GetAppOwner, 0);

	// ISteamInput
	api_define_func("ISteamInput", "Init", js_ISteamInput_Init, 0);
	api_define_func("ISteamInput", "Shutdown", js_ISteamInput_Shutdown, 0);
	api_define_func("ISteamInput", "SetInputActionManifestFilePath", js_ISteamInput_SetInputActionManifestFilePath, 0);
	api_define_func("ISteamInput", "BWaitForData", js_ISteamInput_BWaitForData, 0);
	api_define_func("ISteamInput", "BNewDataAvailable", js_ISteamInput_BNewDataAvailable, 0);
	api_define_func("ISteamInput", "ShowBindingPanel", js_ISteamInput_ShowBindingPanel, 0);
	api_define_func("ISteamInput", "GetDeviceBindingRevision", js_ISteamInput_GetDeviceBindingRevision, 0);
	api_define_func("ISteamInput", "RunFrame", js_ISteamInput_RunFrame, 0);
	api_define_func("ISteamInput", "EnableDeviceCallbacks", js_ISteamInput_EnableDeviceCallbacks, 0);
	api_define_func("ISteamInput", "ActivateActionSet", js_ISteamInput_ActivateActionSet, 0);
	api_define_func("ISteamInput", "ActivateActionSetLayer", js_ISteamInput_ActivateActionSetLayer, 0);
	api_define_func("ISteamInput", "DeactivateActionSetLayer", js_ISteamInput_DeactivateActionSetLayer, 0);
	api_define_func("ISteamInput", "DeactivateAllActionSetLayers", js_ISteamInput_DeactivateAllActionSetLayers, 0);
	api_define_func("ISteamInput", "StopAnalogActionMomentum", js_ISteamInput_StopAnalogActionMomentum, 0);
	api_define_func("ISteamInput", "TriggerVibration", js_ISteamInput_TriggerVibration, 0);
	api_define_func("ISteamInput", "TriggerVibrationExtended", js_ISteamInput_TriggerVibrationExtended, 0);
	api_define_func("ISteamInput", "TriggerSimpleHapticEvent", js_ISteamInput_TriggerSimpleHapticEvent, 0);
	api_define_func("ISteamInput", "SetLEDColor", js_ISteamInput_SetLEDColor, 0);
	api_define_func("ISteamInput", "TriggerHapticPulse", js_ISteamInput_Legacy_TriggerHapticPulse, 0);
	api_define_func("ISteamInput", "TriggerRepeatedHapticPulse", js_ISteamInput_Legacy_TriggerRepeatedHapticPulse, 0);
	api_define_func("ISteamInput", "GetConnectedControllers", js_ISteamInput_GetConnectedControllers, 0);
	api_define_func("ISteamInput", "GetActiveActionSetLayers", js_ISteamInput_GetActiveActionSetLayers, 0);
	api_define_func("ISteamInput", "GetDigitalActionOrigins", js_ISteamInput_GetDigitalActionOrigins, 0);
	api_define_func("ISteamInput", "GetAnalogActionOrigins", js_ISteamInput_GetAnalogActionOrigins, 0);
	api_define_func("ISteamInput", "GetGamepadIndexForController", js_ISteamInput_GetGamepadIndexForController, 0);
	api_define_func("ISteamInput", "GetActionSetHandle", js_ISteamInput_GetActionSetHandle, 0);
	api_define_func("ISteamInput", "GetCurrentActionSet", js_ISteamInput_GetCurrentActionSet, 0);
	api_define_func("ISteamInput", "GetDigitalActionHandle", js_ISteamInput_GetDigitalActionHandle, 0);
	api_define_func("ISteamInput", "GetAnalogActionHandle", js_ISteamInput_GetAnalogActionHandle, 0);
	api_define_func("ISteamInput", "GetControllerForGamepadIndex", js_ISteamInput_GetControllerForGamepadIndex, 0);
	api_define_func("ISteamInput", "GetDigitalActionData", js_ISteamInput_GetDigitalActionData, 0);
	api_define_func("ISteamInput", "GetStringForDigitalActionName", js_ISteamInput_GetStringForDigitalActionName, 0);
	api_define_func("ISteamInput", "GetGlyphPNGForActionOrigin", js_ISteamInput_GetGlyphPNGForActionOrigin, 0);
	api_define_func("ISteamInput", "GetGlyphSVGForActionOrigin", js_ISteamInput_GetGlyphSVGForActionOrigin, 0);
	api_define_func("ISteamInput", "Legacy", js_ISteamInput_GetGlyphForActionOrigin_Legacy, 0);
	api_define_func("ISteamInput", "GetStringForActionOrigin", js_ISteamInput_GetStringForActionOrigin, 0);
	api_define_func("ISteamInput", "GetStringForAnalogActionName", js_ISteamInput_GetStringForAnalogActionName, 0);
	api_define_func("ISteamInput", "GetStringForXboxOrigin", js_ISteamInput_GetStringForXboxOrigin, 0);
	api_define_func("ISteamInput", "GetGlyphForXboxOrigin", js_ISteamInput_GetGlyphForXboxOrigin, 0);
	api_define_func("ISteamInput", "GetAnalogActionData", js_ISteamInput_GetAnalogActionData, 0);
	api_define_func("ISteamInput", "GetMotionData", js_ISteamInput_GetMotionData, 0);
	api_define_func("ISteamInput", "GetInputTypeForHandle", js_ISteamInput_GetInputTypeForHandle, 0);
	api_define_func("ISteamInput", "GetActionOriginFromXboxOrigin", js_ISteamInput_GetActionOriginFromXboxOrigin, 0);
	api_define_func("ISteamInput", "TranslateActionOrigin", js_ISteamInput_TranslateActionOrigin, 0);
	api_define_func("ISteamInput", "GetRemotePlaySessionID", js_ISteamInput_GetRemotePlaySessionID, 0);
	api_define_func("ISteamInput", "GetSessionInputConfigurationSettings", js_ISteamInput_GetSessionInputConfigurationSettings, 0);
}

static bool
js_SteamAPI_Init(int num_args, bool is_ctor, intptr_t magic)
{
#ifdef _WIN32
	steam_api = LoadLibrary(TEXT("steam_api64.dll"));
#elif defined(__APPLE__)
	steam_api = dlopen("libsteam_api.dylib", RTLD_LAZY);
#else
	steam_api = dlopen("libsteam_api.so", RTLD_LAZY);
#endif
	if (steam_api)
	{
		FuncPtr_000 SteamAPI_Init;
		SteamAPI_Init = (FuncPtr_000)GETADDRESS(steam_api, "SteamInternal_SteamAPI_Init");
		if (SteamAPI_Init(NULL, NULL) == 0)
		{
			FuncPtr_002 SteamAPI_ManualDispatch_Init = (FuncPtr_002)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_Init");
			SteamAPI_ManualDispatch_Init();

			FuncPtr_003 SteamAPI_GetHSteamPipe = (FuncPtr_003)GETADDRESS(steam_api, "SteamAPI_GetHSteamPipe");
			hSteamPipe = SteamAPI_GetHSteamPipe();
			
			FuncPtr_001 ISteamUser_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamUser_v023");
			ISteamUser = ISteamUser_Accessor();

			FuncPtr_001 ISteamFriends_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamFriends_v017");
			ISteamFriends = ISteamFriends_Accessor();

			FuncPtr_001 ISteamUtils_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamUtils_v010");
			ISteamUtils = ISteamUtils_Accessor();

			FuncPtr_001 ISteamUserStats_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamUserStats_v012");
			ISteamUserStats = ISteamUserStats_Accessor();

			FuncPtr_001 ISteamApps_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamApps_v008");
			ISteamApps = ISteamApps_Accessor();

			FuncPtr_001 ISteamInput_Accessor = (FuncPtr_001)GETADDRESS(steam_api, "SteamAPI_SteamInput_v006");
			ISteamInput = ISteamInput_Accessor();
		}
		else
			jsal_error(JS_ERROR, "SteamAPI_Init() failed. Is Steam running or is steam_appid.txt missing from executable folder?");
	}
	else
		jsal_error(JS_ERROR, "Failed to link to 'steam_api64.dll'.");
	
	return false;
}

static bool
js_SteamAPI_RunCallbacks(int num_args, bool is_ctor, intptr_t magic)
{
	CallbackMsg_t callback;

	FuncPtr_004 SteamAPI_ManualDispatch_RunFrame;
	SteamAPI_ManualDispatch_RunFrame = (FuncPtr_004)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_RunFrame");
	SteamAPI_ManualDispatch_RunFrame(hSteamPipe);

	FuncPtr_005 SteamAPI_ManualDispatch_GetNextCallback;
	SteamAPI_ManualDispatch_GetNextCallback = (FuncPtr_005)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_GetNextCallback");

	int i = 0;
	jsal_push_new_array();

	while (SteamAPI_ManualDispatch_GetNextCallback(hSteamPipe, &callback))
	{
		switch (callback.m_iCallback)
		{
			case 331:
			{
				GameOverlayActivated_t* callbackStruct = (GameOverlayActivated_t *)callback.m_pubParam;
				jsal_push_new_object();
				const char* name = "GameOverlayActivated";
				jsal_push_string(name);
				jsal_put_prop_string(-2, "name");
				jsal_push_uint(callbackStruct->m_bActive);
				jsal_put_prop_string(-2, "m_bActive");
				jsal_push_boolean(callbackStruct->m_bUserInitiated);
				jsal_put_prop_string(-2, "m_bUserInitiated");
				jsal_push_uint(callbackStruct->m_nAppID);
				jsal_put_prop_string(-2, "m_nAppID");
				jsal_push_uint(callbackStruct->m_dwOverlayPID);
				jsal_put_prop_string(-2, "m_dwOverlayPID");
				jsal_put_prop_index(-2, i);
				i++;
				break;
			}
		}

		FuncPtr_004 SteamAPI_ManualDispatch_FreeLastCallback;
		SteamAPI_ManualDispatch_FreeLastCallback = (FuncPtr_004)GETADDRESS(steam_api, "SteamAPI_ManualDispatch_FreeLastCallback");
		SteamAPI_ManualDispatch_FreeLastCallback(hSteamPipe);
	}

	return true;
}

static bool
js_SteamAPI_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_002 SteamAPI_Shutdown;
	SteamAPI_Shutdown = (FuncPtr_002)GETADDRESS(steam_api, "SteamAPI_Shutdown");
	SteamAPI_Shutdown();

	return false;
}

static bool
js_ISteamUser_GetHSteamUser(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamUser_GetHSteamUser;

	ISteamUser_GetHSteamUser = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetHSteamUser");
	result = ISteamUser_GetHSteamUser(ISteamUser);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUser_GetGameBadgeLevel(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t nSeries;
	bool bFoil;
	int32_t result;
	FuncPtr_018 ISteamUser_GetGameBadgeLevel;

	nSeries = jsal_require_int(0);
	bFoil = jsal_require_boolean(1);

	ISteamUser_GetGameBadgeLevel = (FuncPtr_018)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetGameBadgeLevel");
	result = ISteamUser_GetGameBadgeLevel(ISteamUser, nSeries, bFoil);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUser_GetPlayerSteamLevel(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamUser_GetPlayerSteamLevel;

	ISteamUser_GetPlayerSteamLevel = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetPlayerSteamLevel");
	result = ISteamUser_GetPlayerSteamLevel(ISteamUser);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUser_BLoggedOn(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUser_BLoggedOn;

	ISteamUser_BLoggedOn = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BLoggedOn");
	result = ISteamUser_BLoggedOn(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_GetUserDataFolder(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchBuffer;
	int32_t cubBuffer;
	bool result;
	FuncPtr_010 ISteamUser_GetUserDataFolder;

	pchBuffer = (char*)jsal_require_string(0);
	cubBuffer = jsal_require_int(1);

	ISteamUser_GetUserDataFolder = (FuncPtr_010)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetUserDataFolder");
	result = ISteamUser_GetUserDataFolder(ISteamUser, pchBuffer, cubBuffer);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsBehindNAT(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUser_BIsBehindNAT;

	ISteamUser_BIsBehindNAT = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsBehindNAT");
	result = ISteamUser_BIsBehindNAT(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsPhoneVerified(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUser_BIsPhoneVerified;

	ISteamUser_BIsPhoneVerified = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsPhoneVerified");
	result = ISteamUser_BIsPhoneVerified(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsTwoFactorEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUser_BIsTwoFactorEnabled;

	ISteamUser_BIsTwoFactorEnabled = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsTwoFactorEnabled");
	result = ISteamUser_BIsTwoFactorEnabled(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsPhoneIdentifying(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUser_BIsPhoneIdentifying;

	ISteamUser_BIsPhoneIdentifying = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsPhoneIdentifying");
	result = ISteamUser_BIsPhoneIdentifying(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BIsPhoneRequiringVerification(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUser_BIsPhoneRequiringVerification;

	ISteamUser_BIsPhoneRequiringVerification = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BIsPhoneRequiringVerification");
	result = ISteamUser_BIsPhoneRequiringVerification(ISteamUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_BSetDurationControlOnlineState(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eNewState;
	bool result;
	FuncPtr_019 ISteamUser_BSetDurationControlOnlineState;

	eNewState = jsal_require_uint(0);

	ISteamUser_BSetDurationControlOnlineState = (FuncPtr_019)GETADDRESS(steam_api, "SteamAPI_ISteamUser_BSetDurationControlOnlineState");
	result = ISteamUser_BSetDurationControlOnlineState(ISteamUser, eNewState);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUser_GetSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_008 ISteamUser_GetSteamID;

	ISteamUser_GetSteamID = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetSteamID");
	result = ISteamUser_GetSteamID(ISteamUser);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamUser_TrackAppUsageEvent(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t gameID;
	int32_t eAppUsageEvent;
	const char * pchExtraInfo;
	FuncPtr_009 ISteamUser_TrackAppUsageEvent;

	gameID = jsal_require_number(0);
	eAppUsageEvent = jsal_require_int(1);
	pchExtraInfo = (char*)jsal_require_string(2);

	ISteamUser_TrackAppUsageEvent = (FuncPtr_009)GETADDRESS(steam_api, "SteamAPI_ISteamUser_TrackAppUsageEvent");
	ISteamUser_TrackAppUsageEvent(ISteamUser, gameID, eAppUsageEvent, pchExtraInfo);

	return false;
}

static bool
js_ISteamUser_StartVoiceRecording(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_011 ISteamUser_StartVoiceRecording;

	ISteamUser_StartVoiceRecording = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamUser_StartVoiceRecording");
	ISteamUser_StartVoiceRecording(ISteamUser);

	return false;
}

static bool
js_ISteamUser_StopVoiceRecording(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_011 ISteamUser_StopVoiceRecording;

	ISteamUser_StopVoiceRecording = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamUser_StopVoiceRecording");
	ISteamUser_StopVoiceRecording(ISteamUser);

	return false;
}

static bool
js_ISteamUser_EndAuthSession(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	FuncPtr_014 ISteamUser_EndAuthSession;

	steamID = jsal_require_number(0);

	ISteamUser_EndAuthSession = (FuncPtr_014)GETADDRESS(steam_api, "SteamAPI_ISteamUser_EndAuthSession");
	ISteamUser_EndAuthSession(ISteamUser, steamID);

	return false;
}

static bool
js_ISteamUser_CancelAuthTicket(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t hAuthTicket;
	FuncPtr_015 ISteamUser_CancelAuthTicket;

	hAuthTicket = jsal_require_uint(0);

	ISteamUser_CancelAuthTicket = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamUser_CancelAuthTicket");
	ISteamUser_CancelAuthTicket(ISteamUser, hAuthTicket);

	return false;
}

static bool
js_ISteamUser_AdvertiseGame(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDGameServer;
	uint32_t unIPServer;
	uint16_t usPortServer;
	FuncPtr_017 ISteamUser_AdvertiseGame;

	steamIDGameServer = jsal_require_number(0);
	unIPServer = jsal_require_uint(1);
	usPortServer = jsal_require_uint(2);

	ISteamUser_AdvertiseGame = (FuncPtr_017)GETADDRESS(steam_api, "SteamAPI_ISteamUser_AdvertiseGame");
	ISteamUser_AdvertiseGame(ISteamUser, steamIDGameServer, unIPServer, usPortServer);

	return false;
}

static bool
js_ISteamUser_GetVoiceOptimalSampleRate(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUser_GetVoiceOptimalSampleRate;

	ISteamUser_GetVoiceOptimalSampleRate = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetVoiceOptimalSampleRate");
	result = ISteamUser_GetVoiceOptimalSampleRate(ISteamUser);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUser_GetAuthTicketForWebApi(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchIdentity;
	uint32_t result;
	FuncPtr_013 ISteamUser_GetAuthTicketForWebApi;

	pchIdentity = (char*)jsal_require_string(0);

	ISteamUser_GetAuthTicketForWebApi = (FuncPtr_013)GETADDRESS(steam_api, "SteamAPI_ISteamUser_GetAuthTicketForWebApi");
	result = ISteamUser_GetAuthTicketForWebApi(ISteamUser, pchIdentity);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUser_UserHasLicenseForApp(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t appID;
	uint32_t result;
	FuncPtr_016 ISteamUser_UserHasLicenseForApp;

	steamID = jsal_require_number(0);
	appID = jsal_require_uint(1);

	ISteamUser_UserHasLicenseForApp = (FuncPtr_016)GETADDRESS(steam_api, "SteamAPI_ISteamUser_UserHasLicenseForApp");
	result = ISteamUser_UserHasLicenseForApp(ISteamUser, steamID, appID);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_020 ISteamFriends_GetPersonaName;

	ISteamFriends_GetPersonaName = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetPersonaName");
	result = ISteamFriends_GetPersonaName(ISteamFriends);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * result;
	FuncPtr_024 ISteamFriends_GetFriendPersonaName;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetFriendPersonaName = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaName");
	result = ISteamFriends_GetFriendPersonaName(ISteamFriends, steamIDFriend);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendPersonaNameHistory(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t iPersonaName;
	const char * result;
	FuncPtr_025 ISteamFriends_GetFriendPersonaNameHistory;

	steamIDFriend = jsal_require_number(0);
	iPersonaName = jsal_require_int(1);

	ISteamFriends_GetFriendPersonaNameHistory = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaNameHistory");
	result = ISteamFriends_GetFriendPersonaNameHistory(ISteamFriends, steamIDFriend, iPersonaName);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetPlayerNickname(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDPlayer;
	const char * result;
	FuncPtr_024 ISteamFriends_GetPlayerNickname;

	steamIDPlayer = jsal_require_number(0);

	ISteamFriends_GetPlayerNickname = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetPlayerNickname");
	result = ISteamFriends_GetPlayerNickname(ISteamFriends, steamIDPlayer);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupName(int num_args, bool is_ctor, intptr_t magic)
{
	int16_t friendsGroupID;
	const char * result;
	FuncPtr_028 ISteamFriends_GetFriendsGroupName;

	friendsGroupID = jsal_require_int(0);

	ISteamFriends_GetFriendsGroupName = (FuncPtr_028)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupName");
	result = ISteamFriends_GetFriendsGroupName(ISteamFriends, friendsGroupID);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetClanName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	const char * result;
	FuncPtr_024 ISteamFriends_GetClanName;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_GetClanName = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanName");
	result = ISteamFriends_GetClanName(ISteamFriends, steamIDClan);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetClanTag(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	const char * result;
	FuncPtr_024 ISteamFriends_GetClanTag;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_GetClanTag = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanTag");
	result = ISteamFriends_GetClanTag(ISteamFriends, steamIDClan);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * pchKey;
	const char * result;
	FuncPtr_044 ISteamFriends_GetFriendRichPresence;

	steamIDFriend = jsal_require_number(0);
	pchKey = (char*)jsal_require_string(1);

	ISteamFriends_GetFriendRichPresence = (FuncPtr_044)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresence");
	result = ISteamFriends_GetFriendRichPresence(ISteamFriends, steamIDFriend, pchKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRichPresenceKeyByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t iKey;
	const char * result;
	FuncPtr_025 ISteamFriends_GetFriendRichPresenceKeyByIndex;

	steamIDFriend = jsal_require_number(0);
	iKey = jsal_require_int(1);

	ISteamFriends_GetFriendRichPresenceKeyByIndex = (FuncPtr_025)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex");
	result = ISteamFriends_GetFriendRichPresenceKeyByIndex(ISteamFriends, steamIDFriend, iKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetProfileItemPropertyString(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t itemType;
	uint32_t prop;
	const char * result;
	FuncPtr_050 ISteamFriends_GetProfileItemPropertyString;

	steamID = jsal_require_number(0);
	itemType = jsal_require_uint(1);
	prop = jsal_require_uint(2);

	ISteamFriends_GetProfileItemPropertyString = (FuncPtr_050)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetProfileItemPropertyString");
	result = ISteamFriends_GetProfileItemPropertyString(ISteamFriends, steamID, itemType, prop);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamFriends_GetPersonaState(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamFriends_GetPersonaState;

	ISteamFriends_GetPersonaState = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetPersonaState");
	result = ISteamFriends_GetPersonaState(ISteamFriends);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRelationship(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_023 ISteamFriends_GetFriendRelationship;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetFriendRelationship = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRelationship");
	result = ISteamFriends_GetFriendRelationship(ISteamFriends, steamIDFriend);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendPersonaState(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_023 ISteamFriends_GetFriendPersonaState;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetFriendPersonaState = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaState");
	result = ISteamFriends_GetFriendPersonaState(ISteamFriends, steamIDFriend);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetUserRestrictions(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamFriends_GetUserRestrictions;

	ISteamFriends_GetUserRestrictions = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetUserRestrictions");
	result = ISteamFriends_GetUserRestrictions(ISteamFriends);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCoplayGame(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_023 ISteamFriends_GetFriendCoplayGame;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetFriendCoplayGame = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCoplayGame");
	result = ISteamFriends_GetFriendCoplayGame(ISteamFriends, steamIDFriend);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetProfileItemPropertyUint(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t itemType;
	uint32_t prop;
	uint32_t result;
	FuncPtr_051 ISteamFriends_GetProfileItemPropertyUint;

	steamID = jsal_require_number(0);
	itemType = jsal_require_uint(1);
	prop = jsal_require_uint(2);

	ISteamFriends_GetProfileItemPropertyUint = (FuncPtr_051)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetProfileItemPropertyUint");
	result = ISteamFriends_GetProfileItemPropertyUint(ISteamFriends, steamID, itemType, prop);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iFriendFlags;
	int32_t result;
	FuncPtr_021 ISteamFriends_GetFriendCount;

	iFriendFlags = jsal_require_int(0);

	ISteamFriends_GetFriendCount = (FuncPtr_021)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCount");
	result = ISteamFriends_GetFriendCount(ISteamFriends, iFriendFlags);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendSteamLevel(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetFriendSteamLevel;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetFriendSteamLevel = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendSteamLevel");
	result = ISteamFriends_GetFriendSteamLevel(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamFriends_GetFriendsGroupCount;

	ISteamFriends_GetFriendsGroupCount = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupCount");
	result = ISteamFriends_GetFriendsGroupCount(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupMembersCount(int num_args, bool is_ctor, intptr_t magic)
{
	int16_t friendsGroupID;
	int32_t result;
	FuncPtr_029 ISteamFriends_GetFriendsGroupMembersCount;

	friendsGroupID = jsal_require_int(0);

	ISteamFriends_GetFriendsGroupMembersCount = (FuncPtr_029)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupMembersCount");
	result = ISteamFriends_GetFriendsGroupMembersCount(ISteamFriends, friendsGroupID);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetClanCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamFriends_GetClanCount;

	ISteamFriends_GetClanCount = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanCount");
	result = ISteamFriends_GetClanCount(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCountFromSource(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDSource;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetFriendCountFromSource;

	steamIDSource = jsal_require_number(0);

	ISteamFriends_GetFriendCountFromSource = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCountFromSource");
	result = ISteamFriends_GetFriendCountFromSource(ISteamFriends, steamIDSource);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetSmallFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetSmallFriendAvatar;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetSmallFriendAvatar = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetSmallFriendAvatar");
	result = ISteamFriends_GetSmallFriendAvatar(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetMediumFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetMediumFriendAvatar;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetMediumFriendAvatar = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetMediumFriendAvatar");
	result = ISteamFriends_GetMediumFriendAvatar(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetLargeFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetLargeFriendAvatar;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetLargeFriendAvatar = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetLargeFriendAvatar");
	result = ISteamFriends_GetLargeFriendAvatar(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetClanOfficerCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetClanOfficerCount;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_GetClanOfficerCount = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanOfficerCount");
	result = ISteamFriends_GetClanOfficerCount(ISteamFriends, steamIDClan);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendRichPresenceKeyCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetFriendRichPresenceKeyCount;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetFriendRichPresenceKeyCount = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount");
	result = ISteamFriends_GetFriendRichPresenceKeyCount(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetCoplayFriendCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamFriends_GetCoplayFriendCount;

	ISteamFriends_GetCoplayFriendCount = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetCoplayFriendCount");
	result = ISteamFriends_GetCoplayFriendCount(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendCoplayTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetFriendCoplayTime;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_GetFriendCoplayTime = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendCoplayTime");
	result = ISteamFriends_GetFriendCoplayTime(ISteamFriends, steamIDFriend);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetClanChatMemberCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t result;
	FuncPtr_026 ISteamFriends_GetClanChatMemberCount;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_GetClanChatMemberCount = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanChatMemberCount");
	result = ISteamFriends_GetClanChatMemberCount(ISteamFriends, steamIDClan);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamFriends_GetNumChatsWithUnreadPriorityMessages;

	ISteamFriends_GetNumChatsWithUnreadPriorityMessages = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages");
	result = ISteamFriends_GetNumChatsWithUnreadPriorityMessages(ISteamFriends);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iFriend;
	int32_t iFriendFlags;
	uint64_t result;
	FuncPtr_022 ISteamFriends_GetFriendByIndex;

	iFriend = jsal_require_int(0);
	iFriendFlags = jsal_require_int(1);

	ISteamFriends_GetFriendByIndex = (FuncPtr_022)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendByIndex");
	result = ISteamFriends_GetFriendByIndex(ISteamFriends, iFriend, iFriendFlags);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamFriends_GetClanByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iClan;
	uint64_t result;
	FuncPtr_032 ISteamFriends_GetClanByIndex;

	iClan = jsal_require_int(0);

	ISteamFriends_GetClanByIndex = (FuncPtr_032)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanByIndex");
	result = ISteamFriends_GetClanByIndex(ISteamFriends, iClan);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendFromSourceByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDSource;
	int32_t iFriend;
	uint64_t result;
	FuncPtr_034 ISteamFriends_GetFriendFromSourceByIndex;

	steamIDSource = jsal_require_number(0);
	iFriend = jsal_require_int(1);

	ISteamFriends_GetFriendFromSourceByIndex = (FuncPtr_034)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendFromSourceByIndex");
	result = ISteamFriends_GetFriendFromSourceByIndex(ISteamFriends, steamIDSource, iFriend);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamFriends_GetClanOwner(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_042 ISteamFriends_GetClanOwner;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_GetClanOwner = (FuncPtr_042)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanOwner");
	result = ISteamFriends_GetClanOwner(ISteamFriends, steamIDClan);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamFriends_GetClanOfficerByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t iOfficer;
	uint64_t result;
	FuncPtr_034 ISteamFriends_GetClanOfficerByIndex;

	steamIDClan = jsal_require_number(0);
	iOfficer = jsal_require_int(1);

	ISteamFriends_GetClanOfficerByIndex = (FuncPtr_034)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanOfficerByIndex");
	result = ISteamFriends_GetClanOfficerByIndex(ISteamFriends, steamIDClan, iOfficer);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamFriends_GetCoplayFriend(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iCoplayFriend;
	uint64_t result;
	FuncPtr_032 ISteamFriends_GetCoplayFriend;

	iCoplayFriend = jsal_require_int(0);

	ISteamFriends_GetCoplayFriend = (FuncPtr_032)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetCoplayFriend");
	result = ISteamFriends_GetCoplayFriend(ISteamFriends, iCoplayFriend);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamFriends_GetChatMemberByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t iUser;
	uint64_t result;
	FuncPtr_034 ISteamFriends_GetChatMemberByIndex;

	steamIDClan = jsal_require_number(0);
	iUser = jsal_require_int(1);

	ISteamFriends_GetChatMemberByIndex = (FuncPtr_034)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetChatMemberByIndex");
	result = ISteamFriends_GetChatMemberByIndex(ISteamFriends, steamIDClan, iUser);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupIDByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iFG;
	int16_t result;
	FuncPtr_027 ISteamFriends_GetFriendsGroupIDByIndex;

	iFG = jsal_require_int(0);

	ISteamFriends_GetFriendsGroupIDByIndex = (FuncPtr_027)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex");
	result = ISteamFriends_GetFriendsGroupIDByIndex(ISteamFriends, iFG);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamFriends_GetFriendsGroupMembersList(int num_args, bool is_ctor, intptr_t magic)
{
	int16_t friendsGroupID;
	uint64_t * pOutSteamIDMembers;
	int32_t nMembersCount;
	FuncPtr_030 ISteamFriends_GetFriendsGroupMembersList;

	friendsGroupID = jsal_require_int(0);
	nMembersCount = jsal_require_int(1);

	if (!(pOutSteamIDMembers = (uint64_t *)calloc(nMembersCount, sizeof(uint64_t))))
		return false;

	ISteamFriends_GetFriendsGroupMembersList = (FuncPtr_030)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupMembersList");
	ISteamFriends_GetFriendsGroupMembersList(ISteamFriends, friendsGroupID, pOutSteamIDMembers, nMembersCount);

	int i;
	jsal_push_new_array();
	for (i = 0; i < (int)nMembersCount; ++i)
	{
		jsal_push_number(pOutSteamIDMembers[i]);
		jsal_put_prop_index(-2, i);
	}

	free (pOutSteamIDMembers);

	return true;
}

static bool
js_ISteamFriends_SetInGameVoiceSpeaking(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	bool bSpeaking;
	FuncPtr_036 ISteamFriends_SetInGameVoiceSpeaking;

	steamIDUser = jsal_require_number(0);
	bSpeaking = jsal_require_boolean(1);

	ISteamFriends_SetInGameVoiceSpeaking = (FuncPtr_036)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetInGameVoiceSpeaking");
	ISteamFriends_SetInGameVoiceSpeaking(ISteamFriends, steamIDUser, bSpeaking);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlay(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchDialog;
	FuncPtr_037 ISteamFriends_ActivateGameOverlay;

	pchDialog = (char*)jsal_require_string(0);

	ISteamFriends_ActivateGameOverlay = (FuncPtr_037)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlay");
	ISteamFriends_ActivateGameOverlay(ISteamFriends, pchDialog);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayToUser(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchDialog;
	uint64_t steamID;
	FuncPtr_038 ISteamFriends_ActivateGameOverlayToUser;

	pchDialog = (char*)jsal_require_string(0);
	steamID = jsal_require_number(1);

	ISteamFriends_ActivateGameOverlayToUser = (FuncPtr_038)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToUser");
	ISteamFriends_ActivateGameOverlayToUser(ISteamFriends, pchDialog, steamID);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayToWebPage(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchURL;
	uint32_t eMode;
	FuncPtr_039 ISteamFriends_ActivateGameOverlayToWebPage;

	pchURL = (char*)jsal_require_string(0);
	eMode = jsal_require_uint(1);

	ISteamFriends_ActivateGameOverlayToWebPage = (FuncPtr_039)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage");
	ISteamFriends_ActivateGameOverlayToWebPage(ISteamFriends, pchURL, eMode);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayToStore(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	uint32_t eFlag;
	FuncPtr_040 ISteamFriends_ActivateGameOverlayToStore;

	nAppID = jsal_require_uint(0);
	eFlag = jsal_require_uint(1);

	ISteamFriends_ActivateGameOverlayToStore = (FuncPtr_040)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToStore");
	ISteamFriends_ActivateGameOverlayToStore(ISteamFriends, nAppID, eFlag);

	return false;
}

static bool
js_ISteamFriends_SetPlayedWith(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUserPlayedWith;
	FuncPtr_014 ISteamFriends_SetPlayedWith;

	steamIDUserPlayedWith = jsal_require_number(0);

	ISteamFriends_SetPlayedWith = (FuncPtr_014)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetPlayedWith");
	ISteamFriends_SetPlayedWith(ISteamFriends, steamIDUserPlayedWith);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayInviteDialog(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDLobby;
	FuncPtr_014 ISteamFriends_ActivateGameOverlayInviteDialog;

	steamIDLobby = jsal_require_number(0);

	ISteamFriends_ActivateGameOverlayInviteDialog = (FuncPtr_014)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog");
	ISteamFriends_ActivateGameOverlayInviteDialog(ISteamFriends, steamIDLobby);

	return false;
}

static bool
js_ISteamFriends_ClearRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_011 ISteamFriends_ClearRichPresence;

	ISteamFriends_ClearRichPresence = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ClearRichPresence");
	ISteamFriends_ClearRichPresence(ISteamFriends);

	return false;
}

static bool
js_ISteamFriends_RequestFriendRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	FuncPtr_014 ISteamFriends_RequestFriendRichPresence;

	steamIDFriend = jsal_require_number(0);

	ISteamFriends_RequestFriendRichPresence = (FuncPtr_014)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RequestFriendRichPresence");
	ISteamFriends_RequestFriendRichPresence(ISteamFriends, steamIDFriend);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDLobby;
	FuncPtr_014 ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog;

	steamIDLobby = jsal_require_number(0);

	ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog = (FuncPtr_014)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog");
	ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(ISteamFriends, steamIDLobby);

	return false;
}

static bool
js_ISteamFriends_ActivateGameOverlayInviteDialogConnectString(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchConnectString;
	FuncPtr_037 ISteamFriends_ActivateGameOverlayInviteDialogConnectString;

	pchConnectString = (char*)jsal_require_string(0);

	ISteamFriends_ActivateGameOverlayInviteDialogConnectString = (FuncPtr_037)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString");
	ISteamFriends_ActivateGameOverlayInviteDialogConnectString(ISteamFriends, pchConnectString);

	return false;
}

static bool
js_ISteamFriends_HasFriend(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	int32_t iFriendFlags;
	bool result;
	FuncPtr_031 ISteamFriends_HasFriend;

	steamIDFriend = jsal_require_number(0);
	iFriendFlags = jsal_require_int(1);

	ISteamFriends_HasFriend = (FuncPtr_031)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_HasFriend");
	result = ISteamFriends_HasFriend(ISteamFriends, steamIDFriend, iFriendFlags);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_GetClanActivityCounts(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	int32_t pnOnline;
	int32_t pnInGame;
	int32_t pnChatting;
	bool result;
	FuncPtr_033 ISteamFriends_GetClanActivityCounts;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_GetClanActivityCounts = (FuncPtr_033)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_GetClanActivityCounts");
	result = ISteamFriends_GetClanActivityCounts(ISteamFriends, steamIDClan, &pnOnline, &pnInGame, &pnChatting);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pnOnline);
	jsal_put_prop_string(-2, "pnOnline");
	jsal_push_int(pnInGame);
	jsal_put_prop_string(-2, "pnInGame");
	jsal_push_int(pnChatting);
	jsal_put_prop_string(-2, "pnChatting");

	return true;
}

static bool
js_ISteamFriends_IsUserInSource(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	uint64_t steamIDSource;
	bool result;
	FuncPtr_035 ISteamFriends_IsUserInSource;

	steamIDUser = jsal_require_number(0);
	steamIDSource = jsal_require_number(1);

	ISteamFriends_IsUserInSource = (FuncPtr_035)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsUserInSource");
	result = ISteamFriends_IsUserInSource(ISteamFriends, steamIDUser, steamIDSource);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_RequestUserInformation(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	bool bRequireNameOnly;
	bool result;
	FuncPtr_041 ISteamFriends_RequestUserInformation;

	steamIDUser = jsal_require_number(0);
	bRequireNameOnly = jsal_require_boolean(1);

	ISteamFriends_RequestUserInformation = (FuncPtr_041)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RequestUserInformation");
	result = ISteamFriends_RequestUserInformation(ISteamFriends, steamIDUser, bRequireNameOnly);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_SetRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchKey;
	const char * pchValue;
	bool result;
	FuncPtr_043 ISteamFriends_SetRichPresence;

	pchKey = (char*)jsal_require_string(0);
	pchValue = (char*)jsal_require_string(1);

	ISteamFriends_SetRichPresence = (FuncPtr_043)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetRichPresence");
	result = ISteamFriends_SetRichPresence(ISteamFriends, pchKey, pchValue);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_InviteUserToGame(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * pchConnectString;
	bool result;
	FuncPtr_045 ISteamFriends_InviteUserToGame;

	steamIDFriend = jsal_require_number(0);
	pchConnectString = (char*)jsal_require_string(1);

	ISteamFriends_InviteUserToGame = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_InviteUserToGame");
	result = ISteamFriends_InviteUserToGame(ISteamFriends, steamIDFriend, pchConnectString);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_LeaveClanChatRoom(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	bool result;
	FuncPtr_046 ISteamFriends_LeaveClanChatRoom;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_LeaveClanChatRoom = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_LeaveClanChatRoom");
	result = ISteamFriends_LeaveClanChatRoom(ISteamFriends, steamIDClan);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_SendClanChatMessage(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	const char * pchText;
	bool result;
	FuncPtr_045 ISteamFriends_SendClanChatMessage;

	steamIDClanChat = jsal_require_number(0);
	pchText = (char*)jsal_require_string(1);

	ISteamFriends_SendClanChatMessage = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SendClanChatMessage");
	result = ISteamFriends_SendClanChatMessage(ISteamFriends, steamIDClanChat, pchText);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanChatAdmin(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	uint64_t steamIDUser;
	bool result;
	FuncPtr_035 ISteamFriends_IsClanChatAdmin;

	steamIDClanChat = jsal_require_number(0);
	steamIDUser = jsal_require_number(1);

	ISteamFriends_IsClanChatAdmin = (FuncPtr_035)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanChatAdmin");
	result = ISteamFriends_IsClanChatAdmin(ISteamFriends, steamIDClanChat, steamIDUser);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanChatWindowOpenInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_046 ISteamFriends_IsClanChatWindowOpenInSteam;

	steamIDClanChat = jsal_require_number(0);

	ISteamFriends_IsClanChatWindowOpenInSteam = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam");
	result = ISteamFriends_IsClanChatWindowOpenInSteam(ISteamFriends, steamIDClanChat);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_OpenClanChatWindowInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_046 ISteamFriends_OpenClanChatWindowInSteam;

	steamIDClanChat = jsal_require_number(0);

	ISteamFriends_OpenClanChatWindowInSteam = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_OpenClanChatWindowInSteam");
	result = ISteamFriends_OpenClanChatWindowInSteam(ISteamFriends, steamIDClanChat);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_CloseClanChatWindowInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_046 ISteamFriends_CloseClanChatWindowInSteam;

	steamIDClanChat = jsal_require_number(0);

	ISteamFriends_CloseClanChatWindowInSteam = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_CloseClanChatWindowInSteam");
	result = ISteamFriends_CloseClanChatWindowInSteam(ISteamFriends, steamIDClanChat);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_SetListenForFriendsMessages(int num_args, bool is_ctor, intptr_t magic)
{
	bool bInterceptEnabled;
	bool result;
	FuncPtr_047 ISteamFriends_SetListenForFriendsMessages;

	bInterceptEnabled = jsal_require_boolean(0);

	ISteamFriends_SetListenForFriendsMessages = (FuncPtr_047)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_SetListenForFriendsMessages");
	result = ISteamFriends_SetListenForFriendsMessages(ISteamFriends, bInterceptEnabled);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_ReplyToFriendMessage(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDFriend;
	const char * pchMsgToSend;
	bool result;
	FuncPtr_045 ISteamFriends_ReplyToFriendMessage;

	steamIDFriend = jsal_require_number(0);
	pchMsgToSend = (char*)jsal_require_string(1);

	ISteamFriends_ReplyToFriendMessage = (FuncPtr_045)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_ReplyToFriendMessage");
	result = ISteamFriends_ReplyToFriendMessage(ISteamFriends, steamIDFriend, pchMsgToSend);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanPublic(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	bool result;
	FuncPtr_046 ISteamFriends_IsClanPublic;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_IsClanPublic = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanPublic");
	result = ISteamFriends_IsClanPublic(ISteamFriends, steamIDClan);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_IsClanOfficialGameGroup(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDClan;
	bool result;
	FuncPtr_046 ISteamFriends_IsClanOfficialGameGroup;

	steamIDClan = jsal_require_number(0);

	ISteamFriends_IsClanOfficialGameGroup = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_IsClanOfficialGameGroup");
	result = ISteamFriends_IsClanOfficialGameGroup(ISteamFriends, steamIDClan);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_RegisterProtocolInOverlayBrowser(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchProtocol;
	bool result;
	FuncPtr_048 ISteamFriends_RegisterProtocolInOverlayBrowser;

	pchProtocol = (char*)jsal_require_string(0);

	ISteamFriends_RegisterProtocolInOverlayBrowser = (FuncPtr_048)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser");
	result = ISteamFriends_RegisterProtocolInOverlayBrowser(ISteamFriends, pchProtocol);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamFriends_BHasEquippedProfileItem(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamID;
	uint32_t itemType;
	bool result;
	FuncPtr_049 ISteamFriends_BHasEquippedProfileItem;

	steamID = jsal_require_number(0);
	itemType = jsal_require_uint(1);

	ISteamFriends_BHasEquippedProfileItem = (FuncPtr_049)GETADDRESS(steam_api, "SteamAPI_ISteamFriends_BHasEquippedProfileItem");
	result = ISteamFriends_BHasEquippedProfileItem(ISteamFriends, steamID, itemType);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_GetSecondsSinceAppActive(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUtils_GetSecondsSinceAppActive;

	ISteamUtils_GetSecondsSinceAppActive = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetSecondsSinceAppActive");
	result = ISteamUtils_GetSecondsSinceAppActive(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetSecondsSinceComputerActive(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUtils_GetSecondsSinceComputerActive;

	ISteamUtils_GetSecondsSinceComputerActive = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetSecondsSinceComputerActive");
	result = ISteamUtils_GetSecondsSinceComputerActive(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetConnectedUniverse(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUtils_GetConnectedUniverse;

	ISteamUtils_GetConnectedUniverse = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetConnectedUniverse");
	result = ISteamUtils_GetConnectedUniverse(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetServerRealTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUtils_GetServerRealTime;

	ISteamUtils_GetServerRealTime = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetServerRealTime");
	result = ISteamUtils_GetServerRealTime(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetAppID(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUtils_GetAppID;

	ISteamUtils_GetAppID = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetAppID");
	result = ISteamUtils_GetAppID(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetAPICallFailureReason(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamAPICall;
	uint32_t result;
	FuncPtr_023 ISteamUtils_GetAPICallFailureReason;

	hSteamAPICall = jsal_require_number(0);

	ISteamUtils_GetAPICallFailureReason = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetAPICallFailureReason");
	result = ISteamUtils_GetAPICallFailureReason(ISteamUtils, hSteamAPICall);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetIPCCallCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUtils_GetIPCCallCount;

	ISteamUtils_GetIPCCallCount = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetIPCCallCount");
	result = ISteamUtils_GetIPCCallCount(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetEnteredGamepadTextLength(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUtils_GetEnteredGamepadTextLength;

	ISteamUtils_GetEnteredGamepadTextLength = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetEnteredGamepadTextLength");
	result = ISteamUtils_GetEnteredGamepadTextLength(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetIPv6ConnectivityState(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eProtocol;
	uint32_t result;
	FuncPtr_061 ISteamUtils_GetIPv6ConnectivityState;

	eProtocol = jsal_require_uint(0);

	ISteamUtils_GetIPv6ConnectivityState = (FuncPtr_061)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetIPv6ConnectivityState");
	result = ISteamUtils_GetIPv6ConnectivityState(ISteamUtils, eProtocol);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_GetIPCountry(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_020 ISteamUtils_GetIPCountry;

	ISteamUtils_GetIPCountry = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetIPCountry");
	result = ISteamUtils_GetIPCountry(ISteamUtils);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUtils_GetSteamUILanguage(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_020 ISteamUtils_GetSteamUILanguage;

	ISteamUtils_GetSteamUILanguage = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetSteamUILanguage");
	result = ISteamUtils_GetSteamUILanguage(ISteamUtils);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUtils_GetImageSize(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iImage;
	uint32_t pnWidth;
	uint32_t pnHeight;
	bool result;
	FuncPtr_052 ISteamUtils_GetImageSize;

	iImage = jsal_require_int(0);

	ISteamUtils_GetImageSize = (FuncPtr_052)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetImageSize");
	result = ISteamUtils_GetImageSize(ISteamUtils, iImage, &pnWidth, &pnHeight);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(pnWidth);
	jsal_put_prop_string(-2, "pnWidth");
	jsal_push_uint(pnHeight);
	jsal_put_prop_string(-2, "pnHeight");

	return true;
}

static bool
js_ISteamUtils_GetImageRGBA(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iImage;
	uint8_t pubDest;
	int32_t nDestBufferSize;
	bool result;
	FuncPtr_053 ISteamUtils_GetImageRGBA;

	iImage = jsal_require_int(0);
	nDestBufferSize = jsal_require_int(1);

	ISteamUtils_GetImageRGBA = (FuncPtr_053)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetImageRGBA");
	result = ISteamUtils_GetImageRGBA(ISteamUtils, iImage, &pubDest, nDestBufferSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(pubDest);
	jsal_put_prop_string(-2, "pubDest");

	return true;
}

static bool
js_ISteamUtils_IsAPICallCompleted(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamAPICall;
	bool pbFailed;
	bool result;
	FuncPtr_055 ISteamUtils_IsAPICallCompleted;

	hSteamAPICall = jsal_require_number(0);

	ISteamUtils_IsAPICallCompleted = (FuncPtr_055)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsAPICallCompleted");
	result = ISteamUtils_IsAPICallCompleted(ISteamUtils, hSteamAPICall, &pbFailed);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbFailed);
	jsal_put_prop_string(-2, "pbFailed");

	return true;
}

static bool
js_ISteamUtils_IsOverlayEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_IsOverlayEnabled;

	ISteamUtils_IsOverlayEnabled = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsOverlayEnabled");
	result = ISteamUtils_IsOverlayEnabled(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_BOverlayNeedsPresent(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_BOverlayNeedsPresent;

	ISteamUtils_BOverlayNeedsPresent = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_BOverlayNeedsPresent");
	result = ISteamUtils_BOverlayNeedsPresent(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_ShowGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eInputMode;
	uint32_t eLineInputMode;
	const char * pchDescription;
	uint32_t unCharMax;
	const char * pchExistingText;
	bool result;
	FuncPtr_056 ISteamUtils_ShowGamepadTextInput;

	eInputMode = jsal_require_uint(0);
	eLineInputMode = jsal_require_uint(1);
	pchDescription = (char*)jsal_require_string(2);
	unCharMax = jsal_require_uint(3);
	pchExistingText = (char*)jsal_require_string(4);

	ISteamUtils_ShowGamepadTextInput = (FuncPtr_056)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_ShowGamepadTextInput");
	result = ISteamUtils_ShowGamepadTextInput(ISteamUtils, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_GetEnteredGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchText;
	uint32_t cchText;
	bool result;
	FuncPtr_057 ISteamUtils_GetEnteredGamepadTextInput;

	pchText = (char*)jsal_require_string(0);
	cchText = jsal_require_uint(1);

	ISteamUtils_GetEnteredGamepadTextInput = (FuncPtr_057)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetEnteredGamepadTextInput");
	result = ISteamUtils_GetEnteredGamepadTextInput(ISteamUtils, pchText, cchText);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsSteamRunningInVR(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_IsSteamRunningInVR;

	ISteamUtils_IsSteamRunningInVR = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamRunningInVR");
	result = ISteamUtils_IsSteamRunningInVR(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsSteamInBigPictureMode(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_IsSteamInBigPictureMode;

	ISteamUtils_IsSteamInBigPictureMode = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamInBigPictureMode");
	result = ISteamUtils_IsSteamInBigPictureMode(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsVRHeadsetStreamingEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_IsVRHeadsetStreamingEnabled;

	ISteamUtils_IsVRHeadsetStreamingEnabled = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled");
	result = ISteamUtils_IsVRHeadsetStreamingEnabled(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsSteamChinaLauncher(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_IsSteamChinaLauncher;

	ISteamUtils_IsSteamChinaLauncher = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamChinaLauncher");
	result = ISteamUtils_IsSteamChinaLauncher(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_InitFilterText(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t unFilterOptions;
	bool result;
	FuncPtr_019 ISteamUtils_InitFilterText;

	unFilterOptions = jsal_require_uint(0);

	ISteamUtils_InitFilterText = (FuncPtr_019)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_InitFilterText");
	result = ISteamUtils_InitFilterText(ISteamUtils, unFilterOptions);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_IsSteamRunningOnSteamDeck(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_IsSteamRunningOnSteamDeck;

	ISteamUtils_IsSteamRunningOnSteamDeck = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck");
	result = ISteamUtils_IsSteamRunningOnSteamDeck(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_ShowFloatingGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eKeyboardMode;
	int32_t nTextFieldXPosition;
	int32_t nTextFieldYPosition;
	int32_t nTextFieldWidth;
	int32_t nTextFieldHeight;
	bool result;
	FuncPtr_062 ISteamUtils_ShowFloatingGamepadTextInput;

	eKeyboardMode = jsal_require_uint(0);
	nTextFieldXPosition = jsal_require_int(1);
	nTextFieldYPosition = jsal_require_int(2);
	nTextFieldWidth = jsal_require_int(3);
	nTextFieldHeight = jsal_require_int(4);

	ISteamUtils_ShowFloatingGamepadTextInput = (FuncPtr_062)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput");
	result = ISteamUtils_ShowFloatingGamepadTextInput(ISteamUtils, eKeyboardMode, nTextFieldXPosition, nTextFieldYPosition, nTextFieldWidth, nTextFieldHeight);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_DismissFloatingGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUtils_DismissFloatingGamepadTextInput;

	ISteamUtils_DismissFloatingGamepadTextInput = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput");
	result = ISteamUtils_DismissFloatingGamepadTextInput(ISteamUtils);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUtils_GetCurrentBatteryPower(int num_args, bool is_ctor, intptr_t magic)
{
	uint8_t result;
	FuncPtr_054 ISteamUtils_GetCurrentBatteryPower;

	ISteamUtils_GetCurrentBatteryPower = (FuncPtr_054)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_GetCurrentBatteryPower");
	result = ISteamUtils_GetCurrentBatteryPower(ISteamUtils);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUtils_SetOverlayNotificationPosition(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eNotificationPosition;
	FuncPtr_015 ISteamUtils_SetOverlayNotificationPosition;

	eNotificationPosition = jsal_require_uint(0);

	ISteamUtils_SetOverlayNotificationPosition = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetOverlayNotificationPosition");
	ISteamUtils_SetOverlayNotificationPosition(ISteamUtils, eNotificationPosition);

	return false;
}

static bool
js_ISteamUtils_SetOverlayNotificationInset(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t nHorizontalInset;
	int32_t nVerticalInset;
	FuncPtr_058 ISteamUtils_SetOverlayNotificationInset;

	nHorizontalInset = jsal_require_int(0);
	nVerticalInset = jsal_require_int(1);

	ISteamUtils_SetOverlayNotificationInset = (FuncPtr_058)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetOverlayNotificationInset");
	ISteamUtils_SetOverlayNotificationInset(ISteamUtils, nHorizontalInset, nVerticalInset);

	return false;
}

static bool
js_ISteamUtils_StartVRDashboard(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_011 ISteamUtils_StartVRDashboard;

	ISteamUtils_StartVRDashboard = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_StartVRDashboard");
	ISteamUtils_StartVRDashboard(ISteamUtils);

	return false;
}

static bool
js_ISteamUtils_SetVRHeadsetStreamingEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	bool bEnabled;
	FuncPtr_059 ISteamUtils_SetVRHeadsetStreamingEnabled;

	bEnabled = jsal_require_boolean(0);

	ISteamUtils_SetVRHeadsetStreamingEnabled = (FuncPtr_059)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled");
	ISteamUtils_SetVRHeadsetStreamingEnabled(ISteamUtils, bEnabled);

	return false;
}

static bool
js_ISteamUtils_SetGameLauncherMode(int num_args, bool is_ctor, intptr_t magic)
{
	bool bLauncherMode;
	FuncPtr_059 ISteamUtils_SetGameLauncherMode;

	bLauncherMode = jsal_require_boolean(0);

	ISteamUtils_SetGameLauncherMode = (FuncPtr_059)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_SetGameLauncherMode");
	ISteamUtils_SetGameLauncherMode(ISteamUtils, bLauncherMode);

	return false;
}

static bool
js_ISteamUtils_FilterText(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eContext;
	uint64_t sourceSteamID;
	const char * pchInputMessage;
	char * pchOutFilteredText;
	uint32_t nByteSizeOutFilteredText;
	int32_t result;
	FuncPtr_060 ISteamUtils_FilterText;

	eContext = jsal_require_uint(0);
	sourceSteamID = jsal_require_number(1);
	pchInputMessage = (char*)jsal_require_string(2);
	pchOutFilteredText = (char*)jsal_require_string(3);
	nByteSizeOutFilteredText = jsal_require_uint(4);

	ISteamUtils_FilterText = (FuncPtr_060)GETADDRESS(steam_api, "SteamAPI_ISteamUtils_FilterText");
	result = ISteamUtils_FilterText(ISteamUtils, eContext, sourceSteamID, pchInputMessage, pchOutFilteredText, nByteSizeOutFilteredText);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUserStats_RequestCurrentStats(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUserStats_RequestCurrentStats;

	ISteamUserStats_RequestCurrentStats = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_RequestCurrentStats");
	result = ISteamUserStats_RequestCurrentStats(ISteamUserStats);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t pData;
	bool result;
	FuncPtr_063 ISteamUserStats_GetStatInt32;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetStatInt32 = (FuncPtr_063)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetStatInt32");
	result = ISteamUserStats_GetStatInt32(ISteamUserStats, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float pData;
	bool result;
	FuncPtr_064 ISteamUserStats_GetStatFloat;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetStatFloat = (FuncPtr_064)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetStatFloat");
	result = ISteamUserStats_GetStatFloat(ISteamUserStats, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_SetStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t nData;
	bool result;
	FuncPtr_065 ISteamUserStats_SetStatInt32;

	pchName = (char*)jsal_require_string(0);
	nData = jsal_require_int(1);

	ISteamUserStats_SetStatInt32 = (FuncPtr_065)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_SetStatInt32");
	result = ISteamUserStats_SetStatInt32(ISteamUserStats, pchName, nData);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_SetStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float fData;
	bool result;
	FuncPtr_066 ISteamUserStats_SetStatFloat;

	pchName = (char*)jsal_require_string(0);
	fData = jsal_require_number(1);

	ISteamUserStats_SetStatFloat = (FuncPtr_066)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_SetStatFloat");
	result = ISteamUserStats_SetStatFloat(ISteamUserStats, pchName, fData);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_UpdateAvgRateStat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float flCountThisSession;
	double dSessionLength;
	bool result;
	FuncPtr_067 ISteamUserStats_UpdateAvgRateStat;

	pchName = (char*)jsal_require_string(0);
	flCountThisSession = jsal_require_number(1);
	dSessionLength = jsal_require_number(2);

	ISteamUserStats_UpdateAvgRateStat = (FuncPtr_067)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_UpdateAvgRateStat");
	result = ISteamUserStats_UpdateAvgRateStat(ISteamUserStats, pchName, flCountThisSession, dSessionLength);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool pbAchieved;
	bool result;
	FuncPtr_068 ISteamUserStats_GetAchievement;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievement = (FuncPtr_068)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievement");
	result = ISteamUserStats_GetAchievement(ISteamUserStats, pchName, &pbAchieved);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	return true;
}

static bool
js_ISteamUserStats_SetAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool result;
	FuncPtr_048 ISteamUserStats_SetAchievement;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_SetAchievement = (FuncPtr_048)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_SetAchievement");
	result = ISteamUserStats_SetAchievement(ISteamUserStats, pchName);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_ClearAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool result;
	FuncPtr_048 ISteamUserStats_ClearAchievement;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_ClearAchievement = (FuncPtr_048)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_ClearAchievement");
	result = ISteamUserStats_ClearAchievement(ISteamUserStats, pchName);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementAndUnlockTime(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	bool pbAchieved;
	uint32_t punUnlockTime;
	bool result;
	FuncPtr_069 ISteamUserStats_GetAchievementAndUnlockTime;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementAndUnlockTime = (FuncPtr_069)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime");
	result = ISteamUserStats_GetAchievementAndUnlockTime(ISteamUserStats, pchName, &pbAchieved, &punUnlockTime);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");
	jsal_push_uint(punUnlockTime);
	jsal_put_prop_string(-2, "punUnlockTime");

	return true;
}

static bool
js_ISteamUserStats_StoreStats(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamUserStats_StoreStats;

	ISteamUserStats_StoreStats = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_StoreStats");
	result = ISteamUserStats_StoreStats(ISteamUserStats);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_IndicateAchievementProgress(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	uint32_t nCurProgress;
	uint32_t nMaxProgress;
	bool result;
	FuncPtr_072 ISteamUserStats_IndicateAchievementProgress;

	pchName = (char*)jsal_require_string(0);
	nCurProgress = jsal_require_uint(1);
	nMaxProgress = jsal_require_uint(2);

	ISteamUserStats_IndicateAchievementProgress = (FuncPtr_072)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_IndicateAchievementProgress");
	result = ISteamUserStats_IndicateAchievementProgress(ISteamUserStats, pchName, nCurProgress, nMaxProgress);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetUserStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	int32_t pData;
	bool result;
	FuncPtr_074 ISteamUserStats_GetUserStatInt32;

	steamIDUser = jsal_require_number(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserStatInt32 = (FuncPtr_074)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserStatInt32");
	result = ISteamUserStats_GetUserStatInt32(ISteamUserStats, steamIDUser, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetUserStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	float pData;
	bool result;
	FuncPtr_075 ISteamUserStats_GetUserStatFloat;

	steamIDUser = jsal_require_number(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserStatFloat = (FuncPtr_075)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserStatFloat");
	result = ISteamUserStats_GetUserStatFloat(ISteamUserStats, steamIDUser, pchName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetUserAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	bool pbAchieved;
	bool result;
	FuncPtr_076 ISteamUserStats_GetUserAchievement;

	steamIDUser = jsal_require_number(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserAchievement = (FuncPtr_076)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserAchievement");
	result = ISteamUserStats_GetUserAchievement(ISteamUserStats, steamIDUser, pchName, &pbAchieved);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	return true;
}

static bool
js_ISteamUserStats_GetUserAchievementAndUnlockTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t steamIDUser;
	const char * pchName;
	bool pbAchieved;
	uint32_t punUnlockTime;
	bool result;
	FuncPtr_077 ISteamUserStats_GetUserAchievementAndUnlockTime;

	steamIDUser = jsal_require_number(0);
	pchName = (char*)jsal_require_string(1);

	ISteamUserStats_GetUserAchievementAndUnlockTime = (FuncPtr_077)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime");
	result = ISteamUserStats_GetUserAchievementAndUnlockTime(ISteamUserStats, steamIDUser, pchName, &pbAchieved, &punUnlockTime);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");
	jsal_push_uint(punUnlockTime);
	jsal_put_prop_string(-2, "punUnlockTime");

	return true;
}

static bool
js_ISteamUserStats_ResetAllStats(int num_args, bool is_ctor, intptr_t magic)
{
	bool bAchievementsToo;
	bool result;
	FuncPtr_047 ISteamUserStats_ResetAllStats;

	bAchievementsToo = jsal_require_boolean(0);

	ISteamUserStats_ResetAllStats = (FuncPtr_047)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_ResetAllStats");
	result = ISteamUserStats_ResetAllStats(ISteamUserStats, bAchievementsToo);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementAchievedPercent(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float pflPercent;
	bool result;
	FuncPtr_064 ISteamUserStats_GetAchievementAchievedPercent;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementAchievedPercent = (FuncPtr_064)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementAchievedPercent");
	result = ISteamUserStats_GetAchievementAchievedPercent(ISteamUserStats, pchName, &pflPercent);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pflPercent);
	jsal_put_prop_string(-2, "pflPercent");

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatInt64(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	int64_t pData;
	bool result;
	FuncPtr_080 ISteamUserStats_GetGlobalStatInt64;

	pchStatName = (char*)jsal_require_string(0);

	ISteamUserStats_GetGlobalStatInt64 = (FuncPtr_080)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatInt64");
	result = ISteamUserStats_GetGlobalStatInt64(ISteamUserStats, pchStatName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatDouble(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	double pData;
	bool result;
	FuncPtr_081 ISteamUserStats_GetGlobalStatDouble;

	pchStatName = (char*)jsal_require_string(0);

	ISteamUserStats_GetGlobalStatDouble = (FuncPtr_081)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatDouble");
	result = ISteamUserStats_GetGlobalStatDouble(ISteamUserStats, pchStatName, &pData);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pData);
	jsal_put_prop_string(-2, "pData");

	return true;
}

static bool
js_ISteamUserStats_GetAchievementProgressLimitsInt32(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t pnMinProgress;
	int32_t pnMaxProgress;
	bool result;
	FuncPtr_084 ISteamUserStats_GetAchievementProgressLimitsInt32;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementProgressLimitsInt32 = (FuncPtr_084)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32");
	result = ISteamUserStats_GetAchievementProgressLimitsInt32(ISteamUserStats, pchName, &pnMinProgress, &pnMaxProgress);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pnMinProgress);
	jsal_put_prop_string(-2, "pnMinProgress");
	jsal_push_int(pnMaxProgress);
	jsal_put_prop_string(-2, "pnMaxProgress");

	return true;
}

static bool
js_ISteamUserStats_GetAchievementProgressLimitsFloat(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	float pfMinProgress;
	float pfMaxProgress;
	bool result;
	FuncPtr_085 ISteamUserStats_GetAchievementProgressLimitsFloat;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementProgressLimitsFloat = (FuncPtr_085)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat");
	result = ISteamUserStats_GetAchievementProgressLimitsFloat(ISteamUserStats, pchName, &pfMinProgress, &pfMaxProgress);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pfMinProgress);
	jsal_put_prop_string(-2, "pfMinProgress");
	jsal_push_number(pfMaxProgress);
	jsal_put_prop_string(-2, "pfMaxProgress");

	return true;
}

static bool
js_ISteamUserStats_GetAchievementIcon(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	int32_t result;
	FuncPtr_070 ISteamUserStats_GetAchievementIcon;

	pchName = (char*)jsal_require_string(0);

	ISteamUserStats_GetAchievementIcon = (FuncPtr_070)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementIcon");
	result = ISteamUserStats_GetAchievementIcon(ISteamUserStats, pchName);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardEntryCount(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	int32_t result;
	FuncPtr_026 ISteamUserStats_GetLeaderboardEntryCount;

	hSteamLeaderboard = jsal_require_number(0);

	ISteamUserStats_GetLeaderboardEntryCount = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardEntryCount");
	result = ISteamUserStats_GetLeaderboardEntryCount(ISteamUserStats, hSteamLeaderboard);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamUserStats_GetMostAchievedAchievementInfo(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchName;
	uint32_t unNameBufLen;
	float pflPercent;
	bool pbAchieved;
	int32_t result;
	FuncPtr_078 ISteamUserStats_GetMostAchievedAchievementInfo;

	pchName = (char*)jsal_require_string(0);
	unNameBufLen = jsal_require_uint(1);

	ISteamUserStats_GetMostAchievedAchievementInfo = (FuncPtr_078)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo");
	result = ISteamUserStats_GetMostAchievedAchievementInfo(ISteamUserStats, pchName, unNameBufLen, &pflPercent, &pbAchieved);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pflPercent);
	jsal_put_prop_string(-2, "pflPercent");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	return true;
}

static bool
js_ISteamUserStats_GetNextMostAchievedAchievementInfo(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iIteratorPrevious;
	char * pchName;
	uint32_t unNameBufLen;
	float pflPercent;
	bool pbAchieved;
	int32_t result;
	FuncPtr_079 ISteamUserStats_GetNextMostAchievedAchievementInfo;

	iIteratorPrevious = jsal_require_int(0);
	pchName = (char*)jsal_require_string(1);
	unNameBufLen = jsal_require_uint(2);

	ISteamUserStats_GetNextMostAchievedAchievementInfo = (FuncPtr_079)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo");
	result = ISteamUserStats_GetNextMostAchievedAchievementInfo(ISteamUserStats, iIteratorPrevious, pchName, unNameBufLen, &pflPercent, &pbAchieved);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(pflPercent);
	jsal_put_prop_string(-2, "pflPercent");
	jsal_push_boolean(pbAchieved);
	jsal_put_prop_string(-2, "pbAchieved");

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatHistoryInt64(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	int64_t * pData;
	uint32_t cubData;
	int32_t result;
	FuncPtr_082 ISteamUserStats_GetGlobalStatHistoryInt64;

	pchStatName = (char*)jsal_require_string(0);
	cubData = jsal_require_uint(1);

	if (!(pData = (int64_t *)calloc(cubData, sizeof(int64_t))))
		return false;

	ISteamUserStats_GetGlobalStatHistoryInt64 = (FuncPtr_082)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64");
	result = ISteamUserStats_GetGlobalStatHistoryInt64(ISteamUserStats, pchStatName, pData, cubData);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int i;
	jsal_push_new_array();
	for (i = 0; i < (int)cubData; ++i)
	{
		jsal_push_number(pData[i]);
		jsal_put_prop_index(-2, i);
	}
	jsal_put_prop_string(-2, "pData");

	free(pData);

	return true;
}

static bool
js_ISteamUserStats_GetGlobalStatHistoryDouble(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchStatName;
	double * pData;
	uint32_t cubData;
	int32_t result;
	FuncPtr_083 ISteamUserStats_GetGlobalStatHistoryDouble;

	pchStatName = (char*)jsal_require_string(0);
	cubData = jsal_require_uint(1);

	if (!(pData = (double *)calloc(cubData, sizeof(double))))
		return false;

	ISteamUserStats_GetGlobalStatHistoryDouble = (FuncPtr_083)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble");
	result = ISteamUserStats_GetGlobalStatHistoryDouble(ISteamUserStats, pchStatName, pData, cubData);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int i;
	jsal_push_new_array();
	for (i = 0; i < (int)cubData; ++i)
	{
		jsal_push_number(pData[i]);
		jsal_put_prop_index(-2, i);
	}
	jsal_put_prop_string(-2, "pData");

	free(pData);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementDisplayAttribute(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchName;
	const char * pchKey;
	const char * result;
	FuncPtr_071 ISteamUserStats_GetAchievementDisplayAttribute;

	pchName = (char*)jsal_require_string(0);
	pchKey = (char*)jsal_require_string(1);

	ISteamUserStats_GetAchievementDisplayAttribute = (FuncPtr_071)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute");
	result = ISteamUserStats_GetAchievementDisplayAttribute(ISteamUserStats, pchName, pchKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUserStats_GetAchievementName(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t iAchievement;
	const char * result;
	FuncPtr_073 ISteamUserStats_GetAchievementName;

	iAchievement = jsal_require_uint(0);

	ISteamUserStats_GetAchievementName = (FuncPtr_073)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetAchievementName");
	result = ISteamUserStats_GetAchievementName(ISteamUserStats, iAchievement);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	const char * result;
	FuncPtr_024 ISteamUserStats_GetLeaderboardName;

	hSteamLeaderboard = jsal_require_number(0);

	ISteamUserStats_GetLeaderboardName = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardName");
	result = ISteamUserStats_GetLeaderboardName(ISteamUserStats, hSteamLeaderboard);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamUserStats_GetNumAchievements(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t result;
	FuncPtr_012 ISteamUserStats_GetNumAchievements;

	ISteamUserStats_GetNumAchievements = (FuncPtr_012)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetNumAchievements");
	result = ISteamUserStats_GetNumAchievements(ISteamUserStats);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardSortMethod(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint32_t result;
	FuncPtr_023 ISteamUserStats_GetLeaderboardSortMethod;

	hSteamLeaderboard = jsal_require_number(0);

	ISteamUserStats_GetLeaderboardSortMethod = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardSortMethod");
	result = ISteamUserStats_GetLeaderboardSortMethod(ISteamUserStats, hSteamLeaderboard);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamUserStats_GetLeaderboardDisplayType(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t hSteamLeaderboard;
	uint32_t result;
	FuncPtr_023 ISteamUserStats_GetLeaderboardDisplayType;

	hSteamLeaderboard = jsal_require_number(0);

	ISteamUserStats_GetLeaderboardDisplayType = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardDisplayType");
	result = ISteamUserStats_GetLeaderboardDisplayType(ISteamUserStats, hSteamLeaderboard);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamApps_BIsSubscribed(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamApps_BIsSubscribed;

	ISteamApps_BIsSubscribed = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribed");
	result = ISteamApps_BIsSubscribed(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsLowViolence(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamApps_BIsLowViolence;

	ISteamApps_BIsLowViolence = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsLowViolence");
	result = ISteamApps_BIsLowViolence(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsCybercafe(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamApps_BIsCybercafe;

	ISteamApps_BIsCybercafe = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsCybercafe");
	result = ISteamApps_BIsCybercafe(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsVACBanned(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamApps_BIsVACBanned;

	ISteamApps_BIsVACBanned = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsVACBanned");
	result = ISteamApps_BIsVACBanned(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsSubscribedApp(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	bool result;
	FuncPtr_019 ISteamApps_BIsSubscribedApp;

	appID = jsal_require_uint(0);

	ISteamApps_BIsSubscribedApp = (FuncPtr_019)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribedApp");
	result = ISteamApps_BIsSubscribedApp(ISteamApps, appID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsDlcInstalled(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	bool result;
	FuncPtr_019 ISteamApps_BIsDlcInstalled;

	appID = jsal_require_uint(0);

	ISteamApps_BIsDlcInstalled = (FuncPtr_019)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsDlcInstalled");
	result = ISteamApps_BIsDlcInstalled(ISteamApps, appID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsSubscribedFromFreeWeekend(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamApps_BIsSubscribedFromFreeWeekend;

	ISteamApps_BIsSubscribedFromFreeWeekend = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend");
	result = ISteamApps_BIsSubscribedFromFreeWeekend(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BGetDLCDataByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t iDLC;
	uint32_t pAppID;
	bool pbAvailable;
	char * pchName;
	int32_t cchNameBufferSize;
	bool result;
	FuncPtr_086 ISteamApps_BGetDLCDataByIndex;

	iDLC = jsal_require_int(0);
	pchName = (char*)jsal_require_string(1);
	cchNameBufferSize = jsal_require_int(2);

	ISteamApps_BGetDLCDataByIndex = (FuncPtr_086)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BGetDLCDataByIndex");
	result = ISteamApps_BGetDLCDataByIndex(ISteamApps, iDLC, &pAppID, &pbAvailable, pchName, cchNameBufferSize);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(pAppID);
	jsal_put_prop_string(-2, "pAppID");
	jsal_push_boolean(pbAvailable);
	jsal_put_prop_string(-2, "pbAvailable");

	return true;
}

static bool
js_ISteamApps_GetCurrentBetaName(int num_args, bool is_ctor, intptr_t magic)
{
	char * pchName;
	int32_t cchNameBufferSize;
	bool result;
	FuncPtr_010 ISteamApps_GetCurrentBetaName;

	pchName = (char*)jsal_require_string(0);
	cchNameBufferSize = jsal_require_int(1);

	ISteamApps_GetCurrentBetaName = (FuncPtr_010)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetCurrentBetaName");
	result = ISteamApps_GetCurrentBetaName(ISteamApps, pchName, cchNameBufferSize);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_MarkContentCorrupt(int num_args, bool is_ctor, intptr_t magic)
{
	bool bMissingFilesOnly;
	bool result;
	FuncPtr_047 ISteamApps_MarkContentCorrupt;

	bMissingFilesOnly = jsal_require_boolean(0);

	ISteamApps_MarkContentCorrupt = (FuncPtr_047)GETADDRESS(steam_api, "SteamAPI_ISteamApps_MarkContentCorrupt");
	result = ISteamApps_MarkContentCorrupt(ISteamApps, bMissingFilesOnly);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsAppInstalled(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	bool result;
	FuncPtr_019 ISteamApps_BIsAppInstalled;

	appID = jsal_require_uint(0);

	ISteamApps_BIsAppInstalled = (FuncPtr_019)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsAppInstalled");
	result = ISteamApps_BIsAppInstalled(ISteamApps, appID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_GetDlcDownloadProgress(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	uint64_t punBytesDownloaded;
	uint64_t punBytesTotal;
	bool result;
	FuncPtr_090 ISteamApps_GetDlcDownloadProgress;

	nAppID = jsal_require_uint(0);

	ISteamApps_GetDlcDownloadProgress = (FuncPtr_090)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetDlcDownloadProgress");
	result = ISteamApps_GetDlcDownloadProgress(ISteamApps, nAppID, &punBytesDownloaded, &punBytesTotal);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_number(punBytesDownloaded);
	jsal_put_prop_string(-2, "punBytesDownloaded");
	jsal_push_number(punBytesTotal);
	jsal_put_prop_string(-2, "punBytesTotal");

	return true;
}

static bool
js_ISteamApps_BIsSubscribedFromFamilySharing(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamApps_BIsSubscribedFromFamilySharing;

	ISteamApps_BIsSubscribedFromFamilySharing = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing");
	result = ISteamApps_BIsSubscribedFromFamilySharing(ISteamApps);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_BIsTimedTrial(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t punSecondsAllowed;
	uint32_t punSecondsPlayed;
	bool result;
	FuncPtr_092 ISteamApps_BIsTimedTrial;

	ISteamApps_BIsTimedTrial = (FuncPtr_092)GETADDRESS(steam_api, "SteamAPI_ISteamApps_BIsTimedTrial");
	result = ISteamApps_BIsTimedTrial(ISteamApps, &punSecondsAllowed, &punSecondsPlayed);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(punSecondsAllowed);
	jsal_put_prop_string(-2, "punSecondsAllowed");
	jsal_push_uint(punSecondsPlayed);
	jsal_put_prop_string(-2, "punSecondsPlayed");

	return true;
}

static bool
js_ISteamApps_SetDlcContext(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	bool result;
	FuncPtr_019 ISteamApps_SetDlcContext;

	nAppID = jsal_require_uint(0);

	ISteamApps_SetDlcContext = (FuncPtr_019)GETADDRESS(steam_api, "SteamAPI_ISteamApps_SetDlcContext");
	result = ISteamApps_SetDlcContext(ISteamApps, nAppID);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamApps_GetCurrentGameLanguage(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_020 ISteamApps_GetCurrentGameLanguage;

	ISteamApps_GetCurrentGameLanguage = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetCurrentGameLanguage");
	result = ISteamApps_GetCurrentGameLanguage(ISteamApps);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamApps_GetAvailableGameLanguages(int num_args, bool is_ctor, intptr_t magic)
{
	const char * result;
	FuncPtr_020 ISteamApps_GetAvailableGameLanguages;

	ISteamApps_GetAvailableGameLanguages = (FuncPtr_020)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAvailableGameLanguages");
	result = ISteamApps_GetAvailableGameLanguages(ISteamApps);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamApps_GetLaunchQueryParam(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchKey;
	const char * result;
	FuncPtr_089 ISteamApps_GetLaunchQueryParam;

	pchKey = (char*)jsal_require_string(0);

	ISteamApps_GetLaunchQueryParam = (FuncPtr_089)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetLaunchQueryParam");
	result = ISteamApps_GetLaunchQueryParam(ISteamApps, pchKey);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamApps_GetEarliestPurchaseUnixTime(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	uint32_t result;
	FuncPtr_061 ISteamApps_GetEarliestPurchaseUnixTime;

	nAppID = jsal_require_uint(0);

	ISteamApps_GetEarliestPurchaseUnixTime = (FuncPtr_061)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime");
	result = ISteamApps_GetEarliestPurchaseUnixTime(ISteamApps, nAppID);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamApps_GetInstalledDepots(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	uint32_t pvecDepots;
	uint32_t cMaxDepots;
	uint32_t result;
	FuncPtr_087 ISteamApps_GetInstalledDepots;

	appID = jsal_require_uint(0);
	cMaxDepots = jsal_require_uint(1);

	ISteamApps_GetInstalledDepots = (FuncPtr_087)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetInstalledDepots");
	result = ISteamApps_GetInstalledDepots(ISteamApps, appID, &pvecDepots, cMaxDepots);

	jsal_push_new_object();
	jsal_push_uint(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_uint(pvecDepots);
	jsal_put_prop_string(-2, "pvecDepots");

	return true;
}

static bool
js_ISteamApps_GetAppInstallDir(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t appID;
	char * pchFolder;
	uint32_t cchFolderBufferSize;
	uint32_t result;
	FuncPtr_088 ISteamApps_GetAppInstallDir;

	appID = jsal_require_uint(0);
	pchFolder = (char*)jsal_require_string(1);
	cchFolderBufferSize = jsal_require_uint(2);

	ISteamApps_GetAppInstallDir = (FuncPtr_088)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAppInstallDir");
	result = ISteamApps_GetAppInstallDir(ISteamApps, appID, pchFolder, cchFolderBufferSize);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamApps_GetDLCCount(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamApps_GetDLCCount;

	ISteamApps_GetDLCCount = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetDLCCount");
	result = ISteamApps_GetDLCCount(ISteamApps);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamApps_GetAppBuildId(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t result;
	FuncPtr_006 ISteamApps_GetAppBuildId;

	ISteamApps_GetAppBuildId = (FuncPtr_006)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAppBuildId");
	result = ISteamApps_GetAppBuildId(ISteamApps);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamApps_GetLaunchCommandLine(int num_args, bool is_ctor, intptr_t magic)
{
	char * pszCommandLine;
	int32_t cubCommandLine;
	int32_t result;
	FuncPtr_091 ISteamApps_GetLaunchCommandLine;

	pszCommandLine = (char*)jsal_require_string(0);
	cubCommandLine = jsal_require_int(1);

	ISteamApps_GetLaunchCommandLine = (FuncPtr_091)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetLaunchCommandLine");
	result = ISteamApps_GetLaunchCommandLine(ISteamApps, pszCommandLine, cubCommandLine);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamApps_InstallDLC(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	FuncPtr_015 ISteamApps_InstallDLC;

	nAppID = jsal_require_uint(0);

	ISteamApps_InstallDLC = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamApps_InstallDLC");
	ISteamApps_InstallDLC(ISteamApps, nAppID);

	return false;
}

static bool
js_ISteamApps_UninstallDLC(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	FuncPtr_015 ISteamApps_UninstallDLC;

	nAppID = jsal_require_uint(0);

	ISteamApps_UninstallDLC = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamApps_UninstallDLC");
	ISteamApps_UninstallDLC(ISteamApps, nAppID);

	return false;
}

static bool
js_ISteamApps_RequestAppProofOfPurchaseKey(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t nAppID;
	FuncPtr_015 ISteamApps_RequestAppProofOfPurchaseKey;

	nAppID = jsal_require_uint(0);

	ISteamApps_RequestAppProofOfPurchaseKey = (FuncPtr_015)GETADDRESS(steam_api, "SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey");
	ISteamApps_RequestAppProofOfPurchaseKey(ISteamApps, nAppID);

	return false;
}

static bool
js_ISteamApps_RequestAllProofOfPurchaseKeys(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_011 ISteamApps_RequestAllProofOfPurchaseKeys;

	ISteamApps_RequestAllProofOfPurchaseKeys = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys");
	ISteamApps_RequestAllProofOfPurchaseKeys(ISteamApps);

	return false;
}

static bool
js_ISteamApps_GetAppOwner(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t result;
	FuncPtr_008 ISteamApps_GetAppOwner;

	ISteamApps_GetAppOwner = (FuncPtr_008)GETADDRESS(steam_api, "SteamAPI_ISteamApps_GetAppOwner");
	result = ISteamApps_GetAppOwner(ISteamApps);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamInput_Init(int num_args, bool is_ctor, intptr_t magic)
{
	bool bExplicitlyCallRunFrame;
	bool result;
	FuncPtr_047 ISteamInput_Init;

	bExplicitlyCallRunFrame = jsal_require_boolean(0);

	ISteamInput_Init = (FuncPtr_047)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Init");
	result = ISteamInput_Init(ISteamInput, bExplicitlyCallRunFrame);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamInput_Shutdown;

	ISteamInput_Shutdown = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Shutdown");
	result = ISteamInput_Shutdown(ISteamInput);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_SetInputActionManifestFilePath(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pchInputActionManifestAbsolutePath;
	bool result;
	FuncPtr_048 ISteamInput_SetInputActionManifestFilePath;

	pchInputActionManifestAbsolutePath = (char*)jsal_require_string(0);

	ISteamInput_SetInputActionManifestFilePath = (FuncPtr_048)GETADDRESS(steam_api, "SteamAPI_ISteamInput_SetInputActionManifestFilePath");
	result = ISteamInput_SetInputActionManifestFilePath(ISteamInput, pchInputActionManifestAbsolutePath);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_BWaitForData(int num_args, bool is_ctor, intptr_t magic)
{
	bool bWaitForever;
	uint32_t unTimeout;
	bool result;
	FuncPtr_093 ISteamInput_BWaitForData;

	bWaitForever = jsal_require_boolean(0);
	unTimeout = jsal_require_uint(1);

	ISteamInput_BWaitForData = (FuncPtr_093)GETADDRESS(steam_api, "SteamAPI_ISteamInput_BWaitForData");
	result = ISteamInput_BWaitForData(ISteamInput, bWaitForever, unTimeout);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_BNewDataAvailable(int num_args, bool is_ctor, intptr_t magic)
{
	bool result;
	FuncPtr_007 ISteamInput_BNewDataAvailable;

	ISteamInput_BNewDataAvailable = (FuncPtr_007)GETADDRESS(steam_api, "SteamAPI_ISteamInput_BNewDataAvailable");
	result = ISteamInput_BNewDataAvailable(ISteamInput);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_ShowBindingPanel(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	bool result;
	FuncPtr_046 ISteamInput_ShowBindingPanel;

	inputHandle = jsal_require_number(0);

	ISteamInput_ShowBindingPanel = (FuncPtr_046)GETADDRESS(steam_api, "SteamAPI_ISteamInput_ShowBindingPanel");
	result = ISteamInput_ShowBindingPanel(ISteamInput, inputHandle);

	jsal_push_boolean(result);

	return true;
}

static bool
js_ISteamInput_GetDeviceBindingRevision(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	int32_t pMajor;
	int32_t pMinor;
	bool result;
	FuncPtr_110 ISteamInput_GetDeviceBindingRevision;

	inputHandle = jsal_require_number(0);

	ISteamInput_GetDeviceBindingRevision = (FuncPtr_110)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDeviceBindingRevision");
	result = ISteamInput_GetDeviceBindingRevision(ISteamInput, inputHandle, &pMajor, &pMinor);

	jsal_push_new_object();
	jsal_push_boolean(result);
	jsal_put_prop_string(-2, "result");
	jsal_push_int(pMajor);
	jsal_put_prop_string(-2, "pMajor");
	jsal_push_int(pMinor);
	jsal_put_prop_string(-2, "pMinor");

	return true;
}

static bool
js_ISteamInput_RunFrame(int num_args, bool is_ctor, intptr_t magic)
{
	bool bReservedValue;
	FuncPtr_059 ISteamInput_RunFrame;

	bReservedValue = jsal_require_boolean(0);

	ISteamInput_RunFrame = (FuncPtr_059)GETADDRESS(steam_api, "SteamAPI_ISteamInput_RunFrame");
	ISteamInput_RunFrame(ISteamInput, bReservedValue);

	return false;
}

static bool
js_ISteamInput_EnableDeviceCallbacks(int num_args, bool is_ctor, intptr_t magic)
{
	FuncPtr_011 ISteamInput_EnableDeviceCallbacks;

	ISteamInput_EnableDeviceCallbacks = (FuncPtr_011)GETADDRESS(steam_api, "SteamAPI_ISteamInput_EnableDeviceCallbacks");
	ISteamInput_EnableDeviceCallbacks(ISteamInput);

	return false;
}

static bool
js_ISteamInput_ActivateActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	FuncPtr_096 ISteamInput_ActivateActionSet;

	inputHandle = jsal_require_number(0);
	actionSetHandle = jsal_require_number(1);

	ISteamInput_ActivateActionSet = (FuncPtr_096)GETADDRESS(steam_api, "SteamAPI_ISteamInput_ActivateActionSet");
	ISteamInput_ActivateActionSet(ISteamInput, inputHandle, actionSetHandle);

	return false;
}

static bool
js_ISteamInput_ActivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_096 ISteamInput_ActivateActionSetLayer;

	inputHandle = jsal_require_number(0);
	actionSetLayerHandle = jsal_require_number(1);

	ISteamInput_ActivateActionSetLayer = (FuncPtr_096)GETADDRESS(steam_api, "SteamAPI_ISteamInput_ActivateActionSetLayer");
	ISteamInput_ActivateActionSetLayer(ISteamInput, inputHandle, actionSetLayerHandle);

	return false;
}

static bool
js_ISteamInput_DeactivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_096 ISteamInput_DeactivateActionSetLayer;

	inputHandle = jsal_require_number(0);
	actionSetLayerHandle = jsal_require_number(1);

	ISteamInput_DeactivateActionSetLayer = (FuncPtr_096)GETADDRESS(steam_api, "SteamAPI_ISteamInput_DeactivateActionSetLayer");
	ISteamInput_DeactivateActionSetLayer(ISteamInput, inputHandle, actionSetLayerHandle);

	return false;
}

static bool
js_ISteamInput_DeactivateAllActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	FuncPtr_014 ISteamInput_DeactivateAllActionSetLayers;

	inputHandle = jsal_require_number(0);

	ISteamInput_DeactivateAllActionSetLayers = (FuncPtr_014)GETADDRESS(steam_api, "SteamAPI_ISteamInput_DeactivateAllActionSetLayers");
	ISteamInput_DeactivateAllActionSetLayers(ISteamInput, inputHandle);

	return false;
}

static bool
js_ISteamInput_StopAnalogActionMomentum(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t eAction;
	FuncPtr_096 ISteamInput_StopAnalogActionMomentum;

	inputHandle = jsal_require_number(0);
	eAction = jsal_require_number(1);

	ISteamInput_StopAnalogActionMomentum = (FuncPtr_096)GETADDRESS(steam_api, "SteamAPI_ISteamInput_StopAnalogActionMomentum");
	ISteamInput_StopAnalogActionMomentum(ISteamInput, inputHandle, eAction);

	return false;
}

static bool
js_ISteamInput_TriggerVibration(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint16_t usLeftSpeed;
	uint16_t usRightSpeed;
	FuncPtr_104 ISteamInput_TriggerVibration;

	inputHandle = jsal_require_number(0);
	usLeftSpeed = jsal_require_uint(1);
	usRightSpeed = jsal_require_uint(2);

	ISteamInput_TriggerVibration = (FuncPtr_104)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TriggerVibration");
	ISteamInput_TriggerVibration(ISteamInput, inputHandle, usLeftSpeed, usRightSpeed);

	return false;
}

static bool
js_ISteamInput_TriggerVibrationExtended(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint16_t usLeftSpeed;
	uint16_t usRightSpeed;
	uint16_t usLeftTriggerSpeed;
	uint16_t usRightTriggerSpeed;
	FuncPtr_105 ISteamInput_TriggerVibrationExtended;

	inputHandle = jsal_require_number(0);
	usLeftSpeed = jsal_require_uint(1);
	usRightSpeed = jsal_require_uint(2);
	usLeftTriggerSpeed = jsal_require_uint(3);
	usRightTriggerSpeed = jsal_require_uint(4);

	ISteamInput_TriggerVibrationExtended = (FuncPtr_105)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TriggerVibrationExtended");
	ISteamInput_TriggerVibrationExtended(ISteamInput, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);

	return false;
}

static bool
js_ISteamInput_TriggerSimpleHapticEvent(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eHapticLocation;
	uint8_t nIntensity;
	char nGainDB;
	uint8_t nOtherIntensity;
	char nOtherGainDB;
	FuncPtr_106 ISteamInput_TriggerSimpleHapticEvent;

	inputHandle = jsal_require_number(0);
	eHapticLocation = jsal_require_uint(1);
	nIntensity = jsal_require_uint(2);
	nGainDB = jsal_require_int(3);
	nOtherIntensity = jsal_require_uint(4);
	nOtherGainDB = jsal_require_int(5);

	ISteamInput_TriggerSimpleHapticEvent = (FuncPtr_106)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TriggerSimpleHapticEvent");
	ISteamInput_TriggerSimpleHapticEvent(ISteamInput, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);

	return false;
}

static bool
js_ISteamInput_SetLEDColor(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint8_t nColorR;
	uint8_t nColorG;
	uint8_t nColorB;
	uint32_t nFlags;
	FuncPtr_107 ISteamInput_SetLEDColor;

	inputHandle = jsal_require_number(0);
	nColorR = jsal_require_uint(1);
	nColorG = jsal_require_uint(2);
	nColorB = jsal_require_uint(3);
	nFlags = jsal_require_uint(4);

	ISteamInput_SetLEDColor = (FuncPtr_107)GETADDRESS(steam_api, "SteamAPI_ISteamInput_SetLEDColor");
	ISteamInput_SetLEDColor(ISteamInput, inputHandle, nColorR, nColorG, nColorB, nFlags);

	return false;
}

static bool
js_ISteamInput_Legacy_TriggerHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	FuncPtr_017 ISteamInput_Legacy_TriggerHapticPulse;

	inputHandle = jsal_require_number(0);
	eTargetPad = jsal_require_uint(1);
	usDurationMicroSec = jsal_require_uint(2);

	ISteamInput_Legacy_TriggerHapticPulse = (FuncPtr_017)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Legacy_TriggerHapticPulse");
	ISteamInput_Legacy_TriggerHapticPulse(ISteamInput, inputHandle, eTargetPad, usDurationMicroSec);

	return false;
}

static bool
js_ISteamInput_Legacy_TriggerRepeatedHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	uint16_t usOffMicroSec;
	uint16_t unRepeat;
	uint32_t nFlags;
	FuncPtr_108 ISteamInput_Legacy_TriggerRepeatedHapticPulse;

	inputHandle = jsal_require_number(0);
	eTargetPad = jsal_require_uint(1);
	usDurationMicroSec = jsal_require_uint(2);
	usOffMicroSec = jsal_require_uint(3);
	unRepeat = jsal_require_uint(4);
	nFlags = jsal_require_uint(5);

	ISteamInput_Legacy_TriggerRepeatedHapticPulse = (FuncPtr_108)GETADDRESS(steam_api, "SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse");
	ISteamInput_Legacy_TriggerRepeatedHapticPulse(ISteamInput, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);

	return false;
}

static bool
js_ISteamInput_GetConnectedControllers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_094 ISteamInput_GetConnectedControllers;

	if (!(handlesOut = (uint64_t *)calloc(16, sizeof(uint64_t))))
		return false;

	ISteamInput_GetConnectedControllers = (FuncPtr_094)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetConnectedControllers");
	result = ISteamInput_GetConnectedControllers(ISteamInput, handlesOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int i;
	jsal_push_new_array();
	for (i = 0; i < (int)16; ++i)
	{
		jsal_push_number(handlesOut[i]);
		jsal_put_prop_index(-2, i);
	}
	jsal_put_prop_string(-2, "handlesOut");

	free(handlesOut);

	return true;
}

static bool
js_ISteamInput_GetActiveActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_097 ISteamInput_GetActiveActionSetLayers;

	inputHandle = jsal_require_number(0);

	if (!(handlesOut = (uint64_t *)calloc(16, sizeof(uint64_t))))
		return false;

	ISteamInput_GetActiveActionSetLayers = (FuncPtr_097)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetActiveActionSetLayers");
	result = ISteamInput_GetActiveActionSetLayers(ISteamInput, inputHandle, handlesOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int i;
	jsal_push_new_array();
	for (i = 0; i < (int)16; ++i)
	{
		jsal_push_number(handlesOut[i]);
		jsal_put_prop_index(-2, i);
	}
	jsal_put_prop_string(-2, "handlesOut");

	free(handlesOut);

	return true;
}

static bool
js_ISteamInput_GetDigitalActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	uint64_t digitalActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_099 ISteamInput_GetDigitalActionOrigins;

	inputHandle = jsal_require_number(0);
	actionSetHandle = jsal_require_number(1);
	digitalActionHandle = jsal_require_number(2);

	if (!(originsOut = (uint32_t *)calloc(8, sizeof(uint32_t))))
		return false;

	ISteamInput_GetDigitalActionOrigins = (FuncPtr_099)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDigitalActionOrigins");
	result = ISteamInput_GetDigitalActionOrigins(ISteamInput, inputHandle, actionSetHandle, digitalActionHandle, originsOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int i;
	jsal_push_new_array();
	for (i = 0; i < (int)8; ++i)
	{
		jsal_push_uint(originsOut[i]);
		jsal_put_prop_index(-2, i);
	}
	jsal_put_prop_string(-2, "originsOut");

	free(originsOut);

	return true;
}

static bool
js_ISteamInput_GetAnalogActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	uint64_t analogActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_099 ISteamInput_GetAnalogActionOrigins;

	inputHandle = jsal_require_number(0);
	actionSetHandle = jsal_require_number(1);
	analogActionHandle = jsal_require_number(2);

	if (!(originsOut = (uint32_t *)calloc(8, sizeof(uint32_t))))
		return false;

	ISteamInput_GetAnalogActionOrigins = (FuncPtr_099)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetAnalogActionOrigins");
	result = ISteamInput_GetAnalogActionOrigins(ISteamInput, inputHandle, actionSetHandle, analogActionHandle, originsOut);

	jsal_push_new_object();
	jsal_push_int(result);
	jsal_put_prop_string(-2, "result");
	int i;
	jsal_push_new_array();
	for (i = 0; i < (int)8; ++i)
	{
		jsal_push_uint(originsOut[i]);
		jsal_put_prop_index(-2, i);
	}
	jsal_put_prop_string(-2, "originsOut");

	free(originsOut);

	return true;
}

static bool
js_ISteamInput_GetGamepadIndexForController(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t ulinputHandle;
	int32_t result;
	FuncPtr_026 ISteamInput_GetGamepadIndexForController;

	ulinputHandle = jsal_require_number(0);

	ISteamInput_GetGamepadIndexForController = (FuncPtr_026)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGamepadIndexForController");
	result = ISteamInput_GetGamepadIndexForController(ISteamInput, ulinputHandle);

	jsal_push_int(result);

	return true;
}

static bool
js_ISteamInput_GetActionSetHandle(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pszActionSetName;
	uint64_t result;
	FuncPtr_095 ISteamInput_GetActionSetHandle;

	pszActionSetName = (char*)jsal_require_string(0);

	ISteamInput_GetActionSetHandle = (FuncPtr_095)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetActionSetHandle");
	result = ISteamInput_GetActionSetHandle(ISteamInput, pszActionSetName);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamInput_GetCurrentActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t result;
	FuncPtr_042 ISteamInput_GetCurrentActionSet;

	inputHandle = jsal_require_number(0);

	ISteamInput_GetCurrentActionSet = (FuncPtr_042)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetCurrentActionSet");
	result = ISteamInput_GetCurrentActionSet(ISteamInput, inputHandle);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamInput_GetDigitalActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pszActionName;
	uint64_t result;
	FuncPtr_095 ISteamInput_GetDigitalActionHandle;

	pszActionName = (char*)jsal_require_string(0);

	ISteamInput_GetDigitalActionHandle = (FuncPtr_095)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDigitalActionHandle");
	result = ISteamInput_GetDigitalActionHandle(ISteamInput, pszActionName);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamInput_GetAnalogActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	const char * pszActionName;
	uint64_t result;
	FuncPtr_095 ISteamInput_GetAnalogActionHandle;

	pszActionName = (char*)jsal_require_string(0);

	ISteamInput_GetAnalogActionHandle = (FuncPtr_095)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetAnalogActionHandle");
	result = ISteamInput_GetAnalogActionHandle(ISteamInput, pszActionName);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamInput_GetControllerForGamepadIndex(int num_args, bool is_ctor, intptr_t magic)
{
	int32_t nIndex;
	uint64_t result;
	FuncPtr_032 ISteamInput_GetControllerForGamepadIndex;

	nIndex = jsal_require_int(0);

	ISteamInput_GetControllerForGamepadIndex = (FuncPtr_032)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetControllerForGamepadIndex");
	result = ISteamInput_GetControllerForGamepadIndex(ISteamInput, nIndex);

	jsal_push_number(result);

	return true;
}

static bool
js_ISteamInput_GetDigitalActionData(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t digitalActionHandle;
	InputDigitalActionData_t result;
	FuncPtr_098 ISteamInput_GetDigitalActionData;

	inputHandle = jsal_require_number(0);
	digitalActionHandle = jsal_require_number(1);

	ISteamInput_GetDigitalActionData = (FuncPtr_098)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetDigitalActionData");
	result = ISteamInput_GetDigitalActionData(ISteamInput, inputHandle, digitalActionHandle);

	jsal_push_new_object();
	jsal_push_boolean(result.bState);
	jsal_put_prop_string(-2, "bState");
	jsal_push_boolean(result.bActive);
	jsal_put_prop_string(-2, "bActive");

	return true;
}

static bool
js_ISteamInput_GetStringForDigitalActionName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t eActionHandle;
	const char * result;
	FuncPtr_024 ISteamInput_GetStringForDigitalActionName;

	eActionHandle = jsal_require_number(0);

	ISteamInput_GetStringForDigitalActionName = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForDigitalActionName");
	result = ISteamInput_GetStringForDigitalActionName(ISteamInput, eActionHandle);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphPNGForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	uint32_t eSize;
	uint32_t unFlags;
	const char * result;
	FuncPtr_101 ISteamInput_GetGlyphPNGForActionOrigin;

	eOrigin = jsal_require_uint(0);
	eSize = jsal_require_uint(1);
	unFlags = jsal_require_uint(2);

	ISteamInput_GetGlyphPNGForActionOrigin = (FuncPtr_101)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin");
	result = ISteamInput_GetGlyphPNGForActionOrigin(ISteamInput, eOrigin, eSize, unFlags);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphSVGForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	uint32_t unFlags;
	const char * result;
	FuncPtr_102 ISteamInput_GetGlyphSVGForActionOrigin;

	eOrigin = jsal_require_uint(0);
	unFlags = jsal_require_uint(1);

	ISteamInput_GetGlyphSVGForActionOrigin = (FuncPtr_102)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin");
	result = ISteamInput_GetGlyphSVGForActionOrigin(ISteamInput, eOrigin, unFlags);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphForActionOrigin_Legacy(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_073 ISteamInput_GetGlyphForActionOrigin_Legacy;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetGlyphForActionOrigin_Legacy = (FuncPtr_073)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy");
	result = ISteamInput_GetGlyphForActionOrigin_Legacy(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetStringForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_073 ISteamInput_GetStringForActionOrigin;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetStringForActionOrigin = (FuncPtr_073)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForActionOrigin");
	result = ISteamInput_GetStringForActionOrigin(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetStringForAnalogActionName(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t eActionHandle;
	const char * result;
	FuncPtr_024 ISteamInput_GetStringForAnalogActionName;

	eActionHandle = jsal_require_number(0);

	ISteamInput_GetStringForAnalogActionName = (FuncPtr_024)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForAnalogActionName");
	result = ISteamInput_GetStringForAnalogActionName(ISteamInput, eActionHandle);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetStringForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_073 ISteamInput_GetStringForXboxOrigin;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetStringForXboxOrigin = (FuncPtr_073)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetStringForXboxOrigin");
	result = ISteamInput_GetStringForXboxOrigin(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetGlyphForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eOrigin;
	const char * result;
	FuncPtr_073 ISteamInput_GetGlyphForXboxOrigin;

	eOrigin = jsal_require_uint(0);

	ISteamInput_GetGlyphForXboxOrigin = (FuncPtr_073)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetGlyphForXboxOrigin");
	result = ISteamInput_GetGlyphForXboxOrigin(ISteamInput, eOrigin);

	jsal_push_string(result);

	return true;
}

static bool
js_ISteamInput_GetAnalogActionData(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint64_t analogActionHandle;
	InputAnalogActionData_t result;
	FuncPtr_100 ISteamInput_GetAnalogActionData;

	inputHandle = jsal_require_number(0);
	analogActionHandle = jsal_require_number(1);

	ISteamInput_GetAnalogActionData = (FuncPtr_100)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetAnalogActionData");
	result = ISteamInput_GetAnalogActionData(ISteamInput, inputHandle, analogActionHandle);

	jsal_push_new_object();
	jsal_push_uint(result.eMode);
	jsal_put_prop_string(-2, "eMode");
	jsal_push_number(result.x);
	jsal_put_prop_string(-2, "x");
	jsal_push_number(result.y);
	jsal_put_prop_string(-2, "y");
	jsal_push_boolean(result.bActive);
	jsal_put_prop_string(-2, "bActive");

	return true;
}

static bool
js_ISteamInput_GetMotionData(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	InputMotionData_t result;
	FuncPtr_103 ISteamInput_GetMotionData;

	inputHandle = jsal_require_number(0);

	ISteamInput_GetMotionData = (FuncPtr_103)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetMotionData");
	result = ISteamInput_GetMotionData(ISteamInput, inputHandle);

	jsal_push_new_object();
	jsal_push_number(result.rotQuatX);
	jsal_put_prop_string(-2, "rotQuatX");
	jsal_push_number(result.rotQuatY);
	jsal_put_prop_string(-2, "rotQuatY");
	jsal_push_number(result.rotQuatZ);
	jsal_put_prop_string(-2, "rotQuatZ");
	jsal_push_number(result.rotQuatW);
	jsal_put_prop_string(-2, "rotQuatW");
	jsal_push_number(result.posAccelX);
	jsal_put_prop_string(-2, "posAccelX");
	jsal_push_number(result.posAccelY);
	jsal_put_prop_string(-2, "posAccelY");
	jsal_push_number(result.posAccelZ);
	jsal_put_prop_string(-2, "posAccelZ");
	jsal_push_number(result.rotVelX);
	jsal_put_prop_string(-2, "rotVelX");
	jsal_push_number(result.rotVelY);
	jsal_put_prop_string(-2, "rotVelY");
	jsal_push_number(result.rotVelZ);
	jsal_put_prop_string(-2, "rotVelZ");

	return true;
}

static bool
js_ISteamInput_GetInputTypeForHandle(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t result;
	FuncPtr_023 ISteamInput_GetInputTypeForHandle;

	inputHandle = jsal_require_number(0);

	ISteamInput_GetInputTypeForHandle = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetInputTypeForHandle");
	result = ISteamInput_GetInputTypeForHandle(ISteamInput, inputHandle);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_GetActionOriginFromXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t eOrigin;
	uint32_t result;
	FuncPtr_016 ISteamInput_GetActionOriginFromXboxOrigin;

	inputHandle = jsal_require_number(0);
	eOrigin = jsal_require_uint(1);

	ISteamInput_GetActionOriginFromXboxOrigin = (FuncPtr_016)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin");
	result = ISteamInput_GetActionOriginFromXboxOrigin(ISteamInput, inputHandle, eOrigin);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_TranslateActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	uint32_t eDestinationInputType;
	uint32_t eSourceOrigin;
	uint32_t result;
	FuncPtr_109 ISteamInput_TranslateActionOrigin;

	eDestinationInputType = jsal_require_uint(0);
	eSourceOrigin = jsal_require_uint(1);

	ISteamInput_TranslateActionOrigin = (FuncPtr_109)GETADDRESS(steam_api, "SteamAPI_ISteamInput_TranslateActionOrigin");
	result = ISteamInput_TranslateActionOrigin(ISteamInput, eDestinationInputType, eSourceOrigin);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_GetRemotePlaySessionID(int num_args, bool is_ctor, intptr_t magic)
{
	uint64_t inputHandle;
	uint32_t result;
	FuncPtr_023 ISteamInput_GetRemotePlaySessionID;

	inputHandle = jsal_require_number(0);

	ISteamInput_GetRemotePlaySessionID = (FuncPtr_023)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetRemotePlaySessionID");
	result = ISteamInput_GetRemotePlaySessionID(ISteamInput, inputHandle);

	jsal_push_uint(result);

	return true;
}

static bool
js_ISteamInput_GetSessionInputConfigurationSettings(int num_args, bool is_ctor, intptr_t magic)
{
	uint16_t result;
	FuncPtr_111 ISteamInput_GetSessionInputConfigurationSettings;

	ISteamInput_GetSessionInputConfigurationSettings = (FuncPtr_111)GETADDRESS(steam_api, "SteamAPI_ISteamInput_GetSessionInputConfigurationSettings");
	result = ISteamInput_GetSessionInputConfigurationSettings(ISteamInput);

	jsal_push_uint(result);

	return true;
}

