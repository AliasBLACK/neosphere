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
	// #########
	// CONSTANTS
	// #########

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

	// #####
	// ENUMS
	// #####

	api_define_const("ESteamIPType", "k_ESteamIPTypeIPv4", 0);
	api_define_const("ESteamIPType", "k_ESteamIPTypeIPv6", 1);
	api_define_const("EUniverse", "k_EUniverseInvalid", 0);
	api_define_const("EUniverse", "k_EUniversePublic", 1);
	api_define_const("EUniverse", "k_EUniverseBeta", 2);
	api_define_const("EUniverse", "k_EUniverseInternal", 3);
	api_define_const("EUniverse", "k_EUniverseDev", 4);
	api_define_const("EUniverse", "k_EUniverseMax", 5);
	api_define_const("EResult", "k_EResultNone", 0);
	api_define_const("EResult", "k_EResultOK", 1);
	api_define_const("EResult", "k_EResultFail", 2);
	api_define_const("EResult", "k_EResultNoConnection", 3);
	api_define_const("EResult", "k_EResultInvalidPassword", 4);
	api_define_const("EResult", "k_EResultLoggedInElsewhere", 5);
	api_define_const("EResult", "k_EResultInvalidProtocolVer", 6);
	api_define_const("EResult", "k_EResultInvalidParam", 7);
	api_define_const("EResult", "k_EResultFileNotFound", 8);
	api_define_const("EResult", "k_EResultBusy", 9);
	api_define_const("EResult", "k_EResultInvalidState", 10);
	api_define_const("EResult", "k_EResultInvalidName", 11);
	api_define_const("EResult", "k_EResultInvalidEmail", 12);
	api_define_const("EResult", "k_EResultDuplicateName", 13);
	api_define_const("EResult", "k_EResultAccessDenied", 14);
	api_define_const("EResult", "k_EResultTimeout", 15);
	api_define_const("EResult", "k_EResultBanned", 16);
	api_define_const("EResult", "k_EResultAccountNotFound", 17);
	api_define_const("EResult", "k_EResultInvalidSteamID", 18);
	api_define_const("EResult", "k_EResultServiceUnavailable", 19);
	api_define_const("EResult", "k_EResultNotLoggedOn", 20);
	api_define_const("EResult", "k_EResultPending", 21);
	api_define_const("EResult", "k_EResultEncryptionFailure", 22);
	api_define_const("EResult", "k_EResultInsufficientPrivilege", 23);
	api_define_const("EResult", "k_EResultLimitExceeded", 24);
	api_define_const("EResult", "k_EResultRevoked", 25);
	api_define_const("EResult", "k_EResultExpired", 26);
	api_define_const("EResult", "k_EResultAlreadyRedeemed", 27);
	api_define_const("EResult", "k_EResultDuplicateRequest", 28);
	api_define_const("EResult", "k_EResultAlreadyOwned", 29);
	api_define_const("EResult", "k_EResultIPNotFound", 30);
	api_define_const("EResult", "k_EResultPersistFailed", 31);
	api_define_const("EResult", "k_EResultLockingFailed", 32);
	api_define_const("EResult", "k_EResultLogonSessionReplaced", 33);
	api_define_const("EResult", "k_EResultConnectFailed", 34);
	api_define_const("EResult", "k_EResultHandshakeFailed", 35);
	api_define_const("EResult", "k_EResultIOFailure", 36);
	api_define_const("EResult", "k_EResultRemoteDisconnect", 37);
	api_define_const("EResult", "k_EResultShoppingCartNotFound", 38);
	api_define_const("EResult", "k_EResultBlocked", 39);
	api_define_const("EResult", "k_EResultIgnored", 40);
	api_define_const("EResult", "k_EResultNoMatch", 41);
	api_define_const("EResult", "k_EResultAccountDisabled", 42);
	api_define_const("EResult", "k_EResultServiceReadOnly", 43);
	api_define_const("EResult", "k_EResultAccountNotFeatured", 44);
	api_define_const("EResult", "k_EResultAdministratorOK", 45);
	api_define_const("EResult", "k_EResultContentVersion", 46);
	api_define_const("EResult", "k_EResultTryAnotherCM", 47);
	api_define_const("EResult", "k_EResultPasswordRequiredToKickSession", 48);
	api_define_const("EResult", "k_EResultAlreadyLoggedInElsewhere", 49);
	api_define_const("EResult", "k_EResultSuspended", 50);
	api_define_const("EResult", "k_EResultCancelled", 51);
	api_define_const("EResult", "k_EResultDataCorruption", 52);
	api_define_const("EResult", "k_EResultDiskFull", 53);
	api_define_const("EResult", "k_EResultRemoteCallFailed", 54);
	api_define_const("EResult", "k_EResultPasswordUnset", 55);
	api_define_const("EResult", "k_EResultExternalAccountUnlinked", 56);
	api_define_const("EResult", "k_EResultPSNTicketInvalid", 57);
	api_define_const("EResult", "k_EResultExternalAccountAlreadyLinked", 58);
	api_define_const("EResult", "k_EResultRemoteFileConflict", 59);
	api_define_const("EResult", "k_EResultIllegalPassword", 60);
	api_define_const("EResult", "k_EResultSameAsPreviousValue", 61);
	api_define_const("EResult", "k_EResultAccountLogonDenied", 62);
	api_define_const("EResult", "k_EResultCannotUseOldPassword", 63);
	api_define_const("EResult", "k_EResultInvalidLoginAuthCode", 64);
	api_define_const("EResult", "k_EResultAccountLogonDeniedNoMail", 65);
	api_define_const("EResult", "k_EResultHardwareNotCapableOfIPT", 66);
	api_define_const("EResult", "k_EResultIPTInitError", 67);
	api_define_const("EResult", "k_EResultParentalControlRestricted", 68);
	api_define_const("EResult", "k_EResultFacebookQueryError", 69);
	api_define_const("EResult", "k_EResultExpiredLoginAuthCode", 70);
	api_define_const("EResult", "k_EResultIPLoginRestrictionFailed", 71);
	api_define_const("EResult", "k_EResultAccountLockedDown", 72);
	api_define_const("EResult", "k_EResultAccountLogonDeniedVerifiedEmailRequired", 73);
	api_define_const("EResult", "k_EResultNoMatchingURL", 74);
	api_define_const("EResult", "k_EResultBadResponse", 75);
	api_define_const("EResult", "k_EResultRequirePasswordReEntry", 76);
	api_define_const("EResult", "k_EResultValueOutOfRange", 77);
	api_define_const("EResult", "k_EResultUnexpectedError", 78);
	api_define_const("EResult", "k_EResultDisabled", 79);
	api_define_const("EResult", "k_EResultInvalidCEGSubmission", 80);
	api_define_const("EResult", "k_EResultRestrictedDevice", 81);
	api_define_const("EResult", "k_EResultRegionLocked", 82);
	api_define_const("EResult", "k_EResultRateLimitExceeded", 83);
	api_define_const("EResult", "k_EResultAccountLoginDeniedNeedTwoFactor", 84);
	api_define_const("EResult", "k_EResultItemDeleted", 85);
	api_define_const("EResult", "k_EResultAccountLoginDeniedThrottle", 86);
	api_define_const("EResult", "k_EResultTwoFactorCodeMismatch", 87);
	api_define_const("EResult", "k_EResultTwoFactorActivationCodeMismatch", 88);
	api_define_const("EResult", "k_EResultAccountAssociatedToMultiplePartners", 89);
	api_define_const("EResult", "k_EResultNotModified", 90);
	api_define_const("EResult", "k_EResultNoMobileDevice", 91);
	api_define_const("EResult", "k_EResultTimeNotSynced", 92);
	api_define_const("EResult", "k_EResultSmsCodeFailed", 93);
	api_define_const("EResult", "k_EResultAccountLimitExceeded", 94);
	api_define_const("EResult", "k_EResultAccountActivityLimitExceeded", 95);
	api_define_const("EResult", "k_EResultPhoneActivityLimitExceeded", 96);
	api_define_const("EResult", "k_EResultRefundToWallet", 97);
	api_define_const("EResult", "k_EResultEmailSendFailure", 98);
	api_define_const("EResult", "k_EResultNotSettled", 99);
	api_define_const("EResult", "k_EResultNeedCaptcha", 100);
	api_define_const("EResult", "k_EResultGSLTDenied", 101);
	api_define_const("EResult", "k_EResultGSOwnerDenied", 102);
	api_define_const("EResult", "k_EResultInvalidItemType", 103);
	api_define_const("EResult", "k_EResultIPBanned", 104);
	api_define_const("EResult", "k_EResultGSLTExpired", 105);
	api_define_const("EResult", "k_EResultInsufficientFunds", 106);
	api_define_const("EResult", "k_EResultTooManyPending", 107);
	api_define_const("EResult", "k_EResultNoSiteLicensesFound", 108);
	api_define_const("EResult", "k_EResultWGNetworkSendExceeded", 109);
	api_define_const("EResult", "k_EResultAccountNotFriends", 110);
	api_define_const("EResult", "k_EResultLimitedUserAccount", 111);
	api_define_const("EResult", "k_EResultCantRemoveItem", 112);
	api_define_const("EResult", "k_EResultAccountDeleted", 113);
	api_define_const("EResult", "k_EResultExistingUserCancelledLicense", 114);
	api_define_const("EResult", "k_EResultCommunityCooldown", 115);
	api_define_const("EResult", "k_EResultNoLauncherSpecified", 116);
	api_define_const("EResult", "k_EResultMustAgreeToSSA", 117);
	api_define_const("EResult", "k_EResultLauncherMigrated", 118);
	api_define_const("EResult", "k_EResultSteamRealmMismatch", 119);
	api_define_const("EResult", "k_EResultInvalidSignature", 120);
	api_define_const("EResult", "k_EResultParseFailure", 121);
	api_define_const("EResult", "k_EResultNoVerifiedPhone", 122);
	api_define_const("EResult", "k_EResultInsufficientBattery", 123);
	api_define_const("EResult", "k_EResultChargerRequired", 124);
	api_define_const("EResult", "k_EResultCachedCredentialInvalid", 125);
	api_define_const("EResult", "K_EResultPhoneNumberIsVOIP", 126);
	api_define_const("EVoiceResult", "k_EVoiceResultOK", 0);
	api_define_const("EVoiceResult", "k_EVoiceResultNotInitialized", 1);
	api_define_const("EVoiceResult", "k_EVoiceResultNotRecording", 2);
	api_define_const("EVoiceResult", "k_EVoiceResultNoData", 3);
	api_define_const("EVoiceResult", "k_EVoiceResultBufferTooSmall", 4);
	api_define_const("EVoiceResult", "k_EVoiceResultDataCorrupted", 5);
	api_define_const("EVoiceResult", "k_EVoiceResultRestricted", 6);
	api_define_const("EVoiceResult", "k_EVoiceResultUnsupportedCodec", 7);
	api_define_const("EVoiceResult", "k_EVoiceResultReceiverOutOfDate", 8);
	api_define_const("EVoiceResult", "k_EVoiceResultReceiverDidNotAnswer", 9);
	api_define_const("EDenyReason", "k_EDenyInvalid", 0);
	api_define_const("EDenyReason", "k_EDenyInvalidVersion", 1);
	api_define_const("EDenyReason", "k_EDenyGeneric", 2);
	api_define_const("EDenyReason", "k_EDenyNotLoggedOn", 3);
	api_define_const("EDenyReason", "k_EDenyNoLicense", 4);
	api_define_const("EDenyReason", "k_EDenyCheater", 5);
	api_define_const("EDenyReason", "k_EDenyLoggedInElseWhere", 6);
	api_define_const("EDenyReason", "k_EDenyUnknownText", 7);
	api_define_const("EDenyReason", "k_EDenyIncompatibleAnticheat", 8);
	api_define_const("EDenyReason", "k_EDenyMemoryCorruption", 9);
	api_define_const("EDenyReason", "k_EDenyIncompatibleSoftware", 10);
	api_define_const("EDenyReason", "k_EDenySteamConnectionLost", 11);
	api_define_const("EDenyReason", "k_EDenySteamConnectionError", 12);
	api_define_const("EDenyReason", "k_EDenySteamResponseTimedOut", 13);
	api_define_const("EDenyReason", "k_EDenySteamValidationStalled", 14);
	api_define_const("EDenyReason", "k_EDenySteamOwnerLeftGuestUser", 15);
	api_define_const("EBeginAuthSessionResult", "k_EBeginAuthSessionResultOK", 0);
	api_define_const("EBeginAuthSessionResult", "k_EBeginAuthSessionResultInvalidTicket", 1);
	api_define_const("EBeginAuthSessionResult", "k_EBeginAuthSessionResultDuplicateRequest", 2);
	api_define_const("EBeginAuthSessionResult", "k_EBeginAuthSessionResultInvalidVersion", 3);
	api_define_const("EBeginAuthSessionResult", "k_EBeginAuthSessionResultGameMismatch", 4);
	api_define_const("EBeginAuthSessionResult", "k_EBeginAuthSessionResultExpiredTicket", 5);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseOK", 0);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseUserNotConnectedToSteam", 1);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseNoLicenseOrExpired", 2);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseVACBanned", 3);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseLoggedInElseWhere", 4);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseVACCheckTimedOut", 5);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseAuthTicketCanceled", 6);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed", 7);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseAuthTicketInvalid", 8);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponsePublisherIssuedBan", 9);
	api_define_const("EAuthSessionResponse", "k_EAuthSessionResponseAuthTicketNetworkIdentityFailure", 10);
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultHasLicense", 0);
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultDoesNotHaveLicense", 1);
	api_define_const("EUserHasLicenseForAppResult", "k_EUserHasLicenseResultNoAuth", 2);
	api_define_const("EAccountType", "k_EAccountTypeInvalid", 0);
	api_define_const("EAccountType", "k_EAccountTypeIndividual", 1);
	api_define_const("EAccountType", "k_EAccountTypeMultiseat", 2);
	api_define_const("EAccountType", "k_EAccountTypeGameServer", 3);
	api_define_const("EAccountType", "k_EAccountTypeAnonGameServer", 4);
	api_define_const("EAccountType", "k_EAccountTypePending", 5);
	api_define_const("EAccountType", "k_EAccountTypeContentServer", 6);
	api_define_const("EAccountType", "k_EAccountTypeClan", 7);
	api_define_const("EAccountType", "k_EAccountTypeChat", 8);
	api_define_const("EAccountType", "k_EAccountTypeConsoleUser", 9);
	api_define_const("EAccountType", "k_EAccountTypeAnonUser", 10);
	api_define_const("EAccountType", "k_EAccountTypeMax", 11);
	api_define_const("EChatEntryType", "k_EChatEntryTypeInvalid", 0);
	api_define_const("EChatEntryType", "k_EChatEntryTypeChatMsg", 1);
	api_define_const("EChatEntryType", "k_EChatEntryTypeTyping", 2);
	api_define_const("EChatEntryType", "k_EChatEntryTypeInviteGame", 3);
	api_define_const("EChatEntryType", "k_EChatEntryTypeEmote", 4);
	api_define_const("EChatEntryType", "k_EChatEntryTypeLeftConversation", 5);
	api_define_const("EChatEntryType", "k_EChatEntryTypeEntered", 6);
	api_define_const("EChatEntryType", "k_EChatEntryTypeWasKicked", 7);
	api_define_const("EChatEntryType", "k_EChatEntryTypeWasBanned", 8);
	api_define_const("EChatEntryType", "k_EChatEntryTypeDisconnected", 9);
	api_define_const("EChatEntryType", "k_EChatEntryTypeHistoricalChat", 10);
	api_define_const("EChatEntryType", "k_EChatEntryTypeLinkBlocked", 11);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseSuccess", 0);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseDoesntExist", 1);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseNotAllowed", 2);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseFull", 3);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseError", 4);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseBanned", 5);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseLimited", 6);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseClanDisabled", 7);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseCommunityBan", 8);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseMemberBlockedYou", 9);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseYouBlockedMember", 10);
	api_define_const("EChatRoomEnterResponse", "k_EChatRoomEnterResponseRatelimitExceeded", 11);
	api_define_const("EChatSteamIDInstanceFlags", "k_EChatAccountInstanceMask", 0);
	api_define_const("EChatSteamIDInstanceFlags", "k_EChatInstanceFlagClan", 1);
	api_define_const("EChatSteamIDInstanceFlags", "k_EChatInstanceFlagLobby", 2);
	api_define_const("EChatSteamIDInstanceFlags", "k_EChatInstanceFlagMMSLobby", 3);
	api_define_const("ENotificationPosition", "k_EPositionInvalid", 0);
	api_define_const("ENotificationPosition", "k_EPositionTopLeft", 1);
	api_define_const("ENotificationPosition", "k_EPositionTopRight", 2);
	api_define_const("ENotificationPosition", "k_EPositionBottomLeft", 3);
	api_define_const("ENotificationPosition", "k_EPositionBottomRight", 4);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultNone", 0);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultOK", 1);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultInitFailed", 2);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultFrameFailed", 3);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultTimeout", 4);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultBandwidthExceeded", 5);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultLowFPS", 6);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultMissingKeyFrames", 7);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultNoConnection", 8);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultRelayFailed", 9);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultSettingsChanged", 10);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultMissingAudio", 11);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultTooFarBehind", 12);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultTranscodeBehind", 13);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultNotAllowedToPlay", 14);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultBusy", 15);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultBanned", 16);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultAlreadyActive", 17);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultForcedOff", 18);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultAudioBehind", 19);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultShutdown", 20);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultDisconnect", 21);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultVideoInitFailed", 22);
	api_define_const("EBroadcastUploadResult", "k_EBroadcastUploadResultAudioInitFailed", 23);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_None", 0);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_TemporaryFailure", 1);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountDisabled", 2);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountLockedDown", 3);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountLimited", 4);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_TradeBanned", 5);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AccountNotTrusted", 6);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_SteamGuardNotEnabled", 7);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled", 8);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_RecentPasswordReset", 9);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_NewPaymentMethod", 10);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_InvalidCookie", 11);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_UsingNewDevice", 12);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_RecentSelfRefund", 13);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified", 14);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_NoRecentPurchases", 15);
	api_define_const("EMarketNotAllowedReasonFlags", "k_EMarketNotAllowedReason_AcceptedWalletGift", 16);
	api_define_const("EDurationControlProgress", "k_EDurationControlProgress_Full", 0);
	api_define_const("EDurationControlProgress", "k_EDurationControlProgress_Half", 1);
	api_define_const("EDurationControlProgress", "k_EDurationControlProgress_None", 2);
	api_define_const("EDurationControlProgress", "k_EDurationControl_ExitSoon_3h", 3);
	api_define_const("EDurationControlProgress", "k_EDurationControl_ExitSoon_5h", 4);
	api_define_const("EDurationControlProgress", "k_EDurationControl_ExitSoon_Night", 5);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_None", 0);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_1Hour", 1);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_3Hours", 2);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_HalfProgress", 3);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_NoProgress", 4);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_ExitSoon_3h", 5);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_ExitSoon_5h", 6);
	api_define_const("EDurationControlNotification", "k_EDurationControlNotification_ExitSoon_Night", 7);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Invalid", 0);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Offline", 1);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_Online", 2);
	api_define_const("EDurationControlOnlineState", "k_EDurationControlOnlineState_OnlineHighPri", 3);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_OK", 0);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_Search_Already_In_Progress", 1);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_No_Search_In_Progress", 2);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_Not_Lobby_Leader", 3);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_No_Host_Available", 4);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_Search_Params_Invalid", 5);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_Offline", 6);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_NotAuthorized", 7);
	api_define_const("EGameSearchErrorCode_t", "k_EGameSearchErrorCode_Failed_Unknown_Error", 8);
	api_define_const("EPlayerResult_t", "k_EPlayerResultFailedToConnect", 0);
	api_define_const("EPlayerResult_t", "k_EPlayerResultAbandoned", 1);
	api_define_const("EPlayerResult_t", "k_EPlayerResultKicked", 2);
	api_define_const("EPlayerResult_t", "k_EPlayerResultIncomplete", 3);
	api_define_const("EPlayerResult_t", "k_EPlayerResultCompleted", 4);
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_Invalid", 0);
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_HTTP", 1);
	api_define_const("ESteamIPv6ConnectivityProtocol", "k_ESteamIPv6ConnectivityProtocol_UDP", 2);
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Unknown", 0);
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Good", 1);
	api_define_const("ESteamIPv6ConnectivityState", "k_ESteamIPv6ConnectivityState_Bad", 2);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipNone", 0);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipBlocked", 1);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipRequestRecipient", 2);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipFriend", 3);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipRequestInitiator", 4);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipIgnored", 5);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipIgnoredFriend", 6);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipSuggested_DEPRECATED", 7);
	api_define_const("EFriendRelationship", "k_EFriendRelationshipMax", 8);
	api_define_const("EPersonaState", "k_EPersonaStateOffline", 0);
	api_define_const("EPersonaState", "k_EPersonaStateOnline", 1);
	api_define_const("EPersonaState", "k_EPersonaStateBusy", 2);
	api_define_const("EPersonaState", "k_EPersonaStateAway", 3);
	api_define_const("EPersonaState", "k_EPersonaStateSnooze", 4);
	api_define_const("EPersonaState", "k_EPersonaStateLookingToTrade", 5);
	api_define_const("EPersonaState", "k_EPersonaStateLookingToPlay", 6);
	api_define_const("EPersonaState", "k_EPersonaStateInvisible", 7);
	api_define_const("EPersonaState", "k_EPersonaStateMax", 8);
	api_define_const("EFriendFlags", "k_EFriendFlagNone", 0);
	api_define_const("EFriendFlags", "k_EFriendFlagBlocked", 1);
	api_define_const("EFriendFlags", "k_EFriendFlagFriendshipRequested", 2);
	api_define_const("EFriendFlags", "k_EFriendFlagImmediate", 3);
	api_define_const("EFriendFlags", "k_EFriendFlagClanMember", 4);
	api_define_const("EFriendFlags", "k_EFriendFlagOnGameServer", 5);
	api_define_const("EFriendFlags", "k_EFriendFlagRequestingFriendship", 6);
	api_define_const("EFriendFlags", "k_EFriendFlagRequestingInfo", 7);
	api_define_const("EFriendFlags", "k_EFriendFlagIgnored", 8);
	api_define_const("EFriendFlags", "k_EFriendFlagIgnoredFriend", 9);
	api_define_const("EFriendFlags", "k_EFriendFlagChatMember", 10);
	api_define_const("EFriendFlags", "k_EFriendFlagAll", 11);
	api_define_const("EUserRestriction", "k_nUserRestrictionNone", 0);
	api_define_const("EUserRestriction", "k_nUserRestrictionUnknown", 1);
	api_define_const("EUserRestriction", "k_nUserRestrictionAnyChat", 2);
	api_define_const("EUserRestriction", "k_nUserRestrictionVoiceChat", 3);
	api_define_const("EUserRestriction", "k_nUserRestrictionGroupChat", 4);
	api_define_const("EUserRestriction", "k_nUserRestrictionRating", 5);
	api_define_const("EUserRestriction", "k_nUserRestrictionGameInvites", 6);
	api_define_const("EUserRestriction", "k_nUserRestrictionTrading", 7);
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_None", 0);
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_AddToCart", 1);
	api_define_const("EOverlayToStoreFlag", "k_EOverlayToStoreFlag_AddToCartAndShow", 2);
	api_define_const("EActivateGameOverlayToWebPageMode", "k_EActivateGameOverlayToWebPageMode_Default", 0);
	api_define_const("EActivateGameOverlayToWebPageMode", "k_EActivateGameOverlayToWebPageMode_Modal", 1);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_AnimatedAvatar", 0);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_AvatarFrame", 1);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_ProfileModifier", 2);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_ProfileBackground", 3);
	api_define_const("ECommunityProfileItemType", "k_ECommunityProfileItemType_MiniProfileBackground", 4);
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
	api_define_const("EPersonaChange", "k_EPersonaChangeName", 0);
	api_define_const("EPersonaChange", "k_EPersonaChangeStatus", 1);
	api_define_const("EPersonaChange", "k_EPersonaChangeComeOnline", 2);
	api_define_const("EPersonaChange", "k_EPersonaChangeGoneOffline", 3);
	api_define_const("EPersonaChange", "k_EPersonaChangeGamePlayed", 4);
	api_define_const("EPersonaChange", "k_EPersonaChangeGameServer", 5);
	api_define_const("EPersonaChange", "k_EPersonaChangeAvatar", 6);
	api_define_const("EPersonaChange", "k_EPersonaChangeJoinedSource", 7);
	api_define_const("EPersonaChange", "k_EPersonaChangeLeftSource", 8);
	api_define_const("EPersonaChange", "k_EPersonaChangeRelationshipChanged", 9);
	api_define_const("EPersonaChange", "k_EPersonaChangeNameFirstSet", 10);
	api_define_const("EPersonaChange", "k_EPersonaChangeBroadcast", 11);
	api_define_const("EPersonaChange", "k_EPersonaChangeNickname", 12);
	api_define_const("EPersonaChange", "k_EPersonaChangeSteamLevel", 13);
	api_define_const("EPersonaChange", "k_EPersonaChangeRichPresence", 14);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureNone", 0);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureSteamGone", 1);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureNetworkFailure", 2);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureInvalidHandle", 3);
	api_define_const("ESteamAPICallFailure", "k_ESteamAPICallFailureMismatchedCallback", 4);
	api_define_const("EGamepadTextInputMode", "k_EGamepadTextInputModeNormal", 0);
	api_define_const("EGamepadTextInputMode", "k_EGamepadTextInputModePassword", 1);
	api_define_const("EGamepadTextInputLineMode", "k_EGamepadTextInputLineModeSingleLine", 0);
	api_define_const("EGamepadTextInputLineMode", "k_EGamepadTextInputLineModeMultipleLines", 1);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeSingleLine", 0);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeMultipleLines", 1);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeEmail", 2);
	api_define_const("EFloatingGamepadTextInputMode", "k_EFloatingGamepadTextInputModeModeNumeric", 3);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextUnknown", 0);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextGameContent", 1);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextChat", 2);
	api_define_const("ETextFilteringContext", "k_ETextFilteringContextName", 3);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureInvalidSignature", 0);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureValidSignature", 1);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureFileNotFound", 2);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureNoSignaturesFoundForThisApp", 3);
	api_define_const("ECheckFileSignature", "k_ECheckFileSignatureNoSignaturesFoundForThisFile", 4);
	api_define_const("EMatchMakingServerResponse", "eServerResponded", 0);
	api_define_const("EMatchMakingServerResponse", "eServerFailedToRespond", 1);
	api_define_const("EMatchMakingServerResponse", "eNoServersListedOnMasterServer", 2);
	api_define_const("ELobbyType", "k_ELobbyTypePrivate", 0);
	api_define_const("ELobbyType", "k_ELobbyTypeFriendsOnly", 1);
	api_define_const("ELobbyType", "k_ELobbyTypePublic", 2);
	api_define_const("ELobbyType", "k_ELobbyTypeInvisible", 3);
	api_define_const("ELobbyType", "k_ELobbyTypePrivateUnique", 4);
	api_define_const("ELobbyComparison", "k_ELobbyComparisonEqualToOrLessThan", 0);
	api_define_const("ELobbyComparison", "k_ELobbyComparisonLessThan", 1);
	api_define_const("ELobbyComparison", "k_ELobbyComparisonEqual", 2);
	api_define_const("ELobbyComparison", "k_ELobbyComparisonGreaterThan", 3);
	api_define_const("ELobbyComparison", "k_ELobbyComparisonEqualToOrGreaterThan", 4);
	api_define_const("ELobbyComparison", "k_ELobbyComparisonNotEqual", 5);
	api_define_const("ELobbyDistanceFilter", "k_ELobbyDistanceFilterClose", 0);
	api_define_const("ELobbyDistanceFilter", "k_ELobbyDistanceFilterDefault", 1);
	api_define_const("ELobbyDistanceFilter", "k_ELobbyDistanceFilterFar", 2);
	api_define_const("ELobbyDistanceFilter", "k_ELobbyDistanceFilterWorldwide", 3);
	api_define_const("EChatMemberStateChange", "k_EChatMemberStateChangeEntered", 0);
	api_define_const("EChatMemberStateChange", "k_EChatMemberStateChangeLeft", 1);
	api_define_const("EChatMemberStateChange", "k_EChatMemberStateChangeDisconnected", 2);
	api_define_const("EChatMemberStateChange", "k_EChatMemberStateChangeKicked", 3);
	api_define_const("EChatMemberStateChange", "k_EChatMemberStateChangeBanned", 4);
	api_define_const("ESteamPartyBeaconLocationType", "k_ESteamPartyBeaconLocationType_Invalid", 0);
	api_define_const("ESteamPartyBeaconLocationType", "k_ESteamPartyBeaconLocationType_ChatGroup", 1);
	api_define_const("ESteamPartyBeaconLocationType", "k_ESteamPartyBeaconLocationType_Max", 2);
	api_define_const("ESteamPartyBeaconLocationData", "k_ESteamPartyBeaconLocationDataInvalid", 0);
	api_define_const("ESteamPartyBeaconLocationData", "k_ESteamPartyBeaconLocationDataName", 1);
	api_define_const("ESteamPartyBeaconLocationData", "k_ESteamPartyBeaconLocationDataIconURLSmall", 2);
	api_define_const("ESteamPartyBeaconLocationData", "k_ESteamPartyBeaconLocationDataIconURLMedium", 3);
	api_define_const("ESteamPartyBeaconLocationData", "k_ESteamPartyBeaconLocationDataIconURLLarge", 4);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformNone", 0);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformWindows", 1);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformOSX", 2);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformPS3", 3);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformLinux", 4);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformSwitch", 5);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformAndroid", 6);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformIOS", 7);
	api_define_const("ERemoteStoragePlatform", "k_ERemoteStoragePlatformAll", 8);
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityPublic", 0);
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityFriendsOnly", 1);
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityPrivate", 2);
	api_define_const("ERemoteStoragePublishedFileVisibility", "k_ERemoteStoragePublishedFileVisibilityUnlisted", 3);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeFirst", 0);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeCommunity", 1);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeMicrotransaction", 2);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeCollection", 3);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeArt", 4);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeVideo", 5);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeScreenshot", 6);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeGame", 7);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeSoftware", 8);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeConcept", 9);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeWebGuide", 10);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeIntegratedGuide", 11);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeMerch", 12);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeControllerBinding", 13);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeSteamworksAccessInvite", 14);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeSteamVideo", 15);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeGameManagedItem", 16);
	api_define_const("EWorkshopFileType", "k_EWorkshopFileTypeMax", 17);
	api_define_const("EWorkshopVote", "k_EWorkshopVoteUnvoted", 0);
	api_define_const("EWorkshopVote", "k_EWorkshopVoteFor", 1);
	api_define_const("EWorkshopVote", "k_EWorkshopVoteAgainst", 2);
	api_define_const("EWorkshopVote", "k_EWorkshopVoteLater", 3);
	api_define_const("EWorkshopFileAction", "k_EWorkshopFileActionPlayed", 0);
	api_define_const("EWorkshopFileAction", "k_EWorkshopFileActionCompleted", 1);
	api_define_const("EWorkshopEnumerationType", "k_EWorkshopEnumerationTypeRankedByVote", 0);
	api_define_const("EWorkshopEnumerationType", "k_EWorkshopEnumerationTypeRecent", 1);
	api_define_const("EWorkshopEnumerationType", "k_EWorkshopEnumerationTypeTrending", 2);
	api_define_const("EWorkshopEnumerationType", "k_EWorkshopEnumerationTypeFavoritesOfFriends", 3);
	api_define_const("EWorkshopEnumerationType", "k_EWorkshopEnumerationTypeVotedByFriends", 4);
	api_define_const("EWorkshopEnumerationType", "k_EWorkshopEnumerationTypeContentByFriends", 5);
	api_define_const("EWorkshopEnumerationType", "k_EWorkshopEnumerationTypeRecentFromFollowedUsers", 6);
	api_define_const("EWorkshopVideoProvider", "k_EWorkshopVideoProviderNone", 0);
	api_define_const("EWorkshopVideoProvider", "k_EWorkshopVideoProviderYoutube", 1);
	api_define_const("EUGCReadAction", "k_EUGCRead_ContinueReadingUntilFinished", 0);
	api_define_const("EUGCReadAction", "k_EUGCRead_ContinueReading", 1);
	api_define_const("EUGCReadAction", "k_EUGCRead_Close", 2);
	api_define_const("ERemoteStorageLocalFileChange", "k_ERemoteStorageLocalFileChange_Invalid", 0);
	api_define_const("ERemoteStorageLocalFileChange", "k_ERemoteStorageLocalFileChange_FileUpdated", 1);
	api_define_const("ERemoteStorageLocalFileChange", "k_ERemoteStorageLocalFileChange_FileDeleted", 2);
	api_define_const("ERemoteStorageFilePathType", "k_ERemoteStorageFilePathType_Invalid", 0);
	api_define_const("ERemoteStorageFilePathType", "k_ERemoteStorageFilePathType_Absolute", 1);
	api_define_const("ERemoteStorageFilePathType", "k_ERemoteStorageFilePathType_APIFilename", 2);
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestGlobal", 0);
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestGlobalAroundUser", 1);
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestFriends", 2);
	api_define_const("ELeaderboardDataRequest", "k_ELeaderboardDataRequestUsers", 3);
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodNone", 0);
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodAscending", 1);
	api_define_const("ELeaderboardSortMethod", "k_ELeaderboardSortMethodDescending", 2);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeNone", 0);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeNumeric", 1);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeTimeSeconds", 2);
	api_define_const("ELeaderboardDisplayType", "k_ELeaderboardDisplayTypeTimeMilliSeconds", 3);
	api_define_const("ELeaderboardUploadScoreMethod", "k_ELeaderboardUploadScoreMethodNone", 0);
	api_define_const("ELeaderboardUploadScoreMethod", "k_ELeaderboardUploadScoreMethodKeepBest", 1);
	api_define_const("ELeaderboardUploadScoreMethod", "k_ELeaderboardUploadScoreMethodForceUpdate", 2);
	api_define_const("EP2PSessionError", "k_EP2PSessionErrorNone", 0);
	api_define_const("EP2PSessionError", "k_EP2PSessionErrorNoRightsToApp", 1);
	api_define_const("EP2PSessionError", "k_EP2PSessionErrorTimeout", 2);
	api_define_const("EP2PSessionError", "k_EP2PSessionErrorNotRunningApp_DELETED", 3);
	api_define_const("EP2PSessionError", "k_EP2PSessionErrorDestinationNotLoggedIn_DELETED", 4);
	api_define_const("EP2PSessionError", "k_EP2PSessionErrorMax", 5);
	api_define_const("EP2PSend", "k_EP2PSendUnreliable", 0);
	api_define_const("EP2PSend", "k_EP2PSendUnreliableNoDelay", 1);
	api_define_const("EP2PSend", "k_EP2PSendReliable", 2);
	api_define_const("EP2PSend", "k_EP2PSendReliableWithBuffering", 3);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateInvalid", 0);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateConnected", 1);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateInitiated", 2);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateLocalCandidatesFound", 3);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateReceivedRemoteCandidates", 4);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateChallengeHandshake", 5);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateDisconnecting", 6);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateLocalDisconnect", 7);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateTimeoutDuringConnect", 8);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateRemoteEndDisconnected", 9);
	api_define_const("ESNetSocketState", "k_ESNetSocketStateConnectionBroken", 10);
	api_define_const("ESNetSocketConnectionType", "k_ESNetSocketConnectionTypeNotConnected", 0);
	api_define_const("ESNetSocketConnectionType", "k_ESNetSocketConnectionTypeUDP", 1);
	api_define_const("ESNetSocketConnectionType", "k_ESNetSocketConnectionTypeUDPRelay", 2);
	api_define_const("EVRScreenshotType", "k_EVRScreenshotType_None", 0);
	api_define_const("EVRScreenshotType", "k_EVRScreenshotType_Mono", 1);
	api_define_const("EVRScreenshotType", "k_EVRScreenshotType_Stereo", 2);
	api_define_const("EVRScreenshotType", "k_EVRScreenshotType_MonoCubemap", 3);
	api_define_const("EVRScreenshotType", "k_EVRScreenshotType_MonoPanorama", 4);
	api_define_const("EVRScreenshotType", "k_EVRScreenshotType_StereoPanorama", 5);
	api_define_const("AudioPlayback_Status", "AudioPlayback_Undefined", 0);
	api_define_const("AudioPlayback_Status", "AudioPlayback_Playing", 1);
	api_define_const("AudioPlayback_Status", "AudioPlayback_Paused", 2);
	api_define_const("AudioPlayback_Status", "AudioPlayback_Idle", 3);
	api_define_const("EHTTPMethod", "k_EHTTPMethodInvalid", 0);
	api_define_const("EHTTPMethod", "k_EHTTPMethodGET", 1);
	api_define_const("EHTTPMethod", "k_EHTTPMethodHEAD", 2);
	api_define_const("EHTTPMethod", "k_EHTTPMethodPOST", 3);
	api_define_const("EHTTPMethod", "k_EHTTPMethodPUT", 4);
	api_define_const("EHTTPMethod", "k_EHTTPMethodDELETE", 5);
	api_define_const("EHTTPMethod", "k_EHTTPMethodOPTIONS", 6);
	api_define_const("EHTTPMethod", "k_EHTTPMethodPATCH", 7);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCodeInvalid", 0);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode100Continue", 1);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode101SwitchingProtocols", 2);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode200OK", 3);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode201Created", 4);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode202Accepted", 5);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode203NonAuthoritative", 6);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode204NoContent", 7);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode205ResetContent", 8);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode206PartialContent", 9);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode300MultipleChoices", 10);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode301MovedPermanently", 11);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode302Found", 12);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode303SeeOther", 13);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode304NotModified", 14);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode305UseProxy", 15);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode307TemporaryRedirect", 16);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode308PermanentRedirect", 17);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode400BadRequest", 18);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode401Unauthorized", 19);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode402PaymentRequired", 20);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode403Forbidden", 21);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode404NotFound", 22);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode405MethodNotAllowed", 23);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode406NotAcceptable", 24);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode407ProxyAuthRequired", 25);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode408RequestTimeout", 26);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode409Conflict", 27);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode410Gone", 28);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode411LengthRequired", 29);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode412PreconditionFailed", 30);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode413RequestEntityTooLarge", 31);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode414RequestURITooLong", 32);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode415UnsupportedMediaType", 33);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode416RequestedRangeNotSatisfiable", 34);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode417ExpectationFailed", 35);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode4xxUnknown", 36);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode429TooManyRequests", 37);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode444ConnectionClosed", 38);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode500InternalServerError", 39);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode501NotImplemented", 40);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode502BadGateway", 41);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode503ServiceUnavailable", 42);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode504GatewayTimeout", 43);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode505HTTPVersionNotSupported", 44);
	api_define_const("EHTTPStatusCode", "k_EHTTPStatusCode5xxUnknown", 45);
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
	api_define_const("ESteamControllerPad", "k_ESteamControllerPad_Left", 0);
	api_define_const("ESteamControllerPad", "k_ESteamControllerPad_Right", 1);
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Left", 0);
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Right", 1);
	api_define_const("EControllerHapticLocation", "k_EControllerHapticLocation_Both", 2);
	api_define_const("EControllerHapticType", "k_EControllerHapticType_Off", 0);
	api_define_const("EControllerHapticType", "k_EControllerHapticType_Tick", 1);
	api_define_const("EControllerHapticType", "k_EControllerHapticType_Click", 2);
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
	api_define_const("ESteamInputConfigurationEnableType", "k_ESteamInputConfigurationEnableType_None", 0);
	api_define_const("ESteamInputConfigurationEnableType", "k_ESteamInputConfigurationEnableType_Playstation", 1);
	api_define_const("ESteamInputConfigurationEnableType", "k_ESteamInputConfigurationEnableType_Xbox", 2);
	api_define_const("ESteamInputConfigurationEnableType", "k_ESteamInputConfigurationEnableType_Generic", 3);
	api_define_const("ESteamInputConfigurationEnableType", "k_ESteamInputConfigurationEnableType_Switch", 4);
	api_define_const("ESteamInputLEDFlag", "k_ESteamInputLEDFlag_SetColor", 0);
	api_define_const("ESteamInputLEDFlag", "k_ESteamInputLEDFlag_RestoreUserDefault", 1);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Small", 0);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Medium", 1);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Large", 2);
	api_define_const("ESteamInputGlyphSize", "k_ESteamInputGlyphSize_Count", 3);
	api_define_const("ESteamInputGlyphStyle", "ESteamInputGlyphStyle_Knockout", 0);
	api_define_const("ESteamInputGlyphStyle", "ESteamInputGlyphStyle_Light", 1);
	api_define_const("ESteamInputGlyphStyle", "ESteamInputGlyphStyle_Dark", 2);
	api_define_const("ESteamInputGlyphStyle", "ESteamInputGlyphStyle_NeutralColorABXY", 3);
	api_define_const("ESteamInputGlyphStyle", "ESteamInputGlyphStyle_SolidABXY", 4);
	api_define_const("ESteamInputActionEventType", "ESteamInputActionEventType_DigitalAction", 0);
	api_define_const("ESteamInputActionEventType", "ESteamInputActionEventType_AnalogAction", 1);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_None", 0);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_A", 1);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_B", 2);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_X", 3);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Y", 4);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftBumper", 5);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightBumper", 6);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftGrip", 7);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightGrip", 8);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Start", 9);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Back", 10);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftPad_Touch", 11);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftPad_Swipe", 12);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftPad_Click", 13);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftPad_DPadNorth", 14);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftPad_DPadSouth", 15);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftPad_DPadWest", 16);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftPad_DPadEast", 17);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightPad_Touch", 18);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightPad_Swipe", 19);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightPad_Click", 20);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightPad_DPadNorth", 21);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightPad_DPadSouth", 22);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightPad_DPadWest", 23);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightPad_DPadEast", 24);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftTrigger_Pull", 25);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftTrigger_Click", 26);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightTrigger_Pull", 27);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_RightTrigger_Click", 28);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftStick_Move", 29);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftStick_Click", 30);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftStick_DPadNorth", 31);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftStick_DPadSouth", 32);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftStick_DPadWest", 33);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_LeftStick_DPadEast", 34);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Gyro_Move", 35);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Gyro_Pitch", 36);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Gyro_Yaw", 37);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Gyro_Roll", 38);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_X", 39);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Circle", 40);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Triangle", 41);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Square", 42);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftBumper", 43);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightBumper", 44);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Options", 45);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Share", 46);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftPad_Touch", 47);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftPad_Swipe", 48);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftPad_Click", 49);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftPad_DPadNorth", 50);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftPad_DPadSouth", 51);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftPad_DPadWest", 52);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftPad_DPadEast", 53);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightPad_Touch", 54);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightPad_Swipe", 55);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightPad_Click", 56);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightPad_DPadNorth", 57);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightPad_DPadSouth", 58);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightPad_DPadWest", 59);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightPad_DPadEast", 60);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_CenterPad_Touch", 61);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_CenterPad_Swipe", 62);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_CenterPad_Click", 63);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_CenterPad_DPadNorth", 64);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_CenterPad_DPadSouth", 65);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_CenterPad_DPadWest", 66);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_CenterPad_DPadEast", 67);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftTrigger_Pull", 68);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftTrigger_Click", 69);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightTrigger_Pull", 70);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightTrigger_Click", 71);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftStick_Move", 72);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftStick_Click", 73);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftStick_DPadNorth", 74);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftStick_DPadSouth", 75);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftStick_DPadWest", 76);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_LeftStick_DPadEast", 77);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightStick_Move", 78);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightStick_Click", 79);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightStick_DPadNorth", 80);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightStick_DPadSouth", 81);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightStick_DPadWest", 82);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_RightStick_DPadEast", 83);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_DPad_North", 84);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_DPad_South", 85);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_DPad_West", 86);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_DPad_East", 87);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Gyro_Move", 88);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Gyro_Pitch", 89);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Gyro_Yaw", 90);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_Gyro_Roll", 91);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_A", 92);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_B", 93);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_X", 94);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_Y", 95);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftBumper", 96);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightBumper", 97);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_Menu", 98);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_View", 99);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftTrigger_Pull", 100);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftTrigger_Click", 101);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightTrigger_Pull", 102);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightTrigger_Click", 103);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftStick_Move", 104);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftStick_Click", 105);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftStick_DPadNorth", 106);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftStick_DPadSouth", 107);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftStick_DPadWest", 108);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftStick_DPadEast", 109);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightStick_Move", 110);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightStick_Click", 111);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightStick_DPadNorth", 112);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightStick_DPadSouth", 113);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightStick_DPadWest", 114);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightStick_DPadEast", 115);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_DPad_North", 116);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_DPad_South", 117);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_DPad_West", 118);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_DPad_East", 119);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_A", 120);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_B", 121);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_X", 122);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_Y", 123);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftBumper", 124);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightBumper", 125);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_Start", 126);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_Back", 127);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftTrigger_Pull", 128);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftTrigger_Click", 129);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightTrigger_Pull", 130);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightTrigger_Click", 131);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftStick_Move", 132);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftStick_Click", 133);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftStick_DPadNorth", 134);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftStick_DPadSouth", 135);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftStick_DPadWest", 136);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_LeftStick_DPadEast", 137);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightStick_Move", 138);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightStick_Click", 139);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightStick_DPadNorth", 140);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightStick_DPadSouth", 141);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightStick_DPadWest", 142);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_RightStick_DPadEast", 143);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_DPad_North", 144);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_DPad_South", 145);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_DPad_West", 146);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_DPad_East", 147);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_A", 148);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_B", 149);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_X", 150);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_Y", 151);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftBumper", 152);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightBumper", 153);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftGrip_Lower", 154);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftGrip_Upper", 155);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightGrip_Lower", 156);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightGrip_Upper", 157);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftBumper_Pressure", 158);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightBumper_Pressure", 159);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftGrip_Pressure", 160);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightGrip_Pressure", 161);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftGrip_Upper_Pressure", 162);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightGrip_Upper_Pressure", 163);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_Start", 164);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_Back", 165);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_Touch", 166);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_Swipe", 167);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_Click", 168);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_Pressure", 169);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_DPadNorth", 170);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_DPadSouth", 171);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_DPadWest", 172);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftPad_DPadEast", 173);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_Touch", 174);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_Swipe", 175);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_Click", 176);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_Pressure", 177);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_DPadNorth", 178);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_DPadSouth", 179);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_DPadWest", 180);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightPad_DPadEast", 181);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftTrigger_Pull", 182);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftTrigger_Click", 183);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightTrigger_Pull", 184);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_RightTrigger_Click", 185);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftStick_Move", 186);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftStick_Click", 187);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftStick_DPadNorth", 188);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftStick_DPadSouth", 189);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftStick_DPadWest", 190);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_LeftStick_DPadEast", 191);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_Gyro_Move", 192);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_Gyro_Pitch", 193);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_Gyro_Yaw", 194);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamV2_Gyro_Roll", 195);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_A", 196);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_B", 197);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_X", 198);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_Y", 199);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftBumper", 200);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightBumper", 201);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_Plus", 202);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_Minus", 203);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_Capture", 204);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftTrigger_Pull", 205);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftTrigger_Click", 206);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightTrigger_Pull", 207);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightTrigger_Click", 208);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftStick_Move", 209);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftStick_Click", 210);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftStick_DPadNorth", 211);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftStick_DPadSouth", 212);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftStick_DPadWest", 213);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftStick_DPadEast", 214);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightStick_Move", 215);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightStick_Click", 216);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightStick_DPadNorth", 217);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightStick_DPadSouth", 218);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightStick_DPadWest", 219);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightStick_DPadEast", 220);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_DPad_North", 221);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_DPad_South", 222);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_DPad_West", 223);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_DPad_East", 224);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_ProGyro_Move", 225);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_ProGyro_Pitch", 226);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_ProGyro_Yaw", 227);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_ProGyro_Roll", 228);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightGyro_Move", 229);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightGyro_Pitch", 230);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightGyro_Yaw", 231);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightGyro_Roll", 232);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftGyro_Move", 233);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftGyro_Pitch", 234);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftGyro_Yaw", 235);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftGyro_Roll", 236);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftGrip_Lower", 237);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_LeftGrip_Upper", 238);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightGrip_Lower", 239);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_RightGrip_Upper", 240);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS4_DPad_Move", 241);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_DPad_Move", 242);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBox360_DPad_Move", 243);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_DPad_Move", 244);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_X", 245);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Circle", 246);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Triangle", 247);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Square", 248);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftBumper", 249);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightBumper", 250);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Option", 251);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Create", 252);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Mute", 253);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftPad_Touch", 254);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftPad_Swipe", 255);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftPad_Click", 256);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftPad_DPadNorth", 257);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftPad_DPadSouth", 258);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftPad_DPadWest", 259);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftPad_DPadEast", 260);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightPad_Touch", 261);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightPad_Swipe", 262);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightPad_Click", 263);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightPad_DPadNorth", 264);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightPad_DPadSouth", 265);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightPad_DPadWest", 266);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightPad_DPadEast", 267);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_CenterPad_Touch", 268);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_CenterPad_Swipe", 269);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_CenterPad_Click", 270);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_CenterPad_DPadNorth", 271);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_CenterPad_DPadSouth", 272);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_CenterPad_DPadWest", 273);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_CenterPad_DPadEast", 274);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftTrigger_Pull", 275);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftTrigger_Click", 276);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightTrigger_Pull", 277);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightTrigger_Click", 278);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftStick_Move", 279);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftStick_Click", 280);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftStick_DPadNorth", 281);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftStick_DPadSouth", 282);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftStick_DPadWest", 283);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftStick_DPadEast", 284);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightStick_Move", 285);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightStick_Click", 286);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightStick_DPadNorth", 287);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightStick_DPadSouth", 288);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightStick_DPadWest", 289);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightStick_DPadEast", 290);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_DPad_Move", 291);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_DPad_North", 292);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_DPad_South", 293);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_DPad_West", 294);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_DPad_East", 295);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Gyro_Move", 296);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Gyro_Pitch", 297);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Gyro_Yaw", 298);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_Gyro_Roll", 299);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftGrip_Lower", 300);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_LeftGrip_Upper", 301);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightGrip_Lower", 302);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_RightGrip_Upper", 303);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_XBoxOne_Share", 304);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_A", 305);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_B", 306);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_X", 307);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Y", 308);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_L1", 309);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_R1", 310);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Menu", 311);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_View", 312);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftPad_Touch", 313);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftPad_Swipe", 314);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftPad_Click", 315);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftPad_DPadNorth", 316);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftPad_DPadSouth", 317);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftPad_DPadWest", 318);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftPad_DPadEast", 319);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightPad_Touch", 320);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightPad_Swipe", 321);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightPad_Click", 322);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightPad_DPadNorth", 323);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightPad_DPadSouth", 324);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightPad_DPadWest", 325);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightPad_DPadEast", 326);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_L2_SoftPull", 327);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_L2", 328);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_R2_SoftPull", 329);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_R2", 330);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftStick_Move", 331);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_L3", 332);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftStick_DPadNorth", 333);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftStick_DPadSouth", 334);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftStick_DPadWest", 335);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftStick_DPadEast", 336);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_LeftStick_Touch", 337);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightStick_Move", 338);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_R3", 339);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightStick_DPadNorth", 340);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightStick_DPadSouth", 341);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightStick_DPadWest", 342);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightStick_DPadEast", 343);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_RightStick_Touch", 344);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_L4", 345);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_R4", 346);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_L5", 347);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_R5", 348);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_DPad_Move", 349);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_DPad_North", 350);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_DPad_South", 351);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_DPad_West", 352);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_DPad_East", 353);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Gyro_Move", 354);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Gyro_Pitch", 355);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Gyro_Yaw", 356);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Gyro_Roll", 357);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved1", 358);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved2", 359);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved3", 360);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved4", 361);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved5", 362);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved6", 363);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved7", 364);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved8", 365);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved9", 366);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved10", 367);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved11", 368);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved12", 369);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved13", 370);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved14", 371);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved15", 372);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved16", 373);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved17", 374);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved18", 375);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved19", 376);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_SteamDeck_Reserved20", 377);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_JoyConButton_N", 378);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_JoyConButton_E", 379);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_JoyConButton_S", 380);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Switch_JoyConButton_W", 381);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftGrip", 382);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightGrip", 383);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_LeftFn", 384);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_PS5_RightFn", 385);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_Count", 386);
	api_define_const("EControllerActionOrigin", "k_EControllerActionOrigin_MaximumPossibleValue", 387);
	api_define_const("ESteamControllerLEDFlag", "k_ESteamControllerLEDFlag_SetColor", 0);
	api_define_const("ESteamControllerLEDFlag", "k_ESteamControllerLEDFlag_RestoreUserDefault", 1);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Items", 0);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Items_Mtx", 1);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Items_ReadyToUse", 2);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Collections", 3);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Artwork", 4);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Videos", 5);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_Screenshots", 6);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_AllGuides", 7);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_WebGuides", 8);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_IntegratedGuides", 9);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_UsableInGame", 10);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_ControllerBindings", 11);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_GameManagedItems", 12);
	api_define_const("EUGCMatchingUGCType", "k_EUGCMatchingUGCType_All", 13);
	api_define_const("EUserUGCList", "k_EUserUGCList_Published", 0);
	api_define_const("EUserUGCList", "k_EUserUGCList_VotedOn", 1);
	api_define_const("EUserUGCList", "k_EUserUGCList_VotedUp", 2);
	api_define_const("EUserUGCList", "k_EUserUGCList_VotedDown", 3);
	api_define_const("EUserUGCList", "k_EUserUGCList_WillVoteLater", 4);
	api_define_const("EUserUGCList", "k_EUserUGCList_Favorited", 5);
	api_define_const("EUserUGCList", "k_EUserUGCList_Subscribed", 6);
	api_define_const("EUserUGCList", "k_EUserUGCList_UsedOrPlayed", 7);
	api_define_const("EUserUGCList", "k_EUserUGCList_Followed", 8);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_CreationOrderDesc", 0);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_CreationOrderAsc", 1);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_TitleAsc", 2);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_LastUpdatedDesc", 3);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_SubscriptionDateDesc", 4);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_VoteScoreDesc", 5);
	api_define_const("EUserUGCListSortOrder", "k_EUserUGCListSortOrder_ForModeration", 6);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByVote", 0);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByPublicationDate", 1);
	api_define_const("EUGCQuery", "k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate", 2);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTrend", 3);
	api_define_const("EUGCQuery", "k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate", 4);
	api_define_const("EUGCQuery", "k_EUGCQuery_CreatedByFriendsRankedByPublicationDate", 5);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByNumTimesReported", 6);
	api_define_const("EUGCQuery", "k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate", 7);
	api_define_const("EUGCQuery", "k_EUGCQuery_NotYetRated", 8);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTotalVotesAsc", 9);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByVotesUp", 10);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTextSearch", 11);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTotalUniqueSubscriptions", 12);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByPlaytimeTrend", 13);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByTotalPlaytime", 14);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByAveragePlaytimeTrend", 15);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByLifetimeAveragePlaytime", 16);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByPlaytimeSessionsTrend", 17);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByLifetimePlaytimeSessions", 18);
	api_define_const("EUGCQuery", "k_EUGCQuery_RankedByLastUpdatedDate", 19);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusInvalid", 0);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusPreparingConfig", 1);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusPreparingContent", 2);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusUploadingContent", 3);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusUploadingPreviewFile", 4);
	api_define_const("EItemUpdateStatus", "k_EItemUpdateStatusCommittingChanges", 5);
	api_define_const("EItemState", "k_EItemStateNone", 0);
	api_define_const("EItemState", "k_EItemStateSubscribed", 1);
	api_define_const("EItemState", "k_EItemStateLegacyItem", 2);
	api_define_const("EItemState", "k_EItemStateInstalled", 3);
	api_define_const("EItemState", "k_EItemStateNeedsUpdate", 4);
	api_define_const("EItemState", "k_EItemStateDownloading", 5);
	api_define_const("EItemState", "k_EItemStateDownloadPending", 6);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumSubscriptions", 0);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumFavorites", 1);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumFollowers", 2);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueSubscriptions", 3);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueFavorites", 4);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueFollowers", 5);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumUniqueWebsiteViews", 6);
	api_define_const("EItemStatistic", "k_EItemStatistic_ReportScore", 7);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumSecondsPlayed", 8);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumPlaytimeSessions", 9);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumComments", 10);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumSecondsPlayedDuringTimePeriod", 11);
	api_define_const("EItemStatistic", "k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod", 12);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_Image", 0);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_YouTubeVideo", 1);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_Sketchfab", 2);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_EnvironmentMap_HorizontalCross", 3);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_EnvironmentMap_LatLong", 4);
	api_define_const("EItemPreviewType", "k_EItemPreviewType_ReservedMax", 5);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_NudityOrSexualContent", 0);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_FrequentViolenceOrGore", 1);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_AdultOnlySexualContent", 2);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_GratuitousSexualContent", 3);
	api_define_const("EUGCContentDescriptorID", "k_EUGCContentDescriptor_AnyMatureContent", 4);
	api_define_const("ESteamItemFlags", "k_ESteamItemNoTrade", 0);
	api_define_const("ESteamItemFlags", "k_ESteamItemRemoved", 1);
	api_define_const("ESteamItemFlags", "k_ESteamItemConsumed", 2);
	api_define_const("ETimelineGameMode", "k_ETimelineGameMode_Invalid", 0);
	api_define_const("ETimelineGameMode", "k_ETimelineGameMode_Playing", 1);
	api_define_const("ETimelineGameMode", "k_ETimelineGameMode_Staging", 2);
	api_define_const("ETimelineGameMode", "k_ETimelineGameMode_Menus", 3);
	api_define_const("ETimelineGameMode", "k_ETimelineGameMode_Max", 4);
	api_define_const("EParentalFeature", "k_EFeatureInvalid", 0);
	api_define_const("EParentalFeature", "k_EFeatureStore", 1);
	api_define_const("EParentalFeature", "k_EFeatureCommunity", 2);
	api_define_const("EParentalFeature", "k_EFeatureProfile", 3);
	api_define_const("EParentalFeature", "k_EFeatureFriends", 4);
	api_define_const("EParentalFeature", "k_EFeatureNews", 5);
	api_define_const("EParentalFeature", "k_EFeatureTrading", 6);
	api_define_const("EParentalFeature", "k_EFeatureSettings", 7);
	api_define_const("EParentalFeature", "k_EFeatureConsole", 8);
	api_define_const("EParentalFeature", "k_EFeatureBrowser", 9);
	api_define_const("EParentalFeature", "k_EFeatureParentalSetup", 10);
	api_define_const("EParentalFeature", "k_EFeatureLibrary", 11);
	api_define_const("EParentalFeature", "k_EFeatureTest", 12);
	api_define_const("EParentalFeature", "k_EFeatureSiteLicense", 13);
	api_define_const("EParentalFeature", "k_EFeatureKioskMode", 14);
	api_define_const("EParentalFeature", "k_EFeatureMax", 15);
	api_define_const("ESteamDeviceFormFactor", "k_ESteamDeviceFormFactorUnknown", 0);
	api_define_const("ESteamDeviceFormFactor", "k_ESteamDeviceFormFactorPhone", 1);
	api_define_const("ESteamDeviceFormFactor", "k_ESteamDeviceFormFactorTablet", 2);
	api_define_const("ESteamDeviceFormFactor", "k_ESteamDeviceFormFactorComputer", 3);
	api_define_const("ESteamDeviceFormFactor", "k_ESteamDeviceFormFactorTV", 4);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_CannotTry", 0);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_Failed", 1);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_Previously", 2);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_Retrying", 3);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_NeverTried", 4);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_Waiting", 5);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_Attempting", 6);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_Current", 7);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability_Unknown", 8);
	api_define_const("ESteamNetworkingAvailability", "k_ESteamNetworkingAvailability__Force32bit", 9);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_Invalid", 0);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_SteamID", 1);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_XboxPairwiseID", 2);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_SonyPSN", 3);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_GoogleStadia", 4);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_IPAddress", 5);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_GenericString", 6);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_GenericBytes", 7);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType_UnknownType", 8);
	api_define_const("ESteamNetworkingIdentityType", "k_ESteamNetworkingIdentityType__Force32bit", 9);
	api_define_const("ESteamNetworkingFakeIPType", "k_ESteamNetworkingFakeIPType_Invalid", 0);
	api_define_const("ESteamNetworkingFakeIPType", "k_ESteamNetworkingFakeIPType_NotFake", 1);
	api_define_const("ESteamNetworkingFakeIPType", "k_ESteamNetworkingFakeIPType_GlobalIPv4", 2);
	api_define_const("ESteamNetworkingFakeIPType", "k_ESteamNetworkingFakeIPType_LocalIPv4", 3);
	api_define_const("ESteamNetworkingFakeIPType", "k_ESteamNetworkingFakeIPType__Force32Bit", 4);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_None", 0);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_Connecting", 1);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_FindingRoute", 2);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_Connected", 3);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_ClosedByPeer", 4);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_ProblemDetectedLocally", 5);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_FinWait", 6);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_Linger", 7);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState_Dead", 8);
	api_define_const("ESteamNetworkingConnectionState", "k_ESteamNetworkingConnectionState__Force32Bit", 9);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Invalid", 0);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_App_Min", 1);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_App_Generic", 2);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_App_Max", 3);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_AppException_Min", 4);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_AppException_Generic", 5);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_AppException_Max", 6);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_Min", 7);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_OfflineMode", 8);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_ManyRelayConnectivity", 9);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_HostedServerPrimaryRelay", 10);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_NetworkConfig", 11);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_Rights", 12);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_P2P_ICE_NoPublicAddresses", 13);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Local_Max", 14);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Remote_Min", 15);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Remote_Timeout", 16);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Remote_BadCrypt", 17);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Remote_BadCert", 18);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Remote_BadProtocolVersion", 19);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Remote_P2P_ICE_NoPublicAddresses", 20);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Remote_Max", 21);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_Min", 22);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_Generic", 23);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_InternalError", 24);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_Timeout", 25);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_SteamConnectivity", 26);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_NoRelaySessionsToClient", 27);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_P2P_Rendezvous", 28);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_P2P_NAT_Firewall", 29);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_PeerSentNoConnection", 30);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd_Misc_Max", 31);
	api_define_const("ESteamNetConnectionEnd", "k_ESteamNetConnectionEnd__Force32Bit", 32);
	api_define_const("ESteamNetworkingConfigScope", "k_ESteamNetworkingConfig_Global", 0);
	api_define_const("ESteamNetworkingConfigScope", "k_ESteamNetworkingConfig_SocketsInterface", 1);
	api_define_const("ESteamNetworkingConfigScope", "k_ESteamNetworkingConfig_ListenSocket", 2);
	api_define_const("ESteamNetworkingConfigScope", "k_ESteamNetworkingConfig_Connection", 3);
	api_define_const("ESteamNetworkingConfigScope", "k_ESteamNetworkingConfigScope__Force32Bit", 4);
	api_define_const("ESteamNetworkingConfigDataType", "k_ESteamNetworkingConfig_Int32", 0);
	api_define_const("ESteamNetworkingConfigDataType", "k_ESteamNetworkingConfig_Int64", 1);
	api_define_const("ESteamNetworkingConfigDataType", "k_ESteamNetworkingConfig_Float", 2);
	api_define_const("ESteamNetworkingConfigDataType", "k_ESteamNetworkingConfig_String", 3);
	api_define_const("ESteamNetworkingConfigDataType", "k_ESteamNetworkingConfig_Ptr", 4);
	api_define_const("ESteamNetworkingConfigDataType", "k_ESteamNetworkingConfigDataType__Force32Bit", 5);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Invalid", 0);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_TimeoutInitial", 1);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_TimeoutConnected", 2);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SendBufferSize", 3);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_RecvBufferSize", 4);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_RecvBufferMessages", 5);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_RecvMaxMessageSize", 6);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_RecvMaxSegmentsPerPacket", 7);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_ConnectionUserData", 8);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SendRateMin", 9);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SendRateMax", 10);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_NagleTime", 11);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_IP_AllowWithoutAuth", 12);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_MTU_PacketSize", 13);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_MTU_DataSize", 14);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Unencrypted", 15);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SymmetricConnect", 16);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_LocalVirtualPort", 17);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_DualWifi_Enable", 18);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_EnableDiagnosticsUI", 19);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketLoss_Send", 20);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketLoss_Recv", 21);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketLag_Send", 22);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketLag_Recv", 23);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketReorder_Send", 24);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketReorder_Recv", 25);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketReorder_Time", 26);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketDup_Send", 27);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketDup_Recv", 28);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakePacketDup_TimeMax", 29);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_PacketTraceMaxBytes", 30);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakeRateLimit_Send_Rate", 31);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakeRateLimit_Send_Burst", 32);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakeRateLimit_Recv_Rate", 33);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_FakeRateLimit_Recv_Burst", 34);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Callback_ConnectionStatusChanged", 35);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Callback_AuthStatusChanged", 36);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Callback_RelayNetworkStatusChanged", 37);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Callback_MessagesSessionRequest", 38);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Callback_MessagesSessionFailed", 39);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Callback_CreateConnectionSignaling", 40);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_Callback_FakeIPResult", 41);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_STUN_ServerList", 42);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_Transport_ICE_Enable", 43);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_Transport_ICE_Penalty", 44);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_Transport_SDR_Penalty", 45);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_TURN_ServerList", 46);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_TURN_UserList", 47);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_TURN_PassList", 48);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_P2P_Transport_ICE_Implementation", 49);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFailInitial", 50);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_ConsecutitivePingTimeoutsFail", 51);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_MinPingsBeforePingAccurate", 52);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_SingleSocket", 53);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_ForceRelayCluster", 54);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_DebugTicketAddress", 55);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_ForceProxyAddr", 56);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_SDRClient_FakeClusterPing", 57);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_LogLevel_AckRTT", 58);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_LogLevel_PacketDecode", 59);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_LogLevel_Message", 60);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_LogLevel_PacketGaps", 61);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_LogLevel_P2PRendezvous", 62);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_LogLevel_SDRRelayPings", 63);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfig_DELETED_EnumerateDevVars", 64);
	api_define_const("ESteamNetworkingConfigValue", "k_ESteamNetworkingConfigValue__Force32Bit", 65);
	api_define_const("ESteamNetworkingGetConfigValueResult", "k_ESteamNetworkingGetConfigValue_BadValue", 0);
	api_define_const("ESteamNetworkingGetConfigValueResult", "k_ESteamNetworkingGetConfigValue_BadScopeObj", 1);
	api_define_const("ESteamNetworkingGetConfigValueResult", "k_ESteamNetworkingGetConfigValue_BufferTooSmall", 2);
	api_define_const("ESteamNetworkingGetConfigValueResult", "k_ESteamNetworkingGetConfigValue_OK", 3);
	api_define_const("ESteamNetworkingGetConfigValueResult", "k_ESteamNetworkingGetConfigValue_OKInherited", 4);
	api_define_const("ESteamNetworkingGetConfigValueResult", "k_ESteamNetworkingGetConfigValueResult__Force32Bit", 5);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_None", 0);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Bug", 1);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Error", 2);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Important", 3);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Warning", 4);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Msg", 5);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Verbose", 6);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Debug", 7);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType_Everything", 8);
	api_define_const("ESteamNetworkingSocketsDebugOutputType", "k_ESteamNetworkingSocketsDebugOutputType__Force32Bit", 9);
	api_define_const("ESteamAPIInitResult", "k_ESteamAPIInitResult_OK", 0);
	api_define_const("ESteamAPIInitResult", "k_ESteamAPIInitResult_FailedGeneric", 1);
	api_define_const("ESteamAPIInitResult", "k_ESteamAPIInitResult_NoSteamClient", 2);
	api_define_const("ESteamAPIInitResult", "k_ESteamAPIInitResult_VersionMismatch", 3);
	api_define_const("EServerMode", "eServerModeInvalid", 0);
	api_define_const("EServerMode", "eServerModeNoAuthentication", 1);
	api_define_const("EServerMode", "eServerModeAuthentication", 2);
	api_define_const("EServerMode", "eServerModeAuthenticationAndSecure", 3);
	api_define_const("EHTMLMouseButton", "eHTMLMouseButton_Left", 0);
	api_define_const("EHTMLMouseButton", "eHTMLMouseButton_Right", 1);
	api_define_const("EHTMLMouseButton", "eHTMLMouseButton_Middle", 2);
	api_define_const("EMouseCursor", "dc_user", 0);
	api_define_const("EMouseCursor", "dc_none", 1);
	api_define_const("EMouseCursor", "dc_arrow", 2);
	api_define_const("EMouseCursor", "dc_ibeam", 3);
	api_define_const("EMouseCursor", "dc_hourglass", 4);
	api_define_const("EMouseCursor", "dc_waitarrow", 5);
	api_define_const("EMouseCursor", "dc_crosshair", 6);
	api_define_const("EMouseCursor", "dc_up", 7);
	api_define_const("EMouseCursor", "dc_sizenw", 8);
	api_define_const("EMouseCursor", "dc_sizese", 9);
	api_define_const("EMouseCursor", "dc_sizene", 10);
	api_define_const("EMouseCursor", "dc_sizesw", 11);
	api_define_const("EMouseCursor", "dc_sizew", 12);
	api_define_const("EMouseCursor", "dc_sizee", 13);
	api_define_const("EMouseCursor", "dc_sizen", 14);
	api_define_const("EMouseCursor", "dc_sizes", 15);
	api_define_const("EMouseCursor", "dc_sizewe", 16);
	api_define_const("EMouseCursor", "dc_sizens", 17);
	api_define_const("EMouseCursor", "dc_sizeall", 18);
	api_define_const("EMouseCursor", "dc_no", 19);
	api_define_const("EMouseCursor", "dc_hand", 20);
	api_define_const("EMouseCursor", "dc_blank", 21);
	api_define_const("EMouseCursor", "dc_middle_pan", 22);
	api_define_const("EMouseCursor", "dc_north_pan", 23);
	api_define_const("EMouseCursor", "dc_north_east_pan", 24);
	api_define_const("EMouseCursor", "dc_east_pan", 25);
	api_define_const("EMouseCursor", "dc_south_east_pan", 26);
	api_define_const("EMouseCursor", "dc_south_pan", 27);
	api_define_const("EMouseCursor", "dc_south_west_pan", 28);
	api_define_const("EMouseCursor", "dc_west_pan", 29);
	api_define_const("EMouseCursor", "dc_north_west_pan", 30);
	api_define_const("EMouseCursor", "dc_alias", 31);
	api_define_const("EMouseCursor", "dc_cell", 32);
	api_define_const("EMouseCursor", "dc_colresize", 33);
	api_define_const("EMouseCursor", "dc_copycur", 34);
	api_define_const("EMouseCursor", "dc_verticaltext", 35);
	api_define_const("EMouseCursor", "dc_rowresize", 36);
	api_define_const("EMouseCursor", "dc_zoomin", 37);
	api_define_const("EMouseCursor", "dc_zoomout", 38);
	api_define_const("EMouseCursor", "dc_help", 39);
	api_define_const("EMouseCursor", "dc_custom", 40);
	api_define_const("EMouseCursor", "dc_last", 41);
	api_define_const("EHTMLKeyModifiers", "k_eHTMLKeyModifier_None", 0);
	api_define_const("EHTMLKeyModifiers", "k_eHTMLKeyModifier_AltDown", 1);
	api_define_const("EHTMLKeyModifiers", "k_eHTMLKeyModifier_CtrlDown", 2);
	api_define_const("EHTMLKeyModifiers", "k_eHTMLKeyModifier_ShiftDown", 3);

	// #######
	// METHODS
	// #######

	// SteamIPAddress_t
	api_define_func("SteamIPAddress_t", "IsSet", js_SteamIPAddress_t_IsSet, 0);

	// MatchMakingKeyValuePair_t
	api_define_func("MatchMakingKeyValuePair_t", "Construct", js_MatchMakingKeyValuePair_t_Construct, 0);

	// servernetadr_t
	api_define_func("servernetadr_t", "Construct", js_servernetadr_t_Construct, 0);
	api_define_func("servernetadr_t", "Init", js_servernetadr_t_Init, 0);
	api_define_func("servernetadr_t", "SetQueryPort", js_servernetadr_t_SetQueryPort, 0);
	api_define_func("servernetadr_t", "SetConnectionPort", js_servernetadr_t_SetConnectionPort, 0);
	api_define_func("servernetadr_t", "SetIP", js_servernetadr_t_SetIP, 0);
	api_define_func("servernetadr_t", "Assign", js_servernetadr_t_Assign, 0);
	api_define_func("servernetadr_t", "GetQueryPort", js_servernetadr_t_GetQueryPort, 0);
	api_define_func("servernetadr_t", "GetConnectionPort", js_servernetadr_t_GetConnectionPort, 0);
	api_define_func("servernetadr_t", "GetIP", js_servernetadr_t_GetIP, 0);
	api_define_func("servernetadr_t", "GetConnectionAddressString", js_servernetadr_t_GetConnectionAddressString, 0);
	api_define_func("servernetadr_t", "GetQueryAddressString", js_servernetadr_t_GetQueryAddressString, 0);
	api_define_func("servernetadr_t", "IsLessThan", js_servernetadr_t_IsLessThan, 0);

	// gameserveritem_t
	api_define_func("gameserveritem_t", "Construct", js_gameserveritem_t_Construct, 0);
	api_define_func("gameserveritem_t", "SetName", js_gameserveritem_t_SetName, 0);
	api_define_func("gameserveritem_t", "GetName", js_gameserveritem_t_GetName, 0);

	// SteamNetworkingIPAddr
	api_define_func("SteamNetworkingIPAddr", "Clear", js_SteamNetworkingIPAddr_Clear, 0);
	api_define_func("SteamNetworkingIPAddr", "SetIPv6", js_SteamNetworkingIPAddr_SetIPv6, 0);
	api_define_func("SteamNetworkingIPAddr", "SetIPv4", js_SteamNetworkingIPAddr_SetIPv4, 0);
	api_define_func("SteamNetworkingIPAddr", "SetIPv6LocalHost", js_SteamNetworkingIPAddr_SetIPv6LocalHost, 0);
	api_define_func("SteamNetworkingIPAddr", "ToString", js_SteamNetworkingIPAddr_ToString, 0);
	api_define_func("SteamNetworkingIPAddr", "IsIPv6AllZeros", js_SteamNetworkingIPAddr_IsIPv6AllZeros, 0);
	api_define_func("SteamNetworkingIPAddr", "IsIPv4", js_SteamNetworkingIPAddr_IsIPv4, 0);
	api_define_func("SteamNetworkingIPAddr", "IsLocalHost", js_SteamNetworkingIPAddr_IsLocalHost, 0);
	api_define_func("SteamNetworkingIPAddr", "ParseString", js_SteamNetworkingIPAddr_ParseString, 0);
	api_define_func("SteamNetworkingIPAddr", "IsEqualTo", js_SteamNetworkingIPAddr_IsEqualTo, 0);
	api_define_func("SteamNetworkingIPAddr", "IsFakeIP", js_SteamNetworkingIPAddr_IsFakeIP, 0);
	api_define_func("SteamNetworkingIPAddr", "GetIPv4", js_SteamNetworkingIPAddr_GetIPv4, 0);
	api_define_func("SteamNetworkingIPAddr", "GetFakeIPType", js_SteamNetworkingIPAddr_GetFakeIPType, 0);

	// SteamNetworkingIdentity
	api_define_func("SteamNetworkingIdentity", "Clear", js_SteamNetworkingIdentity_Clear, 0);
	api_define_func("SteamNetworkingIdentity", "SetSteamID", js_SteamNetworkingIdentity_SetSteamID, 0);
	api_define_func("SteamNetworkingIdentity", "SetSteamID64", js_SteamNetworkingIdentity_SetSteamID64, 0);
	api_define_func("SteamNetworkingIdentity", "SetPSNID", js_SteamNetworkingIdentity_SetPSNID, 0);
	api_define_func("SteamNetworkingIdentity", "SetStadiaID", js_SteamNetworkingIdentity_SetStadiaID, 0);
	api_define_func("SteamNetworkingIdentity", "SetIPAddr", js_SteamNetworkingIdentity_SetIPAddr, 0);
	api_define_func("SteamNetworkingIdentity", "SetIPv4Addr", js_SteamNetworkingIdentity_SetIPv4Addr, 0);
	api_define_func("SteamNetworkingIdentity", "SetLocalHost", js_SteamNetworkingIdentity_SetLocalHost, 0);
	api_define_func("SteamNetworkingIdentity", "ToString", js_SteamNetworkingIdentity_ToString, 0);
	api_define_func("SteamNetworkingIdentity", "IsInvalid", js_SteamNetworkingIdentity_IsInvalid, 0);
	api_define_func("SteamNetworkingIdentity", "SetXboxPairwiseID", js_SteamNetworkingIdentity_SetXboxPairwiseID, 0);
	api_define_func("SteamNetworkingIdentity", "IsFakeIP", js_SteamNetworkingIdentity_IsFakeIP, 0);
	api_define_func("SteamNetworkingIdentity", "IsLocalHost", js_SteamNetworkingIdentity_IsLocalHost, 0);
	api_define_func("SteamNetworkingIdentity", "SetGenericString", js_SteamNetworkingIdentity_SetGenericString, 0);
	api_define_func("SteamNetworkingIdentity", "SetGenericBytes", js_SteamNetworkingIdentity_SetGenericBytes, 0);
	api_define_func("SteamNetworkingIdentity", "IsEqualTo", js_SteamNetworkingIdentity_IsEqualTo, 0);
	api_define_func("SteamNetworkingIdentity", "ParseString", js_SteamNetworkingIdentity_ParseString, 0);
	api_define_func("SteamNetworkingIdentity", "GetSteamID", js_SteamNetworkingIdentity_GetSteamID, 0);
	api_define_func("SteamNetworkingIdentity", "GetSteamID64", js_SteamNetworkingIdentity_GetSteamID64, 0);
	api_define_func("SteamNetworkingIdentity", "GetPSNID", js_SteamNetworkingIdentity_GetPSNID, 0);
	api_define_func("SteamNetworkingIdentity", "GetStadiaID", js_SteamNetworkingIdentity_GetStadiaID, 0);
	api_define_func("SteamNetworkingIdentity", "GetXboxPairwiseID", js_SteamNetworkingIdentity_GetXboxPairwiseID, 0);
	api_define_func("SteamNetworkingIdentity", "GetGenericString", js_SteamNetworkingIdentity_GetGenericString, 0);
	api_define_func("SteamNetworkingIdentity", "GetIPAddr", js_SteamNetworkingIdentity_GetIPAddr, 0);
	api_define_func("SteamNetworkingIdentity", "GetIPv4", js_SteamNetworkingIdentity_GetIPv4, 0);
	api_define_func("SteamNetworkingIdentity", "GetFakeIPType", js_SteamNetworkingIdentity_GetFakeIPType, 0);
	api_define_func("SteamNetworkingIdentity", "GetGenericBytes", js_SteamNetworkingIdentity_GetGenericBytes, 0);

	// SteamNetworkingMessage_t
	api_define_func("SteamNetworkingMessage_t", "Release", js_SteamNetworkingMessage_t_Release, 0);

	// SteamNetworkingConfigValue_t
	api_define_func("SteamNetworkingConfigValue_t", "SetInt32", js_SteamNetworkingConfigValue_t_SetInt32, 0);
	api_define_func("SteamNetworkingConfigValue_t", "SetInt64", js_SteamNetworkingConfigValue_t_SetInt64, 0);
	api_define_func("SteamNetworkingConfigValue_t", "SetFloat", js_SteamNetworkingConfigValue_t_SetFloat, 0);
	api_define_func("SteamNetworkingConfigValue_t", "SetPtr", js_SteamNetworkingConfigValue_t_SetPtr, 0);
	api_define_func("SteamNetworkingConfigValue_t", "SetString", js_SteamNetworkingConfigValue_t_SetString, 0);

	// SteamDatagramHostedAddress
	api_define_func("SteamDatagramHostedAddress", "Clear", js_SteamDatagramHostedAddress_Clear, 0);
	api_define_func("SteamDatagramHostedAddress", "SetDevAddress", js_SteamDatagramHostedAddress_SetDevAddress, 0);
	api_define_func("SteamDatagramHostedAddress", "GetPopID", js_SteamDatagramHostedAddress_GetPopID, 0);

	// ISteamClient
	api_define_func("ISteamClient", "CreateSteamPipe", js_ISteamClient_CreateSteamPipe, 0);
	api_define_func("ISteamClient", "ConnectToGlobalUser", js_ISteamClient_ConnectToGlobalUser, 0);
	api_define_func("ISteamClient", "CreateLocalUser", js_ISteamClient_CreateLocalUser, 0);
	api_define_func("ISteamClient", "BReleaseSteamPipe", js_ISteamClient_BReleaseSteamPipe, 0);
	api_define_func("ISteamClient", "BShutdownIfAllPipesClosed", js_ISteamClient_BShutdownIfAllPipesClosed, 0);
	api_define_func("ISteamClient", "ReleaseUser", js_ISteamClient_ReleaseUser, 0);
	api_define_func("ISteamClient", "SetLocalIPBinding", js_ISteamClient_SetLocalIPBinding, 0);
	api_define_func("ISteamClient", "GetISteamUser", js_ISteamClient_GetISteamUser, 0);
	api_define_func("ISteamClient", "GetISteamGameServer", js_ISteamClient_GetISteamGameServer, 0);
	api_define_func("ISteamClient", "GetISteamFriends", js_ISteamClient_GetISteamFriends, 0);
	api_define_func("ISteamClient", "GetISteamUtils", js_ISteamClient_GetISteamUtils, 0);
	api_define_func("ISteamClient", "GetISteamMatchmaking", js_ISteamClient_GetISteamMatchmaking, 0);
	api_define_func("ISteamClient", "GetISteamMatchmakingServers", js_ISteamClient_GetISteamMatchmakingServers, 0);
	api_define_func("ISteamClient", "GetISteamGenericInterface", js_ISteamClient_GetISteamGenericInterface, 0);
	api_define_func("ISteamClient", "GetISteamUserStats", js_ISteamClient_GetISteamUserStats, 0);
	api_define_func("ISteamClient", "GetISteamGameServerStats", js_ISteamClient_GetISteamGameServerStats, 0);
	api_define_func("ISteamClient", "GetISteamApps", js_ISteamClient_GetISteamApps, 0);
	api_define_func("ISteamClient", "GetISteamNetworking", js_ISteamClient_GetISteamNetworking, 0);
	api_define_func("ISteamClient", "GetISteamRemoteStorage", js_ISteamClient_GetISteamRemoteStorage, 0);
	api_define_func("ISteamClient", "GetISteamScreenshots", js_ISteamClient_GetISteamScreenshots, 0);
	api_define_func("ISteamClient", "GetISteamGameSearch", js_ISteamClient_GetISteamGameSearch, 0);
	api_define_func("ISteamClient", "GetISteamHTTP", js_ISteamClient_GetISteamHTTP, 0);
	api_define_func("ISteamClient", "GetISteamController", js_ISteamClient_GetISteamController, 0);
	api_define_func("ISteamClient", "GetISteamUGC", js_ISteamClient_GetISteamUGC, 0);
	api_define_func("ISteamClient", "GetISteamAppList", js_ISteamClient_GetISteamAppList, 0);
	api_define_func("ISteamClient", "GetISteamMusic", js_ISteamClient_GetISteamMusic, 0);
	api_define_func("ISteamClient", "GetISteamMusicRemote", js_ISteamClient_GetISteamMusicRemote, 0);
	api_define_func("ISteamClient", "GetISteamHTMLSurface", js_ISteamClient_GetISteamHTMLSurface, 0);
	api_define_func("ISteamClient", "GetISteamInventory", js_ISteamClient_GetISteamInventory, 0);
	api_define_func("ISteamClient", "GetISteamVideo", js_ISteamClient_GetISteamVideo, 0);
	api_define_func("ISteamClient", "GetISteamParentalSettings", js_ISteamClient_GetISteamParentalSettings, 0);
	api_define_func("ISteamClient", "GetISteamInput", js_ISteamClient_GetISteamInput, 0);
	api_define_func("ISteamClient", "GetISteamParties", js_ISteamClient_GetISteamParties, 0);
	api_define_func("ISteamClient", "GetISteamRemotePlay", js_ISteamClient_GetISteamRemotePlay, 0);
	api_define_func("ISteamClient", "GetIPCCallCount", js_ISteamClient_GetIPCCallCount, 0);

	// ISteamUser
	api_define_func("ISteamUser", "GetHSteamUser", js_ISteamUser_GetHSteamUser, 0);
	api_define_func("ISteamUser", "InitiateGameConnection_DEPRECATED", js_ISteamUser_InitiateGameConnection_DEPRECATED, 0);
	api_define_func("ISteamUser", "GetGameBadgeLevel", js_ISteamUser_GetGameBadgeLevel, 0);
	api_define_func("ISteamUser", "GetPlayerSteamLevel", js_ISteamUser_GetPlayerSteamLevel, 0);
	api_define_func("ISteamUser", "BLoggedOn", js_ISteamUser_BLoggedOn, 0);
	api_define_func("ISteamUser", "GetUserDataFolder", js_ISteamUser_GetUserDataFolder, 0);
	api_define_func("ISteamUser", "BIsBehindNAT", js_ISteamUser_BIsBehindNAT, 0);
	api_define_func("ISteamUser", "GetEncryptedAppTicket", js_ISteamUser_GetEncryptedAppTicket, 0);
	api_define_func("ISteamUser", "BIsPhoneVerified", js_ISteamUser_BIsPhoneVerified, 0);
	api_define_func("ISteamUser", "BIsTwoFactorEnabled", js_ISteamUser_BIsTwoFactorEnabled, 0);
	api_define_func("ISteamUser", "BIsPhoneIdentifying", js_ISteamUser_BIsPhoneIdentifying, 0);
	api_define_func("ISteamUser", "BIsPhoneRequiringVerification", js_ISteamUser_BIsPhoneRequiringVerification, 0);
	api_define_func("ISteamUser", "BSetDurationControlOnlineState", js_ISteamUser_BSetDurationControlOnlineState, 0);
	api_define_func("ISteamUser", "GetSteamID", js_ISteamUser_GetSteamID, 0);
	api_define_func("ISteamUser", "RequestEncryptedAppTicket", js_ISteamUser_RequestEncryptedAppTicket, 0);
	api_define_func("ISteamUser", "RequestStoreAuthURL", js_ISteamUser_RequestStoreAuthURL, 0);
	api_define_func("ISteamUser", "GetMarketEligibility", js_ISteamUser_GetMarketEligibility, 0);
	api_define_func("ISteamUser", "GetDurationControl", js_ISteamUser_GetDurationControl, 0);
	api_define_func("ISteamUser", "TerminateGameConnection_DEPRECATED", js_ISteamUser_TerminateGameConnection_DEPRECATED, 0);
	api_define_func("ISteamUser", "TrackAppUsageEvent", js_ISteamUser_TrackAppUsageEvent, 0);
	api_define_func("ISteamUser", "StartVoiceRecording", js_ISteamUser_StartVoiceRecording, 0);
	api_define_func("ISteamUser", "StopVoiceRecording", js_ISteamUser_StopVoiceRecording, 0);
	api_define_func("ISteamUser", "EndAuthSession", js_ISteamUser_EndAuthSession, 0);
	api_define_func("ISteamUser", "CancelAuthTicket", js_ISteamUser_CancelAuthTicket, 0);
	api_define_func("ISteamUser", "AdvertiseGame", js_ISteamUser_AdvertiseGame, 0);
	api_define_func("ISteamUser", "GetAvailableVoice", js_ISteamUser_GetAvailableVoice, 0);
	api_define_func("ISteamUser", "GetVoice", js_ISteamUser_GetVoice, 0);
	api_define_func("ISteamUser", "DecompressVoice", js_ISteamUser_DecompressVoice, 0);
	api_define_func("ISteamUser", "GetVoiceOptimalSampleRate", js_ISteamUser_GetVoiceOptimalSampleRate, 0);
	api_define_func("ISteamUser", "GetAuthSessionTicket", js_ISteamUser_GetAuthSessionTicket, 0);
	api_define_func("ISteamUser", "GetAuthTicketForWebApi", js_ISteamUser_GetAuthTicketForWebApi, 0);
	api_define_func("ISteamUser", "BeginAuthSession", js_ISteamUser_BeginAuthSession, 0);
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
	api_define_func("ISteamFriends", "SetPersonaName", js_ISteamFriends_SetPersonaName, 0);
	api_define_func("ISteamFriends", "GetFriendByIndex", js_ISteamFriends_GetFriendByIndex, 0);
	api_define_func("ISteamFriends", "GetClanByIndex", js_ISteamFriends_GetClanByIndex, 0);
	api_define_func("ISteamFriends", "DownloadClanActivityCounts", js_ISteamFriends_DownloadClanActivityCounts, 0);
	api_define_func("ISteamFriends", "GetFriendFromSourceByIndex", js_ISteamFriends_GetFriendFromSourceByIndex, 0);
	api_define_func("ISteamFriends", "RequestClanOfficerList", js_ISteamFriends_RequestClanOfficerList, 0);
	api_define_func("ISteamFriends", "GetClanOwner", js_ISteamFriends_GetClanOwner, 0);
	api_define_func("ISteamFriends", "GetClanOfficerByIndex", js_ISteamFriends_GetClanOfficerByIndex, 0);
	api_define_func("ISteamFriends", "GetCoplayFriend", js_ISteamFriends_GetCoplayFriend, 0);
	api_define_func("ISteamFriends", "JoinClanChatRoom", js_ISteamFriends_JoinClanChatRoom, 0);
	api_define_func("ISteamFriends", "GetChatMemberByIndex", js_ISteamFriends_GetChatMemberByIndex, 0);
	api_define_func("ISteamFriends", "GetFollowerCount", js_ISteamFriends_GetFollowerCount, 0);
	api_define_func("ISteamFriends", "IsFollowing", js_ISteamFriends_IsFollowing, 0);
	api_define_func("ISteamFriends", "EnumerateFollowingList", js_ISteamFriends_EnumerateFollowingList, 0);
	api_define_func("ISteamFriends", "RequestEquippedProfileItems", js_ISteamFriends_RequestEquippedProfileItems, 0);
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
	api_define_func("ISteamFriends", "GetClanChatMessage", js_ISteamFriends_GetClanChatMessage, 0);
	api_define_func("ISteamFriends", "GetFriendMessage", js_ISteamFriends_GetFriendMessage, 0);
	api_define_func("ISteamFriends", "GetNumChatsWithUnreadPriorityMessages", js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages, 0);
	api_define_func("ISteamFriends", "GetFriendGamePlayed", js_ISteamFriends_GetFriendGamePlayed, 0);
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
	api_define_func("ISteamUtils", "GetAPICallResult", js_ISteamUtils_GetAPICallResult, 0);
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
	api_define_func("ISteamUtils", "CheckFileSignature", js_ISteamUtils_CheckFileSignature, 0);
	api_define_func("ISteamUtils", "FilterText", js_ISteamUtils_FilterText, 0);

	// ISteamMatchmaking
	api_define_func("ISteamMatchmaking", "GetFavoriteGameCount", js_ISteamMatchmaking_GetFavoriteGameCount, 0);
	api_define_func("ISteamMatchmaking", "AddFavoriteGame", js_ISteamMatchmaking_AddFavoriteGame, 0);
	api_define_func("ISteamMatchmaking", "GetNumLobbyMembers", js_ISteamMatchmaking_GetNumLobbyMembers, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyDataCount", js_ISteamMatchmaking_GetLobbyDataCount, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyChatEntry", js_ISteamMatchmaking_GetLobbyChatEntry, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyMemberLimit", js_ISteamMatchmaking_GetLobbyMemberLimit, 0);
	api_define_func("ISteamMatchmaking", "GetFavoriteGame", js_ISteamMatchmaking_GetFavoriteGame, 0);
	api_define_func("ISteamMatchmaking", "RemoveFavoriteGame", js_ISteamMatchmaking_RemoveFavoriteGame, 0);
	api_define_func("ISteamMatchmaking", "InviteUserToLobby", js_ISteamMatchmaking_InviteUserToLobby, 0);
	api_define_func("ISteamMatchmaking", "SetLobbyData", js_ISteamMatchmaking_SetLobbyData, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyDataByIndex", js_ISteamMatchmaking_GetLobbyDataByIndex, 0);
	api_define_func("ISteamMatchmaking", "DeleteLobbyData", js_ISteamMatchmaking_DeleteLobbyData, 0);
	api_define_func("ISteamMatchmaking", "SendLobbyChatMsg", js_ISteamMatchmaking_SendLobbyChatMsg, 0);
	api_define_func("ISteamMatchmaking", "RequestLobbyData", js_ISteamMatchmaking_RequestLobbyData, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyGameServer", js_ISteamMatchmaking_GetLobbyGameServer, 0);
	api_define_func("ISteamMatchmaking", "SetLobbyMemberLimit", js_ISteamMatchmaking_SetLobbyMemberLimit, 0);
	api_define_func("ISteamMatchmaking", "SetLobbyType", js_ISteamMatchmaking_SetLobbyType, 0);
	api_define_func("ISteamMatchmaking", "SetLobbyJoinable", js_ISteamMatchmaking_SetLobbyJoinable, 0);
	api_define_func("ISteamMatchmaking", "SetLobbyOwner", js_ISteamMatchmaking_SetLobbyOwner, 0);
	api_define_func("ISteamMatchmaking", "SetLinkedLobby", js_ISteamMatchmaking_SetLinkedLobby, 0);
	api_define_func("ISteamMatchmaking", "RequestLobbyList", js_ISteamMatchmaking_RequestLobbyList, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyByIndex", js_ISteamMatchmaking_GetLobbyByIndex, 0);
	api_define_func("ISteamMatchmaking", "CreateLobby", js_ISteamMatchmaking_CreateLobby, 0);
	api_define_func("ISteamMatchmaking", "JoinLobby", js_ISteamMatchmaking_JoinLobby, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyMemberByIndex", js_ISteamMatchmaking_GetLobbyMemberByIndex, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyOwner", js_ISteamMatchmaking_GetLobbyOwner, 0);
	api_define_func("ISteamMatchmaking", "AddRequestLobbyListStringFilter", js_ISteamMatchmaking_AddRequestLobbyListStringFilter, 0);
	api_define_func("ISteamMatchmaking", "AddRequestLobbyListNumericalFilter", js_ISteamMatchmaking_AddRequestLobbyListNumericalFilter, 0);
	api_define_func("ISteamMatchmaking", "AddRequestLobbyListNearValueFilter", js_ISteamMatchmaking_AddRequestLobbyListNearValueFilter, 0);
	api_define_func("ISteamMatchmaking", "AddRequestLobbyListFilterSlotsAvailable", js_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable, 0);
	api_define_func("ISteamMatchmaking", "AddRequestLobbyListDistanceFilter", js_ISteamMatchmaking_AddRequestLobbyListDistanceFilter, 0);
	api_define_func("ISteamMatchmaking", "AddRequestLobbyListResultCountFilter", js_ISteamMatchmaking_AddRequestLobbyListResultCountFilter, 0);
	api_define_func("ISteamMatchmaking", "AddRequestLobbyListCompatibleMembersFilter", js_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter, 0);
	api_define_func("ISteamMatchmaking", "LeaveLobby", js_ISteamMatchmaking_LeaveLobby, 0);
	api_define_func("ISteamMatchmaking", "SetLobbyMemberData", js_ISteamMatchmaking_SetLobbyMemberData, 0);
	api_define_func("ISteamMatchmaking", "SetLobbyGameServer", js_ISteamMatchmaking_SetLobbyGameServer, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyData", js_ISteamMatchmaking_GetLobbyData, 0);
	api_define_func("ISteamMatchmaking", "GetLobbyMemberData", js_ISteamMatchmaking_GetLobbyMemberData, 0);

	// ISteamMatchmakingServerListResponse
	api_define_func("ISteamMatchmakingServerListResponse", "ServerResponded", js_ISteamMatchmakingServerListResponse_ServerResponded, 0);
	api_define_func("ISteamMatchmakingServerListResponse", "ServerFailedToRespond", js_ISteamMatchmakingServerListResponse_ServerFailedToRespond, 0);
	api_define_func("ISteamMatchmakingServerListResponse", "RefreshComplete", js_ISteamMatchmakingServerListResponse_RefreshComplete, 0);

	// ISteamMatchmakingPingResponse
	api_define_func("ISteamMatchmakingPingResponse", "ServerResponded", js_ISteamMatchmakingPingResponse_ServerResponded, 0);
	api_define_func("ISteamMatchmakingPingResponse", "ServerFailedToRespond", js_ISteamMatchmakingPingResponse_ServerFailedToRespond, 0);

	// ISteamMatchmakingPlayersResponse
	api_define_func("ISteamMatchmakingPlayersResponse", "AddPlayerToList", js_ISteamMatchmakingPlayersResponse_AddPlayerToList, 0);
	api_define_func("ISteamMatchmakingPlayersResponse", "PlayersFailedToRespond", js_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond, 0);
	api_define_func("ISteamMatchmakingPlayersResponse", "PlayersRefreshComplete", js_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete, 0);

	// ISteamMatchmakingRulesResponse
	api_define_func("ISteamMatchmakingRulesResponse", "RulesResponded", js_ISteamMatchmakingRulesResponse_RulesResponded, 0);
	api_define_func("ISteamMatchmakingRulesResponse", "RulesFailedToRespond", js_ISteamMatchmakingRulesResponse_RulesFailedToRespond, 0);
	api_define_func("ISteamMatchmakingRulesResponse", "RulesRefreshComplete", js_ISteamMatchmakingRulesResponse_RulesRefreshComplete, 0);

	// ISteamMatchmakingServers
	api_define_func("ISteamMatchmakingServers", "RequestInternetServerList", js_ISteamMatchmakingServers_RequestInternetServerList, 0);
	api_define_func("ISteamMatchmakingServers", "RequestLANServerList", js_ISteamMatchmakingServers_RequestLANServerList, 0);
	api_define_func("ISteamMatchmakingServers", "RequestFriendsServerList", js_ISteamMatchmakingServers_RequestFriendsServerList, 0);
	api_define_func("ISteamMatchmakingServers", "RequestFavoritesServerList", js_ISteamMatchmakingServers_RequestFavoritesServerList, 0);
	api_define_func("ISteamMatchmakingServers", "RequestHistoryServerList", js_ISteamMatchmakingServers_RequestHistoryServerList, 0);
	api_define_func("ISteamMatchmakingServers", "RequestSpectatorServerList", js_ISteamMatchmakingServers_RequestSpectatorServerList, 0);
	api_define_func("ISteamMatchmakingServers", "ReleaseRequest", js_ISteamMatchmakingServers_ReleaseRequest, 0);
	api_define_func("ISteamMatchmakingServers", "CancelQuery", js_ISteamMatchmakingServers_CancelQuery, 0);
	api_define_func("ISteamMatchmakingServers", "RefreshQuery", js_ISteamMatchmakingServers_RefreshQuery, 0);
	api_define_func("ISteamMatchmakingServers", "RefreshServer", js_ISteamMatchmakingServers_RefreshServer, 0);
	api_define_func("ISteamMatchmakingServers", "CancelServerQuery", js_ISteamMatchmakingServers_CancelServerQuery, 0);
	api_define_func("ISteamMatchmakingServers", "GetServerDetails", js_ISteamMatchmakingServers_GetServerDetails, 0);
	api_define_func("ISteamMatchmakingServers", "IsRefreshing", js_ISteamMatchmakingServers_IsRefreshing, 0);
	api_define_func("ISteamMatchmakingServers", "GetServerCount", js_ISteamMatchmakingServers_GetServerCount, 0);
	api_define_func("ISteamMatchmakingServers", "PingServer", js_ISteamMatchmakingServers_PingServer, 0);
	api_define_func("ISteamMatchmakingServers", "PlayerDetails", js_ISteamMatchmakingServers_PlayerDetails, 0);
	api_define_func("ISteamMatchmakingServers", "ServerRules", js_ISteamMatchmakingServers_ServerRules, 0);

	// ISteamGameSearch
	api_define_func("ISteamGameSearch", "AddGameSearchParams", js_ISteamGameSearch_AddGameSearchParams, 0);
	api_define_func("ISteamGameSearch", "SearchForGameWithLobby", js_ISteamGameSearch_SearchForGameWithLobby, 0);
	api_define_func("ISteamGameSearch", "SearchForGameSolo", js_ISteamGameSearch_SearchForGameSolo, 0);
	api_define_func("ISteamGameSearch", "AcceptGame", js_ISteamGameSearch_AcceptGame, 0);
	api_define_func("ISteamGameSearch", "DeclineGame", js_ISteamGameSearch_DeclineGame, 0);
	api_define_func("ISteamGameSearch", "RetrieveConnectionDetails", js_ISteamGameSearch_RetrieveConnectionDetails, 0);
	api_define_func("ISteamGameSearch", "EndGameSearch", js_ISteamGameSearch_EndGameSearch, 0);
	api_define_func("ISteamGameSearch", "SetGameHostParams", js_ISteamGameSearch_SetGameHostParams, 0);
	api_define_func("ISteamGameSearch", "SetConnectionDetails", js_ISteamGameSearch_SetConnectionDetails, 0);
	api_define_func("ISteamGameSearch", "RequestPlayersForGame", js_ISteamGameSearch_RequestPlayersForGame, 0);
	api_define_func("ISteamGameSearch", "HostConfirmGameStart", js_ISteamGameSearch_HostConfirmGameStart, 0);
	api_define_func("ISteamGameSearch", "CancelRequestPlayersForGame", js_ISteamGameSearch_CancelRequestPlayersForGame, 0);
	api_define_func("ISteamGameSearch", "SubmitPlayerResult", js_ISteamGameSearch_SubmitPlayerResult, 0);
	api_define_func("ISteamGameSearch", "EndGame", js_ISteamGameSearch_EndGame, 0);

	// ISteamParties
	api_define_func("ISteamParties", "GetNumActiveBeacons", js_ISteamParties_GetNumActiveBeacons, 0);
	api_define_func("ISteamParties", "GetBeaconByIndex", js_ISteamParties_GetBeaconByIndex, 0);
	api_define_func("ISteamParties", "JoinParty", js_ISteamParties_JoinParty, 0);
	api_define_func("ISteamParties", "CreateBeacon", js_ISteamParties_CreateBeacon, 0);
	api_define_func("ISteamParties", "ChangeNumOpenSlots", js_ISteamParties_ChangeNumOpenSlots, 0);
	api_define_func("ISteamParties", "GetBeaconDetails", js_ISteamParties_GetBeaconDetails, 0);
	api_define_func("ISteamParties", "GetNumAvailableBeaconLocations", js_ISteamParties_GetNumAvailableBeaconLocations, 0);
	api_define_func("ISteamParties", "GetAvailableBeaconLocations", js_ISteamParties_GetAvailableBeaconLocations, 0);
	api_define_func("ISteamParties", "DestroyBeacon", js_ISteamParties_DestroyBeacon, 0);
	api_define_func("ISteamParties", "GetBeaconLocationData", js_ISteamParties_GetBeaconLocationData, 0);
	api_define_func("ISteamParties", "OnReservationCompleted", js_ISteamParties_OnReservationCompleted, 0);
	api_define_func("ISteamParties", "CancelReservation", js_ISteamParties_CancelReservation, 0);

	// ISteamRemoteStorage
	api_define_func("ISteamRemoteStorage", "FileWrite", js_ISteamRemoteStorage_FileWrite, 0);
	api_define_func("ISteamRemoteStorage", "FileReadAsyncComplete", js_ISteamRemoteStorage_FileReadAsyncComplete, 0);
	api_define_func("ISteamRemoteStorage", "FileForget", js_ISteamRemoteStorage_FileForget, 0);
	api_define_func("ISteamRemoteStorage", "FileDelete", js_ISteamRemoteStorage_FileDelete, 0);
	api_define_func("ISteamRemoteStorage", "SetSyncPlatforms", js_ISteamRemoteStorage_SetSyncPlatforms, 0);
	api_define_func("ISteamRemoteStorage", "FileWriteStreamWriteChunk", js_ISteamRemoteStorage_FileWriteStreamWriteChunk, 0);
	api_define_func("ISteamRemoteStorage", "FileWriteStreamClose", js_ISteamRemoteStorage_FileWriteStreamClose, 0);
	api_define_func("ISteamRemoteStorage", "FileWriteStreamCancel", js_ISteamRemoteStorage_FileWriteStreamCancel, 0);
	api_define_func("ISteamRemoteStorage", "FileExists", js_ISteamRemoteStorage_FileExists, 0);
	api_define_func("ISteamRemoteStorage", "FilePersisted", js_ISteamRemoteStorage_FilePersisted, 0);
	api_define_func("ISteamRemoteStorage", "GetQuota", js_ISteamRemoteStorage_GetQuota, 0);
	api_define_func("ISteamRemoteStorage", "IsCloudEnabledForAccount", js_ISteamRemoteStorage_IsCloudEnabledForAccount, 0);
	api_define_func("ISteamRemoteStorage", "IsCloudEnabledForApp", js_ISteamRemoteStorage_IsCloudEnabledForApp, 0);
	api_define_func("ISteamRemoteStorage", "GetUGCDownloadProgress", js_ISteamRemoteStorage_GetUGCDownloadProgress, 0);
	api_define_func("ISteamRemoteStorage", "GetUGCDetails", js_ISteamRemoteStorage_GetUGCDetails, 0);
	api_define_func("ISteamRemoteStorage", "UpdatePublishedFileFile", js_ISteamRemoteStorage_UpdatePublishedFileFile, 0);
	api_define_func("ISteamRemoteStorage", "UpdatePublishedFilePreviewFile", js_ISteamRemoteStorage_UpdatePublishedFilePreviewFile, 0);
	api_define_func("ISteamRemoteStorage", "UpdatePublishedFileTitle", js_ISteamRemoteStorage_UpdatePublishedFileTitle, 0);
	api_define_func("ISteamRemoteStorage", "UpdatePublishedFileDescription", js_ISteamRemoteStorage_UpdatePublishedFileDescription, 0);
	api_define_func("ISteamRemoteStorage", "UpdatePublishedFileVisibility", js_ISteamRemoteStorage_UpdatePublishedFileVisibility, 0);
	api_define_func("ISteamRemoteStorage", "UpdatePublishedFileTags", js_ISteamRemoteStorage_UpdatePublishedFileTags, 0);
	api_define_func("ISteamRemoteStorage", "UpdatePublishedFileSetChangeDescription", js_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription, 0);
	api_define_func("ISteamRemoteStorage", "BeginFileWriteBatch", js_ISteamRemoteStorage_BeginFileWriteBatch, 0);
	api_define_func("ISteamRemoteStorage", "EndFileWriteBatch", js_ISteamRemoteStorage_EndFileWriteBatch, 0);
	api_define_func("ISteamRemoteStorage", "FileRead", js_ISteamRemoteStorage_FileRead, 0);
	api_define_func("ISteamRemoteStorage", "GetFileSize", js_ISteamRemoteStorage_GetFileSize, 0);
	api_define_func("ISteamRemoteStorage", "GetFileCount", js_ISteamRemoteStorage_GetFileCount, 0);
	api_define_func("ISteamRemoteStorage", "UGCRead", js_ISteamRemoteStorage_UGCRead, 0);
	api_define_func("ISteamRemoteStorage", "GetCachedUGCCount", js_ISteamRemoteStorage_GetCachedUGCCount, 0);
	api_define_func("ISteamRemoteStorage", "GetLocalFileChangeCount", js_ISteamRemoteStorage_GetLocalFileChangeCount, 0);
	api_define_func("ISteamRemoteStorage", "FileWriteAsync", js_ISteamRemoteStorage_FileWriteAsync, 0);
	api_define_func("ISteamRemoteStorage", "FileReadAsync", js_ISteamRemoteStorage_FileReadAsync, 0);
	api_define_func("ISteamRemoteStorage", "FileShare", js_ISteamRemoteStorage_FileShare, 0);
	api_define_func("ISteamRemoteStorage", "FileWriteStreamOpen", js_ISteamRemoteStorage_FileWriteStreamOpen, 0);
	api_define_func("ISteamRemoteStorage", "UGCDownload", js_ISteamRemoteStorage_UGCDownload, 0);
	api_define_func("ISteamRemoteStorage", "GetCachedUGCHandle", js_ISteamRemoteStorage_GetCachedUGCHandle, 0);
	api_define_func("ISteamRemoteStorage", "PublishWorkshopFile", js_ISteamRemoteStorage_PublishWorkshopFile, 0);
	api_define_func("ISteamRemoteStorage", "CreatePublishedFileUpdateRequest", js_ISteamRemoteStorage_CreatePublishedFileUpdateRequest, 0);
	api_define_func("ISteamRemoteStorage", "CommitPublishedFileUpdate", js_ISteamRemoteStorage_CommitPublishedFileUpdate, 0);
	api_define_func("ISteamRemoteStorage", "GetPublishedFileDetails", js_ISteamRemoteStorage_GetPublishedFileDetails, 0);
	api_define_func("ISteamRemoteStorage", "DeletePublishedFile", js_ISteamRemoteStorage_DeletePublishedFile, 0);
	api_define_func("ISteamRemoteStorage", "EnumerateUserPublishedFiles", js_ISteamRemoteStorage_EnumerateUserPublishedFiles, 0);
	api_define_func("ISteamRemoteStorage", "SubscribePublishedFile", js_ISteamRemoteStorage_SubscribePublishedFile, 0);
	api_define_func("ISteamRemoteStorage", "EnumerateUserSubscribedFiles", js_ISteamRemoteStorage_EnumerateUserSubscribedFiles, 0);
	api_define_func("ISteamRemoteStorage", "UnsubscribePublishedFile", js_ISteamRemoteStorage_UnsubscribePublishedFile, 0);
	api_define_func("ISteamRemoteStorage", "GetPublishedItemVoteDetails", js_ISteamRemoteStorage_GetPublishedItemVoteDetails, 0);
	api_define_func("ISteamRemoteStorage", "UpdateUserPublishedItemVote", js_ISteamRemoteStorage_UpdateUserPublishedItemVote, 0);
	api_define_func("ISteamRemoteStorage", "GetUserPublishedItemVoteDetails", js_ISteamRemoteStorage_GetUserPublishedItemVoteDetails, 0);
	api_define_func("ISteamRemoteStorage", "EnumerateUserSharedWorkshopFiles", js_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles, 0);
	api_define_func("ISteamRemoteStorage", "PublishVideo", js_ISteamRemoteStorage_PublishVideo, 0);
	api_define_func("ISteamRemoteStorage", "SetUserPublishedFileAction", js_ISteamRemoteStorage_SetUserPublishedFileAction, 0);
	api_define_func("ISteamRemoteStorage", "EnumeratePublishedFilesByUserAction", js_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction, 0);
	api_define_func("ISteamRemoteStorage", "EnumeratePublishedWorkshopFiles", js_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles, 0);
	api_define_func("ISteamRemoteStorage", "UGCDownloadToLocation", js_ISteamRemoteStorage_UGCDownloadToLocation, 0);
	api_define_func("ISteamRemoteStorage", "GetFileTimestamp", js_ISteamRemoteStorage_GetFileTimestamp, 0);
	api_define_func("ISteamRemoteStorage", "GetSyncPlatforms", js_ISteamRemoteStorage_GetSyncPlatforms, 0);
	api_define_func("ISteamRemoteStorage", "GetFileNameAndSize", js_ISteamRemoteStorage_GetFileNameAndSize, 0);
	api_define_func("ISteamRemoteStorage", "GetLocalFileChange", js_ISteamRemoteStorage_GetLocalFileChange, 0);
	api_define_func("ISteamRemoteStorage", "SetCloudEnabledForApp", js_ISteamRemoteStorage_SetCloudEnabledForApp, 0);

	// ISteamUserStats
	api_define_func("ISteamUserStats", "RequestCurrentStats", js_ISteamUserStats_RequestCurrentStats, 0);
	api_define_func("ISteamUserStats", "GetStat", js_ISteamUserStats_GetStatInt32, 0);
	api_define_func("ISteamUserStats", "GetStat", js_ISteamUserStats_GetStatFloat, 0);
	api_define_func("ISteamUserStats", "SetStat", js_ISteamUserStats_SetStatInt32, 0);
	api_define_func("ISteamUserStats", "SetStat", js_ISteamUserStats_SetStatFloat, 0);
	api_define_func("ISteamUserStats", "UpdateAvgRateStat", js_ISteamUserStats_UpdateAvgRateStat, 0);
	api_define_func("ISteamUserStats", "GetAchievement", js_ISteamUserStats_GetAchievement, 0);
	api_define_func("ISteamUserStats", "SetAchievement", js_ISteamUserStats_SetAchievement, 0);
	api_define_func("ISteamUserStats", "ClearAchievement", js_ISteamUserStats_ClearAchievement, 0);
	api_define_func("ISteamUserStats", "GetAchievementAndUnlockTime", js_ISteamUserStats_GetAchievementAndUnlockTime, 0);
	api_define_func("ISteamUserStats", "StoreStats", js_ISteamUserStats_StoreStats, 0);
	api_define_func("ISteamUserStats", "IndicateAchievementProgress", js_ISteamUserStats_IndicateAchievementProgress, 0);
	api_define_func("ISteamUserStats", "GetUserStat", js_ISteamUserStats_GetUserStatInt32, 0);
	api_define_func("ISteamUserStats", "GetUserStat", js_ISteamUserStats_GetUserStatFloat, 0);
	api_define_func("ISteamUserStats", "GetUserAchievement", js_ISteamUserStats_GetUserAchievement, 0);
	api_define_func("ISteamUserStats", "GetUserAchievementAndUnlockTime", js_ISteamUserStats_GetUserAchievementAndUnlockTime, 0);
	api_define_func("ISteamUserStats", "ResetAllStats", js_ISteamUserStats_ResetAllStats, 0);
	api_define_func("ISteamUserStats", "GetDownloadedLeaderboardEntry", js_ISteamUserStats_GetDownloadedLeaderboardEntry, 0);
	api_define_func("ISteamUserStats", "GetAchievementAchievedPercent", js_ISteamUserStats_GetAchievementAchievedPercent, 0);
	api_define_func("ISteamUserStats", "GetGlobalStat", js_ISteamUserStats_GetGlobalStatInt64, 0);
	api_define_func("ISteamUserStats", "GetGlobalStat", js_ISteamUserStats_GetGlobalStatDouble, 0);
	api_define_func("ISteamUserStats", "GetAchievementProgressLimits", js_ISteamUserStats_GetAchievementProgressLimitsInt32, 0);
	api_define_func("ISteamUserStats", "GetAchievementProgressLimits", js_ISteamUserStats_GetAchievementProgressLimitsFloat, 0);
	api_define_func("ISteamUserStats", "GetAchievementIcon", js_ISteamUserStats_GetAchievementIcon, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardEntryCount", js_ISteamUserStats_GetLeaderboardEntryCount, 0);
	api_define_func("ISteamUserStats", "GetMostAchievedAchievementInfo", js_ISteamUserStats_GetMostAchievedAchievementInfo, 0);
	api_define_func("ISteamUserStats", "GetNextMostAchievedAchievementInfo", js_ISteamUserStats_GetNextMostAchievedAchievementInfo, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatHistory", js_ISteamUserStats_GetGlobalStatHistoryInt64, 0);
	api_define_func("ISteamUserStats", "GetGlobalStatHistory", js_ISteamUserStats_GetGlobalStatHistoryDouble, 0);
	api_define_func("ISteamUserStats", "GetAchievementDisplayAttribute", js_ISteamUserStats_GetAchievementDisplayAttribute, 0);
	api_define_func("ISteamUserStats", "GetAchievementName", js_ISteamUserStats_GetAchievementName, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardName", js_ISteamUserStats_GetLeaderboardName, 0);
	api_define_func("ISteamUserStats", "GetNumAchievements", js_ISteamUserStats_GetNumAchievements, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardSortMethod", js_ISteamUserStats_GetLeaderboardSortMethod, 0);
	api_define_func("ISteamUserStats", "GetLeaderboardDisplayType", js_ISteamUserStats_GetLeaderboardDisplayType, 0);
	api_define_func("ISteamUserStats", "RequestUserStats", js_ISteamUserStats_RequestUserStats, 0);
	api_define_func("ISteamUserStats", "FindOrCreateLeaderboard", js_ISteamUserStats_FindOrCreateLeaderboard, 0);
	api_define_func("ISteamUserStats", "FindLeaderboard", js_ISteamUserStats_FindLeaderboard, 0);
	api_define_func("ISteamUserStats", "DownloadLeaderboardEntries", js_ISteamUserStats_DownloadLeaderboardEntries, 0);
	api_define_func("ISteamUserStats", "DownloadLeaderboardEntriesForUsers", js_ISteamUserStats_DownloadLeaderboardEntriesForUsers, 0);
	api_define_func("ISteamUserStats", "UploadLeaderboardScore", js_ISteamUserStats_UploadLeaderboardScore, 0);
	api_define_func("ISteamUserStats", "AttachLeaderboardUGC", js_ISteamUserStats_AttachLeaderboardUGC, 0);
	api_define_func("ISteamUserStats", "GetNumberOfCurrentPlayers", js_ISteamUserStats_GetNumberOfCurrentPlayers, 0);
	api_define_func("ISteamUserStats", "RequestGlobalAchievementPercentages", js_ISteamUserStats_RequestGlobalAchievementPercentages, 0);
	api_define_func("ISteamUserStats", "RequestGlobalStats", js_ISteamUserStats_RequestGlobalStats, 0);

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
	api_define_func("ISteamApps", "GetFileDetails", js_ISteamApps_GetFileDetails, 0);

	// ISteamNetworking
	api_define_func("ISteamNetworking", "SendP2PPacket", js_ISteamNetworking_SendP2PPacket, 0);
	api_define_func("ISteamNetworking", "IsP2PPacketAvailable", js_ISteamNetworking_IsP2PPacketAvailable, 0);
	api_define_func("ISteamNetworking", "ReadP2PPacket", js_ISteamNetworking_ReadP2PPacket, 0);
	api_define_func("ISteamNetworking", "AcceptP2PSessionWithUser", js_ISteamNetworking_AcceptP2PSessionWithUser, 0);
	api_define_func("ISteamNetworking", "CloseP2PSessionWithUser", js_ISteamNetworking_CloseP2PSessionWithUser, 0);
	api_define_func("ISteamNetworking", "CloseP2PChannelWithUser", js_ISteamNetworking_CloseP2PChannelWithUser, 0);
	api_define_func("ISteamNetworking", "GetP2PSessionState", js_ISteamNetworking_GetP2PSessionState, 0);
	api_define_func("ISteamNetworking", "AllowP2PPacketRelay", js_ISteamNetworking_AllowP2PPacketRelay, 0);
	api_define_func("ISteamNetworking", "DestroySocket", js_ISteamNetworking_DestroySocket, 0);
	api_define_func("ISteamNetworking", "DestroyListenSocket", js_ISteamNetworking_DestroyListenSocket, 0);
	api_define_func("ISteamNetworking", "SendDataOnSocket", js_ISteamNetworking_SendDataOnSocket, 0);
	api_define_func("ISteamNetworking", "IsDataAvailableOnSocket", js_ISteamNetworking_IsDataAvailableOnSocket, 0);
	api_define_func("ISteamNetworking", "RetrieveDataFromSocket", js_ISteamNetworking_RetrieveDataFromSocket, 0);
	api_define_func("ISteamNetworking", "IsDataAvailable", js_ISteamNetworking_IsDataAvailable, 0);
	api_define_func("ISteamNetworking", "RetrieveData", js_ISteamNetworking_RetrieveData, 0);
	api_define_func("ISteamNetworking", "GetSocketInfo", js_ISteamNetworking_GetSocketInfo, 0);
	api_define_func("ISteamNetworking", "GetListenSocketInfo", js_ISteamNetworking_GetListenSocketInfo, 0);
	api_define_func("ISteamNetworking", "CreateListenSocket", js_ISteamNetworking_CreateListenSocket, 0);
	api_define_func("ISteamNetworking", "CreateP2PConnectionSocket", js_ISteamNetworking_CreateP2PConnectionSocket, 0);
	api_define_func("ISteamNetworking", "CreateConnectionSocket", js_ISteamNetworking_CreateConnectionSocket, 0);
	api_define_func("ISteamNetworking", "GetSocketConnectionType", js_ISteamNetworking_GetSocketConnectionType, 0);
	api_define_func("ISteamNetworking", "GetMaxPacketSize", js_ISteamNetworking_GetMaxPacketSize, 0);

	// ISteamScreenshots
	api_define_func("ISteamScreenshots", "WriteScreenshot", js_ISteamScreenshots_WriteScreenshot, 0);
	api_define_func("ISteamScreenshots", "AddScreenshotToLibrary", js_ISteamScreenshots_AddScreenshotToLibrary, 0);
	api_define_func("ISteamScreenshots", "AddVRScreenshotToLibrary", js_ISteamScreenshots_AddVRScreenshotToLibrary, 0);
	api_define_func("ISteamScreenshots", "TriggerScreenshot", js_ISteamScreenshots_TriggerScreenshot, 0);
	api_define_func("ISteamScreenshots", "HookScreenshots", js_ISteamScreenshots_HookScreenshots, 0);
	api_define_func("ISteamScreenshots", "SetLocation", js_ISteamScreenshots_SetLocation, 0);
	api_define_func("ISteamScreenshots", "TagUser", js_ISteamScreenshots_TagUser, 0);
	api_define_func("ISteamScreenshots", "TagPublishedFile", js_ISteamScreenshots_TagPublishedFile, 0);
	api_define_func("ISteamScreenshots", "IsScreenshotsHooked", js_ISteamScreenshots_IsScreenshotsHooked, 0);

	// ISteamMusic
	api_define_func("ISteamMusic", "BIsEnabled", js_ISteamMusic_BIsEnabled, 0);
	api_define_func("ISteamMusic", "BIsPlaying", js_ISteamMusic_BIsPlaying, 0);
	api_define_func("ISteamMusic", "GetPlaybackStatus", js_ISteamMusic_GetPlaybackStatus, 0);
	api_define_func("ISteamMusic", "Play", js_ISteamMusic_Play, 0);
	api_define_func("ISteamMusic", "Pause", js_ISteamMusic_Pause, 0);
	api_define_func("ISteamMusic", "PlayPrevious", js_ISteamMusic_PlayPrevious, 0);
	api_define_func("ISteamMusic", "PlayNext", js_ISteamMusic_PlayNext, 0);
	api_define_func("ISteamMusic", "SetVolume", js_ISteamMusic_SetVolume, 0);
	api_define_func("ISteamMusic", "GetVolume", js_ISteamMusic_GetVolume, 0);

	// ISteamMusicRemote
	api_define_func("ISteamMusicRemote", "RegisterSteamMusicRemote", js_ISteamMusicRemote_RegisterSteamMusicRemote, 0);
	api_define_func("ISteamMusicRemote", "DeregisterSteamMusicRemote", js_ISteamMusicRemote_DeregisterSteamMusicRemote, 0);
	api_define_func("ISteamMusicRemote", "BIsCurrentMusicRemote", js_ISteamMusicRemote_BIsCurrentMusicRemote, 0);
	api_define_func("ISteamMusicRemote", "BActivationSuccess", js_ISteamMusicRemote_BActivationSuccess, 0);
	api_define_func("ISteamMusicRemote", "SetDisplayName", js_ISteamMusicRemote_SetDisplayName, 0);
	api_define_func("ISteamMusicRemote", "SetPNGIcon_64x64", js_ISteamMusicRemote_SetPNGIcon_64x64, 0);
	api_define_func("ISteamMusicRemote", "EnablePlayPrevious", js_ISteamMusicRemote_EnablePlayPrevious, 0);
	api_define_func("ISteamMusicRemote", "EnablePlayNext", js_ISteamMusicRemote_EnablePlayNext, 0);
	api_define_func("ISteamMusicRemote", "EnableShuffled", js_ISteamMusicRemote_EnableShuffled, 0);
	api_define_func("ISteamMusicRemote", "EnableLooped", js_ISteamMusicRemote_EnableLooped, 0);
	api_define_func("ISteamMusicRemote", "EnableQueue", js_ISteamMusicRemote_EnableQueue, 0);
	api_define_func("ISteamMusicRemote", "EnablePlaylists", js_ISteamMusicRemote_EnablePlaylists, 0);
	api_define_func("ISteamMusicRemote", "UpdatePlaybackStatus", js_ISteamMusicRemote_UpdatePlaybackStatus, 0);
	api_define_func("ISteamMusicRemote", "UpdateShuffled", js_ISteamMusicRemote_UpdateShuffled, 0);
	api_define_func("ISteamMusicRemote", "UpdateLooped", js_ISteamMusicRemote_UpdateLooped, 0);
	api_define_func("ISteamMusicRemote", "UpdateVolume", js_ISteamMusicRemote_UpdateVolume, 0);
	api_define_func("ISteamMusicRemote", "CurrentEntryWillChange", js_ISteamMusicRemote_CurrentEntryWillChange, 0);
	api_define_func("ISteamMusicRemote", "CurrentEntryIsAvailable", js_ISteamMusicRemote_CurrentEntryIsAvailable, 0);
	api_define_func("ISteamMusicRemote", "UpdateCurrentEntryText", js_ISteamMusicRemote_UpdateCurrentEntryText, 0);
	api_define_func("ISteamMusicRemote", "UpdateCurrentEntryElapsedSeconds", js_ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds, 0);
	api_define_func("ISteamMusicRemote", "UpdateCurrentEntryCoverArt", js_ISteamMusicRemote_UpdateCurrentEntryCoverArt, 0);
	api_define_func("ISteamMusicRemote", "CurrentEntryDidChange", js_ISteamMusicRemote_CurrentEntryDidChange, 0);
	api_define_func("ISteamMusicRemote", "QueueWillChange", js_ISteamMusicRemote_QueueWillChange, 0);
	api_define_func("ISteamMusicRemote", "ResetQueueEntries", js_ISteamMusicRemote_ResetQueueEntries, 0);
	api_define_func("ISteamMusicRemote", "SetQueueEntry", js_ISteamMusicRemote_SetQueueEntry, 0);
	api_define_func("ISteamMusicRemote", "SetCurrentQueueEntry", js_ISteamMusicRemote_SetCurrentQueueEntry, 0);
	api_define_func("ISteamMusicRemote", "QueueDidChange", js_ISteamMusicRemote_QueueDidChange, 0);
	api_define_func("ISteamMusicRemote", "PlaylistWillChange", js_ISteamMusicRemote_PlaylistWillChange, 0);
	api_define_func("ISteamMusicRemote", "ResetPlaylistEntries", js_ISteamMusicRemote_ResetPlaylistEntries, 0);
	api_define_func("ISteamMusicRemote", "SetPlaylistEntry", js_ISteamMusicRemote_SetPlaylistEntry, 0);
	api_define_func("ISteamMusicRemote", "SetCurrentPlaylistEntry", js_ISteamMusicRemote_SetCurrentPlaylistEntry, 0);
	api_define_func("ISteamMusicRemote", "PlaylistDidChange", js_ISteamMusicRemote_PlaylistDidChange, 0);

	// ISteamHTTP
	api_define_func("ISteamHTTP", "CreateHTTPRequest", js_ISteamHTTP_CreateHTTPRequest, 0);
	api_define_func("ISteamHTTP", "CreateCookieContainer", js_ISteamHTTP_CreateCookieContainer, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestContextValue", js_ISteamHTTP_SetHTTPRequestContextValue, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestNetworkActivityTimeout", js_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestHeaderValue", js_ISteamHTTP_SetHTTPRequestHeaderValue, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestGetOrPostParameter", js_ISteamHTTP_SetHTTPRequestGetOrPostParameter, 0);
	api_define_func("ISteamHTTP", "SendHTTPRequest", js_ISteamHTTP_SendHTTPRequest, 0);
	api_define_func("ISteamHTTP", "SendHTTPRequestAndStreamResponse", js_ISteamHTTP_SendHTTPRequestAndStreamResponse, 0);
	api_define_func("ISteamHTTP", "DeferHTTPRequest", js_ISteamHTTP_DeferHTTPRequest, 0);
	api_define_func("ISteamHTTP", "PrioritizeHTTPRequest", js_ISteamHTTP_PrioritizeHTTPRequest, 0);
	api_define_func("ISteamHTTP", "GetHTTPResponseHeaderSize", js_ISteamHTTP_GetHTTPResponseHeaderSize, 0);
	api_define_func("ISteamHTTP", "GetHTTPResponseHeaderValue", js_ISteamHTTP_GetHTTPResponseHeaderValue, 0);
	api_define_func("ISteamHTTP", "GetHTTPResponseBodySize", js_ISteamHTTP_GetHTTPResponseBodySize, 0);
	api_define_func("ISteamHTTP", "GetHTTPResponseBodyData", js_ISteamHTTP_GetHTTPResponseBodyData, 0);
	api_define_func("ISteamHTTP", "GetHTTPStreamingResponseBodyData", js_ISteamHTTP_GetHTTPStreamingResponseBodyData, 0);
	api_define_func("ISteamHTTP", "ReleaseHTTPRequest", js_ISteamHTTP_ReleaseHTTPRequest, 0);
	api_define_func("ISteamHTTP", "GetHTTPDownloadProgressPct", js_ISteamHTTP_GetHTTPDownloadProgressPct, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestRawPostBody", js_ISteamHTTP_SetHTTPRequestRawPostBody, 0);
	api_define_func("ISteamHTTP", "ReleaseCookieContainer", js_ISteamHTTP_ReleaseCookieContainer, 0);
	api_define_func("ISteamHTTP", "SetCookie", js_ISteamHTTP_SetCookie, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestCookieContainer", js_ISteamHTTP_SetHTTPRequestCookieContainer, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestUserAgentInfo", js_ISteamHTTP_SetHTTPRequestUserAgentInfo, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestRequiresVerifiedCertificate", js_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate, 0);
	api_define_func("ISteamHTTP", "SetHTTPRequestAbsoluteTimeoutMS", js_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS, 0);
	api_define_func("ISteamHTTP", "GetHTTPRequestWasTimedOut", js_ISteamHTTP_GetHTTPRequestWasTimedOut, 0);

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
	api_define_func("ISteamInput", "Legacy_TriggerHapticPulse", js_ISteamInput_Legacy_TriggerHapticPulse, 0);
	api_define_func("ISteamInput", "Legacy_TriggerRepeatedHapticPulse", js_ISteamInput_Legacy_TriggerRepeatedHapticPulse, 0);
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
	api_define_func("ISteamInput", "GetGlyphForActionOrigin_Legacy", js_ISteamInput_GetGlyphForActionOrigin_Legacy, 0);
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

	// ISteamController
	api_define_func("ISteamController", "Init", js_ISteamController_Init, 0);
	api_define_func("ISteamController", "Shutdown", js_ISteamController_Shutdown, 0);
	api_define_func("ISteamController", "ShowBindingPanel", js_ISteamController_ShowBindingPanel, 0);
	api_define_func("ISteamController", "GetControllerBindingRevision", js_ISteamController_GetControllerBindingRevision, 0);
	api_define_func("ISteamController", "RunFrame", js_ISteamController_RunFrame, 0);
	api_define_func("ISteamController", "ActivateActionSet", js_ISteamController_ActivateActionSet, 0);
	api_define_func("ISteamController", "ActivateActionSetLayer", js_ISteamController_ActivateActionSetLayer, 0);
	api_define_func("ISteamController", "DeactivateActionSetLayer", js_ISteamController_DeactivateActionSetLayer, 0);
	api_define_func("ISteamController", "DeactivateAllActionSetLayers", js_ISteamController_DeactivateAllActionSetLayers, 0);
	api_define_func("ISteamController", "StopAnalogActionMomentum", js_ISteamController_StopAnalogActionMomentum, 0);
	api_define_func("ISteamController", "TriggerHapticPulse", js_ISteamController_TriggerHapticPulse, 0);
	api_define_func("ISteamController", "TriggerRepeatedHapticPulse", js_ISteamController_TriggerRepeatedHapticPulse, 0);
	api_define_func("ISteamController", "TriggerVibration", js_ISteamController_TriggerVibration, 0);
	api_define_func("ISteamController", "SetLEDColor", js_ISteamController_SetLEDColor, 0);
	api_define_func("ISteamController", "GetConnectedControllers", js_ISteamController_GetConnectedControllers, 0);
	api_define_func("ISteamController", "GetActiveActionSetLayers", js_ISteamController_GetActiveActionSetLayers, 0);
	api_define_func("ISteamController", "GetDigitalActionOrigins", js_ISteamController_GetDigitalActionOrigins, 0);
	api_define_func("ISteamController", "GetAnalogActionOrigins", js_ISteamController_GetAnalogActionOrigins, 0);
	api_define_func("ISteamController", "GetGamepadIndexForController", js_ISteamController_GetGamepadIndexForController, 0);
	api_define_func("ISteamController", "GetActionSetHandle", js_ISteamController_GetActionSetHandle, 0);
	api_define_func("ISteamController", "GetCurrentActionSet", js_ISteamController_GetCurrentActionSet, 0);
	api_define_func("ISteamController", "GetDigitalActionHandle", js_ISteamController_GetDigitalActionHandle, 0);
	api_define_func("ISteamController", "GetAnalogActionHandle", js_ISteamController_GetAnalogActionHandle, 0);
	api_define_func("ISteamController", "GetControllerForGamepadIndex", js_ISteamController_GetControllerForGamepadIndex, 0);
	api_define_func("ISteamController", "GetDigitalActionData", js_ISteamController_GetDigitalActionData, 0);
	api_define_func("ISteamController", "GetAnalogActionData", js_ISteamController_GetAnalogActionData, 0);
	api_define_func("ISteamController", "GetGlyphForActionOrigin", js_ISteamController_GetGlyphForActionOrigin, 0);
	api_define_func("ISteamController", "GetStringForActionOrigin", js_ISteamController_GetStringForActionOrigin, 0);
	api_define_func("ISteamController", "GetStringForXboxOrigin", js_ISteamController_GetStringForXboxOrigin, 0);
	api_define_func("ISteamController", "GetGlyphForXboxOrigin", js_ISteamController_GetGlyphForXboxOrigin, 0);
	api_define_func("ISteamController", "GetMotionData", js_ISteamController_GetMotionData, 0);
	api_define_func("ISteamController", "GetInputTypeForHandle", js_ISteamController_GetInputTypeForHandle, 0);
	api_define_func("ISteamController", "GetActionOriginFromXboxOrigin", js_ISteamController_GetActionOriginFromXboxOrigin, 0);
	api_define_func("ISteamController", "TranslateActionOrigin", js_ISteamController_TranslateActionOrigin, 0);

	// ISteamUGC
	api_define_func("ISteamUGC", "CreateQueryUserUGCRequest", js_ISteamUGC_CreateQueryUserUGCRequest, 0);
	api_define_func("ISteamUGC", "CreateQueryAllUGCRequest", js_ISteamUGC_CreateQueryAllUGCRequestPage, 0);
	api_define_func("ISteamUGC", "CreateQueryAllUGCRequest", js_ISteamUGC_CreateQueryAllUGCRequestCursor, 0);
	api_define_func("ISteamUGC", "CreateQueryUGCDetailsRequest", js_ISteamUGC_CreateQueryUGCDetailsRequest, 0);
	api_define_func("ISteamUGC", "SendQueryUGCRequest", js_ISteamUGC_SendQueryUGCRequest, 0);
	api_define_func("ISteamUGC", "RequestUGCDetails", js_ISteamUGC_RequestUGCDetails, 0);
	api_define_func("ISteamUGC", "CreateItem", js_ISteamUGC_CreateItem, 0);
	api_define_func("ISteamUGC", "StartItemUpdate", js_ISteamUGC_StartItemUpdate, 0);
	api_define_func("ISteamUGC", "SubmitItemUpdate", js_ISteamUGC_SubmitItemUpdate, 0);
	api_define_func("ISteamUGC", "SetUserItemVote", js_ISteamUGC_SetUserItemVote, 0);
	api_define_func("ISteamUGC", "GetUserItemVote", js_ISteamUGC_GetUserItemVote, 0);
	api_define_func("ISteamUGC", "AddItemToFavorites", js_ISteamUGC_AddItemToFavorites, 0);
	api_define_func("ISteamUGC", "RemoveItemFromFavorites", js_ISteamUGC_RemoveItemFromFavorites, 0);
	api_define_func("ISteamUGC", "SubscribeItem", js_ISteamUGC_SubscribeItem, 0);
	api_define_func("ISteamUGC", "UnsubscribeItem", js_ISteamUGC_UnsubscribeItem, 0);
	api_define_func("ISteamUGC", "StartPlaytimeTracking", js_ISteamUGC_StartPlaytimeTracking, 0);
	api_define_func("ISteamUGC", "StopPlaytimeTracking", js_ISteamUGC_StopPlaytimeTracking, 0);
	api_define_func("ISteamUGC", "StopPlaytimeTrackingForAllItems", js_ISteamUGC_StopPlaytimeTrackingForAllItems, 0);
	api_define_func("ISteamUGC", "AddDependency", js_ISteamUGC_AddDependency, 0);
	api_define_func("ISteamUGC", "RemoveDependency", js_ISteamUGC_RemoveDependency, 0);
	api_define_func("ISteamUGC", "AddAppDependency", js_ISteamUGC_AddAppDependency, 0);
	api_define_func("ISteamUGC", "RemoveAppDependency", js_ISteamUGC_RemoveAppDependency, 0);
	api_define_func("ISteamUGC", "GetAppDependencies", js_ISteamUGC_GetAppDependencies, 0);
	api_define_func("ISteamUGC", "DeleteItem", js_ISteamUGC_DeleteItem, 0);
	api_define_func("ISteamUGC", "GetWorkshopEULAStatus", js_ISteamUGC_GetWorkshopEULAStatus, 0);
	api_define_func("ISteamUGC", "GetQueryUGCResult", js_ISteamUGC_GetQueryUGCResult, 0);
	api_define_func("ISteamUGC", "GetQueryUGCTag", js_ISteamUGC_GetQueryUGCTag, 0);
	api_define_func("ISteamUGC", "GetQueryUGCTagDisplayName", js_ISteamUGC_GetQueryUGCTagDisplayName, 0);
	api_define_func("ISteamUGC", "GetQueryUGCPreviewURL", js_ISteamUGC_GetQueryUGCPreviewURL, 0);
	api_define_func("ISteamUGC", "GetQueryUGCMetadata", js_ISteamUGC_GetQueryUGCMetadata, 0);
	api_define_func("ISteamUGC", "GetQueryUGCChildren", js_ISteamUGC_GetQueryUGCChildren, 0);
	api_define_func("ISteamUGC", "GetQueryUGCStatistic", js_ISteamUGC_GetQueryUGCStatistic, 0);
	api_define_func("ISteamUGC", "GetQueryUGCAdditionalPreview", js_ISteamUGC_GetQueryUGCAdditionalPreview, 0);
	api_define_func("ISteamUGC", "GetQueryUGCKeyValueTag", js_ISteamUGC_GetQueryUGCKeyValueTag, 0);
	api_define_func("ISteamUGC", "GetQueryUGCKeyValueTag", js_ISteamUGC_GetQueryFirstUGCKeyValueTag, 0);
	api_define_func("ISteamUGC", "ReleaseQueryUGCRequest", js_ISteamUGC_ReleaseQueryUGCRequest, 0);
	api_define_func("ISteamUGC", "AddRequiredTag", js_ISteamUGC_AddRequiredTag, 0);
	api_define_func("ISteamUGC", "AddRequiredTagGroup", js_ISteamUGC_AddRequiredTagGroup, 0);
	api_define_func("ISteamUGC", "AddExcludedTag", js_ISteamUGC_AddExcludedTag, 0);
	api_define_func("ISteamUGC", "SetReturnOnlyIDs", js_ISteamUGC_SetReturnOnlyIDs, 0);
	api_define_func("ISteamUGC", "SetReturnKeyValueTags", js_ISteamUGC_SetReturnKeyValueTags, 0);
	api_define_func("ISteamUGC", "SetReturnLongDescription", js_ISteamUGC_SetReturnLongDescription, 0);
	api_define_func("ISteamUGC", "SetReturnMetadata", js_ISteamUGC_SetReturnMetadata, 0);
	api_define_func("ISteamUGC", "SetReturnChildren", js_ISteamUGC_SetReturnChildren, 0);
	api_define_func("ISteamUGC", "SetReturnAdditionalPreviews", js_ISteamUGC_SetReturnAdditionalPreviews, 0);
	api_define_func("ISteamUGC", "SetReturnTotalOnly", js_ISteamUGC_SetReturnTotalOnly, 0);
	api_define_func("ISteamUGC", "SetReturnPlaytimeStats", js_ISteamUGC_SetReturnPlaytimeStats, 0);
	api_define_func("ISteamUGC", "SetLanguage", js_ISteamUGC_SetLanguage, 0);
	api_define_func("ISteamUGC", "SetAllowCachedResponse", js_ISteamUGC_SetAllowCachedResponse, 0);
	api_define_func("ISteamUGC", "SetCloudFileNameFilter", js_ISteamUGC_SetCloudFileNameFilter, 0);
	api_define_func("ISteamUGC", "SetMatchAnyTag", js_ISteamUGC_SetMatchAnyTag, 0);
	api_define_func("ISteamUGC", "SetSearchText", js_ISteamUGC_SetSearchText, 0);
	api_define_func("ISteamUGC", "SetRankedByTrendDays", js_ISteamUGC_SetRankedByTrendDays, 0);
	api_define_func("ISteamUGC", "SetTimeCreatedDateRange", js_ISteamUGC_SetTimeCreatedDateRange, 0);
	api_define_func("ISteamUGC", "SetTimeUpdatedDateRange", js_ISteamUGC_SetTimeUpdatedDateRange, 0);
	api_define_func("ISteamUGC", "AddRequiredKeyValueTag", js_ISteamUGC_AddRequiredKeyValueTag, 0);
	api_define_func("ISteamUGC", "SetItemTitle", js_ISteamUGC_SetItemTitle, 0);
	api_define_func("ISteamUGC", "SetItemDescription", js_ISteamUGC_SetItemDescription, 0);
	api_define_func("ISteamUGC", "SetItemUpdateLanguage", js_ISteamUGC_SetItemUpdateLanguage, 0);
	api_define_func("ISteamUGC", "SetItemMetadata", js_ISteamUGC_SetItemMetadata, 0);
	api_define_func("ISteamUGC", "SetItemVisibility", js_ISteamUGC_SetItemVisibility, 0);
	api_define_func("ISteamUGC", "SetItemTags", js_ISteamUGC_SetItemTags, 0);
	api_define_func("ISteamUGC", "SetItemContent", js_ISteamUGC_SetItemContent, 0);
	api_define_func("ISteamUGC", "SetItemPreview", js_ISteamUGC_SetItemPreview, 0);
	api_define_func("ISteamUGC", "SetAllowLegacyUpload", js_ISteamUGC_SetAllowLegacyUpload, 0);
	api_define_func("ISteamUGC", "RemoveAllItemKeyValueTags", js_ISteamUGC_RemoveAllItemKeyValueTags, 0);
	api_define_func("ISteamUGC", "RemoveItemKeyValueTags", js_ISteamUGC_RemoveItemKeyValueTags, 0);
	api_define_func("ISteamUGC", "AddItemKeyValueTag", js_ISteamUGC_AddItemKeyValueTag, 0);
	api_define_func("ISteamUGC", "AddItemPreviewFile", js_ISteamUGC_AddItemPreviewFile, 0);
	api_define_func("ISteamUGC", "AddItemPreviewVideo", js_ISteamUGC_AddItemPreviewVideo, 0);
	api_define_func("ISteamUGC", "UpdateItemPreviewFile", js_ISteamUGC_UpdateItemPreviewFile, 0);
	api_define_func("ISteamUGC", "UpdateItemPreviewVideo", js_ISteamUGC_UpdateItemPreviewVideo, 0);
	api_define_func("ISteamUGC", "RemoveItemPreview", js_ISteamUGC_RemoveItemPreview, 0);
	api_define_func("ISteamUGC", "AddContentDescriptor", js_ISteamUGC_AddContentDescriptor, 0);
	api_define_func("ISteamUGC", "RemoveContentDescriptor", js_ISteamUGC_RemoveContentDescriptor, 0);
	api_define_func("ISteamUGC", "GetItemInstallInfo", js_ISteamUGC_GetItemInstallInfo, 0);
	api_define_func("ISteamUGC", "GetItemDownloadInfo", js_ISteamUGC_GetItemDownloadInfo, 0);
	api_define_func("ISteamUGC", "DownloadItem", js_ISteamUGC_DownloadItem, 0);
	api_define_func("ISteamUGC", "BInitWorkshopForGameServer", js_ISteamUGC_BInitWorkshopForGameServer, 0);
	api_define_func("ISteamUGC", "ShowWorkshopEULA", js_ISteamUGC_ShowWorkshopEULA, 0);
	api_define_func("ISteamUGC", "GetQueryUGCNumTags", js_ISteamUGC_GetQueryUGCNumTags, 0);
	api_define_func("ISteamUGC", "GetQueryUGCNumAdditionalPreviews", js_ISteamUGC_GetQueryUGCNumAdditionalPreviews, 0);
	api_define_func("ISteamUGC", "GetQueryUGCNumKeyValueTags", js_ISteamUGC_GetQueryUGCNumKeyValueTags, 0);
	api_define_func("ISteamUGC", "GetQueryUGCContentDescriptors", js_ISteamUGC_GetQueryUGCContentDescriptors, 0);
	api_define_func("ISteamUGC", "GetItemUpdateProgress", js_ISteamUGC_GetItemUpdateProgress, 0);
	api_define_func("ISteamUGC", "GetNumSubscribedItems", js_ISteamUGC_GetNumSubscribedItems, 0);
	api_define_func("ISteamUGC", "GetSubscribedItems", js_ISteamUGC_GetSubscribedItems, 0);
	api_define_func("ISteamUGC", "GetItemState", js_ISteamUGC_GetItemState, 0);
	api_define_func("ISteamUGC", "GetUserContentDescriptorPreferences", js_ISteamUGC_GetUserContentDescriptorPreferences, 0);
	api_define_func("ISteamUGC", "SuspendDownloads", js_ISteamUGC_SuspendDownloads, 0);

	// ISteamAppList
	api_define_func("ISteamAppList", "GetNumInstalledApps", js_ISteamAppList_GetNumInstalledApps, 0);
	api_define_func("ISteamAppList", "GetInstalledApps", js_ISteamAppList_GetInstalledApps, 0);
	api_define_func("ISteamAppList", "GetAppName", js_ISteamAppList_GetAppName, 0);
	api_define_func("ISteamAppList", "GetAppInstallDir", js_ISteamAppList_GetAppInstallDir, 0);
	api_define_func("ISteamAppList", "GetAppBuildId", js_ISteamAppList_GetAppBuildId, 0);

	// ISteamHTMLSurface
	api_define_func("ISteamHTMLSurface", "Init", js_ISteamHTMLSurface_Init, 0);
	api_define_func("ISteamHTMLSurface", "Shutdown", js_ISteamHTMLSurface_Shutdown, 0);
	api_define_func("ISteamHTMLSurface", "CreateBrowser", js_ISteamHTMLSurface_CreateBrowser, 0);
	api_define_func("ISteamHTMLSurface", "RemoveBrowser", js_ISteamHTMLSurface_RemoveBrowser, 0);
	api_define_func("ISteamHTMLSurface", "LoadURL", js_ISteamHTMLSurface_LoadURL, 0);
	api_define_func("ISteamHTMLSurface", "SetSize", js_ISteamHTMLSurface_SetSize, 0);
	api_define_func("ISteamHTMLSurface", "StopLoad", js_ISteamHTMLSurface_StopLoad, 0);
	api_define_func("ISteamHTMLSurface", "Reload", js_ISteamHTMLSurface_Reload, 0);
	api_define_func("ISteamHTMLSurface", "GoBack", js_ISteamHTMLSurface_GoBack, 0);
	api_define_func("ISteamHTMLSurface", "GoForward", js_ISteamHTMLSurface_GoForward, 0);
	api_define_func("ISteamHTMLSurface", "AddHeader", js_ISteamHTMLSurface_AddHeader, 0);
	api_define_func("ISteamHTMLSurface", "ExecuteJavascript", js_ISteamHTMLSurface_ExecuteJavascript, 0);
	api_define_func("ISteamHTMLSurface", "MouseUp", js_ISteamHTMLSurface_MouseUp, 0);
	api_define_func("ISteamHTMLSurface", "MouseDown", js_ISteamHTMLSurface_MouseDown, 0);
	api_define_func("ISteamHTMLSurface", "MouseDoubleClick", js_ISteamHTMLSurface_MouseDoubleClick, 0);
	api_define_func("ISteamHTMLSurface", "MouseMove", js_ISteamHTMLSurface_MouseMove, 0);
	api_define_func("ISteamHTMLSurface", "MouseWheel", js_ISteamHTMLSurface_MouseWheel, 0);
	api_define_func("ISteamHTMLSurface", "KeyDown", js_ISteamHTMLSurface_KeyDown, 0);
	api_define_func("ISteamHTMLSurface", "KeyUp", js_ISteamHTMLSurface_KeyUp, 0);
	api_define_func("ISteamHTMLSurface", "KeyChar", js_ISteamHTMLSurface_KeyChar, 0);
	api_define_func("ISteamHTMLSurface", "SetHorizontalScroll", js_ISteamHTMLSurface_SetHorizontalScroll, 0);
	api_define_func("ISteamHTMLSurface", "SetVerticalScroll", js_ISteamHTMLSurface_SetVerticalScroll, 0);
	api_define_func("ISteamHTMLSurface", "SetKeyFocus", js_ISteamHTMLSurface_SetKeyFocus, 0);
	api_define_func("ISteamHTMLSurface", "ViewSource", js_ISteamHTMLSurface_ViewSource, 0);
	api_define_func("ISteamHTMLSurface", "CopyToClipboard", js_ISteamHTMLSurface_CopyToClipboard, 0);
	api_define_func("ISteamHTMLSurface", "PasteFromClipboard", js_ISteamHTMLSurface_PasteFromClipboard, 0);
	api_define_func("ISteamHTMLSurface", "Find", js_ISteamHTMLSurface_Find, 0);
	api_define_func("ISteamHTMLSurface", "StopFind", js_ISteamHTMLSurface_StopFind, 0);
	api_define_func("ISteamHTMLSurface", "GetLinkAtPosition", js_ISteamHTMLSurface_GetLinkAtPosition, 0);
	api_define_func("ISteamHTMLSurface", "SetCookie", js_ISteamHTMLSurface_SetCookie, 0);
	api_define_func("ISteamHTMLSurface", "SetPageScaleFactor", js_ISteamHTMLSurface_SetPageScaleFactor, 0);
	api_define_func("ISteamHTMLSurface", "SetBackgroundMode", js_ISteamHTMLSurface_SetBackgroundMode, 0);
	api_define_func("ISteamHTMLSurface", "SetDPIScalingFactor", js_ISteamHTMLSurface_SetDPIScalingFactor, 0);
	api_define_func("ISteamHTMLSurface", "OpenDeveloperTools", js_ISteamHTMLSurface_OpenDeveloperTools, 0);
	api_define_func("ISteamHTMLSurface", "AllowStartRequest", js_ISteamHTMLSurface_AllowStartRequest, 0);
	api_define_func("ISteamHTMLSurface", "JSDialogResponse", js_ISteamHTMLSurface_JSDialogResponse, 0);
	api_define_func("ISteamHTMLSurface", "FileLoadDialogResponse", js_ISteamHTMLSurface_FileLoadDialogResponse, 0);

	// ISteamInventory
	api_define_func("ISteamInventory", "GetResultStatus", js_ISteamInventory_GetResultStatus, 0);
	api_define_func("ISteamInventory", "GetResultTimestamp", js_ISteamInventory_GetResultTimestamp, 0);
	api_define_func("ISteamInventory", "GetNumItemsWithPrices", js_ISteamInventory_GetNumItemsWithPrices, 0);
	api_define_func("ISteamInventory", "GetResultItems", js_ISteamInventory_GetResultItems, 0);
	api_define_func("ISteamInventory", "GetResultItemProperty", js_ISteamInventory_GetResultItemProperty, 0);
	api_define_func("ISteamInventory", "CheckResultSteamID", js_ISteamInventory_CheckResultSteamID, 0);
	api_define_func("ISteamInventory", "GetAllItems", js_ISteamInventory_GetAllItems, 0);
	api_define_func("ISteamInventory", "GetItemsByID", js_ISteamInventory_GetItemsByID, 0);
	api_define_func("ISteamInventory", "SerializeResult", js_ISteamInventory_SerializeResult, 0);
	api_define_func("ISteamInventory", "DeserializeResult", js_ISteamInventory_DeserializeResult, 0);
	api_define_func("ISteamInventory", "GenerateItems", js_ISteamInventory_GenerateItems, 0);
	api_define_func("ISteamInventory", "GrantPromoItems", js_ISteamInventory_GrantPromoItems, 0);
	api_define_func("ISteamInventory", "AddPromoItem", js_ISteamInventory_AddPromoItem, 0);
	api_define_func("ISteamInventory", "AddPromoItems", js_ISteamInventory_AddPromoItems, 0);
	api_define_func("ISteamInventory", "ConsumeItem", js_ISteamInventory_ConsumeItem, 0);
	api_define_func("ISteamInventory", "ExchangeItems", js_ISteamInventory_ExchangeItems, 0);
	api_define_func("ISteamInventory", "TransferItemQuantity", js_ISteamInventory_TransferItemQuantity, 0);
	api_define_func("ISteamInventory", "TriggerItemDrop", js_ISteamInventory_TriggerItemDrop, 0);
	api_define_func("ISteamInventory", "TradeItems", js_ISteamInventory_TradeItems, 0);
	api_define_func("ISteamInventory", "LoadItemDefinitions", js_ISteamInventory_LoadItemDefinitions, 0);
	api_define_func("ISteamInventory", "GetItemDefinitionIDs", js_ISteamInventory_GetItemDefinitionIDs, 0);
	api_define_func("ISteamInventory", "GetItemDefinitionProperty", js_ISteamInventory_GetItemDefinitionProperty, 0);
	api_define_func("ISteamInventory", "GetEligiblePromoItemDefinitionIDs", js_ISteamInventory_GetEligiblePromoItemDefinitionIDs, 0);
	api_define_func("ISteamInventory", "GetItemsWithPrices", js_ISteamInventory_GetItemsWithPrices, 0);
	api_define_func("ISteamInventory", "GetItemPrice", js_ISteamInventory_GetItemPrice, 0);
	api_define_func("ISteamInventory", "RemoveProperty", js_ISteamInventory_RemoveProperty, 0);
	api_define_func("ISteamInventory", "SetProperty", js_ISteamInventory_SetPropertyString, 0);
	api_define_func("ISteamInventory", "SetProperty", js_ISteamInventory_SetPropertyBool, 0);
	api_define_func("ISteamInventory", "SetProperty", js_ISteamInventory_SetPropertyInt64, 0);
	api_define_func("ISteamInventory", "SetProperty", js_ISteamInventory_SetPropertyFloat, 0);
	api_define_func("ISteamInventory", "SubmitUpdateProperties", js_ISteamInventory_SubmitUpdateProperties, 0);
	api_define_func("ISteamInventory", "InspectItem", js_ISteamInventory_InspectItem, 0);
	api_define_func("ISteamInventory", "DestroyResult", js_ISteamInventory_DestroyResult, 0);
	api_define_func("ISteamInventory", "SendItemDropHeartbeat", js_ISteamInventory_SendItemDropHeartbeat, 0);
	api_define_func("ISteamInventory", "RequestEligiblePromoItemDefinitionsIDs", js_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs, 0);
	api_define_func("ISteamInventory", "StartPurchase", js_ISteamInventory_StartPurchase, 0);
	api_define_func("ISteamInventory", "RequestPrices", js_ISteamInventory_RequestPrices, 0);
	api_define_func("ISteamInventory", "StartUpdateProperties", js_ISteamInventory_StartUpdateProperties, 0);

	// ISteamVideo
	api_define_func("ISteamVideo", "GetVideoURL", js_ISteamVideo_GetVideoURL, 0);
	api_define_func("ISteamVideo", "GetOPFSettings", js_ISteamVideo_GetOPFSettings, 0);
	api_define_func("ISteamVideo", "AddTimelineHighlightMarker", js_ISteamVideo_AddTimelineHighlightMarker, 0);
	api_define_func("ISteamVideo", "AddTimelineTimestamp", js_ISteamVideo_AddTimelineTimestamp, 0);
	api_define_func("ISteamVideo", "AddTimelineRangeStart", js_ISteamVideo_AddTimelineRangeStart, 0);
	api_define_func("ISteamVideo", "AddTimelineRangeEnd", js_ISteamVideo_AddTimelineRangeEnd, 0);
	api_define_func("ISteamVideo", "SetTimelineGameMode", js_ISteamVideo_SetTimelineGameMode, 0);
	api_define_func("ISteamVideo", "IsBroadcasting", js_ISteamVideo_IsBroadcasting, 0);
	api_define_func("ISteamVideo", "GetOPFStringForApp", js_ISteamVideo_GetOPFStringForApp, 0);

	// ISteamParentalSettings
	api_define_func("ISteamParentalSettings", "BIsParentalLockEnabled", js_ISteamParentalSettings_BIsParentalLockEnabled, 0);
	api_define_func("ISteamParentalSettings", "BIsParentalLockLocked", js_ISteamParentalSettings_BIsParentalLockLocked, 0);
	api_define_func("ISteamParentalSettings", "BIsAppBlocked", js_ISteamParentalSettings_BIsAppBlocked, 0);
	api_define_func("ISteamParentalSettings", "BIsAppInBlockList", js_ISteamParentalSettings_BIsAppInBlockList, 0);
	api_define_func("ISteamParentalSettings", "BIsFeatureBlocked", js_ISteamParentalSettings_BIsFeatureBlocked, 0);
	api_define_func("ISteamParentalSettings", "BIsFeatureInBlockList", js_ISteamParentalSettings_BIsFeatureInBlockList, 0);

	// ISteamRemotePlay
	api_define_func("ISteamRemotePlay", "GetSessionCount", js_ISteamRemotePlay_GetSessionCount, 0);
	api_define_func("ISteamRemotePlay", "GetSessionID", js_ISteamRemotePlay_GetSessionID, 0);
	api_define_func("ISteamRemotePlay", "GetSessionClientFormFactor", js_ISteamRemotePlay_GetSessionClientFormFactor, 0);
	api_define_func("ISteamRemotePlay", "GetSessionSteamID", js_ISteamRemotePlay_GetSessionSteamID, 0);
	api_define_func("ISteamRemotePlay", "GetSessionClientName", js_ISteamRemotePlay_GetSessionClientName, 0);
	api_define_func("ISteamRemotePlay", "BGetSessionClientResolution", js_ISteamRemotePlay_BGetSessionClientResolution, 0);
	api_define_func("ISteamRemotePlay", "BStartRemotePlayTogether", js_ISteamRemotePlay_BStartRemotePlayTogether, 0);
	api_define_func("ISteamRemotePlay", "BSendRemotePlayTogetherInvite", js_ISteamRemotePlay_BSendRemotePlayTogetherInvite, 0);

	// ISteamNetworkingMessages
	api_define_func("ISteamNetworkingMessages", "SendMessageToUser", js_ISteamNetworkingMessages_SendMessageToUser, 0);
	api_define_func("ISteamNetworkingMessages", "GetSessionConnectionInfo", js_ISteamNetworkingMessages_GetSessionConnectionInfo, 0);
	api_define_func("ISteamNetworkingMessages", "ReceiveMessagesOnChannel", js_ISteamNetworkingMessages_ReceiveMessagesOnChannel, 0);
	api_define_func("ISteamNetworkingMessages", "AcceptSessionWithUser", js_ISteamNetworkingMessages_AcceptSessionWithUser, 0);
	api_define_func("ISteamNetworkingMessages", "CloseSessionWithUser", js_ISteamNetworkingMessages_CloseSessionWithUser, 0);
	api_define_func("ISteamNetworkingMessages", "CloseChannelWithUser", js_ISteamNetworkingMessages_CloseChannelWithUser, 0);

	// ISteamNetworkingSockets
	api_define_func("ISteamNetworkingSockets", "CreateFakeUDPPort", js_ISteamNetworkingSockets_CreateFakeUDPPort, 0);
	api_define_func("ISteamNetworkingSockets", "CreateListenSocketIP", js_ISteamNetworkingSockets_CreateListenSocketIP, 0);
	api_define_func("ISteamNetworkingSockets", "ConnectByIPAddress", js_ISteamNetworkingSockets_ConnectByIPAddress, 0);
	api_define_func("ISteamNetworkingSockets", "CreateListenSocketP2P", js_ISteamNetworkingSockets_CreateListenSocketP2P, 0);
	api_define_func("ISteamNetworkingSockets", "ConnectP2P", js_ISteamNetworkingSockets_ConnectP2P, 0);
	api_define_func("ISteamNetworkingSockets", "AcceptConnection", js_ISteamNetworkingSockets_AcceptConnection, 0);
	api_define_func("ISteamNetworkingSockets", "SendMessageToConnection", js_ISteamNetworkingSockets_SendMessageToConnection, 0);
	api_define_func("ISteamNetworkingSockets", "FlushMessagesOnConnection", js_ISteamNetworkingSockets_FlushMessagesOnConnection, 0);
	api_define_func("ISteamNetworkingSockets", "GetConnectionRealTimeStatus", js_ISteamNetworkingSockets_GetConnectionRealTimeStatus, 0);
	api_define_func("ISteamNetworkingSockets", "ConfigureConnectionLanes", js_ISteamNetworkingSockets_ConfigureConnectionLanes, 0);
	api_define_func("ISteamNetworkingSockets", "InitAuthentication", js_ISteamNetworkingSockets_InitAuthentication, 0);
	api_define_func("ISteamNetworkingSockets", "GetAuthenticationStatus", js_ISteamNetworkingSockets_GetAuthenticationStatus, 0);
	api_define_func("ISteamNetworkingSockets", "CreatePollGroup", js_ISteamNetworkingSockets_CreatePollGroup, 0);
	api_define_func("ISteamNetworkingSockets", "ConnectToHostedDedicatedServer", js_ISteamNetworkingSockets_ConnectToHostedDedicatedServer, 0);
	api_define_func("ISteamNetworkingSockets", "GetHostedDedicatedServerPOPID", js_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID, 0);
	api_define_func("ISteamNetworkingSockets", "GetHostedDedicatedServerAddress", js_ISteamNetworkingSockets_GetHostedDedicatedServerAddress, 0);
	api_define_func("ISteamNetworkingSockets", "CreateHostedDedicatedServerListenSocket", js_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket, 0);
	api_define_func("ISteamNetworkingSockets", "GetGameCoordinatorServerLogin", js_ISteamNetworkingSockets_GetGameCoordinatorServerLogin, 0);
	api_define_func("ISteamNetworkingSockets", "ConnectP2PCustomSignaling", js_ISteamNetworkingSockets_ConnectP2PCustomSignaling, 0);
	api_define_func("ISteamNetworkingSockets", "CreateListenSocketP2PFakeIP", js_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP, 0);
	api_define_func("ISteamNetworkingSockets", "GetRemoteFakeIPForConnection", js_ISteamNetworkingSockets_GetRemoteFakeIPForConnection, 0);
	api_define_func("ISteamNetworkingSockets", "CloseConnection", js_ISteamNetworkingSockets_CloseConnection, 0);
	api_define_func("ISteamNetworkingSockets", "CloseListenSocket", js_ISteamNetworkingSockets_CloseListenSocket, 0);
	api_define_func("ISteamNetworkingSockets", "SetConnectionUserData", js_ISteamNetworkingSockets_SetConnectionUserData, 0);
	api_define_func("ISteamNetworkingSockets", "GetConnectionName", js_ISteamNetworkingSockets_GetConnectionName, 0);
	api_define_func("ISteamNetworkingSockets", "GetConnectionInfo", js_ISteamNetworkingSockets_GetConnectionInfo, 0);
	api_define_func("ISteamNetworkingSockets", "GetListenSocketAddress", js_ISteamNetworkingSockets_GetListenSocketAddress, 0);
	api_define_func("ISteamNetworkingSockets", "CreateSocketPair", js_ISteamNetworkingSockets_CreateSocketPair, 0);
	api_define_func("ISteamNetworkingSockets", "GetIdentity", js_ISteamNetworkingSockets_GetIdentity, 0);
	api_define_func("ISteamNetworkingSockets", "DestroyPollGroup", js_ISteamNetworkingSockets_DestroyPollGroup, 0);
	api_define_func("ISteamNetworkingSockets", "SetConnectionPollGroup", js_ISteamNetworkingSockets_SetConnectionPollGroup, 0);
	api_define_func("ISteamNetworkingSockets", "ReceivedRelayAuthTicket", js_ISteamNetworkingSockets_ReceivedRelayAuthTicket, 0);
	api_define_func("ISteamNetworkingSockets", "ReceivedP2PCustomSignal", js_ISteamNetworkingSockets_ReceivedP2PCustomSignal, 0);
	api_define_func("ISteamNetworkingSockets", "GetCertificateRequest", js_ISteamNetworkingSockets_GetCertificateRequest, 0);
	api_define_func("ISteamNetworkingSockets", "SetCertificate", js_ISteamNetworkingSockets_SetCertificate, 0);
	api_define_func("ISteamNetworkingSockets", "BeginAsyncRequestFakeIP", js_ISteamNetworkingSockets_BeginAsyncRequestFakeIP, 0);
	api_define_func("ISteamNetworkingSockets", "GetConnectionUserData", js_ISteamNetworkingSockets_GetConnectionUserData, 0);
	api_define_func("ISteamNetworkingSockets", "SetConnectionName", js_ISteamNetworkingSockets_SetConnectionName, 0);
	api_define_func("ISteamNetworkingSockets", "SendMessages", js_ISteamNetworkingSockets_SendMessages, 0);
	api_define_func("ISteamNetworkingSockets", "ResetIdentity", js_ISteamNetworkingSockets_ResetIdentity, 0);
	api_define_func("ISteamNetworkingSockets", "RunCallbacks", js_ISteamNetworkingSockets_RunCallbacks, 0);
	api_define_func("ISteamNetworkingSockets", "GetFakeIP", js_ISteamNetworkingSockets_GetFakeIP, 0);
	api_define_func("ISteamNetworkingSockets", "ReceiveMessagesOnConnection", js_ISteamNetworkingSockets_ReceiveMessagesOnConnection, 0);
	api_define_func("ISteamNetworkingSockets", "GetDetailedConnectionStatus", js_ISteamNetworkingSockets_GetDetailedConnectionStatus, 0);
	api_define_func("ISteamNetworkingSockets", "ReceiveMessagesOnPollGroup", js_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup, 0);
	api_define_func("ISteamNetworkingSockets", "FindRelayAuthTicketForServer", js_ISteamNetworkingSockets_FindRelayAuthTicketForServer, 0);
	api_define_func("ISteamNetworkingSockets", "GetHostedDedicatedServerPort", js_ISteamNetworkingSockets_GetHostedDedicatedServerPort, 0);

	// ISteamNetworkingUtils
	api_define_func("ISteamNetworkingUtils", "AllocateMessage", js_ISteamNetworkingUtils_AllocateMessage, 0);
	api_define_func("ISteamNetworkingUtils", "InitRelayNetworkAccess", js_ISteamNetworkingUtils_InitRelayNetworkAccess, 0);
	api_define_func("ISteamNetworkingUtils", "ConvertPingLocationToString", js_ISteamNetworkingUtils_ConvertPingLocationToString, 0);
	api_define_func("ISteamNetworkingUtils", "SteamNetworkingIPAddr_ToString", js_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString, 0);
	api_define_func("ISteamNetworkingUtils", "SteamNetworkingIdentity_ToString", js_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString, 0);
	api_define_func("ISteamNetworkingUtils", "GetRelayNetworkStatus", js_ISteamNetworkingUtils_GetRelayNetworkStatus, 0);
	api_define_func("ISteamNetworkingUtils", "GetIPv4FakeIPType", js_ISteamNetworkingUtils_GetIPv4FakeIPType, 0);
	api_define_func("ISteamNetworkingUtils", "GetRealIdentityForFakeIP", js_ISteamNetworkingUtils_GetRealIdentityForFakeIP, 0);
	api_define_func("ISteamNetworkingUtils", "GetConfigValue", js_ISteamNetworkingUtils_GetConfigValue, 0);
	api_define_func("ISteamNetworkingUtils", "IterateGenericEditableConfigValues", js_ISteamNetworkingUtils_IterateGenericEditableConfigValues, 0);
	api_define_func("ISteamNetworkingUtils", "SteamNetworkingIPAddr_GetFakeIPType", js_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType, 0);
	api_define_func("ISteamNetworkingUtils", "GetLocalPingLocation", js_ISteamNetworkingUtils_GetLocalPingLocation, 0);
	api_define_func("ISteamNetworkingUtils", "EstimatePingTimeBetweenTwoLocations", js_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations, 0);
	api_define_func("ISteamNetworkingUtils", "EstimatePingTimeFromLocalHost", js_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost, 0);
	api_define_func("ISteamNetworkingUtils", "GetPingToDataCenter", js_ISteamNetworkingUtils_GetPingToDataCenter, 0);
	api_define_func("ISteamNetworkingUtils", "GetDirectPingToPOP", js_ISteamNetworkingUtils_GetDirectPingToPOP, 0);
	api_define_func("ISteamNetworkingUtils", "GetPOPCount", js_ISteamNetworkingUtils_GetPOPCount, 0);
	api_define_func("ISteamNetworkingUtils", "GetPOPList", js_ISteamNetworkingUtils_GetPOPList, 0);
	api_define_func("ISteamNetworkingUtils", "ParsePingLocationString", js_ISteamNetworkingUtils_ParsePingLocationString, 0);
	api_define_func("ISteamNetworkingUtils", "CheckPingDataUpToDate", js_ISteamNetworkingUtils_CheckPingDataUpToDate, 0);
	api_define_func("ISteamNetworkingUtils", "IsFakeIPv4", js_ISteamNetworkingUtils_IsFakeIPv4, 0);
	api_define_func("ISteamNetworkingUtils", "SetGlobalConfigValueInt32", js_ISteamNetworkingUtils_SetGlobalConfigValueInt32, 0);
	api_define_func("ISteamNetworkingUtils", "SetGlobalConfigValueFloat", js_ISteamNetworkingUtils_SetGlobalConfigValueFloat, 0);
	api_define_func("ISteamNetworkingUtils", "SetGlobalConfigValueString", js_ISteamNetworkingUtils_SetGlobalConfigValueString, 0);
	api_define_func("ISteamNetworkingUtils", "SetGlobalConfigValuePtr", js_ISteamNetworkingUtils_SetGlobalConfigValuePtr, 0);
	api_define_func("ISteamNetworkingUtils", "SetConnectionConfigValueInt32", js_ISteamNetworkingUtils_SetConnectionConfigValueInt32, 0);
	api_define_func("ISteamNetworkingUtils", "SetConnectionConfigValueFloat", js_ISteamNetworkingUtils_SetConnectionConfigValueFloat, 0);
	api_define_func("ISteamNetworkingUtils", "SetConnectionConfigValueString", js_ISteamNetworkingUtils_SetConnectionConfigValueString, 0);
	api_define_func("ISteamNetworkingUtils", "SetConfigValue", js_ISteamNetworkingUtils_SetConfigValue, 0);
	api_define_func("ISteamNetworkingUtils", "SetConfigValueStruct", js_ISteamNetworkingUtils_SetConfigValueStruct, 0);
	api_define_func("ISteamNetworkingUtils", "SteamNetworkingIPAddr_ParseString", js_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString, 0);
	api_define_func("ISteamNetworkingUtils", "SteamNetworkingIdentity_ParseString", js_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString, 0);
	api_define_func("ISteamNetworkingUtils", "GetLocalTimestamp", js_ISteamNetworkingUtils_GetLocalTimestamp, 0);
	api_define_func("ISteamNetworkingUtils", "GetConfigValueInfo", js_ISteamNetworkingUtils_GetConfigValueInfo, 0);

	// ISteamGameServer
	api_define_func("ISteamGameServer", "SetProduct", js_ISteamGameServer_SetProduct, 0);
	api_define_func("ISteamGameServer", "SetGameDescription", js_ISteamGameServer_SetGameDescription, 0);
	api_define_func("ISteamGameServer", "SetModDir", js_ISteamGameServer_SetModDir, 0);
	api_define_func("ISteamGameServer", "SetDedicatedServer", js_ISteamGameServer_SetDedicatedServer, 0);
	api_define_func("ISteamGameServer", "LogOn", js_ISteamGameServer_LogOn, 0);
	api_define_func("ISteamGameServer", "LogOnAnonymous", js_ISteamGameServer_LogOnAnonymous, 0);
	api_define_func("ISteamGameServer", "LogOff", js_ISteamGameServer_LogOff, 0);
	api_define_func("ISteamGameServer", "SetMaxPlayerCount", js_ISteamGameServer_SetMaxPlayerCount, 0);
	api_define_func("ISteamGameServer", "SetBotPlayerCount", js_ISteamGameServer_SetBotPlayerCount, 0);
	api_define_func("ISteamGameServer", "SetServerName", js_ISteamGameServer_SetServerName, 0);
	api_define_func("ISteamGameServer", "SetMapName", js_ISteamGameServer_SetMapName, 0);
	api_define_func("ISteamGameServer", "SetPasswordProtected", js_ISteamGameServer_SetPasswordProtected, 0);
	api_define_func("ISteamGameServer", "SetSpectatorPort", js_ISteamGameServer_SetSpectatorPort, 0);
	api_define_func("ISteamGameServer", "SetSpectatorServerName", js_ISteamGameServer_SetSpectatorServerName, 0);
	api_define_func("ISteamGameServer", "ClearAllKeyValues", js_ISteamGameServer_ClearAllKeyValues, 0);
	api_define_func("ISteamGameServer", "SetKeyValue", js_ISteamGameServer_SetKeyValue, 0);
	api_define_func("ISteamGameServer", "SetGameTags", js_ISteamGameServer_SetGameTags, 0);
	api_define_func("ISteamGameServer", "SetGameData", js_ISteamGameServer_SetGameData, 0);
	api_define_func("ISteamGameServer", "SetRegion", js_ISteamGameServer_SetRegion, 0);
	api_define_func("ISteamGameServer", "SetAdvertiseServerActive", js_ISteamGameServer_SetAdvertiseServerActive, 0);
	api_define_func("ISteamGameServer", "EndAuthSession", js_ISteamGameServer_EndAuthSession, 0);
	api_define_func("ISteamGameServer", "CancelAuthTicket", js_ISteamGameServer_CancelAuthTicket, 0);
	api_define_func("ISteamGameServer", "GetGameplayStats", js_ISteamGameServer_GetGameplayStats, 0);
	api_define_func("ISteamGameServer", "SendUserDisconnect_DEPRECATED", js_ISteamGameServer_SendUserDisconnect_DEPRECATED, 0);
	api_define_func("ISteamGameServer", "BLoggedOn", js_ISteamGameServer_BLoggedOn, 0);
	api_define_func("ISteamGameServer", "BSecure", js_ISteamGameServer_BSecure, 0);
	api_define_func("ISteamGameServer", "WasRestartRequested", js_ISteamGameServer_WasRestartRequested, 0);
	api_define_func("ISteamGameServer", "RequestUserGroupStatus", js_ISteamGameServer_RequestUserGroupStatus, 0);
	api_define_func("ISteamGameServer", "HandleIncomingPacket", js_ISteamGameServer_HandleIncomingPacket, 0);
	api_define_func("ISteamGameServer", "SendUserConnectAndAuthenticate_DEPRECATED", js_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED, 0);
	api_define_func("ISteamGameServer", "BUpdateUserData", js_ISteamGameServer_BUpdateUserData, 0);
	api_define_func("ISteamGameServer", "GetSteamID", js_ISteamGameServer_GetSteamID, 0);
	api_define_func("ISteamGameServer", "GetServerReputation", js_ISteamGameServer_GetServerReputation, 0);
	api_define_func("ISteamGameServer", "AssociateWithClan", js_ISteamGameServer_AssociateWithClan, 0);
	api_define_func("ISteamGameServer", "ComputeNewPlayerCompatibility", js_ISteamGameServer_ComputeNewPlayerCompatibility, 0);
	api_define_func("ISteamGameServer", "CreateUnauthenticatedUserConnection", js_ISteamGameServer_CreateUnauthenticatedUserConnection, 0);
	api_define_func("ISteamGameServer", "GetAuthSessionTicket", js_ISteamGameServer_GetAuthSessionTicket, 0);
	api_define_func("ISteamGameServer", "BeginAuthSession", js_ISteamGameServer_BeginAuthSession, 0);
	api_define_func("ISteamGameServer", "UserHasLicenseForApp", js_ISteamGameServer_UserHasLicenseForApp, 0);
	api_define_func("ISteamGameServer", "GetPublicIP", js_ISteamGameServer_GetPublicIP, 0);
	api_define_func("ISteamGameServer", "GetNextOutgoingPacket", js_ISteamGameServer_GetNextOutgoingPacket, 0);

	// ISteamGameServerStats
	api_define_func("ISteamGameServerStats", "RequestUserStats", js_ISteamGameServerStats_RequestUserStats, 0);
	api_define_func("ISteamGameServerStats", "StoreUserStats", js_ISteamGameServerStats_StoreUserStats, 0);
	api_define_func("ISteamGameServerStats", "GetUserStat", js_ISteamGameServerStats_GetUserStatInt32, 0);
	api_define_func("ISteamGameServerStats", "GetUserStat", js_ISteamGameServerStats_GetUserStatFloat, 0);
	api_define_func("ISteamGameServerStats", "GetUserAchievement", js_ISteamGameServerStats_GetUserAchievement, 0);
	api_define_func("ISteamGameServerStats", "SetUserStat", js_ISteamGameServerStats_SetUserStatInt32, 0);
	api_define_func("ISteamGameServerStats", "SetUserStat", js_ISteamGameServerStats_SetUserStatFloat, 0);
	api_define_func("ISteamGameServerStats", "UpdateUserAvgRateStat", js_ISteamGameServerStats_UpdateUserAvgRateStat, 0);
	api_define_func("ISteamGameServerStats", "SetUserAchievement", js_ISteamGameServerStats_SetUserAchievement, 0);
	api_define_func("ISteamGameServerStats", "ClearUserAchievement", js_ISteamGameServerStats_ClearUserAchievement, 0);

	// ISteamNetworkingFakeUDPPort
	api_define_func("ISteamNetworkingFakeUDPPort", "DestroyFakeUDPPort", js_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort, 0);
	api_define_func("ISteamNetworkingFakeUDPPort", "ScheduleCleanup", js_ISteamNetworkingFakeUDPPort_ScheduleCleanup, 0);
	api_define_func("ISteamNetworkingFakeUDPPort", "SendMessageToFakeIP", js_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP, 0);
	api_define_func("ISteamNetworkingFakeUDPPort", "ReceiveMessages", js_ISteamNetworkingFakeUDPPort_ReceiveMessages, 0);

}

static bool
js_SteamAPI_Init(int num_args, bool is_ctor, intptr_t magic)
{
	steam_api = LoadLibrary(TEXT("steam_api64.dll"));
	if (steam_api)
	{
		FuncPtr_U7J85TZ SteamAPI_Init;
		SteamAPI_Init = (FuncPtr_U7J85TZ)GetProcAddress(steam_api, "SteamAPI_Init");
	}
	else
	{
		jsal_error(JS_ERROR, "Failed to link to 'steam_api64.dll'.");
	}
}

static bool
js_SteamIPAddress_t_IsSet(int num_args, bool is_ctor, intptr_t magic)
{
	SteamIPAddress_t * self;
	bool result;
	FuncPtr_FJVVET4 SteamIPAddress_t_IsSet;

	SteamIPAddress_t_IsSet = (FuncPtr_FJVVET4)GetProcAddress(steam_api, "SteamAPI_SteamIPAddress_t_IsSet");
	result = SteamIPAddress_t_IsSet(self);
}

static bool
js_MatchMakingKeyValuePair_t_Construct(int num_args, bool is_ctor, intptr_t magic)
{
	MatchMakingKeyValuePair_t * self;
	FuncPtr_ECXJ23N MatchMakingKeyValuePair_t_Construct;

	MatchMakingKeyValuePair_t_Construct = (FuncPtr_ECXJ23N)GetProcAddress(steam_api, "SteamAPI_MatchMakingKeyValuePair_t_Construct");
	MatchMakingKeyValuePair_t_Construct(self);
}

static bool
js_servernetadr_t_Construct(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	FuncPtr_1YA5008 servernetadr_t_Construct;

	servernetadr_t_Construct = (FuncPtr_1YA5008)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_Construct");
	servernetadr_t_Construct(self);
}

static bool
js_servernetadr_t_Init(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	uint32_t ip;
	uint16_t usQueryPort;
	uint16_t usConnectionPort;
	FuncPtr_S9BUASQ servernetadr_t_Init;

	servernetadr_t_Init = (FuncPtr_S9BUASQ)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_Init");
	servernetadr_t_Init(self, ip, usQueryPort, usConnectionPort);
}

static bool
js_servernetadr_t_SetQueryPort(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	uint16_t usPort;
	FuncPtr_BA6HCX9 servernetadr_t_SetQueryPort;

	servernetadr_t_SetQueryPort = (FuncPtr_BA6HCX9)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_SetQueryPort");
	servernetadr_t_SetQueryPort(self, usPort);
}

static bool
js_servernetadr_t_SetConnectionPort(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	uint16_t usPort;
	FuncPtr_BA6HCX9 servernetadr_t_SetConnectionPort;

	servernetadr_t_SetConnectionPort = (FuncPtr_BA6HCX9)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_SetConnectionPort");
	servernetadr_t_SetConnectionPort(self, usPort);
}

static bool
js_servernetadr_t_SetIP(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	uint32_t unIP;
	FuncPtr_3J3DYVV servernetadr_t_SetIP;

	servernetadr_t_SetIP = (FuncPtr_3J3DYVV)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_SetIP");
	servernetadr_t_SetIP(self, unIP);
}

static bool
js_servernetadr_t_Assign(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	const servernetadr_t * that;
	FuncPtr_OUPGYZU servernetadr_t_Assign;

	servernetadr_t_Assign = (FuncPtr_OUPGYZU)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_Assign");
	servernetadr_t_Assign(self, that);
}

static bool
js_servernetadr_t_GetQueryPort(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	uint16_t result;
	FuncPtr_IRQ0ISR servernetadr_t_GetQueryPort;

	servernetadr_t_GetQueryPort = (FuncPtr_IRQ0ISR)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_GetQueryPort");
	result = servernetadr_t_GetQueryPort(self);
}

static bool
js_servernetadr_t_GetConnectionPort(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	uint16_t result;
	FuncPtr_IRQ0ISR servernetadr_t_GetConnectionPort;

	servernetadr_t_GetConnectionPort = (FuncPtr_IRQ0ISR)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_GetConnectionPort");
	result = servernetadr_t_GetConnectionPort(self);
}

static bool
js_servernetadr_t_GetIP(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	uint32_t result;
	FuncPtr_5R8XSU1 servernetadr_t_GetIP;

	servernetadr_t_GetIP = (FuncPtr_5R8XSU1)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_GetIP");
	result = servernetadr_t_GetIP(self);
}

static bool
js_servernetadr_t_GetConnectionAddressString(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	const char * result;
	FuncPtr_EAYGKP0 servernetadr_t_GetConnectionAddressString;

	servernetadr_t_GetConnectionAddressString = (FuncPtr_EAYGKP0)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_GetConnectionAddressString");
	result = servernetadr_t_GetConnectionAddressString(self);
}

static bool
js_servernetadr_t_GetQueryAddressString(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	const char * result;
	FuncPtr_EAYGKP0 servernetadr_t_GetQueryAddressString;

	servernetadr_t_GetQueryAddressString = (FuncPtr_EAYGKP0)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_GetQueryAddressString");
	result = servernetadr_t_GetQueryAddressString(self);
}

static bool
js_servernetadr_t_IsLessThan(int num_args, bool is_ctor, intptr_t magic)
{
	servernetadr_t * self;
	const servernetadr_t * netadr;
	bool result;
	FuncPtr_TUOJ7LF servernetadr_t_IsLessThan;

	servernetadr_t_IsLessThan = (FuncPtr_TUOJ7LF)GetProcAddress(steam_api, "SteamAPI_servernetadr_t_IsLessThan");
	result = servernetadr_t_IsLessThan(self, netadr);
}

static bool
js_gameserveritem_t_Construct(int num_args, bool is_ctor, intptr_t magic)
{
	gameserveritem_t * self;
	FuncPtr_40DO09O gameserveritem_t_Construct;

	gameserveritem_t_Construct = (FuncPtr_40DO09O)GetProcAddress(steam_api, "SteamAPI_gameserveritem_t_Construct");
	gameserveritem_t_Construct(self);
}

static bool
js_gameserveritem_t_SetName(int num_args, bool is_ctor, intptr_t magic)
{
	gameserveritem_t * self;
	const char * pName;
	FuncPtr_FS8YPZ9 gameserveritem_t_SetName;

	gameserveritem_t_SetName = (FuncPtr_FS8YPZ9)GetProcAddress(steam_api, "SteamAPI_gameserveritem_t_SetName");
	gameserveritem_t_SetName(self, pName);
}

static bool
js_gameserveritem_t_GetName(int num_args, bool is_ctor, intptr_t magic)
{
	gameserveritem_t * self;
	const char * result;
	FuncPtr_R2K8ZCC gameserveritem_t_GetName;

	gameserveritem_t_GetName = (FuncPtr_R2K8ZCC)GetProcAddress(steam_api, "SteamAPI_gameserveritem_t_GetName");
	result = gameserveritem_t_GetName(self);
}

static bool
js_SteamNetworkingIPAddr_Clear(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	FuncPtr_MSBKD78 SteamNetworkingIPAddr_Clear;

	SteamNetworkingIPAddr_Clear = (FuncPtr_MSBKD78)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_Clear");
	SteamNetworkingIPAddr_Clear(self);
}

static bool
js_SteamNetworkingIPAddr_SetIPv6(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	const uint8_t * ipv6;
	uint16_t nPort;
	FuncPtr_GJUOQ70 SteamNetworkingIPAddr_SetIPv6;

	SteamNetworkingIPAddr_SetIPv6 = (FuncPtr_GJUOQ70)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_SetIPv6");
	SteamNetworkingIPAddr_SetIPv6(self, ipv6, nPort);
}

static bool
js_SteamNetworkingIPAddr_SetIPv4(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	uint32_t nIP;
	uint16_t nPort;
	FuncPtr_GRLPBG3 SteamNetworkingIPAddr_SetIPv4;

	SteamNetworkingIPAddr_SetIPv4 = (FuncPtr_GRLPBG3)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_SetIPv4");
	SteamNetworkingIPAddr_SetIPv4(self, nIP, nPort);
}

static bool
js_SteamNetworkingIPAddr_SetIPv6LocalHost(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	uint16_t nPort;
	FuncPtr_WVJSBID SteamNetworkingIPAddr_SetIPv6LocalHost;

	SteamNetworkingIPAddr_SetIPv6LocalHost = (FuncPtr_WVJSBID)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost");
	SteamNetworkingIPAddr_SetIPv6LocalHost(self, nPort);
}

static bool
js_SteamNetworkingIPAddr_ToString(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	char * buf;
	uint32_t cbBuf;
	bool bWithPort;
	FuncPtr_Y8IV210 SteamNetworkingIPAddr_ToString;

	SteamNetworkingIPAddr_ToString = (FuncPtr_Y8IV210)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_ToString");
	SteamNetworkingIPAddr_ToString(self, buf, cbBuf, bWithPort);
}

static bool
js_SteamNetworkingIPAddr_IsIPv6AllZeros(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	bool result;
	FuncPtr_JYOELXF SteamNetworkingIPAddr_IsIPv6AllZeros;

	SteamNetworkingIPAddr_IsIPv6AllZeros = (FuncPtr_JYOELXF)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros");
	result = SteamNetworkingIPAddr_IsIPv6AllZeros(self);
}

static bool
js_SteamNetworkingIPAddr_IsIPv4(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	bool result;
	FuncPtr_JYOELXF SteamNetworkingIPAddr_IsIPv4;

	SteamNetworkingIPAddr_IsIPv4 = (FuncPtr_JYOELXF)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_IsIPv4");
	result = SteamNetworkingIPAddr_IsIPv4(self);
}

static bool
js_SteamNetworkingIPAddr_IsLocalHost(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	bool result;
	FuncPtr_JYOELXF SteamNetworkingIPAddr_IsLocalHost;

	SteamNetworkingIPAddr_IsLocalHost = (FuncPtr_JYOELXF)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_IsLocalHost");
	result = SteamNetworkingIPAddr_IsLocalHost(self);
}

static bool
js_SteamNetworkingIPAddr_ParseString(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	const char * pszStr;
	bool result;
	FuncPtr_AX7SF1G SteamNetworkingIPAddr_ParseString;

	SteamNetworkingIPAddr_ParseString = (FuncPtr_AX7SF1G)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_ParseString");
	result = SteamNetworkingIPAddr_ParseString(self, pszStr);
}

static bool
js_SteamNetworkingIPAddr_IsEqualTo(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	const SteamNetworkingIPAddr * x;
	bool result;
	FuncPtr_J0TYL9L SteamNetworkingIPAddr_IsEqualTo;

	SteamNetworkingIPAddr_IsEqualTo = (FuncPtr_J0TYL9L)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_IsEqualTo");
	result = SteamNetworkingIPAddr_IsEqualTo(self, x);
}

static bool
js_SteamNetworkingIPAddr_IsFakeIP(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	bool result;
	FuncPtr_JYOELXF SteamNetworkingIPAddr_IsFakeIP;

	SteamNetworkingIPAddr_IsFakeIP = (FuncPtr_JYOELXF)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_IsFakeIP");
	result = SteamNetworkingIPAddr_IsFakeIP(self);
}

static bool
js_SteamNetworkingIPAddr_GetIPv4(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	uint32_t result;
	FuncPtr_X4BL4VE SteamNetworkingIPAddr_GetIPv4;

	SteamNetworkingIPAddr_GetIPv4 = (FuncPtr_X4BL4VE)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_GetIPv4");
	result = SteamNetworkingIPAddr_GetIPv4(self);
}

static bool
js_SteamNetworkingIPAddr_GetFakeIPType(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIPAddr * self;
	uint32_t result;
	FuncPtr_X4BL4VE SteamNetworkingIPAddr_GetFakeIPType;

	SteamNetworkingIPAddr_GetFakeIPType = (FuncPtr_X4BL4VE)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIPAddr_GetFakeIPType");
	result = SteamNetworkingIPAddr_GetFakeIPType(self);
}

static bool
js_SteamNetworkingIdentity_Clear(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	FuncPtr_32WZZXM SteamNetworkingIdentity_Clear;

	SteamNetworkingIdentity_Clear = (FuncPtr_32WZZXM)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_Clear");
	SteamNetworkingIdentity_Clear(self);
}

static bool
js_SteamNetworkingIdentity_SetSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t steamID;
	FuncPtr_S0ZSJYC SteamNetworkingIdentity_SetSteamID;

	SteamNetworkingIdentity_SetSteamID = (FuncPtr_S0ZSJYC)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetSteamID");
	SteamNetworkingIdentity_SetSteamID(self, steamID);
}

static bool
js_SteamNetworkingIdentity_SetSteamID64(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t steamID;
	FuncPtr_S0ZSJYC SteamNetworkingIdentity_SetSteamID64;

	SteamNetworkingIdentity_SetSteamID64 = (FuncPtr_S0ZSJYC)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetSteamID64");
	SteamNetworkingIdentity_SetSteamID64(self, steamID);
}

static bool
js_SteamNetworkingIdentity_SetPSNID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t id;
	FuncPtr_S0ZSJYC SteamNetworkingIdentity_SetPSNID;

	SteamNetworkingIdentity_SetPSNID = (FuncPtr_S0ZSJYC)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetPSNID");
	SteamNetworkingIdentity_SetPSNID(self, id);
}

static bool
js_SteamNetworkingIdentity_SetStadiaID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t id;
	FuncPtr_S0ZSJYC SteamNetworkingIdentity_SetStadiaID;

	SteamNetworkingIdentity_SetStadiaID = (FuncPtr_S0ZSJYC)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetStadiaID");
	SteamNetworkingIdentity_SetStadiaID(self, id);
}

static bool
js_SteamNetworkingIdentity_SetIPAddr(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const SteamNetworkingIPAddr * addr;
	FuncPtr_7BXAOUI SteamNetworkingIdentity_SetIPAddr;

	SteamNetworkingIdentity_SetIPAddr = (FuncPtr_7BXAOUI)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetIPAddr");
	SteamNetworkingIdentity_SetIPAddr(self, addr);
}

static bool
js_SteamNetworkingIdentity_SetIPv4Addr(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint32_t nIPv4;
	uint16_t nPort;
	FuncPtr_CSZQX1T SteamNetworkingIdentity_SetIPv4Addr;

	SteamNetworkingIdentity_SetIPv4Addr = (FuncPtr_CSZQX1T)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetIPv4Addr");
	SteamNetworkingIdentity_SetIPv4Addr(self, nIPv4, nPort);
}

static bool
js_SteamNetworkingIdentity_SetLocalHost(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	FuncPtr_32WZZXM SteamNetworkingIdentity_SetLocalHost;

	SteamNetworkingIdentity_SetLocalHost = (FuncPtr_32WZZXM)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetLocalHost");
	SteamNetworkingIdentity_SetLocalHost(self);
}

static bool
js_SteamNetworkingIdentity_ToString(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	char * buf;
	uint32_t cbBuf;
	FuncPtr_82M0VF2 SteamNetworkingIdentity_ToString;

	SteamNetworkingIdentity_ToString = (FuncPtr_82M0VF2)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_ToString");
	SteamNetworkingIdentity_ToString(self, buf, cbBuf);
}

static bool
js_SteamNetworkingIdentity_IsInvalid(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	bool result;
	FuncPtr_I7ZB1L1 SteamNetworkingIdentity_IsInvalid;

	SteamNetworkingIdentity_IsInvalid = (FuncPtr_I7ZB1L1)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_IsInvalid");
	result = SteamNetworkingIdentity_IsInvalid(self);
}

static bool
js_SteamNetworkingIdentity_SetXboxPairwiseID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const char * pszString;
	bool result;
	FuncPtr_EDJ1ZWC SteamNetworkingIdentity_SetXboxPairwiseID;

	SteamNetworkingIdentity_SetXboxPairwiseID = (FuncPtr_EDJ1ZWC)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID");
	result = SteamNetworkingIdentity_SetXboxPairwiseID(self, pszString);
}

static bool
js_SteamNetworkingIdentity_IsFakeIP(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	bool result;
	FuncPtr_I7ZB1L1 SteamNetworkingIdentity_IsFakeIP;

	SteamNetworkingIdentity_IsFakeIP = (FuncPtr_I7ZB1L1)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_IsFakeIP");
	result = SteamNetworkingIdentity_IsFakeIP(self);
}

static bool
js_SteamNetworkingIdentity_IsLocalHost(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	bool result;
	FuncPtr_I7ZB1L1 SteamNetworkingIdentity_IsLocalHost;

	SteamNetworkingIdentity_IsLocalHost = (FuncPtr_I7ZB1L1)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_IsLocalHost");
	result = SteamNetworkingIdentity_IsLocalHost(self);
}

static bool
js_SteamNetworkingIdentity_SetGenericString(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const char * pszString;
	bool result;
	FuncPtr_EDJ1ZWC SteamNetworkingIdentity_SetGenericString;

	SteamNetworkingIdentity_SetGenericString = (FuncPtr_EDJ1ZWC)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetGenericString");
	result = SteamNetworkingIdentity_SetGenericString(self, pszString);
}

static bool
js_SteamNetworkingIdentity_SetGenericBytes(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const void * data;
	uint32_t cbLen;
	bool result;
	FuncPtr_8L6D2PT SteamNetworkingIdentity_SetGenericBytes;

	SteamNetworkingIdentity_SetGenericBytes = (FuncPtr_8L6D2PT)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_SetGenericBytes");
	result = SteamNetworkingIdentity_SetGenericBytes(self, data, cbLen);
}

static bool
js_SteamNetworkingIdentity_IsEqualTo(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const SteamNetworkingIdentity * x;
	bool result;
	FuncPtr_RCDNF2L SteamNetworkingIdentity_IsEqualTo;

	SteamNetworkingIdentity_IsEqualTo = (FuncPtr_RCDNF2L)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_IsEqualTo");
	result = SteamNetworkingIdentity_IsEqualTo(self, x);
}

static bool
js_SteamNetworkingIdentity_ParseString(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const char * pszStr;
	bool result;
	FuncPtr_EDJ1ZWC SteamNetworkingIdentity_ParseString;

	SteamNetworkingIdentity_ParseString = (FuncPtr_EDJ1ZWC)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_ParseString");
	result = SteamNetworkingIdentity_ParseString(self, pszStr);
}

static bool
js_SteamNetworkingIdentity_GetSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t result;
	FuncPtr_L4JFI1M SteamNetworkingIdentity_GetSteamID;

	SteamNetworkingIdentity_GetSteamID = (FuncPtr_L4JFI1M)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetSteamID");
	result = SteamNetworkingIdentity_GetSteamID(self);
}

static bool
js_SteamNetworkingIdentity_GetSteamID64(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t result;
	FuncPtr_L4JFI1M SteamNetworkingIdentity_GetSteamID64;

	SteamNetworkingIdentity_GetSteamID64 = (FuncPtr_L4JFI1M)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetSteamID64");
	result = SteamNetworkingIdentity_GetSteamID64(self);
}

static bool
js_SteamNetworkingIdentity_GetPSNID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t result;
	FuncPtr_L4JFI1M SteamNetworkingIdentity_GetPSNID;

	SteamNetworkingIdentity_GetPSNID = (FuncPtr_L4JFI1M)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetPSNID");
	result = SteamNetworkingIdentity_GetPSNID(self);
}

static bool
js_SteamNetworkingIdentity_GetStadiaID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint64_t result;
	FuncPtr_L4JFI1M SteamNetworkingIdentity_GetStadiaID;

	SteamNetworkingIdentity_GetStadiaID = (FuncPtr_L4JFI1M)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetStadiaID");
	result = SteamNetworkingIdentity_GetStadiaID(self);
}

static bool
js_SteamNetworkingIdentity_GetXboxPairwiseID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const char * result;
	FuncPtr_Z9U0D0C SteamNetworkingIdentity_GetXboxPairwiseID;

	SteamNetworkingIdentity_GetXboxPairwiseID = (FuncPtr_Z9U0D0C)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID");
	result = SteamNetworkingIdentity_GetXboxPairwiseID(self);
}

static bool
js_SteamNetworkingIdentity_GetGenericString(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const char * result;
	FuncPtr_Z9U0D0C SteamNetworkingIdentity_GetGenericString;

	SteamNetworkingIdentity_GetGenericString = (FuncPtr_Z9U0D0C)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetGenericString");
	result = SteamNetworkingIdentity_GetGenericString(self);
}

static bool
js_SteamNetworkingIdentity_GetIPAddr(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	const SteamNetworkingIPAddr * result;
	FuncPtr_NMNIUZU SteamNetworkingIdentity_GetIPAddr;

	SteamNetworkingIdentity_GetIPAddr = (FuncPtr_NMNIUZU)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetIPAddr");
	result = SteamNetworkingIdentity_GetIPAddr(self);
}

static bool
js_SteamNetworkingIdentity_GetIPv4(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint32_t result;
	FuncPtr_L19KYUH SteamNetworkingIdentity_GetIPv4;

	SteamNetworkingIdentity_GetIPv4 = (FuncPtr_L19KYUH)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetIPv4");
	result = SteamNetworkingIdentity_GetIPv4(self);
}

static bool
js_SteamNetworkingIdentity_GetFakeIPType(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	uint32_t result;
	FuncPtr_L19KYUH SteamNetworkingIdentity_GetFakeIPType;

	SteamNetworkingIdentity_GetFakeIPType = (FuncPtr_L19KYUH)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetFakeIPType");
	result = SteamNetworkingIdentity_GetFakeIPType(self);
}

static bool
js_SteamNetworkingIdentity_GetGenericBytes(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingIdentity * self;
	int32_t * cbLen;
	const uint8_t * result;
	FuncPtr_114RJVH SteamNetworkingIdentity_GetGenericBytes;

	SteamNetworkingIdentity_GetGenericBytes = (FuncPtr_114RJVH)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingIdentity_GetGenericBytes");
	result = SteamNetworkingIdentity_GetGenericBytes(self, cbLen);
}

static bool
js_SteamNetworkingMessage_t_Release(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingMessage_t * self;
	FuncPtr_DTDSWQM SteamNetworkingMessage_t_Release;

	SteamNetworkingMessage_t_Release = (FuncPtr_DTDSWQM)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingMessage_t_Release");
	SteamNetworkingMessage_t_Release(self);
}

static bool
js_SteamNetworkingConfigValue_t_SetInt32(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingConfigValue_t * self;
	uint32_t eVal;
	int32_t data;
	FuncPtr_N9EZRXJ SteamNetworkingConfigValue_t_SetInt32;

	SteamNetworkingConfigValue_t_SetInt32 = (FuncPtr_N9EZRXJ)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingConfigValue_t_SetInt32");
	SteamNetworkingConfigValue_t_SetInt32(self, eVal, data);
}

static bool
js_SteamNetworkingConfigValue_t_SetInt64(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingConfigValue_t * self;
	uint32_t eVal;
	int64_t data;
	FuncPtr_A1F3PIW SteamNetworkingConfigValue_t_SetInt64;

	SteamNetworkingConfigValue_t_SetInt64 = (FuncPtr_A1F3PIW)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingConfigValue_t_SetInt64");
	SteamNetworkingConfigValue_t_SetInt64(self, eVal, data);
}

static bool
js_SteamNetworkingConfigValue_t_SetFloat(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingConfigValue_t * self;
	uint32_t eVal;
	float data;
	FuncPtr_DV2OGFB SteamNetworkingConfigValue_t_SetFloat;

	SteamNetworkingConfigValue_t_SetFloat = (FuncPtr_DV2OGFB)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingConfigValue_t_SetFloat");
	SteamNetworkingConfigValue_t_SetFloat(self, eVal, data);
}

static bool
js_SteamNetworkingConfigValue_t_SetPtr(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingConfigValue_t * self;
	uint32_t eVal;
	void * data;
	FuncPtr_CX0Z57C SteamNetworkingConfigValue_t_SetPtr;

	SteamNetworkingConfigValue_t_SetPtr = (FuncPtr_CX0Z57C)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingConfigValue_t_SetPtr");
	SteamNetworkingConfigValue_t_SetPtr(self, eVal, data);
}

static bool
js_SteamNetworkingConfigValue_t_SetString(int num_args, bool is_ctor, intptr_t magic)
{
	SteamNetworkingConfigValue_t * self;
	uint32_t eVal;
	const char * data;
	FuncPtr_TJ0PL9S SteamNetworkingConfigValue_t_SetString;

	SteamNetworkingConfigValue_t_SetString = (FuncPtr_TJ0PL9S)GetProcAddress(steam_api, "SteamAPI_SteamNetworkingConfigValue_t_SetString");
	SteamNetworkingConfigValue_t_SetString(self, eVal, data);
}

static bool
js_SteamDatagramHostedAddress_Clear(int num_args, bool is_ctor, intptr_t magic)
{
	SteamDatagramHostedAddress * self;
	FuncPtr_VOUO1EV SteamDatagramHostedAddress_Clear;

	SteamDatagramHostedAddress_Clear = (FuncPtr_VOUO1EV)GetProcAddress(steam_api, "SteamAPI_SteamDatagramHostedAddress_Clear");
	SteamDatagramHostedAddress_Clear(self);
}

static bool
js_SteamDatagramHostedAddress_SetDevAddress(int num_args, bool is_ctor, intptr_t magic)
{
	SteamDatagramHostedAddress * self;
	uint32_t nIP;
	uint16_t nPort;
	uint32_t popid;
	FuncPtr_81V32H3 SteamDatagramHostedAddress_SetDevAddress;

	SteamDatagramHostedAddress_SetDevAddress = (FuncPtr_81V32H3)GetProcAddress(steam_api, "SteamAPI_SteamDatagramHostedAddress_SetDevAddress");
	SteamDatagramHostedAddress_SetDevAddress(self, nIP, nPort, popid);
}

static bool
js_SteamDatagramHostedAddress_GetPopID(int num_args, bool is_ctor, intptr_t magic)
{
	SteamDatagramHostedAddress * self;
	uint32_t result;
	FuncPtr_G6CP3S6 SteamDatagramHostedAddress_GetPopID;

	SteamDatagramHostedAddress_GetPopID = (FuncPtr_G6CP3S6)GetProcAddress(steam_api, "SteamAPI_SteamDatagramHostedAddress_GetPopID");
	result = SteamDatagramHostedAddress_GetPopID(self);
}

static bool
js_ISteamClient_CreateSteamPipe(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamClient_CreateSteamPipe;

	ISteamClient_CreateSteamPipe = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamClient_CreateSteamPipe");
	result = ISteamClient_CreateSteamPipe(self);
}

static bool
js_ISteamClient_ConnectToGlobalUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamPipe;
	int32_t result;
	FuncPtr_JCML72O ISteamClient_ConnectToGlobalUser;

	ISteamClient_ConnectToGlobalUser = (FuncPtr_JCML72O)GetProcAddress(steam_api, "SteamAPI_ISteamClient_ConnectToGlobalUser");
	result = ISteamClient_ConnectToGlobalUser(self, hSteamPipe);
}

static bool
js_ISteamClient_CreateLocalUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * phSteamPipe;
	uint32_t eAccountType;
	int32_t result;
	FuncPtr_4CSTZE3 ISteamClient_CreateLocalUser;

	ISteamClient_CreateLocalUser = (FuncPtr_4CSTZE3)GetProcAddress(steam_api, "SteamAPI_ISteamClient_CreateLocalUser");
	result = ISteamClient_CreateLocalUser(self, phSteamPipe, eAccountType);
}

static bool
js_ISteamClient_BReleaseSteamPipe(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamPipe;
	bool result;
	FuncPtr_F9K0A2G ISteamClient_BReleaseSteamPipe;

	ISteamClient_BReleaseSteamPipe = (FuncPtr_F9K0A2G)GetProcAddress(steam_api, "SteamAPI_ISteamClient_BReleaseSteamPipe");
	result = ISteamClient_BReleaseSteamPipe(self, hSteamPipe);
}

static bool
js_ISteamClient_BShutdownIfAllPipesClosed(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamClient_BShutdownIfAllPipesClosed;

	ISteamClient_BShutdownIfAllPipesClosed = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamClient_BShutdownIfAllPipesClosed");
	result = ISteamClient_BShutdownIfAllPipesClosed(self);
}

static bool
js_ISteamClient_ReleaseUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamPipe;
	int32_t hUser;
	FuncPtr_L6A2WOA ISteamClient_ReleaseUser;

	ISteamClient_ReleaseUser = (FuncPtr_L6A2WOA)GetProcAddress(steam_api, "SteamAPI_ISteamClient_ReleaseUser");
	ISteamClient_ReleaseUser(self, hSteamPipe, hUser);
}

static bool
js_ISteamClient_SetLocalIPBinding(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamIPAddress_t * unIP;
	uint16_t usPort;
	FuncPtr_M6OZT1Y ISteamClient_SetLocalIPBinding;

	ISteamClient_SetLocalIPBinding = (FuncPtr_M6OZT1Y)GetProcAddress(steam_api, "SteamAPI_ISteamClient_SetLocalIPBinding");
	ISteamClient_SetLocalIPBinding(self, unIP, usPort);
}

static bool
js_ISteamClient_GetISteamUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamUser;

	ISteamClient_GetISteamUser = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamUser");
	result = ISteamClient_GetISteamUser(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamGameServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamGameServer;

	ISteamClient_GetISteamGameServer = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamGameServer");
	result = ISteamClient_GetISteamGameServer(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamFriends(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamFriends;

	ISteamClient_GetISteamFriends = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamFriends");
	result = ISteamClient_GetISteamFriends(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamUtils(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_57N8ZDJ ISteamClient_GetISteamUtils;

	ISteamClient_GetISteamUtils = (FuncPtr_57N8ZDJ)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamUtils");
	result = ISteamClient_GetISteamUtils(self, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamMatchmaking(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamMatchmaking;

	ISteamClient_GetISteamMatchmaking = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamMatchmaking");
	result = ISteamClient_GetISteamMatchmaking(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamMatchmakingServers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamMatchmakingServers;

	ISteamClient_GetISteamMatchmakingServers = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamMatchmakingServers");
	result = ISteamClient_GetISteamMatchmakingServers(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamGenericInterface(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamGenericInterface;

	ISteamClient_GetISteamGenericInterface = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamGenericInterface");
	result = ISteamClient_GetISteamGenericInterface(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamUserStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamUserStats;

	ISteamClient_GetISteamUserStats = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamUserStats");
	result = ISteamClient_GetISteamUserStats(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamGameServerStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamGameServerStats;

	ISteamClient_GetISteamGameServerStats = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamGameServerStats");
	result = ISteamClient_GetISteamGameServerStats(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamApps(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamApps;

	ISteamClient_GetISteamApps = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamApps");
	result = ISteamClient_GetISteamApps(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamNetworking(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamNetworking;

	ISteamClient_GetISteamNetworking = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamNetworking");
	result = ISteamClient_GetISteamNetworking(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamRemoteStorage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamRemoteStorage;

	ISteamClient_GetISteamRemoteStorage = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamRemoteStorage");
	result = ISteamClient_GetISteamRemoteStorage(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamScreenshots(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamScreenshots;

	ISteamClient_GetISteamScreenshots = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamScreenshots");
	result = ISteamClient_GetISteamScreenshots(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamGameSearch(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamGameSearch;

	ISteamClient_GetISteamGameSearch = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamGameSearch");
	result = ISteamClient_GetISteamGameSearch(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamHTTP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamHTTP;

	ISteamClient_GetISteamHTTP = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamHTTP");
	result = ISteamClient_GetISteamHTTP(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamController(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamController;

	ISteamClient_GetISteamController = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamController");
	result = ISteamClient_GetISteamController(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamUGC(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamUGC;

	ISteamClient_GetISteamUGC = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamUGC");
	result = ISteamClient_GetISteamUGC(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamAppList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamAppList;

	ISteamClient_GetISteamAppList = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamAppList");
	result = ISteamClient_GetISteamAppList(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamMusic(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamMusic;

	ISteamClient_GetISteamMusic = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamMusic");
	result = ISteamClient_GetISteamMusic(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamMusicRemote(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamMusicRemote;

	ISteamClient_GetISteamMusicRemote = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamMusicRemote");
	result = ISteamClient_GetISteamMusicRemote(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamHTMLSurface(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamHTMLSurface;

	ISteamClient_GetISteamHTMLSurface = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamHTMLSurface");
	result = ISteamClient_GetISteamHTMLSurface(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamInventory(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamInventory;

	ISteamClient_GetISteamInventory = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamInventory");
	result = ISteamClient_GetISteamInventory(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamVideo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamVideo;

	ISteamClient_GetISteamVideo = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamVideo");
	result = ISteamClient_GetISteamVideo(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamParentalSettings(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamuser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamParentalSettings;

	ISteamClient_GetISteamParentalSettings = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamParentalSettings");
	result = ISteamClient_GetISteamParentalSettings(self, hSteamuser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamInput(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamInput;

	ISteamClient_GetISteamInput = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamInput");
	result = ISteamClient_GetISteamInput(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamParties(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamParties;

	ISteamClient_GetISteamParties = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamParties");
	result = ISteamClient_GetISteamParties(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetISteamRemotePlay(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hSteamUser;
	int32_t hSteamPipe;
	const char * pchVersion;
	void * result;
	FuncPtr_VG8ZBDL ISteamClient_GetISteamRemotePlay;

	ISteamClient_GetISteamRemotePlay = (FuncPtr_VG8ZBDL)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetISteamRemotePlay");
	result = ISteamClient_GetISteamRemotePlay(self, hSteamUser, hSteamPipe, pchVersion);
}

static bool
js_ISteamClient_GetIPCCallCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamClient_GetIPCCallCount;

	ISteamClient_GetIPCCallCount = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamClient_GetIPCCallCount");
	result = ISteamClient_GetIPCCallCount(self);
}

static bool
js_ISteamUser_GetHSteamUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamUser_GetHSteamUser;

	ISteamUser_GetHSteamUser = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetHSteamUser");
	result = ISteamUser_GetHSteamUser(self);
}

static bool
js_ISteamUser_InitiateGameConnection_DEPRECATED(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pAuthBlob;
	int32_t cbMaxAuthBlob;
	uint64_t steamIDGameServer;
	uint32_t unIPServer;
	uint16_t usPortServer;
	bool bSecure;
	int32_t result;
	FuncPtr_TUZBSGX ISteamUser_InitiateGameConnection_DEPRECATED;

	ISteamUser_InitiateGameConnection_DEPRECATED = (FuncPtr_TUZBSGX)GetProcAddress(steam_api, "SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED");
	result = ISteamUser_InitiateGameConnection_DEPRECATED(self, pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

static bool
js_ISteamUser_GetGameBadgeLevel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nSeries;
	bool bFoil;
	int32_t result;
	FuncPtr_6D60VCG ISteamUser_GetGameBadgeLevel;

	ISteamUser_GetGameBadgeLevel = (FuncPtr_6D60VCG)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetGameBadgeLevel");
	result = ISteamUser_GetGameBadgeLevel(self, nSeries, bFoil);
}

static bool
js_ISteamUser_GetPlayerSteamLevel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamUser_GetPlayerSteamLevel;

	ISteamUser_GetPlayerSteamLevel = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetPlayerSteamLevel");
	result = ISteamUser_GetPlayerSteamLevel(self);
}

static bool
js_ISteamUser_BLoggedOn(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUser_BLoggedOn;

	ISteamUser_BLoggedOn = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BLoggedOn");
	result = ISteamUser_BLoggedOn(self);
}

static bool
js_ISteamUser_GetUserDataFolder(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	char * pchBuffer;
	int32_t cubBuffer;
	bool result;
	FuncPtr_QDNHZ83 ISteamUser_GetUserDataFolder;

	ISteamUser_GetUserDataFolder = (FuncPtr_QDNHZ83)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetUserDataFolder");
	result = ISteamUser_GetUserDataFolder(self, pchBuffer, cubBuffer);
}

static bool
js_ISteamUser_BIsBehindNAT(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUser_BIsBehindNAT;

	ISteamUser_BIsBehindNAT = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BIsBehindNAT");
	result = ISteamUser_BIsBehindNAT(self);
}

static bool
js_ISteamUser_GetEncryptedAppTicket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pTicket;
	int32_t cbMaxTicket;
	uint32_t * pcbTicket;
	bool result;
	FuncPtr_ZXK9933 ISteamUser_GetEncryptedAppTicket;

	ISteamUser_GetEncryptedAppTicket = (FuncPtr_ZXK9933)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetEncryptedAppTicket");
	result = ISteamUser_GetEncryptedAppTicket(self, pTicket, cbMaxTicket, pcbTicket);
}

static bool
js_ISteamUser_BIsPhoneVerified(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUser_BIsPhoneVerified;

	ISteamUser_BIsPhoneVerified = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BIsPhoneVerified");
	result = ISteamUser_BIsPhoneVerified(self);
}

static bool
js_ISteamUser_BIsTwoFactorEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUser_BIsTwoFactorEnabled;

	ISteamUser_BIsTwoFactorEnabled = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BIsTwoFactorEnabled");
	result = ISteamUser_BIsTwoFactorEnabled(self);
}

static bool
js_ISteamUser_BIsPhoneIdentifying(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUser_BIsPhoneIdentifying;

	ISteamUser_BIsPhoneIdentifying = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BIsPhoneIdentifying");
	result = ISteamUser_BIsPhoneIdentifying(self);
}

static bool
js_ISteamUser_BIsPhoneRequiringVerification(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUser_BIsPhoneRequiringVerification;

	ISteamUser_BIsPhoneRequiringVerification = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BIsPhoneRequiringVerification");
	result = ISteamUser_BIsPhoneRequiringVerification(self);
}

static bool
js_ISteamUser_BSetDurationControlOnlineState(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eNewState;
	bool result;
	FuncPtr_IF8A7HP ISteamUser_BSetDurationControlOnlineState;

	ISteamUser_BSetDurationControlOnlineState = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BSetDurationControlOnlineState");
	result = ISteamUser_BSetDurationControlOnlineState(self, eNewState);
}

static bool
js_ISteamUser_GetSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamUser_GetSteamID;

	ISteamUser_GetSteamID = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetSteamID");
	result = ISteamUser_GetSteamID(self);
}

static bool
js_ISteamUser_RequestEncryptedAppTicket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pDataToInclude;
	int32_t cbDataToInclude;
	uint64_t result;
	FuncPtr_478EJJH ISteamUser_RequestEncryptedAppTicket;

	ISteamUser_RequestEncryptedAppTicket = (FuncPtr_478EJJH)GetProcAddress(steam_api, "SteamAPI_ISteamUser_RequestEncryptedAppTicket");
	result = ISteamUser_RequestEncryptedAppTicket(self, pDataToInclude, cbDataToInclude);
}

static bool
js_ISteamUser_RequestStoreAuthURL(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchRedirectURL;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamUser_RequestStoreAuthURL;

	ISteamUser_RequestStoreAuthURL = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamUser_RequestStoreAuthURL");
	result = ISteamUser_RequestStoreAuthURL(self, pchRedirectURL);
}

static bool
js_ISteamUser_GetMarketEligibility(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamUser_GetMarketEligibility;

	ISteamUser_GetMarketEligibility = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetMarketEligibility");
	result = ISteamUser_GetMarketEligibility(self);
}

static bool
js_ISteamUser_GetDurationControl(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamUser_GetDurationControl;

	ISteamUser_GetDurationControl = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetDurationControl");
	result = ISteamUser_GetDurationControl(self);
}

static bool
js_ISteamUser_TerminateGameConnection_DEPRECATED(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unIPServer;
	uint16_t usPortServer;
	FuncPtr_4GXSJ7N ISteamUser_TerminateGameConnection_DEPRECATED;

	ISteamUser_TerminateGameConnection_DEPRECATED = (FuncPtr_4GXSJ7N)GetProcAddress(steam_api, "SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED");
	ISteamUser_TerminateGameConnection_DEPRECATED(self, unIPServer, usPortServer);
}

static bool
js_ISteamUser_TrackAppUsageEvent(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t gameID;
	int32_t eAppUsageEvent;
	const char * pchExtraInfo;
	FuncPtr_NMXH8X4 ISteamUser_TrackAppUsageEvent;

	ISteamUser_TrackAppUsageEvent = (FuncPtr_NMXH8X4)GetProcAddress(steam_api, "SteamAPI_ISteamUser_TrackAppUsageEvent");
	ISteamUser_TrackAppUsageEvent(self, gameID, eAppUsageEvent, pchExtraInfo);
}

static bool
js_ISteamUser_StartVoiceRecording(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamUser_StartVoiceRecording;

	ISteamUser_StartVoiceRecording = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamUser_StartVoiceRecording");
	ISteamUser_StartVoiceRecording(self);
}

static bool
js_ISteamUser_StopVoiceRecording(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamUser_StopVoiceRecording;

	ISteamUser_StopVoiceRecording = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamUser_StopVoiceRecording");
	ISteamUser_StopVoiceRecording(self);
}

static bool
js_ISteamUser_EndAuthSession(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	FuncPtr_ULJ3EGR ISteamUser_EndAuthSession;

	ISteamUser_EndAuthSession = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamUser_EndAuthSession");
	ISteamUser_EndAuthSession(self, steamID);
}

static bool
js_ISteamUser_CancelAuthTicket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hAuthTicket;
	FuncPtr_QX4IH25 ISteamUser_CancelAuthTicket;

	ISteamUser_CancelAuthTicket = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamUser_CancelAuthTicket");
	ISteamUser_CancelAuthTicket(self, hAuthTicket);
}

static bool
js_ISteamUser_AdvertiseGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDGameServer;
	uint32_t unIPServer;
	uint16_t usPortServer;
	FuncPtr_L1OPJNR ISteamUser_AdvertiseGame;

	ISteamUser_AdvertiseGame = (FuncPtr_L1OPJNR)GetProcAddress(steam_api, "SteamAPI_ISteamUser_AdvertiseGame");
	ISteamUser_AdvertiseGame(self, steamIDGameServer, unIPServer, usPortServer);
}

static bool
js_ISteamUser_GetAvailableVoice(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * pcbCompressed;
	uint32_t * pcbUncompressed_Deprecated;
	uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated;
	uint32_t result;
	FuncPtr_DQVEA2K ISteamUser_GetAvailableVoice;

	ISteamUser_GetAvailableVoice = (FuncPtr_DQVEA2K)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetAvailableVoice");
	result = ISteamUser_GetAvailableVoice(self, pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

static bool
js_ISteamUser_GetVoice(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bWantCompressed;
	void * pDestBuffer;
	uint32_t cbDestBufferSize;
	uint32_t * nBytesWritten;
	bool bWantUncompressed_Deprecated;
	void * pUncompressedDestBuffer_Deprecated;
	uint32_t cbUncompressedDestBufferSize_Deprecated;
	uint32_t * nUncompressBytesWritten_Deprecated;
	uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated;
	uint32_t result;
	FuncPtr_WLFO4TD ISteamUser_GetVoice;

	ISteamUser_GetVoice = (FuncPtr_WLFO4TD)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetVoice");
	result = ISteamUser_GetVoice(self, bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

static bool
js_ISteamUser_DecompressVoice(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const void * pCompressed;
	uint32_t cbCompressed;
	void * pDestBuffer;
	uint32_t cbDestBufferSize;
	uint32_t * nBytesWritten;
	uint32_t nDesiredSampleRate;
	uint32_t result;
	FuncPtr_8XNOTIZ ISteamUser_DecompressVoice;

	ISteamUser_DecompressVoice = (FuncPtr_8XNOTIZ)GetProcAddress(steam_api, "SteamAPI_ISteamUser_DecompressVoice");
	result = ISteamUser_DecompressVoice(self, pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

static bool
js_ISteamUser_GetVoiceOptimalSampleRate(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUser_GetVoiceOptimalSampleRate;

	ISteamUser_GetVoiceOptimalSampleRate = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetVoiceOptimalSampleRate");
	result = ISteamUser_GetVoiceOptimalSampleRate(self);
}

static bool
js_ISteamUser_GetAuthSessionTicket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pTicket;
	int32_t cbMaxTicket;
	uint32_t * pcbTicket;
	const SteamNetworkingIdentity * pSteamNetworkingIdentity;
	uint32_t result;
	FuncPtr_E5UGQUO ISteamUser_GetAuthSessionTicket;

	ISteamUser_GetAuthSessionTicket = (FuncPtr_E5UGQUO)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetAuthSessionTicket");
	result = ISteamUser_GetAuthSessionTicket(self, pTicket, cbMaxTicket, pcbTicket, pSteamNetworkingIdentity);
}

static bool
js_ISteamUser_GetAuthTicketForWebApi(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchIdentity;
	uint32_t result;
	FuncPtr_0ZPYLOV ISteamUser_GetAuthTicketForWebApi;

	ISteamUser_GetAuthTicketForWebApi = (FuncPtr_0ZPYLOV)GetProcAddress(steam_api, "SteamAPI_ISteamUser_GetAuthTicketForWebApi");
	result = ISteamUser_GetAuthTicketForWebApi(self, pchIdentity);
}

static bool
js_ISteamUser_BeginAuthSession(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const void * pAuthTicket;
	int32_t cbAuthTicket;
	uint64_t steamID;
	uint32_t result;
	FuncPtr_YOG5NAN ISteamUser_BeginAuthSession;

	ISteamUser_BeginAuthSession = (FuncPtr_YOG5NAN)GetProcAddress(steam_api, "SteamAPI_ISteamUser_BeginAuthSession");
	result = ISteamUser_BeginAuthSession(self, pAuthTicket, cbAuthTicket, steamID);
}

static bool
js_ISteamUser_UserHasLicenseForApp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint32_t appID;
	uint32_t result;
	FuncPtr_8ZU9CZQ ISteamUser_UserHasLicenseForApp;

	ISteamUser_UserHasLicenseForApp = (FuncPtr_8ZU9CZQ)GetProcAddress(steam_api, "SteamAPI_ISteamUser_UserHasLicenseForApp");
	result = ISteamUser_UserHasLicenseForApp(self, steamID, appID);
}

static bool
js_ISteamFriends_GetPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * result;
	FuncPtr_WV1XOCC ISteamFriends_GetPersonaName;

	ISteamFriends_GetPersonaName = (FuncPtr_WV1XOCC)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetPersonaName");
	result = ISteamFriends_GetPersonaName(self);
}

static bool
js_ISteamFriends_GetFriendPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	const char * result;
	FuncPtr_CKME2CH ISteamFriends_GetFriendPersonaName;

	ISteamFriends_GetFriendPersonaName = (FuncPtr_CKME2CH)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaName");
	result = ISteamFriends_GetFriendPersonaName(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetFriendPersonaNameHistory(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t iPersonaName;
	const char * result;
	FuncPtr_JYLP2JB ISteamFriends_GetFriendPersonaNameHistory;

	ISteamFriends_GetFriendPersonaNameHistory = (FuncPtr_JYLP2JB)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaNameHistory");
	result = ISteamFriends_GetFriendPersonaNameHistory(self, steamIDFriend, iPersonaName);
}

static bool
js_ISteamFriends_GetPlayerNickname(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDPlayer;
	const char * result;
	FuncPtr_CKME2CH ISteamFriends_GetPlayerNickname;

	ISteamFriends_GetPlayerNickname = (FuncPtr_CKME2CH)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetPlayerNickname");
	result = ISteamFriends_GetPlayerNickname(self, steamIDPlayer);
}

static bool
js_ISteamFriends_GetFriendsGroupName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int16_t friendsGroupID;
	const char * result;
	FuncPtr_EIR3P2T ISteamFriends_GetFriendsGroupName;

	ISteamFriends_GetFriendsGroupName = (FuncPtr_EIR3P2T)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupName");
	result = ISteamFriends_GetFriendsGroupName(self, friendsGroupID);
}

static bool
js_ISteamFriends_GetClanName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	const char * result;
	FuncPtr_CKME2CH ISteamFriends_GetClanName;

	ISteamFriends_GetClanName = (FuncPtr_CKME2CH)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanName");
	result = ISteamFriends_GetClanName(self, steamIDClan);
}

static bool
js_ISteamFriends_GetClanTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	const char * result;
	FuncPtr_CKME2CH ISteamFriends_GetClanTag;

	ISteamFriends_GetClanTag = (FuncPtr_CKME2CH)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanTag");
	result = ISteamFriends_GetClanTag(self, steamIDClan);
}

static bool
js_ISteamFriends_GetFriendRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	const char * pchKey;
	const char * result;
	FuncPtr_BHUUHGB ISteamFriends_GetFriendRichPresence;

	ISteamFriends_GetFriendRichPresence = (FuncPtr_BHUUHGB)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresence");
	result = ISteamFriends_GetFriendRichPresence(self, steamIDFriend, pchKey);
}

static bool
js_ISteamFriends_GetFriendRichPresenceKeyByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t iKey;
	const char * result;
	FuncPtr_JYLP2JB ISteamFriends_GetFriendRichPresenceKeyByIndex;

	ISteamFriends_GetFriendRichPresenceKeyByIndex = (FuncPtr_JYLP2JB)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex");
	result = ISteamFriends_GetFriendRichPresenceKeyByIndex(self, steamIDFriend, iKey);
}

static bool
js_ISteamFriends_GetProfileItemPropertyString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint32_t itemType;
	uint32_t prop;
	const char * result;
	FuncPtr_DU8JHV5 ISteamFriends_GetProfileItemPropertyString;

	ISteamFriends_GetProfileItemPropertyString = (FuncPtr_DU8JHV5)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetProfileItemPropertyString");
	result = ISteamFriends_GetProfileItemPropertyString(self, steamID, itemType, prop);
}

static bool
js_ISteamFriends_SetPersonaName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchPersonaName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamFriends_SetPersonaName;

	ISteamFriends_SetPersonaName = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_SetPersonaName");
	result = ISteamFriends_SetPersonaName(self, pchPersonaName);
}

static bool
js_ISteamFriends_GetFriendByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iFriend;
	int32_t iFriendFlags;
	uint64_t result;
	FuncPtr_OZSNAGX ISteamFriends_GetFriendByIndex;

	ISteamFriends_GetFriendByIndex = (FuncPtr_OZSNAGX)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendByIndex");
	result = ISteamFriends_GetFriendByIndex(self, iFriend, iFriendFlags);
}

static bool
js_ISteamFriends_GetClanByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iClan;
	uint64_t result;
	FuncPtr_OK7DU08 ISteamFriends_GetClanByIndex;

	ISteamFriends_GetClanByIndex = (FuncPtr_OK7DU08)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanByIndex");
	result = ISteamFriends_GetClanByIndex(self, iClan);
}

static bool
js_ISteamFriends_DownloadClanActivityCounts(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * psteamIDClans;
	int32_t cClansToRequest;
	uint64_t result;
	FuncPtr_UG6F568 ISteamFriends_DownloadClanActivityCounts;

	ISteamFriends_DownloadClanActivityCounts = (FuncPtr_UG6F568)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_DownloadClanActivityCounts");
	result = ISteamFriends_DownloadClanActivityCounts(self, psteamIDClans, cClansToRequest);
}

static bool
js_ISteamFriends_GetFriendFromSourceByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDSource;
	int32_t iFriend;
	uint64_t result;
	FuncPtr_0B4F83P ISteamFriends_GetFriendFromSourceByIndex;

	ISteamFriends_GetFriendFromSourceByIndex = (FuncPtr_0B4F83P)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendFromSourceByIndex");
	result = ISteamFriends_GetFriendFromSourceByIndex(self, steamIDSource, iFriend);
}

static bool
js_ISteamFriends_RequestClanOfficerList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamFriends_RequestClanOfficerList;

	ISteamFriends_RequestClanOfficerList = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_RequestClanOfficerList");
	result = ISteamFriends_RequestClanOfficerList(self, steamIDClan);
}

static bool
js_ISteamFriends_GetClanOwner(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamFriends_GetClanOwner;

	ISteamFriends_GetClanOwner = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanOwner");
	result = ISteamFriends_GetClanOwner(self, steamIDClan);
}

static bool
js_ISteamFriends_GetClanOfficerByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	int32_t iOfficer;
	uint64_t result;
	FuncPtr_0B4F83P ISteamFriends_GetClanOfficerByIndex;

	ISteamFriends_GetClanOfficerByIndex = (FuncPtr_0B4F83P)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanOfficerByIndex");
	result = ISteamFriends_GetClanOfficerByIndex(self, steamIDClan, iOfficer);
}

static bool
js_ISteamFriends_GetCoplayFriend(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iCoplayFriend;
	uint64_t result;
	FuncPtr_OK7DU08 ISteamFriends_GetCoplayFriend;

	ISteamFriends_GetCoplayFriend = (FuncPtr_OK7DU08)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetCoplayFriend");
	result = ISteamFriends_GetCoplayFriend(self, iCoplayFriend);
}

static bool
js_ISteamFriends_JoinClanChatRoom(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamFriends_JoinClanChatRoom;

	ISteamFriends_JoinClanChatRoom = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_JoinClanChatRoom");
	result = ISteamFriends_JoinClanChatRoom(self, steamIDClan);
}

static bool
js_ISteamFriends_GetChatMemberByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	int32_t iUser;
	uint64_t result;
	FuncPtr_0B4F83P ISteamFriends_GetChatMemberByIndex;

	ISteamFriends_GetChatMemberByIndex = (FuncPtr_0B4F83P)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetChatMemberByIndex");
	result = ISteamFriends_GetChatMemberByIndex(self, steamIDClan, iUser);
}

static bool
js_ISteamFriends_GetFollowerCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamFriends_GetFollowerCount;

	ISteamFriends_GetFollowerCount = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFollowerCount");
	result = ISteamFriends_GetFollowerCount(self, steamID);
}

static bool
js_ISteamFriends_IsFollowing(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamFriends_IsFollowing;

	ISteamFriends_IsFollowing = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_IsFollowing");
	result = ISteamFriends_IsFollowing(self, steamID);
}

static bool
js_ISteamFriends_EnumerateFollowingList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unStartIndex;
	uint64_t result;
	FuncPtr_5IENTZ6 ISteamFriends_EnumerateFollowingList;

	ISteamFriends_EnumerateFollowingList = (FuncPtr_5IENTZ6)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_EnumerateFollowingList");
	result = ISteamFriends_EnumerateFollowingList(self, unStartIndex);
}

static bool
js_ISteamFriends_RequestEquippedProfileItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamFriends_RequestEquippedProfileItems;

	ISteamFriends_RequestEquippedProfileItems = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_RequestEquippedProfileItems");
	result = ISteamFriends_RequestEquippedProfileItems(self, steamID);
}

static bool
js_ISteamFriends_GetPersonaState(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamFriends_GetPersonaState;

	ISteamFriends_GetPersonaState = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetPersonaState");
	result = ISteamFriends_GetPersonaState(self);
}

static bool
js_ISteamFriends_GetFriendRelationship(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamFriends_GetFriendRelationship;

	ISteamFriends_GetFriendRelationship = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendRelationship");
	result = ISteamFriends_GetFriendRelationship(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetFriendPersonaState(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamFriends_GetFriendPersonaState;

	ISteamFriends_GetFriendPersonaState = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendPersonaState");
	result = ISteamFriends_GetFriendPersonaState(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetUserRestrictions(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamFriends_GetUserRestrictions;

	ISteamFriends_GetUserRestrictions = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetUserRestrictions");
	result = ISteamFriends_GetUserRestrictions(self);
}

static bool
js_ISteamFriends_GetFriendCoplayGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamFriends_GetFriendCoplayGame;

	ISteamFriends_GetFriendCoplayGame = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendCoplayGame");
	result = ISteamFriends_GetFriendCoplayGame(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetProfileItemPropertyUint(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint32_t itemType;
	uint32_t prop;
	uint32_t result;
	FuncPtr_Q3EJ25J ISteamFriends_GetProfileItemPropertyUint;

	ISteamFriends_GetProfileItemPropertyUint = (FuncPtr_Q3EJ25J)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetProfileItemPropertyUint");
	result = ISteamFriends_GetProfileItemPropertyUint(self, steamID, itemType, prop);
}

static bool
js_ISteamFriends_GetFriendCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iFriendFlags;
	int32_t result;
	FuncPtr_JCML72O ISteamFriends_GetFriendCount;

	ISteamFriends_GetFriendCount = (FuncPtr_JCML72O)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendCount");
	result = ISteamFriends_GetFriendCount(self, iFriendFlags);
}

static bool
js_ISteamFriends_GetFriendSteamLevel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetFriendSteamLevel;

	ISteamFriends_GetFriendSteamLevel = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendSteamLevel");
	result = ISteamFriends_GetFriendSteamLevel(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetFriendsGroupCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamFriends_GetFriendsGroupCount;

	ISteamFriends_GetFriendsGroupCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupCount");
	result = ISteamFriends_GetFriendsGroupCount(self);
}

static bool
js_ISteamFriends_GetFriendsGroupMembersCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int16_t friendsGroupID;
	int32_t result;
	FuncPtr_9172WHF ISteamFriends_GetFriendsGroupMembersCount;

	ISteamFriends_GetFriendsGroupMembersCount = (FuncPtr_9172WHF)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupMembersCount");
	result = ISteamFriends_GetFriendsGroupMembersCount(self, friendsGroupID);
}

static bool
js_ISteamFriends_GetClanCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamFriends_GetClanCount;

	ISteamFriends_GetClanCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanCount");
	result = ISteamFriends_GetClanCount(self);
}

static bool
js_ISteamFriends_GetFriendCountFromSource(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDSource;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetFriendCountFromSource;

	ISteamFriends_GetFriendCountFromSource = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendCountFromSource");
	result = ISteamFriends_GetFriendCountFromSource(self, steamIDSource);
}

static bool
js_ISteamFriends_GetSmallFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetSmallFriendAvatar;

	ISteamFriends_GetSmallFriendAvatar = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetSmallFriendAvatar");
	result = ISteamFriends_GetSmallFriendAvatar(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetMediumFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetMediumFriendAvatar;

	ISteamFriends_GetMediumFriendAvatar = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetMediumFriendAvatar");
	result = ISteamFriends_GetMediumFriendAvatar(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetLargeFriendAvatar(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetLargeFriendAvatar;

	ISteamFriends_GetLargeFriendAvatar = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetLargeFriendAvatar");
	result = ISteamFriends_GetLargeFriendAvatar(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetClanOfficerCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetClanOfficerCount;

	ISteamFriends_GetClanOfficerCount = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanOfficerCount");
	result = ISteamFriends_GetClanOfficerCount(self, steamIDClan);
}

static bool
js_ISteamFriends_GetFriendRichPresenceKeyCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetFriendRichPresenceKeyCount;

	ISteamFriends_GetFriendRichPresenceKeyCount = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount");
	result = ISteamFriends_GetFriendRichPresenceKeyCount(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetCoplayFriendCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamFriends_GetCoplayFriendCount;

	ISteamFriends_GetCoplayFriendCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetCoplayFriendCount");
	result = ISteamFriends_GetCoplayFriendCount(self);
}

static bool
js_ISteamFriends_GetFriendCoplayTime(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetFriendCoplayTime;

	ISteamFriends_GetFriendCoplayTime = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendCoplayTime");
	result = ISteamFriends_GetFriendCoplayTime(self, steamIDFriend);
}

static bool
js_ISteamFriends_GetClanChatMemberCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	int32_t result;
	FuncPtr_DZPOH6I ISteamFriends_GetClanChatMemberCount;

	ISteamFriends_GetClanChatMemberCount = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanChatMemberCount");
	result = ISteamFriends_GetClanChatMemberCount(self, steamIDClan);
}

static bool
js_ISteamFriends_GetClanChatMessage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClanChat;
	int32_t iMessage;
	void * prgchText;
	int32_t cchTextMax;
	uint32_t * peChatEntryType;
	uint64_t * psteamidChatter;
	int32_t result;
	FuncPtr_ZANXPGD ISteamFriends_GetClanChatMessage;

	ISteamFriends_GetClanChatMessage = (FuncPtr_ZANXPGD)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanChatMessage");
	result = ISteamFriends_GetClanChatMessage(self, steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
}

static bool
js_ISteamFriends_GetFriendMessage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t iMessageID;
	void * pvData;
	int32_t cubData;
	uint32_t * peChatEntryType;
	int32_t result;
	FuncPtr_I0VXXPS ISteamFriends_GetFriendMessage;

	ISteamFriends_GetFriendMessage = (FuncPtr_I0VXXPS)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendMessage");
	result = ISteamFriends_GetFriendMessage(self, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

static bool
js_ISteamFriends_GetNumChatsWithUnreadPriorityMessages(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamFriends_GetNumChatsWithUnreadPriorityMessages;

	ISteamFriends_GetNumChatsWithUnreadPriorityMessages = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages");
	result = ISteamFriends_GetNumChatsWithUnreadPriorityMessages(self);
}

static bool
js_ISteamFriends_GetFriendGamePlayed(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	FriendGameInfo_t * pFriendGameInfo;
	bool result;
	FuncPtr_SZKWLWA ISteamFriends_GetFriendGamePlayed;

	ISteamFriends_GetFriendGamePlayed = (FuncPtr_SZKWLWA)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendGamePlayed");
	result = ISteamFriends_GetFriendGamePlayed(self, steamIDFriend, pFriendGameInfo);
}

static bool
js_ISteamFriends_HasFriend(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	int32_t iFriendFlags;
	bool result;
	FuncPtr_TEFKFE5 ISteamFriends_HasFriend;

	ISteamFriends_HasFriend = (FuncPtr_TEFKFE5)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_HasFriend");
	result = ISteamFriends_HasFriend(self, steamIDFriend, iFriendFlags);
}

static bool
js_ISteamFriends_GetClanActivityCounts(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	int32_t * pnOnline;
	int32_t * pnInGame;
	int32_t * pnChatting;
	bool result;
	FuncPtr_0V57JQ5 ISteamFriends_GetClanActivityCounts;

	ISteamFriends_GetClanActivityCounts = (FuncPtr_0V57JQ5)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetClanActivityCounts");
	result = ISteamFriends_GetClanActivityCounts(self, steamIDClan, pnOnline, pnInGame, pnChatting);
}

static bool
js_ISteamFriends_IsUserInSource(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	uint64_t steamIDSource;
	bool result;
	FuncPtr_P2DHG90 ISteamFriends_IsUserInSource;

	ISteamFriends_IsUserInSource = (FuncPtr_P2DHG90)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_IsUserInSource");
	result = ISteamFriends_IsUserInSource(self, steamIDUser, steamIDSource);
}

static bool
js_ISteamFriends_RequestUserInformation(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	bool bRequireNameOnly;
	bool result;
	FuncPtr_LFP1UO1 ISteamFriends_RequestUserInformation;

	ISteamFriends_RequestUserInformation = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_RequestUserInformation");
	result = ISteamFriends_RequestUserInformation(self, steamIDUser, bRequireNameOnly);
}

static bool
js_ISteamFriends_SetRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchKey;
	const char * pchValue;
	bool result;
	FuncPtr_TR2AGV4 ISteamFriends_SetRichPresence;

	ISteamFriends_SetRichPresence = (FuncPtr_TR2AGV4)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_SetRichPresence");
	result = ISteamFriends_SetRichPresence(self, pchKey, pchValue);
}

static bool
js_ISteamFriends_InviteUserToGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	const char * pchConnectString;
	bool result;
	FuncPtr_46B6E53 ISteamFriends_InviteUserToGame;

	ISteamFriends_InviteUserToGame = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_InviteUserToGame");
	result = ISteamFriends_InviteUserToGame(self, steamIDFriend, pchConnectString);
}

static bool
js_ISteamFriends_LeaveClanChatRoom(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	bool result;
	FuncPtr_9MUN1QC ISteamFriends_LeaveClanChatRoom;

	ISteamFriends_LeaveClanChatRoom = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_LeaveClanChatRoom");
	result = ISteamFriends_LeaveClanChatRoom(self, steamIDClan);
}

static bool
js_ISteamFriends_SendClanChatMessage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClanChat;
	const char * pchText;
	bool result;
	FuncPtr_46B6E53 ISteamFriends_SendClanChatMessage;

	ISteamFriends_SendClanChatMessage = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_SendClanChatMessage");
	result = ISteamFriends_SendClanChatMessage(self, steamIDClanChat, pchText);
}

static bool
js_ISteamFriends_IsClanChatAdmin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClanChat;
	uint64_t steamIDUser;
	bool result;
	FuncPtr_P2DHG90 ISteamFriends_IsClanChatAdmin;

	ISteamFriends_IsClanChatAdmin = (FuncPtr_P2DHG90)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_IsClanChatAdmin");
	result = ISteamFriends_IsClanChatAdmin(self, steamIDClanChat, steamIDUser);
}

static bool
js_ISteamFriends_IsClanChatWindowOpenInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_9MUN1QC ISteamFriends_IsClanChatWindowOpenInSteam;

	ISteamFriends_IsClanChatWindowOpenInSteam = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam");
	result = ISteamFriends_IsClanChatWindowOpenInSteam(self, steamIDClanChat);
}

static bool
js_ISteamFriends_OpenClanChatWindowInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_9MUN1QC ISteamFriends_OpenClanChatWindowInSteam;

	ISteamFriends_OpenClanChatWindowInSteam = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_OpenClanChatWindowInSteam");
	result = ISteamFriends_OpenClanChatWindowInSteam(self, steamIDClanChat);
}

static bool
js_ISteamFriends_CloseClanChatWindowInSteam(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClanChat;
	bool result;
	FuncPtr_9MUN1QC ISteamFriends_CloseClanChatWindowInSteam;

	ISteamFriends_CloseClanChatWindowInSteam = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_CloseClanChatWindowInSteam");
	result = ISteamFriends_CloseClanChatWindowInSteam(self, steamIDClanChat);
}

static bool
js_ISteamFriends_SetListenForFriendsMessages(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bInterceptEnabled;
	bool result;
	FuncPtr_PXPPJ5X ISteamFriends_SetListenForFriendsMessages;

	ISteamFriends_SetListenForFriendsMessages = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_SetListenForFriendsMessages");
	result = ISteamFriends_SetListenForFriendsMessages(self, bInterceptEnabled);
}

static bool
js_ISteamFriends_ReplyToFriendMessage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	const char * pchMsgToSend;
	bool result;
	FuncPtr_46B6E53 ISteamFriends_ReplyToFriendMessage;

	ISteamFriends_ReplyToFriendMessage = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ReplyToFriendMessage");
	result = ISteamFriends_ReplyToFriendMessage(self, steamIDFriend, pchMsgToSend);
}

static bool
js_ISteamFriends_IsClanPublic(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	bool result;
	FuncPtr_9MUN1QC ISteamFriends_IsClanPublic;

	ISteamFriends_IsClanPublic = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_IsClanPublic");
	result = ISteamFriends_IsClanPublic(self, steamIDClan);
}

static bool
js_ISteamFriends_IsClanOfficialGameGroup(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	bool result;
	FuncPtr_9MUN1QC ISteamFriends_IsClanOfficialGameGroup;

	ISteamFriends_IsClanOfficialGameGroup = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_IsClanOfficialGameGroup");
	result = ISteamFriends_IsClanOfficialGameGroup(self, steamIDClan);
}

static bool
js_ISteamFriends_RegisterProtocolInOverlayBrowser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchProtocol;
	bool result;
	FuncPtr_8GBYAXY ISteamFriends_RegisterProtocolInOverlayBrowser;

	ISteamFriends_RegisterProtocolInOverlayBrowser = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser");
	result = ISteamFriends_RegisterProtocolInOverlayBrowser(self, pchProtocol);
}

static bool
js_ISteamFriends_BHasEquippedProfileItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint32_t itemType;
	bool result;
	FuncPtr_GF74AYO ISteamFriends_BHasEquippedProfileItem;

	ISteamFriends_BHasEquippedProfileItem = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_BHasEquippedProfileItem");
	result = ISteamFriends_BHasEquippedProfileItem(self, steamID, itemType);
}

static bool
js_ISteamFriends_GetFriendsGroupIDByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iFG;
	int16_t result;
	FuncPtr_QWJNJVG ISteamFriends_GetFriendsGroupIDByIndex;

	ISteamFriends_GetFriendsGroupIDByIndex = (FuncPtr_QWJNJVG)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex");
	result = ISteamFriends_GetFriendsGroupIDByIndex(self, iFG);
}

static bool
js_ISteamFriends_GetFriendsGroupMembersList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int16_t friendsGroupID;
	uint64_t * pOutSteamIDMembers;
	int32_t nMembersCount;
	FuncPtr_JNIZ00S ISteamFriends_GetFriendsGroupMembersList;

	ISteamFriends_GetFriendsGroupMembersList = (FuncPtr_JNIZ00S)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_GetFriendsGroupMembersList");
	ISteamFriends_GetFriendsGroupMembersList(self, friendsGroupID, pOutSteamIDMembers, nMembersCount);
}

static bool
js_ISteamFriends_SetInGameVoiceSpeaking(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	bool bSpeaking;
	FuncPtr_QO4KT3P ISteamFriends_SetInGameVoiceSpeaking;

	ISteamFriends_SetInGameVoiceSpeaking = (FuncPtr_QO4KT3P)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_SetInGameVoiceSpeaking");
	ISteamFriends_SetInGameVoiceSpeaking(self, steamIDUser, bSpeaking);
}

static bool
js_ISteamFriends_ActivateGameOverlay(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchDialog;
	FuncPtr_ABDKEHU ISteamFriends_ActivateGameOverlay;

	ISteamFriends_ActivateGameOverlay = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlay");
	ISteamFriends_ActivateGameOverlay(self, pchDialog);
}

static bool
js_ISteamFriends_ActivateGameOverlayToUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchDialog;
	uint64_t steamID;
	FuncPtr_V79H2AS ISteamFriends_ActivateGameOverlayToUser;

	ISteamFriends_ActivateGameOverlayToUser = (FuncPtr_V79H2AS)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToUser");
	ISteamFriends_ActivateGameOverlayToUser(self, pchDialog, steamID);
}

static bool
js_ISteamFriends_ActivateGameOverlayToWebPage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchURL;
	uint32_t eMode;
	FuncPtr_EQX7U81 ISteamFriends_ActivateGameOverlayToWebPage;

	ISteamFriends_ActivateGameOverlayToWebPage = (FuncPtr_EQX7U81)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage");
	ISteamFriends_ActivateGameOverlayToWebPage(self, pchURL, eMode);
}

static bool
js_ISteamFriends_ActivateGameOverlayToStore(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	uint32_t eFlag;
	FuncPtr_B7L2KIJ ISteamFriends_ActivateGameOverlayToStore;

	ISteamFriends_ActivateGameOverlayToStore = (FuncPtr_B7L2KIJ)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayToStore");
	ISteamFriends_ActivateGameOverlayToStore(self, nAppID, eFlag);
}

static bool
js_ISteamFriends_SetPlayedWith(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUserPlayedWith;
	FuncPtr_ULJ3EGR ISteamFriends_SetPlayedWith;

	ISteamFriends_SetPlayedWith = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_SetPlayedWith");
	ISteamFriends_SetPlayedWith(self, steamIDUserPlayedWith);
}

static bool
js_ISteamFriends_ActivateGameOverlayInviteDialog(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	FuncPtr_ULJ3EGR ISteamFriends_ActivateGameOverlayInviteDialog;

	ISteamFriends_ActivateGameOverlayInviteDialog = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog");
	ISteamFriends_ActivateGameOverlayInviteDialog(self, steamIDLobby);
}

static bool
js_ISteamFriends_ClearRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamFriends_ClearRichPresence;

	ISteamFriends_ClearRichPresence = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ClearRichPresence");
	ISteamFriends_ClearRichPresence(self);
}

static bool
js_ISteamFriends_RequestFriendRichPresence(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	FuncPtr_ULJ3EGR ISteamFriends_RequestFriendRichPresence;

	ISteamFriends_RequestFriendRichPresence = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_RequestFriendRichPresence");
	ISteamFriends_RequestFriendRichPresence(self, steamIDFriend);
}

static bool
js_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	FuncPtr_ULJ3EGR ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog;

	ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog");
	ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(self, steamIDLobby);
}

static bool
js_ISteamFriends_ActivateGameOverlayInviteDialogConnectString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchConnectString;
	FuncPtr_ABDKEHU ISteamFriends_ActivateGameOverlayInviteDialogConnectString;

	ISteamFriends_ActivateGameOverlayInviteDialogConnectString = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString");
	ISteamFriends_ActivateGameOverlayInviteDialogConnectString(self, pchConnectString);
}

static bool
js_ISteamUtils_GetSecondsSinceAppActive(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUtils_GetSecondsSinceAppActive;

	ISteamUtils_GetSecondsSinceAppActive = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetSecondsSinceAppActive");
	result = ISteamUtils_GetSecondsSinceAppActive(self);
}

static bool
js_ISteamUtils_GetSecondsSinceComputerActive(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUtils_GetSecondsSinceComputerActive;

	ISteamUtils_GetSecondsSinceComputerActive = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetSecondsSinceComputerActive");
	result = ISteamUtils_GetSecondsSinceComputerActive(self);
}

static bool
js_ISteamUtils_GetConnectedUniverse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUtils_GetConnectedUniverse;

	ISteamUtils_GetConnectedUniverse = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetConnectedUniverse");
	result = ISteamUtils_GetConnectedUniverse(self);
}

static bool
js_ISteamUtils_GetServerRealTime(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUtils_GetServerRealTime;

	ISteamUtils_GetServerRealTime = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetServerRealTime");
	result = ISteamUtils_GetServerRealTime(self);
}

static bool
js_ISteamUtils_GetAppID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUtils_GetAppID;

	ISteamUtils_GetAppID = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetAppID");
	result = ISteamUtils_GetAppID(self);
}

static bool
js_ISteamUtils_GetAPICallFailureReason(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamAPICall;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamUtils_GetAPICallFailureReason;

	ISteamUtils_GetAPICallFailureReason = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetAPICallFailureReason");
	result = ISteamUtils_GetAPICallFailureReason(self, hSteamAPICall);
}

static bool
js_ISteamUtils_GetIPCCallCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUtils_GetIPCCallCount;

	ISteamUtils_GetIPCCallCount = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetIPCCallCount");
	result = ISteamUtils_GetIPCCallCount(self);
}

static bool
js_ISteamUtils_GetEnteredGamepadTextLength(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUtils_GetEnteredGamepadTextLength;

	ISteamUtils_GetEnteredGamepadTextLength = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetEnteredGamepadTextLength");
	result = ISteamUtils_GetEnteredGamepadTextLength(self);
}

static bool
js_ISteamUtils_GetIPv6ConnectivityState(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eProtocol;
	uint32_t result;
	FuncPtr_9UOQ486 ISteamUtils_GetIPv6ConnectivityState;

	ISteamUtils_GetIPv6ConnectivityState = (FuncPtr_9UOQ486)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetIPv6ConnectivityState");
	result = ISteamUtils_GetIPv6ConnectivityState(self, eProtocol);
}

static bool
js_ISteamUtils_GetIPCountry(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * result;
	FuncPtr_WV1XOCC ISteamUtils_GetIPCountry;

	ISteamUtils_GetIPCountry = (FuncPtr_WV1XOCC)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetIPCountry");
	result = ISteamUtils_GetIPCountry(self);
}

static bool
js_ISteamUtils_GetSteamUILanguage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * result;
	FuncPtr_WV1XOCC ISteamUtils_GetSteamUILanguage;

	ISteamUtils_GetSteamUILanguage = (FuncPtr_WV1XOCC)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetSteamUILanguage");
	result = ISteamUtils_GetSteamUILanguage(self);
}

static bool
js_ISteamUtils_GetImageSize(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iImage;
	uint32_t * pnWidth;
	uint32_t * pnHeight;
	bool result;
	FuncPtr_XSOTH5E ISteamUtils_GetImageSize;

	ISteamUtils_GetImageSize = (FuncPtr_XSOTH5E)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetImageSize");
	result = ISteamUtils_GetImageSize(self, iImage, pnWidth, pnHeight);
}

static bool
js_ISteamUtils_GetImageRGBA(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iImage;
	uint8_t * pubDest;
	int32_t nDestBufferSize;
	bool result;
	FuncPtr_8KMJI7V ISteamUtils_GetImageRGBA;

	ISteamUtils_GetImageRGBA = (FuncPtr_8KMJI7V)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetImageRGBA");
	result = ISteamUtils_GetImageRGBA(self, iImage, pubDest, nDestBufferSize);
}

static bool
js_ISteamUtils_IsAPICallCompleted(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamAPICall;
	bool * pbFailed;
	bool result;
	FuncPtr_HJLGS9A ISteamUtils_IsAPICallCompleted;

	ISteamUtils_IsAPICallCompleted = (FuncPtr_HJLGS9A)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_IsAPICallCompleted");
	result = ISteamUtils_IsAPICallCompleted(self, hSteamAPICall, pbFailed);
}

static bool
js_ISteamUtils_GetAPICallResult(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamAPICall;
	void * pCallback;
	int32_t cubCallback;
	int32_t iCallbackExpected;
	bool * pbFailed;
	bool result;
	FuncPtr_05PYSS3 ISteamUtils_GetAPICallResult;

	ISteamUtils_GetAPICallResult = (FuncPtr_05PYSS3)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetAPICallResult");
	result = ISteamUtils_GetAPICallResult(self, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

static bool
js_ISteamUtils_IsOverlayEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_IsOverlayEnabled;

	ISteamUtils_IsOverlayEnabled = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_IsOverlayEnabled");
	result = ISteamUtils_IsOverlayEnabled(self);
}

static bool
js_ISteamUtils_BOverlayNeedsPresent(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_BOverlayNeedsPresent;

	ISteamUtils_BOverlayNeedsPresent = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_BOverlayNeedsPresent");
	result = ISteamUtils_BOverlayNeedsPresent(self);
}

static bool
js_ISteamUtils_ShowGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eInputMode;
	uint32_t eLineInputMode;
	const char * pchDescription;
	uint32_t unCharMax;
	const char * pchExistingText;
	bool result;
	FuncPtr_SCSUM0J ISteamUtils_ShowGamepadTextInput;

	ISteamUtils_ShowGamepadTextInput = (FuncPtr_SCSUM0J)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_ShowGamepadTextInput");
	result = ISteamUtils_ShowGamepadTextInput(self, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
}

static bool
js_ISteamUtils_GetEnteredGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	char * pchText;
	uint32_t cchText;
	bool result;
	FuncPtr_WEH28SE ISteamUtils_GetEnteredGamepadTextInput;

	ISteamUtils_GetEnteredGamepadTextInput = (FuncPtr_WEH28SE)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetEnteredGamepadTextInput");
	result = ISteamUtils_GetEnteredGamepadTextInput(self, pchText, cchText);
}

static bool
js_ISteamUtils_IsSteamRunningInVR(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_IsSteamRunningInVR;

	ISteamUtils_IsSteamRunningInVR = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_IsSteamRunningInVR");
	result = ISteamUtils_IsSteamRunningInVR(self);
}

static bool
js_ISteamUtils_IsSteamInBigPictureMode(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_IsSteamInBigPictureMode;

	ISteamUtils_IsSteamInBigPictureMode = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_IsSteamInBigPictureMode");
	result = ISteamUtils_IsSteamInBigPictureMode(self);
}

static bool
js_ISteamUtils_IsVRHeadsetStreamingEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_IsVRHeadsetStreamingEnabled;

	ISteamUtils_IsVRHeadsetStreamingEnabled = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled");
	result = ISteamUtils_IsVRHeadsetStreamingEnabled(self);
}

static bool
js_ISteamUtils_IsSteamChinaLauncher(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_IsSteamChinaLauncher;

	ISteamUtils_IsSteamChinaLauncher = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_IsSteamChinaLauncher");
	result = ISteamUtils_IsSteamChinaLauncher(self);
}

static bool
js_ISteamUtils_InitFilterText(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unFilterOptions;
	bool result;
	FuncPtr_IF8A7HP ISteamUtils_InitFilterText;

	ISteamUtils_InitFilterText = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_InitFilterText");
	result = ISteamUtils_InitFilterText(self, unFilterOptions);
}

static bool
js_ISteamUtils_IsSteamRunningOnSteamDeck(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_IsSteamRunningOnSteamDeck;

	ISteamUtils_IsSteamRunningOnSteamDeck = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck");
	result = ISteamUtils_IsSteamRunningOnSteamDeck(self);
}

static bool
js_ISteamUtils_ShowFloatingGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eKeyboardMode;
	int32_t nTextFieldXPosition;
	int32_t nTextFieldYPosition;
	int32_t nTextFieldWidth;
	int32_t nTextFieldHeight;
	bool result;
	FuncPtr_JLTAT7V ISteamUtils_ShowFloatingGamepadTextInput;

	ISteamUtils_ShowFloatingGamepadTextInput = (FuncPtr_JLTAT7V)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput");
	result = ISteamUtils_ShowFloatingGamepadTextInput(self, eKeyboardMode, nTextFieldXPosition, nTextFieldYPosition, nTextFieldWidth, nTextFieldHeight);
}

static bool
js_ISteamUtils_DismissFloatingGamepadTextInput(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUtils_DismissFloatingGamepadTextInput;

	ISteamUtils_DismissFloatingGamepadTextInput = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput");
	result = ISteamUtils_DismissFloatingGamepadTextInput(self);
}

static bool
js_ISteamUtils_GetCurrentBatteryPower(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint8_t result;
	FuncPtr_N4Y7JGJ ISteamUtils_GetCurrentBatteryPower;

	ISteamUtils_GetCurrentBatteryPower = (FuncPtr_N4Y7JGJ)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_GetCurrentBatteryPower");
	result = ISteamUtils_GetCurrentBatteryPower(self);
}

static bool
js_ISteamUtils_SetOverlayNotificationPosition(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eNotificationPosition;
	FuncPtr_QX4IH25 ISteamUtils_SetOverlayNotificationPosition;

	ISteamUtils_SetOverlayNotificationPosition = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_SetOverlayNotificationPosition");
	ISteamUtils_SetOverlayNotificationPosition(self, eNotificationPosition);
}

static bool
js_ISteamUtils_SetOverlayNotificationInset(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nHorizontalInset;
	int32_t nVerticalInset;
	FuncPtr_L6A2WOA ISteamUtils_SetOverlayNotificationInset;

	ISteamUtils_SetOverlayNotificationInset = (FuncPtr_L6A2WOA)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_SetOverlayNotificationInset");
	ISteamUtils_SetOverlayNotificationInset(self, nHorizontalInset, nVerticalInset);
}

static bool
js_ISteamUtils_StartVRDashboard(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamUtils_StartVRDashboard;

	ISteamUtils_StartVRDashboard = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_StartVRDashboard");
	ISteamUtils_StartVRDashboard(self);
}

static bool
js_ISteamUtils_SetVRHeadsetStreamingEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bEnabled;
	FuncPtr_Z2CYP0L ISteamUtils_SetVRHeadsetStreamingEnabled;

	ISteamUtils_SetVRHeadsetStreamingEnabled = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled");
	ISteamUtils_SetVRHeadsetStreamingEnabled(self, bEnabled);
}

static bool
js_ISteamUtils_SetGameLauncherMode(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bLauncherMode;
	FuncPtr_Z2CYP0L ISteamUtils_SetGameLauncherMode;

	ISteamUtils_SetGameLauncherMode = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_SetGameLauncherMode");
	ISteamUtils_SetGameLauncherMode(self, bLauncherMode);
}

static bool
js_ISteamUtils_CheckFileSignature(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * szFileName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamUtils_CheckFileSignature;

	ISteamUtils_CheckFileSignature = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_CheckFileSignature");
	result = ISteamUtils_CheckFileSignature(self, szFileName);
}

static bool
js_ISteamUtils_FilterText(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eContext;
	uint64_t sourceSteamID;
	const char * pchInputMessage;
	char * pchOutFilteredText;
	uint32_t nByteSizeOutFilteredText;
	int32_t result;
	FuncPtr_QNX0ZTX ISteamUtils_FilterText;

	ISteamUtils_FilterText = (FuncPtr_QNX0ZTX)GetProcAddress(steam_api, "SteamAPI_ISteamUtils_FilterText");
	result = ISteamUtils_FilterText(self, eContext, sourceSteamID, pchInputMessage, pchOutFilteredText, nByteSizeOutFilteredText);
}

static bool
js_ISteamMatchmaking_GetFavoriteGameCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamMatchmaking_GetFavoriteGameCount;

	ISteamMatchmaking_GetFavoriteGameCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetFavoriteGameCount");
	result = ISteamMatchmaking_GetFavoriteGameCount(self);
}

static bool
js_ISteamMatchmaking_AddFavoriteGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	uint32_t nIP;
	uint16_t nConnPort;
	uint16_t nQueryPort;
	uint32_t unFlags;
	uint32_t rTime32LastPlayedOnServer;
	int32_t result;
	FuncPtr_2C6IBJY ISteamMatchmaking_AddFavoriteGame;

	ISteamMatchmaking_AddFavoriteGame = (FuncPtr_2C6IBJY)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddFavoriteGame");
	result = ISteamMatchmaking_AddFavoriteGame(self, nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

static bool
js_ISteamMatchmaking_GetNumLobbyMembers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t result;
	FuncPtr_DZPOH6I ISteamMatchmaking_GetNumLobbyMembers;

	ISteamMatchmaking_GetNumLobbyMembers = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetNumLobbyMembers");
	result = ISteamMatchmaking_GetNumLobbyMembers(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_GetLobbyDataCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t result;
	FuncPtr_DZPOH6I ISteamMatchmaking_GetLobbyDataCount;

	ISteamMatchmaking_GetLobbyDataCount = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyDataCount");
	result = ISteamMatchmaking_GetLobbyDataCount(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_GetLobbyChatEntry(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t iChatID;
	uint64_t * pSteamIDUser;
	void * pvData;
	int32_t cubData;
	uint32_t * peChatEntryType;
	int32_t result;
	FuncPtr_UK3K6YH ISteamMatchmaking_GetLobbyChatEntry;

	ISteamMatchmaking_GetLobbyChatEntry = (FuncPtr_UK3K6YH)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyChatEntry");
	result = ISteamMatchmaking_GetLobbyChatEntry(self, steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

static bool
js_ISteamMatchmaking_GetLobbyMemberLimit(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t result;
	FuncPtr_DZPOH6I ISteamMatchmaking_GetLobbyMemberLimit;

	ISteamMatchmaking_GetLobbyMemberLimit = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit");
	result = ISteamMatchmaking_GetLobbyMemberLimit(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_GetFavoriteGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iGame;
	uint32_t * pnAppID;
	uint32_t * pnIP;
	uint16_t * pnConnPort;
	uint16_t * pnQueryPort;
	uint32_t * punFlags;
	uint32_t * pRTime32LastPlayedOnServer;
	bool result;
	FuncPtr_B49AHYY ISteamMatchmaking_GetFavoriteGame;

	ISteamMatchmaking_GetFavoriteGame = (FuncPtr_B49AHYY)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetFavoriteGame");
	result = ISteamMatchmaking_GetFavoriteGame(self, iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

static bool
js_ISteamMatchmaking_RemoveFavoriteGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	uint32_t nIP;
	uint16_t nConnPort;
	uint16_t nQueryPort;
	uint32_t unFlags;
	bool result;
	FuncPtr_58EQBN6 ISteamMatchmaking_RemoveFavoriteGame;

	ISteamMatchmaking_RemoveFavoriteGame = (FuncPtr_58EQBN6)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_RemoveFavoriteGame");
	result = ISteamMatchmaking_RemoveFavoriteGame(self, nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

static bool
js_ISteamMatchmaking_InviteUserToLobby(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint64_t steamIDInvitee;
	bool result;
	FuncPtr_P2DHG90 ISteamMatchmaking_InviteUserToLobby;

	ISteamMatchmaking_InviteUserToLobby = (FuncPtr_P2DHG90)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_InviteUserToLobby");
	result = ISteamMatchmaking_InviteUserToLobby(self, steamIDLobby, steamIDInvitee);
}

static bool
js_ISteamMatchmaking_SetLobbyData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	const char * pchKey;
	const char * pchValue;
	bool result;
	FuncPtr_RSFEOV3 ISteamMatchmaking_SetLobbyData;

	ISteamMatchmaking_SetLobbyData = (FuncPtr_RSFEOV3)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLobbyData");
	result = ISteamMatchmaking_SetLobbyData(self, steamIDLobby, pchKey, pchValue);
}

static bool
js_ISteamMatchmaking_GetLobbyDataByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t iLobbyData;
	char * pchKey;
	int32_t cchKeyBufferSize;
	char * pchValue;
	int32_t cchValueBufferSize;
	bool result;
	FuncPtr_AVWHL3U ISteamMatchmaking_GetLobbyDataByIndex;

	ISteamMatchmaking_GetLobbyDataByIndex = (FuncPtr_AVWHL3U)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex");
	result = ISteamMatchmaking_GetLobbyDataByIndex(self, steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

static bool
js_ISteamMatchmaking_DeleteLobbyData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	const char * pchKey;
	bool result;
	FuncPtr_46B6E53 ISteamMatchmaking_DeleteLobbyData;

	ISteamMatchmaking_DeleteLobbyData = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_DeleteLobbyData");
	result = ISteamMatchmaking_DeleteLobbyData(self, steamIDLobby, pchKey);
}

static bool
js_ISteamMatchmaking_SendLobbyChatMsg(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	const void * pvMsgBody;
	int32_t cubMsgBody;
	bool result;
	FuncPtr_QD0GYK0 ISteamMatchmaking_SendLobbyChatMsg;

	ISteamMatchmaking_SendLobbyChatMsg = (FuncPtr_QD0GYK0)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SendLobbyChatMsg");
	result = ISteamMatchmaking_SendLobbyChatMsg(self, steamIDLobby, pvMsgBody, cubMsgBody);
}

static bool
js_ISteamMatchmaking_RequestLobbyData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	bool result;
	FuncPtr_9MUN1QC ISteamMatchmaking_RequestLobbyData;

	ISteamMatchmaking_RequestLobbyData = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_RequestLobbyData");
	result = ISteamMatchmaking_RequestLobbyData(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_GetLobbyGameServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint32_t * punGameServerIP;
	uint16_t * punGameServerPort;
	uint64_t * psteamIDGameServer;
	bool result;
	FuncPtr_BZV0YK2 ISteamMatchmaking_GetLobbyGameServer;

	ISteamMatchmaking_GetLobbyGameServer = (FuncPtr_BZV0YK2)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyGameServer");
	result = ISteamMatchmaking_GetLobbyGameServer(self, steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

static bool
js_ISteamMatchmaking_SetLobbyMemberLimit(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t cMaxMembers;
	bool result;
	FuncPtr_TEFKFE5 ISteamMatchmaking_SetLobbyMemberLimit;

	ISteamMatchmaking_SetLobbyMemberLimit = (FuncPtr_TEFKFE5)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit");
	result = ISteamMatchmaking_SetLobbyMemberLimit(self, steamIDLobby, cMaxMembers);
}

static bool
js_ISteamMatchmaking_SetLobbyType(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint32_t eLobbyType;
	bool result;
	FuncPtr_GF74AYO ISteamMatchmaking_SetLobbyType;

	ISteamMatchmaking_SetLobbyType = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLobbyType");
	result = ISteamMatchmaking_SetLobbyType(self, steamIDLobby, eLobbyType);
}

static bool
js_ISteamMatchmaking_SetLobbyJoinable(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	bool bLobbyJoinable;
	bool result;
	FuncPtr_LFP1UO1 ISteamMatchmaking_SetLobbyJoinable;

	ISteamMatchmaking_SetLobbyJoinable = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLobbyJoinable");
	result = ISteamMatchmaking_SetLobbyJoinable(self, steamIDLobby, bLobbyJoinable);
}

static bool
js_ISteamMatchmaking_SetLobbyOwner(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint64_t steamIDNewOwner;
	bool result;
	FuncPtr_P2DHG90 ISteamMatchmaking_SetLobbyOwner;

	ISteamMatchmaking_SetLobbyOwner = (FuncPtr_P2DHG90)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLobbyOwner");
	result = ISteamMatchmaking_SetLobbyOwner(self, steamIDLobby, steamIDNewOwner);
}

static bool
js_ISteamMatchmaking_SetLinkedLobby(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint64_t steamIDLobbyDependent;
	bool result;
	FuncPtr_P2DHG90 ISteamMatchmaking_SetLinkedLobby;

	ISteamMatchmaking_SetLinkedLobby = (FuncPtr_P2DHG90)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLinkedLobby");
	result = ISteamMatchmaking_SetLinkedLobby(self, steamIDLobby, steamIDLobbyDependent);
}

static bool
js_ISteamMatchmaking_RequestLobbyList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamMatchmaking_RequestLobbyList;

	ISteamMatchmaking_RequestLobbyList = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_RequestLobbyList");
	result = ISteamMatchmaking_RequestLobbyList(self);
}

static bool
js_ISteamMatchmaking_GetLobbyByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iLobby;
	uint64_t result;
	FuncPtr_OK7DU08 ISteamMatchmaking_GetLobbyByIndex;

	ISteamMatchmaking_GetLobbyByIndex = (FuncPtr_OK7DU08)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyByIndex");
	result = ISteamMatchmaking_GetLobbyByIndex(self, iLobby);
}

static bool
js_ISteamMatchmaking_CreateLobby(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eLobbyType;
	int32_t cMaxMembers;
	uint64_t result;
	FuncPtr_MMU54ZK ISteamMatchmaking_CreateLobby;

	ISteamMatchmaking_CreateLobby = (FuncPtr_MMU54ZK)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_CreateLobby");
	result = ISteamMatchmaking_CreateLobby(self, eLobbyType, cMaxMembers);
}

static bool
js_ISteamMatchmaking_JoinLobby(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamMatchmaking_JoinLobby;

	ISteamMatchmaking_JoinLobby = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_JoinLobby");
	result = ISteamMatchmaking_JoinLobby(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_GetLobbyMemberByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t iMember;
	uint64_t result;
	FuncPtr_0B4F83P ISteamMatchmaking_GetLobbyMemberByIndex;

	ISteamMatchmaking_GetLobbyMemberByIndex = (FuncPtr_0B4F83P)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex");
	result = ISteamMatchmaking_GetLobbyMemberByIndex(self, steamIDLobby, iMember);
}

static bool
js_ISteamMatchmaking_GetLobbyOwner(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamMatchmaking_GetLobbyOwner;

	ISteamMatchmaking_GetLobbyOwner = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyOwner");
	result = ISteamMatchmaking_GetLobbyOwner(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_AddRequestLobbyListStringFilter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchKeyToMatch;
	const char * pchValueToMatch;
	uint32_t eComparisonType;
	FuncPtr_WNRXG5H ISteamMatchmaking_AddRequestLobbyListStringFilter;

	ISteamMatchmaking_AddRequestLobbyListStringFilter = (FuncPtr_WNRXG5H)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter");
	ISteamMatchmaking_AddRequestLobbyListStringFilter(self, pchKeyToMatch, pchValueToMatch, eComparisonType);
}

static bool
js_ISteamMatchmaking_AddRequestLobbyListNumericalFilter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchKeyToMatch;
	int32_t nValueToMatch;
	uint32_t eComparisonType;
	FuncPtr_LHPFCFO ISteamMatchmaking_AddRequestLobbyListNumericalFilter;

	ISteamMatchmaking_AddRequestLobbyListNumericalFilter = (FuncPtr_LHPFCFO)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter");
	ISteamMatchmaking_AddRequestLobbyListNumericalFilter(self, pchKeyToMatch, nValueToMatch, eComparisonType);
}

static bool
js_ISteamMatchmaking_AddRequestLobbyListNearValueFilter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchKeyToMatch;
	int32_t nValueToBeCloseTo;
	FuncPtr_7LRXUW3 ISteamMatchmaking_AddRequestLobbyListNearValueFilter;

	ISteamMatchmaking_AddRequestLobbyListNearValueFilter = (FuncPtr_7LRXUW3)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter");
	ISteamMatchmaking_AddRequestLobbyListNearValueFilter(self, pchKeyToMatch, nValueToBeCloseTo);
}

static bool
js_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nSlotsAvailable;
	FuncPtr_WX01A0G ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable;

	ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable = (FuncPtr_WX01A0G)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable");
	ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(self, nSlotsAvailable);
}

static bool
js_ISteamMatchmaking_AddRequestLobbyListDistanceFilter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eLobbyDistanceFilter;
	FuncPtr_QX4IH25 ISteamMatchmaking_AddRequestLobbyListDistanceFilter;

	ISteamMatchmaking_AddRequestLobbyListDistanceFilter = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter");
	ISteamMatchmaking_AddRequestLobbyListDistanceFilter(self, eLobbyDistanceFilter);
}

static bool
js_ISteamMatchmaking_AddRequestLobbyListResultCountFilter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t cMaxResults;
	FuncPtr_WX01A0G ISteamMatchmaking_AddRequestLobbyListResultCountFilter;

	ISteamMatchmaking_AddRequestLobbyListResultCountFilter = (FuncPtr_WX01A0G)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter");
	ISteamMatchmaking_AddRequestLobbyListResultCountFilter(self, cMaxResults);
}

static bool
js_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	FuncPtr_ULJ3EGR ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter;

	ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter");
	ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_LeaveLobby(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	FuncPtr_ULJ3EGR ISteamMatchmaking_LeaveLobby;

	ISteamMatchmaking_LeaveLobby = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_LeaveLobby");
	ISteamMatchmaking_LeaveLobby(self, steamIDLobby);
}

static bool
js_ISteamMatchmaking_SetLobbyMemberData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	const char * pchKey;
	const char * pchValue;
	FuncPtr_9FHG65D ISteamMatchmaking_SetLobbyMemberData;

	ISteamMatchmaking_SetLobbyMemberData = (FuncPtr_9FHG65D)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLobbyMemberData");
	ISteamMatchmaking_SetLobbyMemberData(self, steamIDLobby, pchKey, pchValue);
}

static bool
js_ISteamMatchmaking_SetLobbyGameServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint32_t unGameServerIP;
	uint16_t unGameServerPort;
	uint64_t steamIDGameServer;
	FuncPtr_KXY6QAH ISteamMatchmaking_SetLobbyGameServer;

	ISteamMatchmaking_SetLobbyGameServer = (FuncPtr_KXY6QAH)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_SetLobbyGameServer");
	ISteamMatchmaking_SetLobbyGameServer(self, steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

static bool
js_ISteamMatchmaking_GetLobbyData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	const char * pchKey;
	const char * result;
	FuncPtr_BHUUHGB ISteamMatchmaking_GetLobbyData;

	ISteamMatchmaking_GetLobbyData = (FuncPtr_BHUUHGB)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyData");
	result = ISteamMatchmaking_GetLobbyData(self, steamIDLobby, pchKey);
}

static bool
js_ISteamMatchmaking_GetLobbyMemberData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	uint64_t steamIDUser;
	const char * pchKey;
	const char * result;
	FuncPtr_F9IT8YO ISteamMatchmaking_GetLobbyMemberData;

	ISteamMatchmaking_GetLobbyMemberData = (FuncPtr_F9IT8YO)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmaking_GetLobbyMemberData");
	result = ISteamMatchmaking_GetLobbyMemberData(self, steamIDLobby, steamIDUser, pchKey);
}

static bool
js_ISteamMatchmakingServerListResponse_ServerResponded(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	int32_t iServer;
	FuncPtr_2JGFIGM ISteamMatchmakingServerListResponse_ServerResponded;

	ISteamMatchmakingServerListResponse_ServerResponded = (FuncPtr_2JGFIGM)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded");
	ISteamMatchmakingServerListResponse_ServerResponded(self, hRequest, iServer);
}

static bool
js_ISteamMatchmakingServerListResponse_ServerFailedToRespond(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	int32_t iServer;
	FuncPtr_2JGFIGM ISteamMatchmakingServerListResponse_ServerFailedToRespond;

	ISteamMatchmakingServerListResponse_ServerFailedToRespond = (FuncPtr_2JGFIGM)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond");
	ISteamMatchmakingServerListResponse_ServerFailedToRespond(self, hRequest, iServer);
}

static bool
js_ISteamMatchmakingServerListResponse_RefreshComplete(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	uint32_t response;
	FuncPtr_3YU7H78 ISteamMatchmakingServerListResponse_RefreshComplete;

	ISteamMatchmakingServerListResponse_RefreshComplete = (FuncPtr_3YU7H78)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete");
	ISteamMatchmakingServerListResponse_RefreshComplete(self, hRequest, response);
}

static bool
js_ISteamMatchmakingPingResponse_ServerResponded(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	gameserveritem_t * server;
	FuncPtr_PG6R7VU ISteamMatchmakingPingResponse_ServerResponded;

	ISteamMatchmakingPingResponse_ServerResponded = (FuncPtr_PG6R7VU)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingPingResponse_ServerResponded");
	ISteamMatchmakingPingResponse_ServerResponded(self, server);
}

static bool
js_ISteamMatchmakingPingResponse_ServerFailedToRespond(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMatchmakingPingResponse_ServerFailedToRespond;

	ISteamMatchmakingPingResponse_ServerFailedToRespond = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond");
	ISteamMatchmakingPingResponse_ServerFailedToRespond(self);
}

static bool
js_ISteamMatchmakingPlayersResponse_AddPlayerToList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	int32_t nScore;
	float flTimePlayed;
	FuncPtr_6WPZBUM ISteamMatchmakingPlayersResponse_AddPlayerToList;

	ISteamMatchmakingPlayersResponse_AddPlayerToList = (FuncPtr_6WPZBUM)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList");
	ISteamMatchmakingPlayersResponse_AddPlayerToList(self, pchName, nScore, flTimePlayed);
}

static bool
js_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMatchmakingPlayersResponse_PlayersFailedToRespond;

	ISteamMatchmakingPlayersResponse_PlayersFailedToRespond = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond");
	ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(self);
}

static bool
js_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMatchmakingPlayersResponse_PlayersRefreshComplete;

	ISteamMatchmakingPlayersResponse_PlayersRefreshComplete = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete");
	ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(self);
}

static bool
js_ISteamMatchmakingRulesResponse_RulesResponded(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchRule;
	const char * pchValue;
	FuncPtr_F7P7QW2 ISteamMatchmakingRulesResponse_RulesResponded;

	ISteamMatchmakingRulesResponse_RulesResponded = (FuncPtr_F7P7QW2)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded");
	ISteamMatchmakingRulesResponse_RulesResponded(self, pchRule, pchValue);
}

static bool
js_ISteamMatchmakingRulesResponse_RulesFailedToRespond(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMatchmakingRulesResponse_RulesFailedToRespond;

	ISteamMatchmakingRulesResponse_RulesFailedToRespond = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond");
	ISteamMatchmakingRulesResponse_RulesFailedToRespond(self);
}

static bool
js_ISteamMatchmakingRulesResponse_RulesRefreshComplete(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMatchmakingRulesResponse_RulesRefreshComplete;

	ISteamMatchmakingRulesResponse_RulesRefreshComplete = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete");
	ISteamMatchmakingRulesResponse_RulesRefreshComplete(self);
}

static bool
js_ISteamMatchmakingServers_RequestInternetServerList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t iApp;
	MatchMakingKeyValuePair_t ** ppchFilters;
	uint32_t nFilters;
	void * pRequestServersResponse;
	void * result;
	FuncPtr_5ZRT57X ISteamMatchmakingServers_RequestInternetServerList;

	ISteamMatchmakingServers_RequestInternetServerList = (FuncPtr_5ZRT57X)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RequestInternetServerList");
	result = ISteamMatchmakingServers_RequestInternetServerList(self, iApp, ppchFilters, nFilters, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_RequestLANServerList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t iApp;
	void * pRequestServersResponse;
	void * result;
	FuncPtr_8OKTGWY ISteamMatchmakingServers_RequestLANServerList;

	ISteamMatchmakingServers_RequestLANServerList = (FuncPtr_8OKTGWY)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RequestLANServerList");
	result = ISteamMatchmakingServers_RequestLANServerList(self, iApp, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_RequestFriendsServerList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t iApp;
	MatchMakingKeyValuePair_t ** ppchFilters;
	uint32_t nFilters;
	void * pRequestServersResponse;
	void * result;
	FuncPtr_5ZRT57X ISteamMatchmakingServers_RequestFriendsServerList;

	ISteamMatchmakingServers_RequestFriendsServerList = (FuncPtr_5ZRT57X)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList");
	result = ISteamMatchmakingServers_RequestFriendsServerList(self, iApp, ppchFilters, nFilters, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_RequestFavoritesServerList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t iApp;
	MatchMakingKeyValuePair_t ** ppchFilters;
	uint32_t nFilters;
	void * pRequestServersResponse;
	void * result;
	FuncPtr_5ZRT57X ISteamMatchmakingServers_RequestFavoritesServerList;

	ISteamMatchmakingServers_RequestFavoritesServerList = (FuncPtr_5ZRT57X)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList");
	result = ISteamMatchmakingServers_RequestFavoritesServerList(self, iApp, ppchFilters, nFilters, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_RequestHistoryServerList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t iApp;
	MatchMakingKeyValuePair_t ** ppchFilters;
	uint32_t nFilters;
	void * pRequestServersResponse;
	void * result;
	FuncPtr_5ZRT57X ISteamMatchmakingServers_RequestHistoryServerList;

	ISteamMatchmakingServers_RequestHistoryServerList = (FuncPtr_5ZRT57X)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList");
	result = ISteamMatchmakingServers_RequestHistoryServerList(self, iApp, ppchFilters, nFilters, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_RequestSpectatorServerList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t iApp;
	MatchMakingKeyValuePair_t ** ppchFilters;
	uint32_t nFilters;
	void * pRequestServersResponse;
	void * result;
	FuncPtr_5ZRT57X ISteamMatchmakingServers_RequestSpectatorServerList;

	ISteamMatchmakingServers_RequestSpectatorServerList = (FuncPtr_5ZRT57X)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList");
	result = ISteamMatchmakingServers_RequestSpectatorServerList(self, iApp, ppchFilters, nFilters, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_ReleaseRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hServerListRequest;
	FuncPtr_SMJUVEG ISteamMatchmakingServers_ReleaseRequest;

	ISteamMatchmakingServers_ReleaseRequest = (FuncPtr_SMJUVEG)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_ReleaseRequest");
	ISteamMatchmakingServers_ReleaseRequest(self, hServerListRequest);
}

static bool
js_ISteamMatchmakingServers_CancelQuery(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	FuncPtr_SMJUVEG ISteamMatchmakingServers_CancelQuery;

	ISteamMatchmakingServers_CancelQuery = (FuncPtr_SMJUVEG)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_CancelQuery");
	ISteamMatchmakingServers_CancelQuery(self, hRequest);
}

static bool
js_ISteamMatchmakingServers_RefreshQuery(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	FuncPtr_SMJUVEG ISteamMatchmakingServers_RefreshQuery;

	ISteamMatchmakingServers_RefreshQuery = (FuncPtr_SMJUVEG)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RefreshQuery");
	ISteamMatchmakingServers_RefreshQuery(self, hRequest);
}

static bool
js_ISteamMatchmakingServers_RefreshServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	int32_t iServer;
	FuncPtr_2JGFIGM ISteamMatchmakingServers_RefreshServer;

	ISteamMatchmakingServers_RefreshServer = (FuncPtr_2JGFIGM)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_RefreshServer");
	ISteamMatchmakingServers_RefreshServer(self, hRequest, iServer);
}

static bool
js_ISteamMatchmakingServers_CancelServerQuery(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t hServerQuery;
	FuncPtr_WX01A0G ISteamMatchmakingServers_CancelServerQuery;

	ISteamMatchmakingServers_CancelServerQuery = (FuncPtr_WX01A0G)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_CancelServerQuery");
	ISteamMatchmakingServers_CancelServerQuery(self, hServerQuery);
}

static bool
js_ISteamMatchmakingServers_GetServerDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	int32_t iServer;
	gameserveritem_t * result;
	FuncPtr_2TWCI29 ISteamMatchmakingServers_GetServerDetails;

	ISteamMatchmakingServers_GetServerDetails = (FuncPtr_2TWCI29)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_GetServerDetails");
	result = ISteamMatchmakingServers_GetServerDetails(self, hRequest, iServer);
}

static bool
js_ISteamMatchmakingServers_IsRefreshing(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	bool result;
	FuncPtr_P0HJRYI ISteamMatchmakingServers_IsRefreshing;

	ISteamMatchmakingServers_IsRefreshing = (FuncPtr_P0HJRYI)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_IsRefreshing");
	result = ISteamMatchmakingServers_IsRefreshing(self, hRequest);
}

static bool
js_ISteamMatchmakingServers_GetServerCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * hRequest;
	int32_t result;
	FuncPtr_FGX71GJ ISteamMatchmakingServers_GetServerCount;

	ISteamMatchmakingServers_GetServerCount = (FuncPtr_FGX71GJ)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_GetServerCount");
	result = ISteamMatchmakingServers_GetServerCount(self, hRequest);
}

static bool
js_ISteamMatchmakingServers_PingServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unIP;
	uint16_t usPort;
	void * pRequestServersResponse;
	int32_t result;
	FuncPtr_R3341KW ISteamMatchmakingServers_PingServer;

	ISteamMatchmakingServers_PingServer = (FuncPtr_R3341KW)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_PingServer");
	result = ISteamMatchmakingServers_PingServer(self, unIP, usPort, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_PlayerDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unIP;
	uint16_t usPort;
	void * pRequestServersResponse;
	int32_t result;
	FuncPtr_R3341KW ISteamMatchmakingServers_PlayerDetails;

	ISteamMatchmakingServers_PlayerDetails = (FuncPtr_R3341KW)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_PlayerDetails");
	result = ISteamMatchmakingServers_PlayerDetails(self, unIP, usPort, pRequestServersResponse);
}

static bool
js_ISteamMatchmakingServers_ServerRules(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unIP;
	uint16_t usPort;
	void * pRequestServersResponse;
	int32_t result;
	FuncPtr_R3341KW ISteamMatchmakingServers_ServerRules;

	ISteamMatchmakingServers_ServerRules = (FuncPtr_R3341KW)GetProcAddress(steam_api, "SteamAPI_ISteamMatchmakingServers_ServerRules");
	result = ISteamMatchmakingServers_ServerRules(self, unIP, usPort, pRequestServersResponse);
}

static bool
js_ISteamGameSearch_AddGameSearchParams(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchKeyToFind;
	const char * pchValuesToFind;
	uint32_t result;
	FuncPtr_UNVMPYE ISteamGameSearch_AddGameSearchParams;

	ISteamGameSearch_AddGameSearchParams = (FuncPtr_UNVMPYE)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_AddGameSearchParams");
	result = ISteamGameSearch_AddGameSearchParams(self, pchKeyToFind, pchValuesToFind);
}

static bool
js_ISteamGameSearch_SearchForGameWithLobby(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDLobby;
	int32_t nPlayerMin;
	int32_t nPlayerMax;
	uint32_t result;
	FuncPtr_T81WTQB ISteamGameSearch_SearchForGameWithLobby;

	ISteamGameSearch_SearchForGameWithLobby = (FuncPtr_T81WTQB)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_SearchForGameWithLobby");
	result = ISteamGameSearch_SearchForGameWithLobby(self, steamIDLobby, nPlayerMin, nPlayerMax);
}

static bool
js_ISteamGameSearch_SearchForGameSolo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nPlayerMin;
	int32_t nPlayerMax;
	uint32_t result;
	FuncPtr_WQMRPDT ISteamGameSearch_SearchForGameSolo;

	ISteamGameSearch_SearchForGameSolo = (FuncPtr_WQMRPDT)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_SearchForGameSolo");
	result = ISteamGameSearch_SearchForGameSolo(self, nPlayerMin, nPlayerMax);
}

static bool
js_ISteamGameSearch_AcceptGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamGameSearch_AcceptGame;

	ISteamGameSearch_AcceptGame = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_AcceptGame");
	result = ISteamGameSearch_AcceptGame(self);
}

static bool
js_ISteamGameSearch_DeclineGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamGameSearch_DeclineGame;

	ISteamGameSearch_DeclineGame = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_DeclineGame");
	result = ISteamGameSearch_DeclineGame(self);
}

static bool
js_ISteamGameSearch_RetrieveConnectionDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDHost;
	char * pchConnectionDetails;
	int32_t cubConnectionDetails;
	uint32_t result;
	FuncPtr_TAYCN1J ISteamGameSearch_RetrieveConnectionDetails;

	ISteamGameSearch_RetrieveConnectionDetails = (FuncPtr_TAYCN1J)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_RetrieveConnectionDetails");
	result = ISteamGameSearch_RetrieveConnectionDetails(self, steamIDHost, pchConnectionDetails, cubConnectionDetails);
}

static bool
js_ISteamGameSearch_EndGameSearch(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamGameSearch_EndGameSearch;

	ISteamGameSearch_EndGameSearch = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_EndGameSearch");
	result = ISteamGameSearch_EndGameSearch(self);
}

static bool
js_ISteamGameSearch_SetGameHostParams(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchKey;
	const char * pchValue;
	uint32_t result;
	FuncPtr_UNVMPYE ISteamGameSearch_SetGameHostParams;

	ISteamGameSearch_SetGameHostParams = (FuncPtr_UNVMPYE)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_SetGameHostParams");
	result = ISteamGameSearch_SetGameHostParams(self, pchKey, pchValue);
}

static bool
js_ISteamGameSearch_SetConnectionDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchConnectionDetails;
	int32_t cubConnectionDetails;
	uint32_t result;
	FuncPtr_XNA0Y3U ISteamGameSearch_SetConnectionDetails;

	ISteamGameSearch_SetConnectionDetails = (FuncPtr_XNA0Y3U)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_SetConnectionDetails");
	result = ISteamGameSearch_SetConnectionDetails(self, pchConnectionDetails, cubConnectionDetails);
}

static bool
js_ISteamGameSearch_RequestPlayersForGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nPlayerMin;
	int32_t nPlayerMax;
	int32_t nMaxTeamSize;
	uint32_t result;
	FuncPtr_2NJ9UM1 ISteamGameSearch_RequestPlayersForGame;

	ISteamGameSearch_RequestPlayersForGame = (FuncPtr_2NJ9UM1)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_RequestPlayersForGame");
	result = ISteamGameSearch_RequestPlayersForGame(self, nPlayerMin, nPlayerMax, nMaxTeamSize);
}

static bool
js_ISteamGameSearch_HostConfirmGameStart(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ullUniqueGameID;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamGameSearch_HostConfirmGameStart;

	ISteamGameSearch_HostConfirmGameStart = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_HostConfirmGameStart");
	result = ISteamGameSearch_HostConfirmGameStart(self, ullUniqueGameID);
}

static bool
js_ISteamGameSearch_CancelRequestPlayersForGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamGameSearch_CancelRequestPlayersForGame;

	ISteamGameSearch_CancelRequestPlayersForGame = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_CancelRequestPlayersForGame");
	result = ISteamGameSearch_CancelRequestPlayersForGame(self);
}

static bool
js_ISteamGameSearch_SubmitPlayerResult(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ullUniqueGameID;
	uint64_t steamIDPlayer;
	uint32_t EPlayerResult;
	uint32_t result;
	FuncPtr_AMEPV10 ISteamGameSearch_SubmitPlayerResult;

	ISteamGameSearch_SubmitPlayerResult = (FuncPtr_AMEPV10)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_SubmitPlayerResult");
	result = ISteamGameSearch_SubmitPlayerResult(self, ullUniqueGameID, steamIDPlayer, EPlayerResult);
}

static bool
js_ISteamGameSearch_EndGame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ullUniqueGameID;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamGameSearch_EndGame;

	ISteamGameSearch_EndGame = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamGameSearch_EndGame");
	result = ISteamGameSearch_EndGame(self, ullUniqueGameID);
}

static bool
js_ISteamParties_GetNumActiveBeacons(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamParties_GetNumActiveBeacons;

	ISteamParties_GetNumActiveBeacons = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamParties_GetNumActiveBeacons");
	result = ISteamParties_GetNumActiveBeacons(self);
}

static bool
js_ISteamParties_GetBeaconByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unIndex;
	uint64_t result;
	FuncPtr_5IENTZ6 ISteamParties_GetBeaconByIndex;

	ISteamParties_GetBeaconByIndex = (FuncPtr_5IENTZ6)GetProcAddress(steam_api, "SteamAPI_ISteamParties_GetBeaconByIndex");
	result = ISteamParties_GetBeaconByIndex(self, unIndex);
}

static bool
js_ISteamParties_JoinParty(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulBeaconID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamParties_JoinParty;

	ISteamParties_JoinParty = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamParties_JoinParty");
	result = ISteamParties_JoinParty(self, ulBeaconID);
}

static bool
js_ISteamParties_CreateBeacon(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unOpenSlots;
	SteamPartyBeaconLocation_t * pBeaconLocation;
	const char * pchConnectString;
	const char * pchMetadata;
	uint64_t result;
	FuncPtr_KXMWAG1 ISteamParties_CreateBeacon;

	ISteamParties_CreateBeacon = (FuncPtr_KXMWAG1)GetProcAddress(steam_api, "SteamAPI_ISteamParties_CreateBeacon");
	result = ISteamParties_CreateBeacon(self, unOpenSlots, pBeaconLocation, pchConnectString, pchMetadata);
}

static bool
js_ISteamParties_ChangeNumOpenSlots(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulBeacon;
	uint32_t unOpenSlots;
	uint64_t result;
	FuncPtr_PWN3TI5 ISteamParties_ChangeNumOpenSlots;

	ISteamParties_ChangeNumOpenSlots = (FuncPtr_PWN3TI5)GetProcAddress(steam_api, "SteamAPI_ISteamParties_ChangeNumOpenSlots");
	result = ISteamParties_ChangeNumOpenSlots(self, ulBeacon, unOpenSlots);
}

static bool
js_ISteamParties_GetBeaconDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulBeaconID;
	uint64_t * pSteamIDBeaconOwner;
	SteamPartyBeaconLocation_t * pLocation;
	char * pchMetadata;
	int32_t cchMetadata;
	bool result;
	FuncPtr_D3E2EMJ ISteamParties_GetBeaconDetails;

	ISteamParties_GetBeaconDetails = (FuncPtr_D3E2EMJ)GetProcAddress(steam_api, "SteamAPI_ISteamParties_GetBeaconDetails");
	result = ISteamParties_GetBeaconDetails(self, ulBeaconID, pSteamIDBeaconOwner, pLocation, pchMetadata, cchMetadata);
}

static bool
js_ISteamParties_GetNumAvailableBeaconLocations(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * puNumLocations;
	bool result;
	FuncPtr_0TOTXFS ISteamParties_GetNumAvailableBeaconLocations;

	ISteamParties_GetNumAvailableBeaconLocations = (FuncPtr_0TOTXFS)GetProcAddress(steam_api, "SteamAPI_ISteamParties_GetNumAvailableBeaconLocations");
	result = ISteamParties_GetNumAvailableBeaconLocations(self, puNumLocations);
}

static bool
js_ISteamParties_GetAvailableBeaconLocations(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamPartyBeaconLocation_t * pLocationList;
	uint32_t uMaxNumLocations;
	bool result;
	FuncPtr_4USKP2Y ISteamParties_GetAvailableBeaconLocations;

	ISteamParties_GetAvailableBeaconLocations = (FuncPtr_4USKP2Y)GetProcAddress(steam_api, "SteamAPI_ISteamParties_GetAvailableBeaconLocations");
	result = ISteamParties_GetAvailableBeaconLocations(self, pLocationList, uMaxNumLocations);
}

static bool
js_ISteamParties_DestroyBeacon(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulBeacon;
	bool result;
	FuncPtr_9MUN1QC ISteamParties_DestroyBeacon;

	ISteamParties_DestroyBeacon = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamParties_DestroyBeacon");
	result = ISteamParties_DestroyBeacon(self, ulBeacon);
}

static bool
js_ISteamParties_GetBeaconLocationData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamPartyBeaconLocation_t BeaconLocation;
	uint32_t eData;
	char * pchDataStringOut;
	int32_t cchDataStringOut;
	bool result;
	FuncPtr_TX8AQYZ ISteamParties_GetBeaconLocationData;

	ISteamParties_GetBeaconLocationData = (FuncPtr_TX8AQYZ)GetProcAddress(steam_api, "SteamAPI_ISteamParties_GetBeaconLocationData");
	result = ISteamParties_GetBeaconLocationData(self, BeaconLocation, eData, pchDataStringOut, cchDataStringOut);
}

static bool
js_ISteamParties_OnReservationCompleted(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulBeacon;
	uint64_t steamIDUser;
	FuncPtr_0IHM5OW ISteamParties_OnReservationCompleted;

	ISteamParties_OnReservationCompleted = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamParties_OnReservationCompleted");
	ISteamParties_OnReservationCompleted(self, ulBeacon, steamIDUser);
}

static bool
js_ISteamParties_CancelReservation(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulBeacon;
	uint64_t steamIDUser;
	FuncPtr_0IHM5OW ISteamParties_CancelReservation;

	ISteamParties_CancelReservation = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamParties_CancelReservation");
	ISteamParties_CancelReservation(self, ulBeacon, steamIDUser);
}

static bool
js_ISteamRemoteStorage_FileWrite(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	const void * pvData;
	int32_t cubData;
	bool result;
	FuncPtr_UL83Z5Y ISteamRemoteStorage_FileWrite;

	ISteamRemoteStorage_FileWrite = (FuncPtr_UL83Z5Y)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileWrite");
	result = ISteamRemoteStorage_FileWrite(self, pchFile, pvData, cubData);
}

static bool
js_ISteamRemoteStorage_FileReadAsyncComplete(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hReadCall;
	void * pvBuffer;
	uint32_t cubToRead;
	bool result;
	FuncPtr_V0LZBJ3 ISteamRemoteStorage_FileReadAsyncComplete;

	ISteamRemoteStorage_FileReadAsyncComplete = (FuncPtr_V0LZBJ3)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete");
	result = ISteamRemoteStorage_FileReadAsyncComplete(self, hReadCall, pvBuffer, cubToRead);
}

static bool
js_ISteamRemoteStorage_FileForget(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	bool result;
	FuncPtr_8GBYAXY ISteamRemoteStorage_FileForget;

	ISteamRemoteStorage_FileForget = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileForget");
	result = ISteamRemoteStorage_FileForget(self, pchFile);
}

static bool
js_ISteamRemoteStorage_FileDelete(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	bool result;
	FuncPtr_8GBYAXY ISteamRemoteStorage_FileDelete;

	ISteamRemoteStorage_FileDelete = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileDelete");
	result = ISteamRemoteStorage_FileDelete(self, pchFile);
}

static bool
js_ISteamRemoteStorage_SetSyncPlatforms(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	uint32_t eRemoteStoragePlatform;
	bool result;
	FuncPtr_21B32MY ISteamRemoteStorage_SetSyncPlatforms;

	ISteamRemoteStorage_SetSyncPlatforms = (FuncPtr_21B32MY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_SetSyncPlatforms");
	result = ISteamRemoteStorage_SetSyncPlatforms(self, pchFile, eRemoteStoragePlatform);
}

static bool
js_ISteamRemoteStorage_FileWriteStreamWriteChunk(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t writeHandle;
	const void * pvData;
	int32_t cubData;
	bool result;
	FuncPtr_QD0GYK0 ISteamRemoteStorage_FileWriteStreamWriteChunk;

	ISteamRemoteStorage_FileWriteStreamWriteChunk = (FuncPtr_QD0GYK0)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk");
	result = ISteamRemoteStorage_FileWriteStreamWriteChunk(self, writeHandle, pvData, cubData);
}

static bool
js_ISteamRemoteStorage_FileWriteStreamClose(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t writeHandle;
	bool result;
	FuncPtr_9MUN1QC ISteamRemoteStorage_FileWriteStreamClose;

	ISteamRemoteStorage_FileWriteStreamClose = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileWriteStreamClose");
	result = ISteamRemoteStorage_FileWriteStreamClose(self, writeHandle);
}

static bool
js_ISteamRemoteStorage_FileWriteStreamCancel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t writeHandle;
	bool result;
	FuncPtr_9MUN1QC ISteamRemoteStorage_FileWriteStreamCancel;

	ISteamRemoteStorage_FileWriteStreamCancel = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel");
	result = ISteamRemoteStorage_FileWriteStreamCancel(self, writeHandle);
}

static bool
js_ISteamRemoteStorage_FileExists(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	bool result;
	FuncPtr_8GBYAXY ISteamRemoteStorage_FileExists;

	ISteamRemoteStorage_FileExists = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileExists");
	result = ISteamRemoteStorage_FileExists(self, pchFile);
}

static bool
js_ISteamRemoteStorage_FilePersisted(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	bool result;
	FuncPtr_8GBYAXY ISteamRemoteStorage_FilePersisted;

	ISteamRemoteStorage_FilePersisted = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FilePersisted");
	result = ISteamRemoteStorage_FilePersisted(self, pchFile);
}

static bool
js_ISteamRemoteStorage_GetQuota(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * pnTotalBytes;
	uint64_t * puAvailableBytes;
	bool result;
	FuncPtr_94MX8T6 ISteamRemoteStorage_GetQuota;

	ISteamRemoteStorage_GetQuota = (FuncPtr_94MX8T6)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetQuota");
	result = ISteamRemoteStorage_GetQuota(self, pnTotalBytes, puAvailableBytes);
}

static bool
js_ISteamRemoteStorage_IsCloudEnabledForAccount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamRemoteStorage_IsCloudEnabledForAccount;

	ISteamRemoteStorage_IsCloudEnabledForAccount = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount");
	result = ISteamRemoteStorage_IsCloudEnabledForAccount(self);
}

static bool
js_ISteamRemoteStorage_IsCloudEnabledForApp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamRemoteStorage_IsCloudEnabledForApp;

	ISteamRemoteStorage_IsCloudEnabledForApp = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp");
	result = ISteamRemoteStorage_IsCloudEnabledForApp(self);
}

static bool
js_ISteamRemoteStorage_GetUGCDownloadProgress(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hContent;
	int32_t * pnBytesDownloaded;
	int32_t * pnBytesExpected;
	bool result;
	FuncPtr_ZOQQVX5 ISteamRemoteStorage_GetUGCDownloadProgress;

	ISteamRemoteStorage_GetUGCDownloadProgress = (FuncPtr_ZOQQVX5)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress");
	result = ISteamRemoteStorage_GetUGCDownloadProgress(self, hContent, pnBytesDownloaded, pnBytesExpected);
}

static bool
js_ISteamRemoteStorage_GetUGCDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hContent;
	uint32_t * pnAppID;
	char ** ppchName;
	int32_t * pnFileSizeInBytes;
	uint64_t * pSteamIDOwner;
	bool result;
	FuncPtr_HIW6KGU ISteamRemoteStorage_GetUGCDetails;

	ISteamRemoteStorage_GetUGCDetails = (FuncPtr_HIW6KGU)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetUGCDetails");
	result = ISteamRemoteStorage_GetUGCDetails(self, hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

static bool
js_ISteamRemoteStorage_UpdatePublishedFileFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	const char * pchFile;
	bool result;
	FuncPtr_46B6E53 ISteamRemoteStorage_UpdatePublishedFileFile;

	ISteamRemoteStorage_UpdatePublishedFileFile = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile");
	result = ISteamRemoteStorage_UpdatePublishedFileFile(self, updateHandle, pchFile);
}

static bool
js_ISteamRemoteStorage_UpdatePublishedFilePreviewFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	const char * pchPreviewFile;
	bool result;
	FuncPtr_46B6E53 ISteamRemoteStorage_UpdatePublishedFilePreviewFile;

	ISteamRemoteStorage_UpdatePublishedFilePreviewFile = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile");
	result = ISteamRemoteStorage_UpdatePublishedFilePreviewFile(self, updateHandle, pchPreviewFile);
}

static bool
js_ISteamRemoteStorage_UpdatePublishedFileTitle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	const char * pchTitle;
	bool result;
	FuncPtr_46B6E53 ISteamRemoteStorage_UpdatePublishedFileTitle;

	ISteamRemoteStorage_UpdatePublishedFileTitle = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle");
	result = ISteamRemoteStorage_UpdatePublishedFileTitle(self, updateHandle, pchTitle);
}

static bool
js_ISteamRemoteStorage_UpdatePublishedFileDescription(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	const char * pchDescription;
	bool result;
	FuncPtr_46B6E53 ISteamRemoteStorage_UpdatePublishedFileDescription;

	ISteamRemoteStorage_UpdatePublishedFileDescription = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription");
	result = ISteamRemoteStorage_UpdatePublishedFileDescription(self, updateHandle, pchDescription);
}

static bool
js_ISteamRemoteStorage_UpdatePublishedFileVisibility(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	uint32_t eVisibility;
	bool result;
	FuncPtr_GF74AYO ISteamRemoteStorage_UpdatePublishedFileVisibility;

	ISteamRemoteStorage_UpdatePublishedFileVisibility = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility");
	result = ISteamRemoteStorage_UpdatePublishedFileVisibility(self, updateHandle, eVisibility);
}

static bool
js_ISteamRemoteStorage_UpdatePublishedFileTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	SteamParamStringArray_t * pTags;
	bool result;
	FuncPtr_9SZH67I ISteamRemoteStorage_UpdatePublishedFileTags;

	ISteamRemoteStorage_UpdatePublishedFileTags = (FuncPtr_9SZH67I)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags");
	result = ISteamRemoteStorage_UpdatePublishedFileTags(self, updateHandle, pTags);
}

static bool
js_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	const char * pchChangeDescription;
	bool result;
	FuncPtr_46B6E53 ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription;

	ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription");
	result = ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(self, updateHandle, pchChangeDescription);
}

static bool
js_ISteamRemoteStorage_BeginFileWriteBatch(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamRemoteStorage_BeginFileWriteBatch;

	ISteamRemoteStorage_BeginFileWriteBatch = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch");
	result = ISteamRemoteStorage_BeginFileWriteBatch(self);
}

static bool
js_ISteamRemoteStorage_EndFileWriteBatch(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamRemoteStorage_EndFileWriteBatch;

	ISteamRemoteStorage_EndFileWriteBatch = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_EndFileWriteBatch");
	result = ISteamRemoteStorage_EndFileWriteBatch(self);
}

static bool
js_ISteamRemoteStorage_FileRead(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	void * pvData;
	int32_t cubDataToRead;
	int32_t result;
	FuncPtr_1KKG5YA ISteamRemoteStorage_FileRead;

	ISteamRemoteStorage_FileRead = (FuncPtr_1KKG5YA)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileRead");
	result = ISteamRemoteStorage_FileRead(self, pchFile, pvData, cubDataToRead);
}

static bool
js_ISteamRemoteStorage_GetFileSize(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	int32_t result;
	FuncPtr_4W35XJV ISteamRemoteStorage_GetFileSize;

	ISteamRemoteStorage_GetFileSize = (FuncPtr_4W35XJV)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetFileSize");
	result = ISteamRemoteStorage_GetFileSize(self, pchFile);
}

static bool
js_ISteamRemoteStorage_GetFileCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamRemoteStorage_GetFileCount;

	ISteamRemoteStorage_GetFileCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetFileCount");
	result = ISteamRemoteStorage_GetFileCount(self);
}

static bool
js_ISteamRemoteStorage_UGCRead(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hContent;
	void * pvData;
	int32_t cubDataToRead;
	uint32_t cOffset;
	uint32_t eAction;
	int32_t result;
	FuncPtr_O1K6S5M ISteamRemoteStorage_UGCRead;

	ISteamRemoteStorage_UGCRead = (FuncPtr_O1K6S5M)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UGCRead");
	result = ISteamRemoteStorage_UGCRead(self, hContent, pvData, cubDataToRead, cOffset, eAction);
}

static bool
js_ISteamRemoteStorage_GetCachedUGCCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamRemoteStorage_GetCachedUGCCount;

	ISteamRemoteStorage_GetCachedUGCCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetCachedUGCCount");
	result = ISteamRemoteStorage_GetCachedUGCCount(self);
}

static bool
js_ISteamRemoteStorage_GetLocalFileChangeCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamRemoteStorage_GetLocalFileChangeCount;

	ISteamRemoteStorage_GetLocalFileChangeCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount");
	result = ISteamRemoteStorage_GetLocalFileChangeCount(self);
}

static bool
js_ISteamRemoteStorage_FileWriteAsync(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	const void * pvData;
	uint32_t cubData;
	uint64_t result;
	FuncPtr_1DL2MAF ISteamRemoteStorage_FileWriteAsync;

	ISteamRemoteStorage_FileWriteAsync = (FuncPtr_1DL2MAF)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileWriteAsync");
	result = ISteamRemoteStorage_FileWriteAsync(self, pchFile, pvData, cubData);
}

static bool
js_ISteamRemoteStorage_FileReadAsync(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	uint32_t nOffset;
	uint32_t cubToRead;
	uint64_t result;
	FuncPtr_WMR6D4P ISteamRemoteStorage_FileReadAsync;

	ISteamRemoteStorage_FileReadAsync = (FuncPtr_WMR6D4P)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileReadAsync");
	result = ISteamRemoteStorage_FileReadAsync(self, pchFile, nOffset, cubToRead);
}

static bool
js_ISteamRemoteStorage_FileShare(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamRemoteStorage_FileShare;

	ISteamRemoteStorage_FileShare = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileShare");
	result = ISteamRemoteStorage_FileShare(self, pchFile);
}

static bool
js_ISteamRemoteStorage_FileWriteStreamOpen(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamRemoteStorage_FileWriteStreamOpen;

	ISteamRemoteStorage_FileWriteStreamOpen = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen");
	result = ISteamRemoteStorage_FileWriteStreamOpen(self, pchFile);
}

static bool
js_ISteamRemoteStorage_UGCDownload(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hContent;
	uint32_t unPriority;
	uint64_t result;
	FuncPtr_PWN3TI5 ISteamRemoteStorage_UGCDownload;

	ISteamRemoteStorage_UGCDownload = (FuncPtr_PWN3TI5)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UGCDownload");
	result = ISteamRemoteStorage_UGCDownload(self, hContent, unPriority);
}

static bool
js_ISteamRemoteStorage_GetCachedUGCHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iCachedContent;
	uint64_t result;
	FuncPtr_OK7DU08 ISteamRemoteStorage_GetCachedUGCHandle;

	ISteamRemoteStorage_GetCachedUGCHandle = (FuncPtr_OK7DU08)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle");
	result = ISteamRemoteStorage_GetCachedUGCHandle(self, iCachedContent);
}

static bool
js_ISteamRemoteStorage_PublishWorkshopFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	const char * pchPreviewFile;
	uint32_t nConsumerAppId;
	const char * pchTitle;
	const char * pchDescription;
	uint32_t eVisibility;
	SteamParamStringArray_t * pTags;
	uint32_t eWorkshopFileType;
	uint64_t result;
	FuncPtr_V3ZOTYF ISteamRemoteStorage_PublishWorkshopFile;

	ISteamRemoteStorage_PublishWorkshopFile = (FuncPtr_V3ZOTYF)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_PublishWorkshopFile");
	result = ISteamRemoteStorage_PublishWorkshopFile(self, pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

static bool
js_ISteamRemoteStorage_CreatePublishedFileUpdateRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamRemoteStorage_CreatePublishedFileUpdateRequest;

	ISteamRemoteStorage_CreatePublishedFileUpdateRequest = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest");
	result = ISteamRemoteStorage_CreatePublishedFileUpdateRequest(self, unPublishedFileId);
}

static bool
js_ISteamRemoteStorage_CommitPublishedFileUpdate(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamRemoteStorage_CommitPublishedFileUpdate;

	ISteamRemoteStorage_CommitPublishedFileUpdate = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate");
	result = ISteamRemoteStorage_CommitPublishedFileUpdate(self, updateHandle);
}

static bool
js_ISteamRemoteStorage_GetPublishedFileDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint32_t unMaxSecondsOld;
	uint64_t result;
	FuncPtr_PWN3TI5 ISteamRemoteStorage_GetPublishedFileDetails;

	ISteamRemoteStorage_GetPublishedFileDetails = (FuncPtr_PWN3TI5)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails");
	result = ISteamRemoteStorage_GetPublishedFileDetails(self, unPublishedFileId, unMaxSecondsOld);
}

static bool
js_ISteamRemoteStorage_DeletePublishedFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamRemoteStorage_DeletePublishedFile;

	ISteamRemoteStorage_DeletePublishedFile = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_DeletePublishedFile");
	result = ISteamRemoteStorage_DeletePublishedFile(self, unPublishedFileId);
}

static bool
js_ISteamRemoteStorage_EnumerateUserPublishedFiles(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unStartIndex;
	uint64_t result;
	FuncPtr_5IENTZ6 ISteamRemoteStorage_EnumerateUserPublishedFiles;

	ISteamRemoteStorage_EnumerateUserPublishedFiles = (FuncPtr_5IENTZ6)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles");
	result = ISteamRemoteStorage_EnumerateUserPublishedFiles(self, unStartIndex);
}

static bool
js_ISteamRemoteStorage_SubscribePublishedFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamRemoteStorage_SubscribePublishedFile;

	ISteamRemoteStorage_SubscribePublishedFile = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_SubscribePublishedFile");
	result = ISteamRemoteStorage_SubscribePublishedFile(self, unPublishedFileId);
}

static bool
js_ISteamRemoteStorage_EnumerateUserSubscribedFiles(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unStartIndex;
	uint64_t result;
	FuncPtr_5IENTZ6 ISteamRemoteStorage_EnumerateUserSubscribedFiles;

	ISteamRemoteStorage_EnumerateUserSubscribedFiles = (FuncPtr_5IENTZ6)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles");
	result = ISteamRemoteStorage_EnumerateUserSubscribedFiles(self, unStartIndex);
}

static bool
js_ISteamRemoteStorage_UnsubscribePublishedFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamRemoteStorage_UnsubscribePublishedFile;

	ISteamRemoteStorage_UnsubscribePublishedFile = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile");
	result = ISteamRemoteStorage_UnsubscribePublishedFile(self, unPublishedFileId);
}

static bool
js_ISteamRemoteStorage_GetPublishedItemVoteDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamRemoteStorage_GetPublishedItemVoteDetails;

	ISteamRemoteStorage_GetPublishedItemVoteDetails = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails");
	result = ISteamRemoteStorage_GetPublishedItemVoteDetails(self, unPublishedFileId);
}

static bool
js_ISteamRemoteStorage_UpdateUserPublishedItemVote(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	bool bVoteUp;
	uint64_t result;
	FuncPtr_P6L4VQH ISteamRemoteStorage_UpdateUserPublishedItemVote;

	ISteamRemoteStorage_UpdateUserPublishedItemVote = (FuncPtr_P6L4VQH)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote");
	result = ISteamRemoteStorage_UpdateUserPublishedItemVote(self, unPublishedFileId, bVoteUp);
}

static bool
js_ISteamRemoteStorage_GetUserPublishedItemVoteDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamRemoteStorage_GetUserPublishedItemVoteDetails;

	ISteamRemoteStorage_GetUserPublishedItemVoteDetails = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails");
	result = ISteamRemoteStorage_GetUserPublishedItemVoteDetails(self, unPublishedFileId);
}

static bool
js_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamId;
	uint32_t unStartIndex;
	SteamParamStringArray_t * pRequiredTags;
	SteamParamStringArray_t * pExcludedTags;
	uint64_t result;
	FuncPtr_BWNXNWS ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles;

	ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles = (FuncPtr_BWNXNWS)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles");
	result = ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(self, steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

static bool
js_ISteamRemoteStorage_PublishVideo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eVideoProvider;
	const char * pchVideoAccount;
	const char * pchVideoIdentifier;
	const char * pchPreviewFile;
	uint32_t nConsumerAppId;
	const char * pchTitle;
	const char * pchDescription;
	uint32_t eVisibility;
	SteamParamStringArray_t * pTags;
	uint64_t result;
	FuncPtr_LTDUPD7 ISteamRemoteStorage_PublishVideo;

	ISteamRemoteStorage_PublishVideo = (FuncPtr_LTDUPD7)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_PublishVideo");
	result = ISteamRemoteStorage_PublishVideo(self, eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

static bool
js_ISteamRemoteStorage_SetUserPublishedFileAction(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t unPublishedFileId;
	uint32_t eAction;
	uint64_t result;
	FuncPtr_PWN3TI5 ISteamRemoteStorage_SetUserPublishedFileAction;

	ISteamRemoteStorage_SetUserPublishedFileAction = (FuncPtr_PWN3TI5)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction");
	result = ISteamRemoteStorage_SetUserPublishedFileAction(self, unPublishedFileId, eAction);
}

static bool
js_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eAction;
	uint32_t unStartIndex;
	uint64_t result;
	FuncPtr_UJJQ7EM ISteamRemoteStorage_EnumeratePublishedFilesByUserAction;

	ISteamRemoteStorage_EnumeratePublishedFilesByUserAction = (FuncPtr_UJJQ7EM)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction");
	result = ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(self, eAction, unStartIndex);
}

static bool
js_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eEnumerationType;
	uint32_t unStartIndex;
	uint32_t unCount;
	uint32_t unDays;
	SteamParamStringArray_t * pTags;
	SteamParamStringArray_t * pUserTags;
	uint64_t result;
	FuncPtr_Z0EFDA3 ISteamRemoteStorage_EnumeratePublishedWorkshopFiles;

	ISteamRemoteStorage_EnumeratePublishedWorkshopFiles = (FuncPtr_Z0EFDA3)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles");
	result = ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(self, eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

static bool
js_ISteamRemoteStorage_UGCDownloadToLocation(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hContent;
	const char * pchLocation;
	uint32_t unPriority;
	uint64_t result;
	FuncPtr_YXOTX2A ISteamRemoteStorage_UGCDownloadToLocation;

	ISteamRemoteStorage_UGCDownloadToLocation = (FuncPtr_YXOTX2A)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation");
	result = ISteamRemoteStorage_UGCDownloadToLocation(self, hContent, pchLocation, unPriority);
}

static bool
js_ISteamRemoteStorage_GetFileTimestamp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	int64_t result;
	FuncPtr_2CGR48N ISteamRemoteStorage_GetFileTimestamp;

	ISteamRemoteStorage_GetFileTimestamp = (FuncPtr_2CGR48N)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetFileTimestamp");
	result = ISteamRemoteStorage_GetFileTimestamp(self, pchFile);
}

static bool
js_ISteamRemoteStorage_GetSyncPlatforms(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFile;
	uint32_t result;
	FuncPtr_0ZPYLOV ISteamRemoteStorage_GetSyncPlatforms;

	ISteamRemoteStorage_GetSyncPlatforms = (FuncPtr_0ZPYLOV)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetSyncPlatforms");
	result = ISteamRemoteStorage_GetSyncPlatforms(self, pchFile);
}

static bool
js_ISteamRemoteStorage_GetFileNameAndSize(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iFile;
	int32_t * pnFileSizeInBytes;
	const char * result;
	FuncPtr_OCTNQU8 ISteamRemoteStorage_GetFileNameAndSize;

	ISteamRemoteStorage_GetFileNameAndSize = (FuncPtr_OCTNQU8)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetFileNameAndSize");
	result = ISteamRemoteStorage_GetFileNameAndSize(self, iFile, pnFileSizeInBytes);
}

static bool
js_ISteamRemoteStorage_GetLocalFileChange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iFile;
	uint32_t * pEChangeType;
	uint32_t * pEFilePathType;
	const char * result;
	FuncPtr_EDV1ALK ISteamRemoteStorage_GetLocalFileChange;

	ISteamRemoteStorage_GetLocalFileChange = (FuncPtr_EDV1ALK)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_GetLocalFileChange");
	result = ISteamRemoteStorage_GetLocalFileChange(self, iFile, pEChangeType, pEFilePathType);
}

static bool
js_ISteamRemoteStorage_SetCloudEnabledForApp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bEnabled;
	FuncPtr_Z2CYP0L ISteamRemoteStorage_SetCloudEnabledForApp;

	ISteamRemoteStorage_SetCloudEnabledForApp = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp");
	ISteamRemoteStorage_SetCloudEnabledForApp(self, bEnabled);
}

static bool
js_ISteamUserStats_RequestCurrentStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUserStats_RequestCurrentStats;

	ISteamUserStats_RequestCurrentStats = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_RequestCurrentStats");
	result = ISteamUserStats_RequestCurrentStats(self);
}

static bool
js_ISteamUserStats_GetStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	int32_t * pData;
	bool result;
	FuncPtr_HV1VWZT ISteamUserStats_GetStatInt32;

	ISteamUserStats_GetStatInt32 = (FuncPtr_HV1VWZT)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetStatInt32");
	result = ISteamUserStats_GetStatInt32(self, pchName, pData);
}

static bool
js_ISteamUserStats_GetStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	float * pData;
	bool result;
	FuncPtr_R13WX4Z ISteamUserStats_GetStatFloat;

	ISteamUserStats_GetStatFloat = (FuncPtr_R13WX4Z)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetStatFloat");
	result = ISteamUserStats_GetStatFloat(self, pchName, pData);
}

static bool
js_ISteamUserStats_SetStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	int32_t nData;
	bool result;
	FuncPtr_E1Y1MX1 ISteamUserStats_SetStatInt32;

	ISteamUserStats_SetStatInt32 = (FuncPtr_E1Y1MX1)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_SetStatInt32");
	result = ISteamUserStats_SetStatInt32(self, pchName, nData);
}

static bool
js_ISteamUserStats_SetStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	float fData;
	bool result;
	FuncPtr_4TZ9TKE ISteamUserStats_SetStatFloat;

	ISteamUserStats_SetStatFloat = (FuncPtr_4TZ9TKE)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_SetStatFloat");
	result = ISteamUserStats_SetStatFloat(self, pchName, fData);
}

static bool
js_ISteamUserStats_UpdateAvgRateStat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	float flCountThisSession;
	double dSessionLength;
	bool result;
	FuncPtr_YEK57WK ISteamUserStats_UpdateAvgRateStat;

	ISteamUserStats_UpdateAvgRateStat = (FuncPtr_YEK57WK)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_UpdateAvgRateStat");
	result = ISteamUserStats_UpdateAvgRateStat(self, pchName, flCountThisSession, dSessionLength);
}

static bool
js_ISteamUserStats_GetAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	bool * pbAchieved;
	bool result;
	FuncPtr_BP0FD46 ISteamUserStats_GetAchievement;

	ISteamUserStats_GetAchievement = (FuncPtr_BP0FD46)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievement");
	result = ISteamUserStats_GetAchievement(self, pchName, pbAchieved);
}

static bool
js_ISteamUserStats_SetAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	bool result;
	FuncPtr_8GBYAXY ISteamUserStats_SetAchievement;

	ISteamUserStats_SetAchievement = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_SetAchievement");
	result = ISteamUserStats_SetAchievement(self, pchName);
}

static bool
js_ISteamUserStats_ClearAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	bool result;
	FuncPtr_8GBYAXY ISteamUserStats_ClearAchievement;

	ISteamUserStats_ClearAchievement = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_ClearAchievement");
	result = ISteamUserStats_ClearAchievement(self, pchName);
}

static bool
js_ISteamUserStats_GetAchievementAndUnlockTime(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	bool * pbAchieved;
	uint32_t * punUnlockTime;
	bool result;
	FuncPtr_9UW5T36 ISteamUserStats_GetAchievementAndUnlockTime;

	ISteamUserStats_GetAchievementAndUnlockTime = (FuncPtr_9UW5T36)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime");
	result = ISteamUserStats_GetAchievementAndUnlockTime(self, pchName, pbAchieved, punUnlockTime);
}

static bool
js_ISteamUserStats_StoreStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUserStats_StoreStats;

	ISteamUserStats_StoreStats = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_StoreStats");
	result = ISteamUserStats_StoreStats(self);
}

static bool
js_ISteamUserStats_IndicateAchievementProgress(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	uint32_t nCurProgress;
	uint32_t nMaxProgress;
	bool result;
	FuncPtr_10PMFQ2 ISteamUserStats_IndicateAchievementProgress;

	ISteamUserStats_IndicateAchievementProgress = (FuncPtr_10PMFQ2)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_IndicateAchievementProgress");
	result = ISteamUserStats_IndicateAchievementProgress(self, pchName, nCurProgress, nMaxProgress);
}

static bool
js_ISteamUserStats_GetUserStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	int32_t * pData;
	bool result;
	FuncPtr_4HXQXV5 ISteamUserStats_GetUserStatInt32;

	ISteamUserStats_GetUserStatInt32 = (FuncPtr_4HXQXV5)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetUserStatInt32");
	result = ISteamUserStats_GetUserStatInt32(self, steamIDUser, pchName, pData);
}

static bool
js_ISteamUserStats_GetUserStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	float * pData;
	bool result;
	FuncPtr_L7ZISJH ISteamUserStats_GetUserStatFloat;

	ISteamUserStats_GetUserStatFloat = (FuncPtr_L7ZISJH)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetUserStatFloat");
	result = ISteamUserStats_GetUserStatFloat(self, steamIDUser, pchName, pData);
}

static bool
js_ISteamUserStats_GetUserAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	bool * pbAchieved;
	bool result;
	FuncPtr_RS1TYNY ISteamUserStats_GetUserAchievement;

	ISteamUserStats_GetUserAchievement = (FuncPtr_RS1TYNY)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetUserAchievement");
	result = ISteamUserStats_GetUserAchievement(self, steamIDUser, pchName, pbAchieved);
}

static bool
js_ISteamUserStats_GetUserAchievementAndUnlockTime(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	bool * pbAchieved;
	uint32_t * punUnlockTime;
	bool result;
	FuncPtr_03KHOVE ISteamUserStats_GetUserAchievementAndUnlockTime;

	ISteamUserStats_GetUserAchievementAndUnlockTime = (FuncPtr_03KHOVE)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime");
	result = ISteamUserStats_GetUserAchievementAndUnlockTime(self, steamIDUser, pchName, pbAchieved, punUnlockTime);
}

static bool
js_ISteamUserStats_ResetAllStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bAchievementsToo;
	bool result;
	FuncPtr_PXPPJ5X ISteamUserStats_ResetAllStats;

	ISteamUserStats_ResetAllStats = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_ResetAllStats");
	result = ISteamUserStats_ResetAllStats(self, bAchievementsToo);
}

static bool
js_ISteamUserStats_GetDownloadedLeaderboardEntry(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboardEntries;
	int32_t index;
	LeaderboardEntry_t * pLeaderboardEntry;
	int32_t * pDetails;
	int32_t cDetailsMax;
	bool result;
	FuncPtr_DUHOTAP ISteamUserStats_GetDownloadedLeaderboardEntry;

	ISteamUserStats_GetDownloadedLeaderboardEntry = (FuncPtr_DUHOTAP)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry");
	result = ISteamUserStats_GetDownloadedLeaderboardEntry(self, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

static bool
js_ISteamUserStats_GetAchievementAchievedPercent(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	float * pflPercent;
	bool result;
	FuncPtr_R13WX4Z ISteamUserStats_GetAchievementAchievedPercent;

	ISteamUserStats_GetAchievementAchievedPercent = (FuncPtr_R13WX4Z)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievementAchievedPercent");
	result = ISteamUserStats_GetAchievementAchievedPercent(self, pchName, pflPercent);
}

static bool
js_ISteamUserStats_GetGlobalStatInt64(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchStatName;
	int64_t * pData;
	bool result;
	FuncPtr_HUEU73J ISteamUserStats_GetGlobalStatInt64;

	ISteamUserStats_GetGlobalStatInt64 = (FuncPtr_HUEU73J)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatInt64");
	result = ISteamUserStats_GetGlobalStatInt64(self, pchStatName, pData);
}

static bool
js_ISteamUserStats_GetGlobalStatDouble(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchStatName;
	double * pData;
	bool result;
	FuncPtr_V9CYK33 ISteamUserStats_GetGlobalStatDouble;

	ISteamUserStats_GetGlobalStatDouble = (FuncPtr_V9CYK33)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatDouble");
	result = ISteamUserStats_GetGlobalStatDouble(self, pchStatName, pData);
}

static bool
js_ISteamUserStats_GetAchievementProgressLimitsInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	int32_t * pnMinProgress;
	int32_t * pnMaxProgress;
	bool result;
	FuncPtr_1JVS34O ISteamUserStats_GetAchievementProgressLimitsInt32;

	ISteamUserStats_GetAchievementProgressLimitsInt32 = (FuncPtr_1JVS34O)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32");
	result = ISteamUserStats_GetAchievementProgressLimitsInt32(self, pchName, pnMinProgress, pnMaxProgress);
}

static bool
js_ISteamUserStats_GetAchievementProgressLimitsFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	float * pfMinProgress;
	float * pfMaxProgress;
	bool result;
	FuncPtr_0HBTQLL ISteamUserStats_GetAchievementProgressLimitsFloat;

	ISteamUserStats_GetAchievementProgressLimitsFloat = (FuncPtr_0HBTQLL)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat");
	result = ISteamUserStats_GetAchievementProgressLimitsFloat(self, pchName, pfMinProgress, pfMaxProgress);
}

static bool
js_ISteamUserStats_GetAchievementIcon(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	int32_t result;
	FuncPtr_4W35XJV ISteamUserStats_GetAchievementIcon;

	ISteamUserStats_GetAchievementIcon = (FuncPtr_4W35XJV)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievementIcon");
	result = ISteamUserStats_GetAchievementIcon(self, pchName);
}

static bool
js_ISteamUserStats_GetLeaderboardEntryCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	int32_t result;
	FuncPtr_DZPOH6I ISteamUserStats_GetLeaderboardEntryCount;

	ISteamUserStats_GetLeaderboardEntryCount = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardEntryCount");
	result = ISteamUserStats_GetLeaderboardEntryCount(self, hSteamLeaderboard);
}

static bool
js_ISteamUserStats_GetMostAchievedAchievementInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	char * pchName;
	uint32_t unNameBufLen;
	float * pflPercent;
	bool * pbAchieved;
	int32_t result;
	FuncPtr_67VNZWT ISteamUserStats_GetMostAchievedAchievementInfo;

	ISteamUserStats_GetMostAchievedAchievementInfo = (FuncPtr_67VNZWT)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo");
	result = ISteamUserStats_GetMostAchievedAchievementInfo(self, pchName, unNameBufLen, pflPercent, pbAchieved);
}

static bool
js_ISteamUserStats_GetNextMostAchievedAchievementInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iIteratorPrevious;
	char * pchName;
	uint32_t unNameBufLen;
	float * pflPercent;
	bool * pbAchieved;
	int32_t result;
	FuncPtr_NHZUNVK ISteamUserStats_GetNextMostAchievedAchievementInfo;

	ISteamUserStats_GetNextMostAchievedAchievementInfo = (FuncPtr_NHZUNVK)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo");
	result = ISteamUserStats_GetNextMostAchievedAchievementInfo(self, iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
}

static bool
js_ISteamUserStats_GetGlobalStatHistoryInt64(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchStatName;
	int64_t * pData;
	uint32_t cubData;
	int32_t result;
	FuncPtr_AWAG3UD ISteamUserStats_GetGlobalStatHistoryInt64;

	ISteamUserStats_GetGlobalStatHistoryInt64 = (FuncPtr_AWAG3UD)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64");
	result = ISteamUserStats_GetGlobalStatHistoryInt64(self, pchStatName, pData, cubData);
}

static bool
js_ISteamUserStats_GetGlobalStatHistoryDouble(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchStatName;
	double * pData;
	uint32_t cubData;
	int32_t result;
	FuncPtr_L6YR6GS ISteamUserStats_GetGlobalStatHistoryDouble;

	ISteamUserStats_GetGlobalStatHistoryDouble = (FuncPtr_L6YR6GS)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble");
	result = ISteamUserStats_GetGlobalStatHistoryDouble(self, pchStatName, pData, cubData);
}

static bool
js_ISteamUserStats_GetAchievementDisplayAttribute(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	const char * pchKey;
	const char * result;
	FuncPtr_53RW2GK ISteamUserStats_GetAchievementDisplayAttribute;

	ISteamUserStats_GetAchievementDisplayAttribute = (FuncPtr_53RW2GK)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute");
	result = ISteamUserStats_GetAchievementDisplayAttribute(self, pchName, pchKey);
}

static bool
js_ISteamUserStats_GetAchievementName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t iAchievement;
	const char * result;
	FuncPtr_G0H05PP ISteamUserStats_GetAchievementName;

	ISteamUserStats_GetAchievementName = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetAchievementName");
	result = ISteamUserStats_GetAchievementName(self, iAchievement);
}

static bool
js_ISteamUserStats_GetLeaderboardName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	const char * result;
	FuncPtr_CKME2CH ISteamUserStats_GetLeaderboardName;

	ISteamUserStats_GetLeaderboardName = (FuncPtr_CKME2CH)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardName");
	result = ISteamUserStats_GetLeaderboardName(self, hSteamLeaderboard);
}

static bool
js_ISteamUserStats_GetNumAchievements(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUserStats_GetNumAchievements;

	ISteamUserStats_GetNumAchievements = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetNumAchievements");
	result = ISteamUserStats_GetNumAchievements(self);
}

static bool
js_ISteamUserStats_GetLeaderboardSortMethod(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamUserStats_GetLeaderboardSortMethod;

	ISteamUserStats_GetLeaderboardSortMethod = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardSortMethod");
	result = ISteamUserStats_GetLeaderboardSortMethod(self, hSteamLeaderboard);
}

static bool
js_ISteamUserStats_GetLeaderboardDisplayType(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamUserStats_GetLeaderboardDisplayType;

	ISteamUserStats_GetLeaderboardDisplayType = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetLeaderboardDisplayType");
	result = ISteamUserStats_GetLeaderboardDisplayType(self, hSteamLeaderboard);
}

static bool
js_ISteamUserStats_RequestUserStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamUserStats_RequestUserStats;

	ISteamUserStats_RequestUserStats = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_RequestUserStats");
	result = ISteamUserStats_RequestUserStats(self, steamIDUser);
}

static bool
js_ISteamUserStats_FindOrCreateLeaderboard(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchLeaderboardName;
	uint32_t eLeaderboardSortMethod;
	uint32_t eLeaderboardDisplayType;
	uint64_t result;
	FuncPtr_WMR6D4P ISteamUserStats_FindOrCreateLeaderboard;

	ISteamUserStats_FindOrCreateLeaderboard = (FuncPtr_WMR6D4P)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_FindOrCreateLeaderboard");
	result = ISteamUserStats_FindOrCreateLeaderboard(self, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

static bool
js_ISteamUserStats_FindLeaderboard(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchLeaderboardName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamUserStats_FindLeaderboard;

	ISteamUserStats_FindLeaderboard = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_FindLeaderboard");
	result = ISteamUserStats_FindLeaderboard(self, pchLeaderboardName);
}

static bool
js_ISteamUserStats_DownloadLeaderboardEntries(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	uint32_t eLeaderboardDataRequest;
	int32_t nRangeStart;
	int32_t nRangeEnd;
	uint64_t result;
	FuncPtr_MHQOQMF ISteamUserStats_DownloadLeaderboardEntries;

	ISteamUserStats_DownloadLeaderboardEntries = (FuncPtr_MHQOQMF)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntries");
	result = ISteamUserStats_DownloadLeaderboardEntries(self, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

static bool
js_ISteamUserStats_DownloadLeaderboardEntriesForUsers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	uint64_t * prgUsers;
	int32_t cUsers;
	uint64_t result;
	FuncPtr_XW9HKPH ISteamUserStats_DownloadLeaderboardEntriesForUsers;

	ISteamUserStats_DownloadLeaderboardEntriesForUsers = (FuncPtr_XW9HKPH)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers");
	result = ISteamUserStats_DownloadLeaderboardEntriesForUsers(self, hSteamLeaderboard, prgUsers, cUsers);
}

static bool
js_ISteamUserStats_UploadLeaderboardScore(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	uint32_t eLeaderboardUploadScoreMethod;
	int32_t nScore;
	const int32_t * pScoreDetails;
	int32_t cScoreDetailsCount;
	uint64_t result;
	FuncPtr_ESEF2HW ISteamUserStats_UploadLeaderboardScore;

	ISteamUserStats_UploadLeaderboardScore = (FuncPtr_ESEF2HW)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_UploadLeaderboardScore");
	result = ISteamUserStats_UploadLeaderboardScore(self, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

static bool
js_ISteamUserStats_AttachLeaderboardUGC(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t hSteamLeaderboard;
	uint64_t hUGC;
	uint64_t result;
	FuncPtr_Z7KXEAV ISteamUserStats_AttachLeaderboardUGC;

	ISteamUserStats_AttachLeaderboardUGC = (FuncPtr_Z7KXEAV)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_AttachLeaderboardUGC");
	result = ISteamUserStats_AttachLeaderboardUGC(self, hSteamLeaderboard, hUGC);
}

static bool
js_ISteamUserStats_GetNumberOfCurrentPlayers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamUserStats_GetNumberOfCurrentPlayers;

	ISteamUserStats_GetNumberOfCurrentPlayers = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers");
	result = ISteamUserStats_GetNumberOfCurrentPlayers(self);
}

static bool
js_ISteamUserStats_RequestGlobalAchievementPercentages(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamUserStats_RequestGlobalAchievementPercentages;

	ISteamUserStats_RequestGlobalAchievementPercentages = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages");
	result = ISteamUserStats_RequestGlobalAchievementPercentages(self);
}

static bool
js_ISteamUserStats_RequestGlobalStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nHistoryDays;
	uint64_t result;
	FuncPtr_OK7DU08 ISteamUserStats_RequestGlobalStats;

	ISteamUserStats_RequestGlobalStats = (FuncPtr_OK7DU08)GetProcAddress(steam_api, "SteamAPI_ISteamUserStats_RequestGlobalStats");
	result = ISteamUserStats_RequestGlobalStats(self, nHistoryDays);
}

static bool
js_ISteamApps_BIsSubscribed(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamApps_BIsSubscribed;

	ISteamApps_BIsSubscribed = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsSubscribed");
	result = ISteamApps_BIsSubscribed(self);
}

static bool
js_ISteamApps_BIsLowViolence(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamApps_BIsLowViolence;

	ISteamApps_BIsLowViolence = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsLowViolence");
	result = ISteamApps_BIsLowViolence(self);
}

static bool
js_ISteamApps_BIsCybercafe(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamApps_BIsCybercafe;

	ISteamApps_BIsCybercafe = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsCybercafe");
	result = ISteamApps_BIsCybercafe(self);
}

static bool
js_ISteamApps_BIsVACBanned(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamApps_BIsVACBanned;

	ISteamApps_BIsVACBanned = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsVACBanned");
	result = ISteamApps_BIsVACBanned(self);
}

static bool
js_ISteamApps_BIsSubscribedApp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t appID;
	bool result;
	FuncPtr_IF8A7HP ISteamApps_BIsSubscribedApp;

	ISteamApps_BIsSubscribedApp = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsSubscribedApp");
	result = ISteamApps_BIsSubscribedApp(self, appID);
}

static bool
js_ISteamApps_BIsDlcInstalled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t appID;
	bool result;
	FuncPtr_IF8A7HP ISteamApps_BIsDlcInstalled;

	ISteamApps_BIsDlcInstalled = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsDlcInstalled");
	result = ISteamApps_BIsDlcInstalled(self, appID);
}

static bool
js_ISteamApps_BIsSubscribedFromFreeWeekend(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamApps_BIsSubscribedFromFreeWeekend;

	ISteamApps_BIsSubscribedFromFreeWeekend = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend");
	result = ISteamApps_BIsSubscribedFromFreeWeekend(self);
}

static bool
js_ISteamApps_BGetDLCDataByIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iDLC;
	uint32_t * pAppID;
	bool * pbAvailable;
	char * pchName;
	int32_t cchNameBufferSize;
	bool result;
	FuncPtr_DF0BZYH ISteamApps_BGetDLCDataByIndex;

	ISteamApps_BGetDLCDataByIndex = (FuncPtr_DF0BZYH)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BGetDLCDataByIndex");
	result = ISteamApps_BGetDLCDataByIndex(self, iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

static bool
js_ISteamApps_GetCurrentBetaName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	char * pchName;
	int32_t cchNameBufferSize;
	bool result;
	FuncPtr_QDNHZ83 ISteamApps_GetCurrentBetaName;

	ISteamApps_GetCurrentBetaName = (FuncPtr_QDNHZ83)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetCurrentBetaName");
	result = ISteamApps_GetCurrentBetaName(self, pchName, cchNameBufferSize);
}

static bool
js_ISteamApps_MarkContentCorrupt(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bMissingFilesOnly;
	bool result;
	FuncPtr_PXPPJ5X ISteamApps_MarkContentCorrupt;

	ISteamApps_MarkContentCorrupt = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamApps_MarkContentCorrupt");
	result = ISteamApps_MarkContentCorrupt(self, bMissingFilesOnly);
}

static bool
js_ISteamApps_BIsAppInstalled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t appID;
	bool result;
	FuncPtr_IF8A7HP ISteamApps_BIsAppInstalled;

	ISteamApps_BIsAppInstalled = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsAppInstalled");
	result = ISteamApps_BIsAppInstalled(self, appID);
}

static bool
js_ISteamApps_GetDlcDownloadProgress(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	uint64_t * punBytesDownloaded;
	uint64_t * punBytesTotal;
	bool result;
	FuncPtr_TJPIH56 ISteamApps_GetDlcDownloadProgress;

	ISteamApps_GetDlcDownloadProgress = (FuncPtr_TJPIH56)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetDlcDownloadProgress");
	result = ISteamApps_GetDlcDownloadProgress(self, nAppID, punBytesDownloaded, punBytesTotal);
}

static bool
js_ISteamApps_BIsSubscribedFromFamilySharing(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamApps_BIsSubscribedFromFamilySharing;

	ISteamApps_BIsSubscribedFromFamilySharing = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing");
	result = ISteamApps_BIsSubscribedFromFamilySharing(self);
}

static bool
js_ISteamApps_BIsTimedTrial(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * punSecondsAllowed;
	uint32_t * punSecondsPlayed;
	bool result;
	FuncPtr_6LZ5H1U ISteamApps_BIsTimedTrial;

	ISteamApps_BIsTimedTrial = (FuncPtr_6LZ5H1U)GetProcAddress(steam_api, "SteamAPI_ISteamApps_BIsTimedTrial");
	result = ISteamApps_BIsTimedTrial(self, punSecondsAllowed, punSecondsPlayed);
}

static bool
js_ISteamApps_SetDlcContext(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	bool result;
	FuncPtr_IF8A7HP ISteamApps_SetDlcContext;

	ISteamApps_SetDlcContext = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamApps_SetDlcContext");
	result = ISteamApps_SetDlcContext(self, nAppID);
}

static bool
js_ISteamApps_GetCurrentGameLanguage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * result;
	FuncPtr_WV1XOCC ISteamApps_GetCurrentGameLanguage;

	ISteamApps_GetCurrentGameLanguage = (FuncPtr_WV1XOCC)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetCurrentGameLanguage");
	result = ISteamApps_GetCurrentGameLanguage(self);
}

static bool
js_ISteamApps_GetAvailableGameLanguages(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * result;
	FuncPtr_WV1XOCC ISteamApps_GetAvailableGameLanguages;

	ISteamApps_GetAvailableGameLanguages = (FuncPtr_WV1XOCC)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetAvailableGameLanguages");
	result = ISteamApps_GetAvailableGameLanguages(self);
}

static bool
js_ISteamApps_GetLaunchQueryParam(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchKey;
	const char * result;
	FuncPtr_GKHKW9K ISteamApps_GetLaunchQueryParam;

	ISteamApps_GetLaunchQueryParam = (FuncPtr_GKHKW9K)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetLaunchQueryParam");
	result = ISteamApps_GetLaunchQueryParam(self, pchKey);
}

static bool
js_ISteamApps_GetEarliestPurchaseUnixTime(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	uint32_t result;
	FuncPtr_9UOQ486 ISteamApps_GetEarliestPurchaseUnixTime;

	ISteamApps_GetEarliestPurchaseUnixTime = (FuncPtr_9UOQ486)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime");
	result = ISteamApps_GetEarliestPurchaseUnixTime(self, nAppID);
}

static bool
js_ISteamApps_GetInstalledDepots(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t appID;
	uint32_t * pvecDepots;
	uint32_t cMaxDepots;
	uint32_t result;
	FuncPtr_4PARCUP ISteamApps_GetInstalledDepots;

	ISteamApps_GetInstalledDepots = (FuncPtr_4PARCUP)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetInstalledDepots");
	result = ISteamApps_GetInstalledDepots(self, appID, pvecDepots, cMaxDepots);
}

static bool
js_ISteamApps_GetAppInstallDir(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t appID;
	char * pchFolder;
	uint32_t cchFolderBufferSize;
	uint32_t result;
	FuncPtr_76JPC6E ISteamApps_GetAppInstallDir;

	ISteamApps_GetAppInstallDir = (FuncPtr_76JPC6E)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetAppInstallDir");
	result = ISteamApps_GetAppInstallDir(self, appID, pchFolder, cchFolderBufferSize);
}

static bool
js_ISteamApps_GetDLCCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamApps_GetDLCCount;

	ISteamApps_GetDLCCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetDLCCount");
	result = ISteamApps_GetDLCCount(self);
}

static bool
js_ISteamApps_GetAppBuildId(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamApps_GetAppBuildId;

	ISteamApps_GetAppBuildId = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetAppBuildId");
	result = ISteamApps_GetAppBuildId(self);
}

static bool
js_ISteamApps_GetLaunchCommandLine(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	char * pszCommandLine;
	int32_t cubCommandLine;
	int32_t result;
	FuncPtr_R1NQYS3 ISteamApps_GetLaunchCommandLine;

	ISteamApps_GetLaunchCommandLine = (FuncPtr_R1NQYS3)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetLaunchCommandLine");
	result = ISteamApps_GetLaunchCommandLine(self, pszCommandLine, cubCommandLine);
}

static bool
js_ISteamApps_InstallDLC(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	FuncPtr_QX4IH25 ISteamApps_InstallDLC;

	ISteamApps_InstallDLC = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamApps_InstallDLC");
	ISteamApps_InstallDLC(self, nAppID);
}

static bool
js_ISteamApps_UninstallDLC(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	FuncPtr_QX4IH25 ISteamApps_UninstallDLC;

	ISteamApps_UninstallDLC = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamApps_UninstallDLC");
	ISteamApps_UninstallDLC(self, nAppID);
}

static bool
js_ISteamApps_RequestAppProofOfPurchaseKey(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	FuncPtr_QX4IH25 ISteamApps_RequestAppProofOfPurchaseKey;

	ISteamApps_RequestAppProofOfPurchaseKey = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey");
	ISteamApps_RequestAppProofOfPurchaseKey(self, nAppID);
}

static bool
js_ISteamApps_RequestAllProofOfPurchaseKeys(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamApps_RequestAllProofOfPurchaseKeys;

	ISteamApps_RequestAllProofOfPurchaseKeys = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys");
	ISteamApps_RequestAllProofOfPurchaseKeys(self);
}

static bool
js_ISteamApps_GetAppOwner(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamApps_GetAppOwner;

	ISteamApps_GetAppOwner = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetAppOwner");
	result = ISteamApps_GetAppOwner(self);
}

static bool
js_ISteamApps_GetFileDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszFileName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamApps_GetFileDetails;

	ISteamApps_GetFileDetails = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamApps_GetFileDetails");
	result = ISteamApps_GetFileDetails(self, pszFileName);
}

static bool
js_ISteamNetworking_SendP2PPacket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDRemote;
	const void * pubData;
	uint32_t cubData;
	uint32_t eP2PSendType;
	int32_t nChannel;
	bool result;
	FuncPtr_7PXLHN3 ISteamNetworking_SendP2PPacket;

	ISteamNetworking_SendP2PPacket = (FuncPtr_7PXLHN3)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_SendP2PPacket");
	result = ISteamNetworking_SendP2PPacket(self, steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
}

static bool
js_ISteamNetworking_IsP2PPacketAvailable(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * pcubMsgSize;
	int32_t nChannel;
	bool result;
	FuncPtr_3ULIJ7O ISteamNetworking_IsP2PPacketAvailable;

	ISteamNetworking_IsP2PPacketAvailable = (FuncPtr_3ULIJ7O)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_IsP2PPacketAvailable");
	result = ISteamNetworking_IsP2PPacketAvailable(self, pcubMsgSize, nChannel);
}

static bool
js_ISteamNetworking_ReadP2PPacket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pubDest;
	uint32_t cubDest;
	uint32_t * pcubMsgSize;
	uint64_t * psteamIDRemote;
	int32_t nChannel;
	bool result;
	FuncPtr_OKAMYWU ISteamNetworking_ReadP2PPacket;

	ISteamNetworking_ReadP2PPacket = (FuncPtr_OKAMYWU)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_ReadP2PPacket");
	result = ISteamNetworking_ReadP2PPacket(self, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
}

static bool
js_ISteamNetworking_AcceptP2PSessionWithUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDRemote;
	bool result;
	FuncPtr_9MUN1QC ISteamNetworking_AcceptP2PSessionWithUser;

	ISteamNetworking_AcceptP2PSessionWithUser = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser");
	result = ISteamNetworking_AcceptP2PSessionWithUser(self, steamIDRemote);
}

static bool
js_ISteamNetworking_CloseP2PSessionWithUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDRemote;
	bool result;
	FuncPtr_9MUN1QC ISteamNetworking_CloseP2PSessionWithUser;

	ISteamNetworking_CloseP2PSessionWithUser = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_CloseP2PSessionWithUser");
	result = ISteamNetworking_CloseP2PSessionWithUser(self, steamIDRemote);
}

static bool
js_ISteamNetworking_CloseP2PChannelWithUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDRemote;
	int32_t nChannel;
	bool result;
	FuncPtr_TEFKFE5 ISteamNetworking_CloseP2PChannelWithUser;

	ISteamNetworking_CloseP2PChannelWithUser = (FuncPtr_TEFKFE5)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_CloseP2PChannelWithUser");
	result = ISteamNetworking_CloseP2PChannelWithUser(self, steamIDRemote, nChannel);
}

static bool
js_ISteamNetworking_GetP2PSessionState(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDRemote;
	P2PSessionState_t * pConnectionState;
	bool result;
	FuncPtr_Z32YAFX ISteamNetworking_GetP2PSessionState;

	ISteamNetworking_GetP2PSessionState = (FuncPtr_Z32YAFX)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_GetP2PSessionState");
	result = ISteamNetworking_GetP2PSessionState(self, steamIDRemote, pConnectionState);
}

static bool
js_ISteamNetworking_AllowP2PPacketRelay(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bAllow;
	bool result;
	FuncPtr_PXPPJ5X ISteamNetworking_AllowP2PPacketRelay;

	ISteamNetworking_AllowP2PPacketRelay = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_AllowP2PPacketRelay");
	result = ISteamNetworking_AllowP2PPacketRelay(self, bAllow);
}

static bool
js_ISteamNetworking_DestroySocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	bool bNotifyRemoteEnd;
	bool result;
	FuncPtr_C33LZ5F ISteamNetworking_DestroySocket;

	ISteamNetworking_DestroySocket = (FuncPtr_C33LZ5F)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_DestroySocket");
	result = ISteamNetworking_DestroySocket(self, hSocket, bNotifyRemoteEnd);
}

static bool
js_ISteamNetworking_DestroyListenSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	bool bNotifyRemoteEnd;
	bool result;
	FuncPtr_C33LZ5F ISteamNetworking_DestroyListenSocket;

	ISteamNetworking_DestroyListenSocket = (FuncPtr_C33LZ5F)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_DestroyListenSocket");
	result = ISteamNetworking_DestroyListenSocket(self, hSocket, bNotifyRemoteEnd);
}

static bool
js_ISteamNetworking_SendDataOnSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	void * pubData;
	uint32_t cubData;
	bool bReliable;
	bool result;
	FuncPtr_AVBAIUW ISteamNetworking_SendDataOnSocket;

	ISteamNetworking_SendDataOnSocket = (FuncPtr_AVBAIUW)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_SendDataOnSocket");
	result = ISteamNetworking_SendDataOnSocket(self, hSocket, pubData, cubData, bReliable);
}

static bool
js_ISteamNetworking_IsDataAvailableOnSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	uint32_t * pcubMsgSize;
	bool result;
	FuncPtr_P9763AI ISteamNetworking_IsDataAvailableOnSocket;

	ISteamNetworking_IsDataAvailableOnSocket = (FuncPtr_P9763AI)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_IsDataAvailableOnSocket");
	result = ISteamNetworking_IsDataAvailableOnSocket(self, hSocket, pcubMsgSize);
}

static bool
js_ISteamNetworking_RetrieveDataFromSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	void * pubDest;
	uint32_t cubDest;
	uint32_t * pcubMsgSize;
	bool result;
	FuncPtr_1Z3R64K ISteamNetworking_RetrieveDataFromSocket;

	ISteamNetworking_RetrieveDataFromSocket = (FuncPtr_1Z3R64K)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_RetrieveDataFromSocket");
	result = ISteamNetworking_RetrieveDataFromSocket(self, hSocket, pubDest, cubDest, pcubMsgSize);
}

static bool
js_ISteamNetworking_IsDataAvailable(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hListenSocket;
	uint32_t * pcubMsgSize;
	uint32_t * phSocket;
	bool result;
	FuncPtr_ZPRI3PJ ISteamNetworking_IsDataAvailable;

	ISteamNetworking_IsDataAvailable = (FuncPtr_ZPRI3PJ)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_IsDataAvailable");
	result = ISteamNetworking_IsDataAvailable(self, hListenSocket, pcubMsgSize, phSocket);
}

static bool
js_ISteamNetworking_RetrieveData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hListenSocket;
	void * pubDest;
	uint32_t cubDest;
	uint32_t * pcubMsgSize;
	uint32_t * phSocket;
	bool result;
	FuncPtr_VSDNQY3 ISteamNetworking_RetrieveData;

	ISteamNetworking_RetrieveData = (FuncPtr_VSDNQY3)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_RetrieveData");
	result = ISteamNetworking_RetrieveData(self, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

static bool
js_ISteamNetworking_GetSocketInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	uint64_t * pSteamIDRemote;
	int32_t * peSocketStatus;
	SteamIPAddress_t * punIPRemote;
	uint16_t * punPortRemote;
	bool result;
	FuncPtr_N28FUUK ISteamNetworking_GetSocketInfo;

	ISteamNetworking_GetSocketInfo = (FuncPtr_N28FUUK)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_GetSocketInfo");
	result = ISteamNetworking_GetSocketInfo(self, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

static bool
js_ISteamNetworking_GetListenSocketInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hListenSocket;
	SteamIPAddress_t * pnIP;
	uint16_t * pnPort;
	bool result;
	FuncPtr_E04HFKJ ISteamNetworking_GetListenSocketInfo;

	ISteamNetworking_GetListenSocketInfo = (FuncPtr_E04HFKJ)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_GetListenSocketInfo");
	result = ISteamNetworking_GetListenSocketInfo(self, hListenSocket, pnIP, pnPort);
}

static bool
js_ISteamNetworking_CreateListenSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nVirtualP2PPort;
	SteamIPAddress_t nIP;
	uint16_t nPort;
	bool bAllowUseOfPacketRelay;
	uint32_t result;
	FuncPtr_AD653NB ISteamNetworking_CreateListenSocket;

	ISteamNetworking_CreateListenSocket = (FuncPtr_AD653NB)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_CreateListenSocket");
	result = ISteamNetworking_CreateListenSocket(self, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

static bool
js_ISteamNetworking_CreateP2PConnectionSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDTarget;
	int32_t nVirtualPort;
	int32_t nTimeoutSec;
	bool bAllowUseOfPacketRelay;
	uint32_t result;
	FuncPtr_N5HRYIQ ISteamNetworking_CreateP2PConnectionSocket;

	ISteamNetworking_CreateP2PConnectionSocket = (FuncPtr_N5HRYIQ)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_CreateP2PConnectionSocket");
	result = ISteamNetworking_CreateP2PConnectionSocket(self, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

static bool
js_ISteamNetworking_CreateConnectionSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamIPAddress_t nIP;
	uint16_t nPort;
	int32_t nTimeoutSec;
	uint32_t result;
	FuncPtr_7KLWD3R ISteamNetworking_CreateConnectionSocket;

	ISteamNetworking_CreateConnectionSocket = (FuncPtr_7KLWD3R)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_CreateConnectionSocket");
	result = ISteamNetworking_CreateConnectionSocket(self, nIP, nPort, nTimeoutSec);
}

static bool
js_ISteamNetworking_GetSocketConnectionType(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	uint32_t result;
	FuncPtr_9UOQ486 ISteamNetworking_GetSocketConnectionType;

	ISteamNetworking_GetSocketConnectionType = (FuncPtr_9UOQ486)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_GetSocketConnectionType");
	result = ISteamNetworking_GetSocketConnectionType(self, hSocket);
}

static bool
js_ISteamNetworking_GetMaxPacketSize(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	int32_t result;
	FuncPtr_5LIK133 ISteamNetworking_GetMaxPacketSize;

	ISteamNetworking_GetMaxPacketSize = (FuncPtr_5LIK133)GetProcAddress(steam_api, "SteamAPI_ISteamNetworking_GetMaxPacketSize");
	result = ISteamNetworking_GetMaxPacketSize(self, hSocket);
}

static bool
js_ISteamScreenshots_WriteScreenshot(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pubRGB;
	uint32_t cubRGB;
	int32_t nWidth;
	int32_t nHeight;
	uint32_t result;
	FuncPtr_OWM206T ISteamScreenshots_WriteScreenshot;

	ISteamScreenshots_WriteScreenshot = (FuncPtr_OWM206T)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_WriteScreenshot");
	result = ISteamScreenshots_WriteScreenshot(self, pubRGB, cubRGB, nWidth, nHeight);
}

static bool
js_ISteamScreenshots_AddScreenshotToLibrary(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchFilename;
	const char * pchThumbnailFilename;
	int32_t nWidth;
	int32_t nHeight;
	uint32_t result;
	FuncPtr_CV3HAYA ISteamScreenshots_AddScreenshotToLibrary;

	ISteamScreenshots_AddScreenshotToLibrary = (FuncPtr_CV3HAYA)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_AddScreenshotToLibrary");
	result = ISteamScreenshots_AddScreenshotToLibrary(self, pchFilename, pchThumbnailFilename, nWidth, nHeight);
}

static bool
js_ISteamScreenshots_AddVRScreenshotToLibrary(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eType;
	const char * pchFilename;
	const char * pchVRFilename;
	uint32_t result;
	FuncPtr_UXDMGDE ISteamScreenshots_AddVRScreenshotToLibrary;

	ISteamScreenshots_AddVRScreenshotToLibrary = (FuncPtr_UXDMGDE)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary");
	result = ISteamScreenshots_AddVRScreenshotToLibrary(self, eType, pchFilename, pchVRFilename);
}

static bool
js_ISteamScreenshots_TriggerScreenshot(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamScreenshots_TriggerScreenshot;

	ISteamScreenshots_TriggerScreenshot = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_TriggerScreenshot");
	ISteamScreenshots_TriggerScreenshot(self);
}

static bool
js_ISteamScreenshots_HookScreenshots(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bHook;
	FuncPtr_Z2CYP0L ISteamScreenshots_HookScreenshots;

	ISteamScreenshots_HookScreenshots = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_HookScreenshots");
	ISteamScreenshots_HookScreenshots(self, bHook);
}

static bool
js_ISteamScreenshots_SetLocation(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hScreenshot;
	const char * pchLocation;
	bool result;
	FuncPtr_C7SQD3V ISteamScreenshots_SetLocation;

	ISteamScreenshots_SetLocation = (FuncPtr_C7SQD3V)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_SetLocation");
	result = ISteamScreenshots_SetLocation(self, hScreenshot, pchLocation);
}

static bool
js_ISteamScreenshots_TagUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hScreenshot;
	uint64_t steamID;
	bool result;
	FuncPtr_W0JCP8F ISteamScreenshots_TagUser;

	ISteamScreenshots_TagUser = (FuncPtr_W0JCP8F)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_TagUser");
	result = ISteamScreenshots_TagUser(self, hScreenshot, steamID);
}

static bool
js_ISteamScreenshots_TagPublishedFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hScreenshot;
	uint64_t unPublishedFileID;
	bool result;
	FuncPtr_W0JCP8F ISteamScreenshots_TagPublishedFile;

	ISteamScreenshots_TagPublishedFile = (FuncPtr_W0JCP8F)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_TagPublishedFile");
	result = ISteamScreenshots_TagPublishedFile(self, hScreenshot, unPublishedFileID);
}

static bool
js_ISteamScreenshots_IsScreenshotsHooked(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamScreenshots_IsScreenshotsHooked;

	ISteamScreenshots_IsScreenshotsHooked = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamScreenshots_IsScreenshotsHooked");
	result = ISteamScreenshots_IsScreenshotsHooked(self);
}

static bool
js_ISteamMusic_BIsEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusic_BIsEnabled;

	ISteamMusic_BIsEnabled = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_BIsEnabled");
	result = ISteamMusic_BIsEnabled(self);
}

static bool
js_ISteamMusic_BIsPlaying(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusic_BIsPlaying;

	ISteamMusic_BIsPlaying = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_BIsPlaying");
	result = ISteamMusic_BIsPlaying(self);
}

static bool
js_ISteamMusic_GetPlaybackStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamMusic_GetPlaybackStatus;

	ISteamMusic_GetPlaybackStatus = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_GetPlaybackStatus");
	result = ISteamMusic_GetPlaybackStatus(self);
}

static bool
js_ISteamMusic_Play(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMusic_Play;

	ISteamMusic_Play = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_Play");
	ISteamMusic_Play(self);
}

static bool
js_ISteamMusic_Pause(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMusic_Pause;

	ISteamMusic_Pause = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_Pause");
	ISteamMusic_Pause(self);
}

static bool
js_ISteamMusic_PlayPrevious(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMusic_PlayPrevious;

	ISteamMusic_PlayPrevious = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_PlayPrevious");
	ISteamMusic_PlayPrevious(self);
}

static bool
js_ISteamMusic_PlayNext(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamMusic_PlayNext;

	ISteamMusic_PlayNext = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_PlayNext");
	ISteamMusic_PlayNext(self);
}

static bool
js_ISteamMusic_SetVolume(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	float flVolume;
	FuncPtr_C9ODJKZ ISteamMusic_SetVolume;

	ISteamMusic_SetVolume = (FuncPtr_C9ODJKZ)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_SetVolume");
	ISteamMusic_SetVolume(self, flVolume);
}

static bool
js_ISteamMusic_GetVolume(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	float result;
	FuncPtr_QOAS7B7 ISteamMusic_GetVolume;

	ISteamMusic_GetVolume = (FuncPtr_QOAS7B7)GetProcAddress(steam_api, "SteamAPI_ISteamMusic_GetVolume");
	result = ISteamMusic_GetVolume(self);
}

static bool
js_ISteamMusicRemote_RegisterSteamMusicRemote(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchName;
	bool result;
	FuncPtr_8GBYAXY ISteamMusicRemote_RegisterSteamMusicRemote;

	ISteamMusicRemote_RegisterSteamMusicRemote = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_RegisterSteamMusicRemote");
	result = ISteamMusicRemote_RegisterSteamMusicRemote(self, pchName);
}

static bool
js_ISteamMusicRemote_DeregisterSteamMusicRemote(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_DeregisterSteamMusicRemote;

	ISteamMusicRemote_DeregisterSteamMusicRemote = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_DeregisterSteamMusicRemote");
	result = ISteamMusicRemote_DeregisterSteamMusicRemote(self);
}

static bool
js_ISteamMusicRemote_BIsCurrentMusicRemote(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_BIsCurrentMusicRemote;

	ISteamMusicRemote_BIsCurrentMusicRemote = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_BIsCurrentMusicRemote");
	result = ISteamMusicRemote_BIsCurrentMusicRemote(self);
}

static bool
js_ISteamMusicRemote_BActivationSuccess(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_BActivationSuccess;

	ISteamMusicRemote_BActivationSuccess = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_BActivationSuccess");
	result = ISteamMusicRemote_BActivationSuccess(self, bValue);
}

static bool
js_ISteamMusicRemote_SetDisplayName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchDisplayName;
	bool result;
	FuncPtr_8GBYAXY ISteamMusicRemote_SetDisplayName;

	ISteamMusicRemote_SetDisplayName = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_SetDisplayName");
	result = ISteamMusicRemote_SetDisplayName(self, pchDisplayName);
}

static bool
js_ISteamMusicRemote_SetPNGIcon_64x64(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pvBuffer;
	uint32_t cbBufferLength;
	bool result;
	FuncPtr_NL2SU44 ISteamMusicRemote_SetPNGIcon_64x64;

	ISteamMusicRemote_SetPNGIcon_64x64 = (FuncPtr_NL2SU44)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_SetPNGIcon_64x64");
	result = ISteamMusicRemote_SetPNGIcon_64x64(self, pvBuffer, cbBufferLength);
}

static bool
js_ISteamMusicRemote_EnablePlayPrevious(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_EnablePlayPrevious;

	ISteamMusicRemote_EnablePlayPrevious = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_EnablePlayPrevious");
	result = ISteamMusicRemote_EnablePlayPrevious(self, bValue);
}

static bool
js_ISteamMusicRemote_EnablePlayNext(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_EnablePlayNext;

	ISteamMusicRemote_EnablePlayNext = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_EnablePlayNext");
	result = ISteamMusicRemote_EnablePlayNext(self, bValue);
}

static bool
js_ISteamMusicRemote_EnableShuffled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_EnableShuffled;

	ISteamMusicRemote_EnableShuffled = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_EnableShuffled");
	result = ISteamMusicRemote_EnableShuffled(self, bValue);
}

static bool
js_ISteamMusicRemote_EnableLooped(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_EnableLooped;

	ISteamMusicRemote_EnableLooped = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_EnableLooped");
	result = ISteamMusicRemote_EnableLooped(self, bValue);
}

static bool
js_ISteamMusicRemote_EnableQueue(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_EnableQueue;

	ISteamMusicRemote_EnableQueue = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_EnableQueue");
	result = ISteamMusicRemote_EnableQueue(self, bValue);
}

static bool
js_ISteamMusicRemote_EnablePlaylists(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_EnablePlaylists;

	ISteamMusicRemote_EnablePlaylists = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_EnablePlaylists");
	result = ISteamMusicRemote_EnablePlaylists(self, bValue);
}

static bool
js_ISteamMusicRemote_UpdatePlaybackStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nStatus;
	bool result;
	FuncPtr_IF8A7HP ISteamMusicRemote_UpdatePlaybackStatus;

	ISteamMusicRemote_UpdatePlaybackStatus = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_UpdatePlaybackStatus");
	result = ISteamMusicRemote_UpdatePlaybackStatus(self, nStatus);
}

static bool
js_ISteamMusicRemote_UpdateShuffled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_UpdateShuffled;

	ISteamMusicRemote_UpdateShuffled = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_UpdateShuffled");
	result = ISteamMusicRemote_UpdateShuffled(self, bValue);
}

static bool
js_ISteamMusicRemote_UpdateLooped(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bValue;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_UpdateLooped;

	ISteamMusicRemote_UpdateLooped = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_UpdateLooped");
	result = ISteamMusicRemote_UpdateLooped(self, bValue);
}

static bool
js_ISteamMusicRemote_UpdateVolume(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	float flValue;
	bool result;
	FuncPtr_YOTQJV9 ISteamMusicRemote_UpdateVolume;

	ISteamMusicRemote_UpdateVolume = (FuncPtr_YOTQJV9)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_UpdateVolume");
	result = ISteamMusicRemote_UpdateVolume(self, flValue);
}

static bool
js_ISteamMusicRemote_CurrentEntryWillChange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_CurrentEntryWillChange;

	ISteamMusicRemote_CurrentEntryWillChange = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_CurrentEntryWillChange");
	result = ISteamMusicRemote_CurrentEntryWillChange(self);
}

static bool
js_ISteamMusicRemote_CurrentEntryIsAvailable(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bAvailable;
	bool result;
	FuncPtr_PXPPJ5X ISteamMusicRemote_CurrentEntryIsAvailable;

	ISteamMusicRemote_CurrentEntryIsAvailable = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_CurrentEntryIsAvailable");
	result = ISteamMusicRemote_CurrentEntryIsAvailable(self, bAvailable);
}

static bool
js_ISteamMusicRemote_UpdateCurrentEntryText(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchText;
	bool result;
	FuncPtr_8GBYAXY ISteamMusicRemote_UpdateCurrentEntryText;

	ISteamMusicRemote_UpdateCurrentEntryText = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_UpdateCurrentEntryText");
	result = ISteamMusicRemote_UpdateCurrentEntryText(self, pchText);
}

static bool
js_ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nValue;
	bool result;
	FuncPtr_F9K0A2G ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds;

	ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds = (FuncPtr_F9K0A2G)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds");
	result = ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(self, nValue);
}

static bool
js_ISteamMusicRemote_UpdateCurrentEntryCoverArt(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pvBuffer;
	uint32_t cbBufferLength;
	bool result;
	FuncPtr_NL2SU44 ISteamMusicRemote_UpdateCurrentEntryCoverArt;

	ISteamMusicRemote_UpdateCurrentEntryCoverArt = (FuncPtr_NL2SU44)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_UpdateCurrentEntryCoverArt");
	result = ISteamMusicRemote_UpdateCurrentEntryCoverArt(self, pvBuffer, cbBufferLength);
}

static bool
js_ISteamMusicRemote_CurrentEntryDidChange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_CurrentEntryDidChange;

	ISteamMusicRemote_CurrentEntryDidChange = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_CurrentEntryDidChange");
	result = ISteamMusicRemote_CurrentEntryDidChange(self);
}

static bool
js_ISteamMusicRemote_QueueWillChange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_QueueWillChange;

	ISteamMusicRemote_QueueWillChange = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_QueueWillChange");
	result = ISteamMusicRemote_QueueWillChange(self);
}

static bool
js_ISteamMusicRemote_ResetQueueEntries(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_ResetQueueEntries;

	ISteamMusicRemote_ResetQueueEntries = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_ResetQueueEntries");
	result = ISteamMusicRemote_ResetQueueEntries(self);
}

static bool
js_ISteamMusicRemote_SetQueueEntry(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nID;
	int32_t nPosition;
	const char * pchEntryText;
	bool result;
	FuncPtr_292HD50 ISteamMusicRemote_SetQueueEntry;

	ISteamMusicRemote_SetQueueEntry = (FuncPtr_292HD50)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_SetQueueEntry");
	result = ISteamMusicRemote_SetQueueEntry(self, nID, nPosition, pchEntryText);
}

static bool
js_ISteamMusicRemote_SetCurrentQueueEntry(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nID;
	bool result;
	FuncPtr_F9K0A2G ISteamMusicRemote_SetCurrentQueueEntry;

	ISteamMusicRemote_SetCurrentQueueEntry = (FuncPtr_F9K0A2G)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_SetCurrentQueueEntry");
	result = ISteamMusicRemote_SetCurrentQueueEntry(self, nID);
}

static bool
js_ISteamMusicRemote_QueueDidChange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_QueueDidChange;

	ISteamMusicRemote_QueueDidChange = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_QueueDidChange");
	result = ISteamMusicRemote_QueueDidChange(self);
}

static bool
js_ISteamMusicRemote_PlaylistWillChange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_PlaylistWillChange;

	ISteamMusicRemote_PlaylistWillChange = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_PlaylistWillChange");
	result = ISteamMusicRemote_PlaylistWillChange(self);
}

static bool
js_ISteamMusicRemote_ResetPlaylistEntries(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_ResetPlaylistEntries;

	ISteamMusicRemote_ResetPlaylistEntries = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_ResetPlaylistEntries");
	result = ISteamMusicRemote_ResetPlaylistEntries(self);
}

static bool
js_ISteamMusicRemote_SetPlaylistEntry(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nID;
	int32_t nPosition;
	const char * pchEntryText;
	bool result;
	FuncPtr_292HD50 ISteamMusicRemote_SetPlaylistEntry;

	ISteamMusicRemote_SetPlaylistEntry = (FuncPtr_292HD50)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_SetPlaylistEntry");
	result = ISteamMusicRemote_SetPlaylistEntry(self, nID, nPosition, pchEntryText);
}

static bool
js_ISteamMusicRemote_SetCurrentPlaylistEntry(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nID;
	bool result;
	FuncPtr_F9K0A2G ISteamMusicRemote_SetCurrentPlaylistEntry;

	ISteamMusicRemote_SetCurrentPlaylistEntry = (FuncPtr_F9K0A2G)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_SetCurrentPlaylistEntry");
	result = ISteamMusicRemote_SetCurrentPlaylistEntry(self, nID);
}

static bool
js_ISteamMusicRemote_PlaylistDidChange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamMusicRemote_PlaylistDidChange;

	ISteamMusicRemote_PlaylistDidChange = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamMusicRemote_PlaylistDidChange");
	result = ISteamMusicRemote_PlaylistDidChange(self);
}

static bool
js_ISteamHTTP_CreateHTTPRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eHTTPRequestMethod;
	const char * pchAbsoluteURL;
	uint32_t result;
	FuncPtr_4G4OU4M ISteamHTTP_CreateHTTPRequest;

	ISteamHTTP_CreateHTTPRequest = (FuncPtr_4G4OU4M)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_CreateHTTPRequest");
	result = ISteamHTTP_CreateHTTPRequest(self, eHTTPRequestMethod, pchAbsoluteURL);
}

static bool
js_ISteamHTTP_CreateCookieContainer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bAllowResponsesToModify;
	uint32_t result;
	FuncPtr_5MD95H8 ISteamHTTP_CreateCookieContainer;

	ISteamHTTP_CreateCookieContainer = (FuncPtr_5MD95H8)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_CreateCookieContainer");
	result = ISteamHTTP_CreateCookieContainer(self, bAllowResponsesToModify);
}

static bool
js_ISteamHTTP_SetHTTPRequestContextValue(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint64_t ulContextValue;
	bool result;
	FuncPtr_W0JCP8F ISteamHTTP_SetHTTPRequestContextValue;

	ISteamHTTP_SetHTTPRequestContextValue = (FuncPtr_W0JCP8F)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestContextValue");
	result = ISteamHTTP_SetHTTPRequestContextValue(self, hRequest, ulContextValue);
}

static bool
js_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint32_t unTimeoutSeconds;
	bool result;
	FuncPtr_QAXP2FJ ISteamHTTP_SetHTTPRequestNetworkActivityTimeout;

	ISteamHTTP_SetHTTPRequestNetworkActivityTimeout = (FuncPtr_QAXP2FJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout");
	result = ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(self, hRequest, unTimeoutSeconds);
}

static bool
js_ISteamHTTP_SetHTTPRequestHeaderValue(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	const char * pchHeaderName;
	const char * pchHeaderValue;
	bool result;
	FuncPtr_DEITYTA ISteamHTTP_SetHTTPRequestHeaderValue;

	ISteamHTTP_SetHTTPRequestHeaderValue = (FuncPtr_DEITYTA)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue");
	result = ISteamHTTP_SetHTTPRequestHeaderValue(self, hRequest, pchHeaderName, pchHeaderValue);
}

static bool
js_ISteamHTTP_SetHTTPRequestGetOrPostParameter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	const char * pchParamName;
	const char * pchParamValue;
	bool result;
	FuncPtr_DEITYTA ISteamHTTP_SetHTTPRequestGetOrPostParameter;

	ISteamHTTP_SetHTTPRequestGetOrPostParameter = (FuncPtr_DEITYTA)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter");
	result = ISteamHTTP_SetHTTPRequestGetOrPostParameter(self, hRequest, pchParamName, pchParamValue);
}

static bool
js_ISteamHTTP_SendHTTPRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint64_t * pCallHandle;
	bool result;
	FuncPtr_9DRR946 ISteamHTTP_SendHTTPRequest;

	ISteamHTTP_SendHTTPRequest = (FuncPtr_9DRR946)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SendHTTPRequest");
	result = ISteamHTTP_SendHTTPRequest(self, hRequest, pCallHandle);
}

static bool
js_ISteamHTTP_SendHTTPRequestAndStreamResponse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint64_t * pCallHandle;
	bool result;
	FuncPtr_9DRR946 ISteamHTTP_SendHTTPRequestAndStreamResponse;

	ISteamHTTP_SendHTTPRequestAndStreamResponse = (FuncPtr_9DRR946)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse");
	result = ISteamHTTP_SendHTTPRequestAndStreamResponse(self, hRequest, pCallHandle);
}

static bool
js_ISteamHTTP_DeferHTTPRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	bool result;
	FuncPtr_IF8A7HP ISteamHTTP_DeferHTTPRequest;

	ISteamHTTP_DeferHTTPRequest = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_DeferHTTPRequest");
	result = ISteamHTTP_DeferHTTPRequest(self, hRequest);
}

static bool
js_ISteamHTTP_PrioritizeHTTPRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	bool result;
	FuncPtr_IF8A7HP ISteamHTTP_PrioritizeHTTPRequest;

	ISteamHTTP_PrioritizeHTTPRequest = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_PrioritizeHTTPRequest");
	result = ISteamHTTP_PrioritizeHTTPRequest(self, hRequest);
}

static bool
js_ISteamHTTP_GetHTTPResponseHeaderSize(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	const char * pchHeaderName;
	uint32_t * unResponseHeaderSize;
	bool result;
	FuncPtr_HTH1Q6H ISteamHTTP_GetHTTPResponseHeaderSize;

	ISteamHTTP_GetHTTPResponseHeaderSize = (FuncPtr_HTH1Q6H)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize");
	result = ISteamHTTP_GetHTTPResponseHeaderSize(self, hRequest, pchHeaderName, unResponseHeaderSize);
}

static bool
js_ISteamHTTP_GetHTTPResponseHeaderValue(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	const char * pchHeaderName;
	uint8_t * pHeaderValueBuffer;
	uint32_t unBufferSize;
	bool result;
	FuncPtr_NB7E44Q ISteamHTTP_GetHTTPResponseHeaderValue;

	ISteamHTTP_GetHTTPResponseHeaderValue = (FuncPtr_NB7E44Q)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue");
	result = ISteamHTTP_GetHTTPResponseHeaderValue(self, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
}

static bool
js_ISteamHTTP_GetHTTPResponseBodySize(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint32_t * unBodySize;
	bool result;
	FuncPtr_P9763AI ISteamHTTP_GetHTTPResponseBodySize;

	ISteamHTTP_GetHTTPResponseBodySize = (FuncPtr_P9763AI)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_GetHTTPResponseBodySize");
	result = ISteamHTTP_GetHTTPResponseBodySize(self, hRequest, unBodySize);
}

static bool
js_ISteamHTTP_GetHTTPResponseBodyData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint8_t * pBodyDataBuffer;
	uint32_t unBufferSize;
	bool result;
	FuncPtr_T7YUH7A ISteamHTTP_GetHTTPResponseBodyData;

	ISteamHTTP_GetHTTPResponseBodyData = (FuncPtr_T7YUH7A)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_GetHTTPResponseBodyData");
	result = ISteamHTTP_GetHTTPResponseBodyData(self, hRequest, pBodyDataBuffer, unBufferSize);
}

static bool
js_ISteamHTTP_GetHTTPStreamingResponseBodyData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint32_t cOffset;
	uint8_t * pBodyDataBuffer;
	uint32_t unBufferSize;
	bool result;
	FuncPtr_Z4BJB2M ISteamHTTP_GetHTTPStreamingResponseBodyData;

	ISteamHTTP_GetHTTPStreamingResponseBodyData = (FuncPtr_Z4BJB2M)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData");
	result = ISteamHTTP_GetHTTPStreamingResponseBodyData(self, hRequest, cOffset, pBodyDataBuffer, unBufferSize);
}

static bool
js_ISteamHTTP_ReleaseHTTPRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	bool result;
	FuncPtr_IF8A7HP ISteamHTTP_ReleaseHTTPRequest;

	ISteamHTTP_ReleaseHTTPRequest = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_ReleaseHTTPRequest");
	result = ISteamHTTP_ReleaseHTTPRequest(self, hRequest);
}

static bool
js_ISteamHTTP_GetHTTPDownloadProgressPct(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	float * pflPercentOut;
	bool result;
	FuncPtr_OPV77RK ISteamHTTP_GetHTTPDownloadProgressPct;

	ISteamHTTP_GetHTTPDownloadProgressPct = (FuncPtr_OPV77RK)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct");
	result = ISteamHTTP_GetHTTPDownloadProgressPct(self, hRequest, pflPercentOut);
}

static bool
js_ISteamHTTP_SetHTTPRequestRawPostBody(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	const char * pchContentType;
	uint8_t * pubBody;
	uint32_t unBodyLen;
	bool result;
	FuncPtr_NB7E44Q ISteamHTTP_SetHTTPRequestRawPostBody;

	ISteamHTTP_SetHTTPRequestRawPostBody = (FuncPtr_NB7E44Q)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody");
	result = ISteamHTTP_SetHTTPRequestRawPostBody(self, hRequest, pchContentType, pubBody, unBodyLen);
}

static bool
js_ISteamHTTP_ReleaseCookieContainer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hCookieContainer;
	bool result;
	FuncPtr_IF8A7HP ISteamHTTP_ReleaseCookieContainer;

	ISteamHTTP_ReleaseCookieContainer = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_ReleaseCookieContainer");
	result = ISteamHTTP_ReleaseCookieContainer(self, hCookieContainer);
}

static bool
js_ISteamHTTP_SetCookie(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hCookieContainer;
	const char * pchHost;
	const char * pchUrl;
	const char * pchCookie;
	bool result;
	FuncPtr_VAXWWFR ISteamHTTP_SetCookie;

	ISteamHTTP_SetCookie = (FuncPtr_VAXWWFR)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetCookie");
	result = ISteamHTTP_SetCookie(self, hCookieContainer, pchHost, pchUrl, pchCookie);
}

static bool
js_ISteamHTTP_SetHTTPRequestCookieContainer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint32_t hCookieContainer;
	bool result;
	FuncPtr_QAXP2FJ ISteamHTTP_SetHTTPRequestCookieContainer;

	ISteamHTTP_SetHTTPRequestCookieContainer = (FuncPtr_QAXP2FJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer");
	result = ISteamHTTP_SetHTTPRequestCookieContainer(self, hRequest, hCookieContainer);
}

static bool
js_ISteamHTTP_SetHTTPRequestUserAgentInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	const char * pchUserAgentInfo;
	bool result;
	FuncPtr_C7SQD3V ISteamHTTP_SetHTTPRequestUserAgentInfo;

	ISteamHTTP_SetHTTPRequestUserAgentInfo = (FuncPtr_C7SQD3V)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo");
	result = ISteamHTTP_SetHTTPRequestUserAgentInfo(self, hRequest, pchUserAgentInfo);
}

static bool
js_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	bool bRequireVerifiedCertificate;
	bool result;
	FuncPtr_C33LZ5F ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate;

	ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate = (FuncPtr_C33LZ5F)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate");
	result = ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(self, hRequest, bRequireVerifiedCertificate);
}

static bool
js_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	uint32_t unMilliseconds;
	bool result;
	FuncPtr_QAXP2FJ ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS;

	ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS = (FuncPtr_QAXP2FJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS");
	result = ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(self, hRequest, unMilliseconds);
}

static bool
js_ISteamHTTP_GetHTTPRequestWasTimedOut(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hRequest;
	bool * pbWasTimedOut;
	bool result;
	FuncPtr_BP47LP9 ISteamHTTP_GetHTTPRequestWasTimedOut;

	ISteamHTTP_GetHTTPRequestWasTimedOut = (FuncPtr_BP47LP9)GetProcAddress(steam_api, "SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut");
	result = ISteamHTTP_GetHTTPRequestWasTimedOut(self, hRequest, pbWasTimedOut);
}

static bool
js_ISteamInput_Init(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bExplicitlyCallRunFrame;
	bool result;
	FuncPtr_PXPPJ5X ISteamInput_Init;

	ISteamInput_Init = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamInput_Init");
	result = ISteamInput_Init(self, bExplicitlyCallRunFrame);
}

static bool
js_ISteamInput_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamInput_Shutdown;

	ISteamInput_Shutdown = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamInput_Shutdown");
	result = ISteamInput_Shutdown(self);
}

static bool
js_ISteamInput_SetInputActionManifestFilePath(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchInputActionManifestAbsolutePath;
	bool result;
	FuncPtr_8GBYAXY ISteamInput_SetInputActionManifestFilePath;

	ISteamInput_SetInputActionManifestFilePath = (FuncPtr_8GBYAXY)GetProcAddress(steam_api, "SteamAPI_ISteamInput_SetInputActionManifestFilePath");
	result = ISteamInput_SetInputActionManifestFilePath(self, pchInputActionManifestAbsolutePath);
}

static bool
js_ISteamInput_BWaitForData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bWaitForever;
	uint32_t unTimeout;
	bool result;
	FuncPtr_P6UKXKN ISteamInput_BWaitForData;

	ISteamInput_BWaitForData = (FuncPtr_P6UKXKN)GetProcAddress(steam_api, "SteamAPI_ISteamInput_BWaitForData");
	result = ISteamInput_BWaitForData(self, bWaitForever, unTimeout);
}

static bool
js_ISteamInput_BNewDataAvailable(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamInput_BNewDataAvailable;

	ISteamInput_BNewDataAvailable = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamInput_BNewDataAvailable");
	result = ISteamInput_BNewDataAvailable(self);
}

static bool
js_ISteamInput_ShowBindingPanel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	bool result;
	FuncPtr_9MUN1QC ISteamInput_ShowBindingPanel;

	ISteamInput_ShowBindingPanel = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamInput_ShowBindingPanel");
	result = ISteamInput_ShowBindingPanel(self, inputHandle);
}

static bool
js_ISteamInput_GetDeviceBindingRevision(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	int32_t * pMajor;
	int32_t * pMinor;
	bool result;
	FuncPtr_ZOQQVX5 ISteamInput_GetDeviceBindingRevision;

	ISteamInput_GetDeviceBindingRevision = (FuncPtr_ZOQQVX5)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetDeviceBindingRevision");
	result = ISteamInput_GetDeviceBindingRevision(self, inputHandle, pMajor, pMinor);
}

static bool
js_ISteamInput_RunFrame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bReservedValue;
	FuncPtr_Z2CYP0L ISteamInput_RunFrame;

	ISteamInput_RunFrame = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamInput_RunFrame");
	ISteamInput_RunFrame(self, bReservedValue);
}

static bool
js_ISteamInput_EnableDeviceCallbacks(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamInput_EnableDeviceCallbacks;

	ISteamInput_EnableDeviceCallbacks = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamInput_EnableDeviceCallbacks");
	ISteamInput_EnableDeviceCallbacks(self);
}

static bool
js_ISteamInput_ActivateActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	FuncPtr_0IHM5OW ISteamInput_ActivateActionSet;

	ISteamInput_ActivateActionSet = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamInput_ActivateActionSet");
	ISteamInput_ActivateActionSet(self, inputHandle, actionSetHandle);
}

static bool
js_ISteamInput_ActivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_0IHM5OW ISteamInput_ActivateActionSetLayer;

	ISteamInput_ActivateActionSetLayer = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamInput_ActivateActionSetLayer");
	ISteamInput_ActivateActionSetLayer(self, inputHandle, actionSetLayerHandle);
}

static bool
js_ISteamInput_DeactivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_0IHM5OW ISteamInput_DeactivateActionSetLayer;

	ISteamInput_DeactivateActionSetLayer = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamInput_DeactivateActionSetLayer");
	ISteamInput_DeactivateActionSetLayer(self, inputHandle, actionSetLayerHandle);
}

static bool
js_ISteamInput_DeactivateAllActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	FuncPtr_ULJ3EGR ISteamInput_DeactivateAllActionSetLayers;

	ISteamInput_DeactivateAllActionSetLayers = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamInput_DeactivateAllActionSetLayers");
	ISteamInput_DeactivateAllActionSetLayers(self, inputHandle);
}

static bool
js_ISteamInput_StopAnalogActionMomentum(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t eAction;
	FuncPtr_0IHM5OW ISteamInput_StopAnalogActionMomentum;

	ISteamInput_StopAnalogActionMomentum = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamInput_StopAnalogActionMomentum");
	ISteamInput_StopAnalogActionMomentum(self, inputHandle, eAction);
}

static bool
js_ISteamInput_TriggerVibration(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint16_t usLeftSpeed;
	uint16_t usRightSpeed;
	FuncPtr_YSJL1U6 ISteamInput_TriggerVibration;

	ISteamInput_TriggerVibration = (FuncPtr_YSJL1U6)GetProcAddress(steam_api, "SteamAPI_ISteamInput_TriggerVibration");
	ISteamInput_TriggerVibration(self, inputHandle, usLeftSpeed, usRightSpeed);
}

static bool
js_ISteamInput_TriggerVibrationExtended(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint16_t usLeftSpeed;
	uint16_t usRightSpeed;
	uint16_t usLeftTriggerSpeed;
	uint16_t usRightTriggerSpeed;
	FuncPtr_DGXY0QR ISteamInput_TriggerVibrationExtended;

	ISteamInput_TriggerVibrationExtended = (FuncPtr_DGXY0QR)GetProcAddress(steam_api, "SteamAPI_ISteamInput_TriggerVibrationExtended");
	ISteamInput_TriggerVibrationExtended(self, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);
}

static bool
js_ISteamInput_TriggerSimpleHapticEvent(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint32_t eHapticLocation;
	uint8_t nIntensity;
	char nGainDB;
	uint8_t nOtherIntensity;
	char nOtherGainDB;
	FuncPtr_2X9DB0K ISteamInput_TriggerSimpleHapticEvent;

	ISteamInput_TriggerSimpleHapticEvent = (FuncPtr_2X9DB0K)GetProcAddress(steam_api, "SteamAPI_ISteamInput_TriggerSimpleHapticEvent");
	ISteamInput_TriggerSimpleHapticEvent(self, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);
}

static bool
js_ISteamInput_SetLEDColor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint8_t nColorR;
	uint8_t nColorG;
	uint8_t nColorB;
	uint32_t nFlags;
	FuncPtr_ON0TH6L ISteamInput_SetLEDColor;

	ISteamInput_SetLEDColor = (FuncPtr_ON0TH6L)GetProcAddress(steam_api, "SteamAPI_ISteamInput_SetLEDColor");
	ISteamInput_SetLEDColor(self, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

static bool
js_ISteamInput_Legacy_TriggerHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	FuncPtr_L1OPJNR ISteamInput_Legacy_TriggerHapticPulse;

	ISteamInput_Legacy_TriggerHapticPulse = (FuncPtr_L1OPJNR)GetProcAddress(steam_api, "SteamAPI_ISteamInput_Legacy_TriggerHapticPulse");
	ISteamInput_Legacy_TriggerHapticPulse(self, inputHandle, eTargetPad, usDurationMicroSec);
}

static bool
js_ISteamInput_Legacy_TriggerRepeatedHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	uint16_t usOffMicroSec;
	uint16_t unRepeat;
	uint32_t nFlags;
	FuncPtr_SELLNWM ISteamInput_Legacy_TriggerRepeatedHapticPulse;

	ISteamInput_Legacy_TriggerRepeatedHapticPulse = (FuncPtr_SELLNWM)GetProcAddress(steam_api, "SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse");
	ISteamInput_Legacy_TriggerRepeatedHapticPulse(self, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

static bool
js_ISteamInput_GetConnectedControllers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_76YNAIJ ISteamInput_GetConnectedControllers;

	ISteamInput_GetConnectedControllers = (FuncPtr_76YNAIJ)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetConnectedControllers");
	result = ISteamInput_GetConnectedControllers(self, handlesOut);
}

static bool
js_ISteamInput_GetActiveActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_BZI4L7J ISteamInput_GetActiveActionSetLayers;

	ISteamInput_GetActiveActionSetLayers = (FuncPtr_BZI4L7J)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetActiveActionSetLayers");
	result = ISteamInput_GetActiveActionSetLayers(self, inputHandle, handlesOut);
}

static bool
js_ISteamInput_GetDigitalActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	uint64_t digitalActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_K06YL6E ISteamInput_GetDigitalActionOrigins;

	ISteamInput_GetDigitalActionOrigins = (FuncPtr_K06YL6E)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetDigitalActionOrigins");
	result = ISteamInput_GetDigitalActionOrigins(self, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
}

static bool
js_ISteamInput_GetAnalogActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t actionSetHandle;
	uint64_t analogActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_K06YL6E ISteamInput_GetAnalogActionOrigins;

	ISteamInput_GetAnalogActionOrigins = (FuncPtr_K06YL6E)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetAnalogActionOrigins");
	result = ISteamInput_GetAnalogActionOrigins(self, inputHandle, actionSetHandle, analogActionHandle, originsOut);
}

static bool
js_ISteamInput_GetGamepadIndexForController(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulinputHandle;
	int32_t result;
	FuncPtr_DZPOH6I ISteamInput_GetGamepadIndexForController;

	ISteamInput_GetGamepadIndexForController = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetGamepadIndexForController");
	result = ISteamInput_GetGamepadIndexForController(self, ulinputHandle);
}

static bool
js_ISteamInput_GetActionSetHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszActionSetName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamInput_GetActionSetHandle;

	ISteamInput_GetActionSetHandle = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetActionSetHandle");
	result = ISteamInput_GetActionSetHandle(self, pszActionSetName);
}

static bool
js_ISteamInput_GetCurrentActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamInput_GetCurrentActionSet;

	ISteamInput_GetCurrentActionSet = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetCurrentActionSet");
	result = ISteamInput_GetCurrentActionSet(self, inputHandle);
}

static bool
js_ISteamInput_GetDigitalActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszActionName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamInput_GetDigitalActionHandle;

	ISteamInput_GetDigitalActionHandle = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetDigitalActionHandle");
	result = ISteamInput_GetDigitalActionHandle(self, pszActionName);
}

static bool
js_ISteamInput_GetAnalogActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszActionName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamInput_GetAnalogActionHandle;

	ISteamInput_GetAnalogActionHandle = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetAnalogActionHandle");
	result = ISteamInput_GetAnalogActionHandle(self, pszActionName);
}

static bool
js_ISteamInput_GetControllerForGamepadIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nIndex;
	uint64_t result;
	FuncPtr_OK7DU08 ISteamInput_GetControllerForGamepadIndex;

	ISteamInput_GetControllerForGamepadIndex = (FuncPtr_OK7DU08)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetControllerForGamepadIndex");
	result = ISteamInput_GetControllerForGamepadIndex(self, nIndex);
}

static bool
js_ISteamInput_GetDigitalActionData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t digitalActionHandle;
	InputDigitalActionData_t result;
	FuncPtr_CHZW17Q ISteamInput_GetDigitalActionData;

	ISteamInput_GetDigitalActionData = (FuncPtr_CHZW17Q)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetDigitalActionData");
	result = ISteamInput_GetDigitalActionData(self, inputHandle, digitalActionHandle);
}

static bool
js_ISteamInput_GetStringForDigitalActionName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t eActionHandle;
	const char * result;
	FuncPtr_CKME2CH ISteamInput_GetStringForDigitalActionName;

	ISteamInput_GetStringForDigitalActionName = (FuncPtr_CKME2CH)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetStringForDigitalActionName");
	result = ISteamInput_GetStringForDigitalActionName(self, eActionHandle);
}

static bool
js_ISteamInput_GetGlyphPNGForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	uint32_t eSize;
	uint32_t unFlags;
	const char * result;
	FuncPtr_TRJSYLI ISteamInput_GetGlyphPNGForActionOrigin;

	ISteamInput_GetGlyphPNGForActionOrigin = (FuncPtr_TRJSYLI)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin");
	result = ISteamInput_GetGlyphPNGForActionOrigin(self, eOrigin, eSize, unFlags);
}

static bool
js_ISteamInput_GetGlyphSVGForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	uint32_t unFlags;
	const char * result;
	FuncPtr_TEQ1GO0 ISteamInput_GetGlyphSVGForActionOrigin;

	ISteamInput_GetGlyphSVGForActionOrigin = (FuncPtr_TEQ1GO0)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin");
	result = ISteamInput_GetGlyphSVGForActionOrigin(self, eOrigin, unFlags);
}

static bool
js_ISteamInput_GetGlyphForActionOrigin_Legacy(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamInput_GetGlyphForActionOrigin_Legacy;

	ISteamInput_GetGlyphForActionOrigin_Legacy = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy");
	result = ISteamInput_GetGlyphForActionOrigin_Legacy(self, eOrigin);
}

static bool
js_ISteamInput_GetStringForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamInput_GetStringForActionOrigin;

	ISteamInput_GetStringForActionOrigin = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetStringForActionOrigin");
	result = ISteamInput_GetStringForActionOrigin(self, eOrigin);
}

static bool
js_ISteamInput_GetStringForAnalogActionName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t eActionHandle;
	const char * result;
	FuncPtr_CKME2CH ISteamInput_GetStringForAnalogActionName;

	ISteamInput_GetStringForAnalogActionName = (FuncPtr_CKME2CH)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetStringForAnalogActionName");
	result = ISteamInput_GetStringForAnalogActionName(self, eActionHandle);
}

static bool
js_ISteamInput_GetStringForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamInput_GetStringForXboxOrigin;

	ISteamInput_GetStringForXboxOrigin = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetStringForXboxOrigin");
	result = ISteamInput_GetStringForXboxOrigin(self, eOrigin);
}

static bool
js_ISteamInput_GetGlyphForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamInput_GetGlyphForXboxOrigin;

	ISteamInput_GetGlyphForXboxOrigin = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetGlyphForXboxOrigin");
	result = ISteamInput_GetGlyphForXboxOrigin(self, eOrigin);
}

static bool
js_ISteamInput_GetAnalogActionData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint64_t analogActionHandle;
	InputAnalogActionData_t result;
	FuncPtr_VR0SVZA ISteamInput_GetAnalogActionData;

	ISteamInput_GetAnalogActionData = (FuncPtr_VR0SVZA)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetAnalogActionData");
	result = ISteamInput_GetAnalogActionData(self, inputHandle, analogActionHandle);
}

static bool
js_ISteamInput_GetMotionData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	InputMotionData_t result;
	FuncPtr_8VPMC35 ISteamInput_GetMotionData;

	ISteamInput_GetMotionData = (FuncPtr_8VPMC35)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetMotionData");
	result = ISteamInput_GetMotionData(self, inputHandle);
}

static bool
js_ISteamInput_GetInputTypeForHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamInput_GetInputTypeForHandle;

	ISteamInput_GetInputTypeForHandle = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetInputTypeForHandle");
	result = ISteamInput_GetInputTypeForHandle(self, inputHandle);
}

static bool
js_ISteamInput_GetActionOriginFromXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint32_t eOrigin;
	uint32_t result;
	FuncPtr_8ZU9CZQ ISteamInput_GetActionOriginFromXboxOrigin;

	ISteamInput_GetActionOriginFromXboxOrigin = (FuncPtr_8ZU9CZQ)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin");
	result = ISteamInput_GetActionOriginFromXboxOrigin(self, inputHandle, eOrigin);
}

static bool
js_ISteamInput_TranslateActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eDestinationInputType;
	uint32_t eSourceOrigin;
	uint32_t result;
	FuncPtr_FDBOCS2 ISteamInput_TranslateActionOrigin;

	ISteamInput_TranslateActionOrigin = (FuncPtr_FDBOCS2)GetProcAddress(steam_api, "SteamAPI_ISteamInput_TranslateActionOrigin");
	result = ISteamInput_TranslateActionOrigin(self, eDestinationInputType, eSourceOrigin);
}

static bool
js_ISteamInput_GetRemotePlaySessionID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t inputHandle;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamInput_GetRemotePlaySessionID;

	ISteamInput_GetRemotePlaySessionID = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetRemotePlaySessionID");
	result = ISteamInput_GetRemotePlaySessionID(self, inputHandle);
}

static bool
js_ISteamInput_GetSessionInputConfigurationSettings(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint16_t result;
	FuncPtr_LWMHJGY ISteamInput_GetSessionInputConfigurationSettings;

	ISteamInput_GetSessionInputConfigurationSettings = (FuncPtr_LWMHJGY)GetProcAddress(steam_api, "SteamAPI_ISteamInput_GetSessionInputConfigurationSettings");
	result = ISteamInput_GetSessionInputConfigurationSettings(self);
}

static bool
js_ISteamController_Init(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamController_Init;

	ISteamController_Init = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamController_Init");
	result = ISteamController_Init(self);
}

static bool
js_ISteamController_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamController_Shutdown;

	ISteamController_Shutdown = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamController_Shutdown");
	result = ISteamController_Shutdown(self);
}

static bool
js_ISteamController_ShowBindingPanel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	bool result;
	FuncPtr_9MUN1QC ISteamController_ShowBindingPanel;

	ISteamController_ShowBindingPanel = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamController_ShowBindingPanel");
	result = ISteamController_ShowBindingPanel(self, controllerHandle);
}

static bool
js_ISteamController_GetControllerBindingRevision(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	int32_t * pMajor;
	int32_t * pMinor;
	bool result;
	FuncPtr_ZOQQVX5 ISteamController_GetControllerBindingRevision;

	ISteamController_GetControllerBindingRevision = (FuncPtr_ZOQQVX5)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetControllerBindingRevision");
	result = ISteamController_GetControllerBindingRevision(self, controllerHandle, pMajor, pMinor);
}

static bool
js_ISteamController_RunFrame(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamController_RunFrame;

	ISteamController_RunFrame = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamController_RunFrame");
	ISteamController_RunFrame(self);
}

static bool
js_ISteamController_ActivateActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t actionSetHandle;
	FuncPtr_0IHM5OW ISteamController_ActivateActionSet;

	ISteamController_ActivateActionSet = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamController_ActivateActionSet");
	ISteamController_ActivateActionSet(self, controllerHandle, actionSetHandle);
}

static bool
js_ISteamController_ActivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_0IHM5OW ISteamController_ActivateActionSetLayer;

	ISteamController_ActivateActionSetLayer = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamController_ActivateActionSetLayer");
	ISteamController_ActivateActionSetLayer(self, controllerHandle, actionSetLayerHandle);
}

static bool
js_ISteamController_DeactivateActionSetLayer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t actionSetLayerHandle;
	FuncPtr_0IHM5OW ISteamController_DeactivateActionSetLayer;

	ISteamController_DeactivateActionSetLayer = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamController_DeactivateActionSetLayer");
	ISteamController_DeactivateActionSetLayer(self, controllerHandle, actionSetLayerHandle);
}

static bool
js_ISteamController_DeactivateAllActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	FuncPtr_ULJ3EGR ISteamController_DeactivateAllActionSetLayers;

	ISteamController_DeactivateAllActionSetLayers = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamController_DeactivateAllActionSetLayers");
	ISteamController_DeactivateAllActionSetLayers(self, controllerHandle);
}

static bool
js_ISteamController_StopAnalogActionMomentum(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t eAction;
	FuncPtr_0IHM5OW ISteamController_StopAnalogActionMomentum;

	ISteamController_StopAnalogActionMomentum = (FuncPtr_0IHM5OW)GetProcAddress(steam_api, "SteamAPI_ISteamController_StopAnalogActionMomentum");
	ISteamController_StopAnalogActionMomentum(self, controllerHandle, eAction);
}

static bool
js_ISteamController_TriggerHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	FuncPtr_L1OPJNR ISteamController_TriggerHapticPulse;

	ISteamController_TriggerHapticPulse = (FuncPtr_L1OPJNR)GetProcAddress(steam_api, "SteamAPI_ISteamController_TriggerHapticPulse");
	ISteamController_TriggerHapticPulse(self, controllerHandle, eTargetPad, usDurationMicroSec);
}

static bool
js_ISteamController_TriggerRepeatedHapticPulse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint32_t eTargetPad;
	uint16_t usDurationMicroSec;
	uint16_t usOffMicroSec;
	uint16_t unRepeat;
	uint32_t nFlags;
	FuncPtr_SELLNWM ISteamController_TriggerRepeatedHapticPulse;

	ISteamController_TriggerRepeatedHapticPulse = (FuncPtr_SELLNWM)GetProcAddress(steam_api, "SteamAPI_ISteamController_TriggerRepeatedHapticPulse");
	ISteamController_TriggerRepeatedHapticPulse(self, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

static bool
js_ISteamController_TriggerVibration(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint16_t usLeftSpeed;
	uint16_t usRightSpeed;
	FuncPtr_YSJL1U6 ISteamController_TriggerVibration;

	ISteamController_TriggerVibration = (FuncPtr_YSJL1U6)GetProcAddress(steam_api, "SteamAPI_ISteamController_TriggerVibration");
	ISteamController_TriggerVibration(self, controllerHandle, usLeftSpeed, usRightSpeed);
}

static bool
js_ISteamController_SetLEDColor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint8_t nColorR;
	uint8_t nColorG;
	uint8_t nColorB;
	uint32_t nFlags;
	FuncPtr_ON0TH6L ISteamController_SetLEDColor;

	ISteamController_SetLEDColor = (FuncPtr_ON0TH6L)GetProcAddress(steam_api, "SteamAPI_ISteamController_SetLEDColor");
	ISteamController_SetLEDColor(self, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

static bool
js_ISteamController_GetConnectedControllers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_76YNAIJ ISteamController_GetConnectedControllers;

	ISteamController_GetConnectedControllers = (FuncPtr_76YNAIJ)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetConnectedControllers");
	result = ISteamController_GetConnectedControllers(self, handlesOut);
}

static bool
js_ISteamController_GetActiveActionSetLayers(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t * handlesOut;
	int32_t result;
	FuncPtr_BZI4L7J ISteamController_GetActiveActionSetLayers;

	ISteamController_GetActiveActionSetLayers = (FuncPtr_BZI4L7J)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetActiveActionSetLayers");
	result = ISteamController_GetActiveActionSetLayers(self, controllerHandle, handlesOut);
}

static bool
js_ISteamController_GetDigitalActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t actionSetHandle;
	uint64_t digitalActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_K06YL6E ISteamController_GetDigitalActionOrigins;

	ISteamController_GetDigitalActionOrigins = (FuncPtr_K06YL6E)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetDigitalActionOrigins");
	result = ISteamController_GetDigitalActionOrigins(self, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

static bool
js_ISteamController_GetAnalogActionOrigins(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t actionSetHandle;
	uint64_t analogActionHandle;
	uint32_t * originsOut;
	int32_t result;
	FuncPtr_K06YL6E ISteamController_GetAnalogActionOrigins;

	ISteamController_GetAnalogActionOrigins = (FuncPtr_K06YL6E)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetAnalogActionOrigins");
	result = ISteamController_GetAnalogActionOrigins(self, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

static bool
js_ISteamController_GetGamepadIndexForController(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t ulControllerHandle;
	int32_t result;
	FuncPtr_DZPOH6I ISteamController_GetGamepadIndexForController;

	ISteamController_GetGamepadIndexForController = (FuncPtr_DZPOH6I)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetGamepadIndexForController");
	result = ISteamController_GetGamepadIndexForController(self, ulControllerHandle);
}

static bool
js_ISteamController_GetActionSetHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszActionSetName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamController_GetActionSetHandle;

	ISteamController_GetActionSetHandle = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetActionSetHandle");
	result = ISteamController_GetActionSetHandle(self, pszActionSetName);
}

static bool
js_ISteamController_GetCurrentActionSet(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamController_GetCurrentActionSet;

	ISteamController_GetCurrentActionSet = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetCurrentActionSet");
	result = ISteamController_GetCurrentActionSet(self, controllerHandle);
}

static bool
js_ISteamController_GetDigitalActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszActionName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamController_GetDigitalActionHandle;

	ISteamController_GetDigitalActionHandle = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetDigitalActionHandle");
	result = ISteamController_GetDigitalActionHandle(self, pszActionName);
}

static bool
js_ISteamController_GetAnalogActionHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszActionName;
	uint64_t result;
	FuncPtr_GBI8XH3 ISteamController_GetAnalogActionHandle;

	ISteamController_GetAnalogActionHandle = (FuncPtr_GBI8XH3)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetAnalogActionHandle");
	result = ISteamController_GetAnalogActionHandle(self, pszActionName);
}

static bool
js_ISteamController_GetControllerForGamepadIndex(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nIndex;
	uint64_t result;
	FuncPtr_OK7DU08 ISteamController_GetControllerForGamepadIndex;

	ISteamController_GetControllerForGamepadIndex = (FuncPtr_OK7DU08)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetControllerForGamepadIndex");
	result = ISteamController_GetControllerForGamepadIndex(self, nIndex);
}

static bool
js_ISteamController_GetDigitalActionData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t digitalActionHandle;
	InputDigitalActionData_t result;
	FuncPtr_CHZW17Q ISteamController_GetDigitalActionData;

	ISteamController_GetDigitalActionData = (FuncPtr_CHZW17Q)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetDigitalActionData");
	result = ISteamController_GetDigitalActionData(self, controllerHandle, digitalActionHandle);
}

static bool
js_ISteamController_GetAnalogActionData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint64_t analogActionHandle;
	InputAnalogActionData_t result;
	FuncPtr_VR0SVZA ISteamController_GetAnalogActionData;

	ISteamController_GetAnalogActionData = (FuncPtr_VR0SVZA)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetAnalogActionData");
	result = ISteamController_GetAnalogActionData(self, controllerHandle, analogActionHandle);
}

static bool
js_ISteamController_GetGlyphForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamController_GetGlyphForActionOrigin;

	ISteamController_GetGlyphForActionOrigin = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetGlyphForActionOrigin");
	result = ISteamController_GetGlyphForActionOrigin(self, eOrigin);
}

static bool
js_ISteamController_GetStringForActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamController_GetStringForActionOrigin;

	ISteamController_GetStringForActionOrigin = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetStringForActionOrigin");
	result = ISteamController_GetStringForActionOrigin(self, eOrigin);
}

static bool
js_ISteamController_GetStringForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamController_GetStringForXboxOrigin;

	ISteamController_GetStringForXboxOrigin = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetStringForXboxOrigin");
	result = ISteamController_GetStringForXboxOrigin(self, eOrigin);
}

static bool
js_ISteamController_GetGlyphForXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eOrigin;
	const char * result;
	FuncPtr_G0H05PP ISteamController_GetGlyphForXboxOrigin;

	ISteamController_GetGlyphForXboxOrigin = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetGlyphForXboxOrigin");
	result = ISteamController_GetGlyphForXboxOrigin(self, eOrigin);
}

static bool
js_ISteamController_GetMotionData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	InputMotionData_t result;
	FuncPtr_8VPMC35 ISteamController_GetMotionData;

	ISteamController_GetMotionData = (FuncPtr_8VPMC35)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetMotionData");
	result = ISteamController_GetMotionData(self, controllerHandle);
}

static bool
js_ISteamController_GetInputTypeForHandle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamController_GetInputTypeForHandle;

	ISteamController_GetInputTypeForHandle = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetInputTypeForHandle");
	result = ISteamController_GetInputTypeForHandle(self, controllerHandle);
}

static bool
js_ISteamController_GetActionOriginFromXboxOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t controllerHandle;
	uint32_t eOrigin;
	uint32_t result;
	FuncPtr_8ZU9CZQ ISteamController_GetActionOriginFromXboxOrigin;

	ISteamController_GetActionOriginFromXboxOrigin = (FuncPtr_8ZU9CZQ)GetProcAddress(steam_api, "SteamAPI_ISteamController_GetActionOriginFromXboxOrigin");
	result = ISteamController_GetActionOriginFromXboxOrigin(self, controllerHandle, eOrigin);
}

static bool
js_ISteamController_TranslateActionOrigin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eDestinationInputType;
	uint32_t eSourceOrigin;
	uint32_t result;
	FuncPtr_FDBOCS2 ISteamController_TranslateActionOrigin;

	ISteamController_TranslateActionOrigin = (FuncPtr_FDBOCS2)GetProcAddress(steam_api, "SteamAPI_ISteamController_TranslateActionOrigin");
	result = ISteamController_TranslateActionOrigin(self, eDestinationInputType, eSourceOrigin);
}

static bool
js_ISteamUGC_CreateQueryUserUGCRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unAccountID;
	uint32_t eListType;
	uint32_t eMatchingUGCType;
	uint32_t eSortOrder;
	uint32_t nCreatorAppID;
	uint32_t nConsumerAppID;
	uint32_t unPage;
	uint64_t result;
	FuncPtr_EXQO5KB ISteamUGC_CreateQueryUserUGCRequest;

	ISteamUGC_CreateQueryUserUGCRequest = (FuncPtr_EXQO5KB)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_CreateQueryUserUGCRequest");
	result = ISteamUGC_CreateQueryUserUGCRequest(self, unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

static bool
js_ISteamUGC_CreateQueryAllUGCRequestPage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eQueryType;
	uint32_t eMatchingeMatchingUGCTypeFileType;
	uint32_t nCreatorAppID;
	uint32_t nConsumerAppID;
	uint32_t unPage;
	uint64_t result;
	FuncPtr_141ZMER ISteamUGC_CreateQueryAllUGCRequestPage;

	ISteamUGC_CreateQueryAllUGCRequestPage = (FuncPtr_141ZMER)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage");
	result = ISteamUGC_CreateQueryAllUGCRequestPage(self, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

static bool
js_ISteamUGC_CreateQueryAllUGCRequestCursor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eQueryType;
	uint32_t eMatchingeMatchingUGCTypeFileType;
	uint32_t nCreatorAppID;
	uint32_t nConsumerAppID;
	const char * pchCursor;
	uint64_t result;
	FuncPtr_J60XIMI ISteamUGC_CreateQueryAllUGCRequestCursor;

	ISteamUGC_CreateQueryAllUGCRequestCursor = (FuncPtr_J60XIMI)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor");
	result = ISteamUGC_CreateQueryAllUGCRequestCursor(self, eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
}

static bool
js_ISteamUGC_CreateQueryUGCDetailsRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * pvecPublishedFileID;
	uint32_t unNumPublishedFileIDs;
	uint64_t result;
	FuncPtr_MZL783D ISteamUGC_CreateQueryUGCDetailsRequest;

	ISteamUGC_CreateQueryUGCDetailsRequest = (FuncPtr_MZL783D)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest");
	result = ISteamUGC_CreateQueryUGCDetailsRequest(self, pvecPublishedFileID, unNumPublishedFileIDs);
}

static bool
js_ISteamUGC_SendQueryUGCRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamUGC_SendQueryUGCRequest;

	ISteamUGC_SendQueryUGCRequest = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SendQueryUGCRequest");
	result = ISteamUGC_SendQueryUGCRequest(self, handle);
}

static bool
js_ISteamUGC_RequestUGCDetails(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint32_t unMaxAgeSeconds;
	uint64_t result;
	FuncPtr_PWN3TI5 ISteamUGC_RequestUGCDetails;

	ISteamUGC_RequestUGCDetails = (FuncPtr_PWN3TI5)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RequestUGCDetails");
	result = ISteamUGC_RequestUGCDetails(self, nPublishedFileID, unMaxAgeSeconds);
}

static bool
js_ISteamUGC_CreateItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nConsumerAppId;
	uint32_t eFileType;
	uint64_t result;
	FuncPtr_UJJQ7EM ISteamUGC_CreateItem;

	ISteamUGC_CreateItem = (FuncPtr_UJJQ7EM)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_CreateItem");
	result = ISteamUGC_CreateItem(self, nConsumerAppId, eFileType);
}

static bool
js_ISteamUGC_StartItemUpdate(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nConsumerAppId;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_UYTRDOL ISteamUGC_StartItemUpdate;

	ISteamUGC_StartItemUpdate = (FuncPtr_UYTRDOL)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_StartItemUpdate");
	result = ISteamUGC_StartItemUpdate(self, nConsumerAppId, nPublishedFileID);
}

static bool
js_ISteamUGC_SubmitItemUpdate(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchChangeNote;
	uint64_t result;
	FuncPtr_NF2S9X9 ISteamUGC_SubmitItemUpdate;

	ISteamUGC_SubmitItemUpdate = (FuncPtr_NF2S9X9)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SubmitItemUpdate");
	result = ISteamUGC_SubmitItemUpdate(self, handle, pchChangeNote);
}

static bool
js_ISteamUGC_SetUserItemVote(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	bool bVoteUp;
	uint64_t result;
	FuncPtr_P6L4VQH ISteamUGC_SetUserItemVote;

	ISteamUGC_SetUserItemVote = (FuncPtr_P6L4VQH)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetUserItemVote");
	result = ISteamUGC_SetUserItemVote(self, nPublishedFileID, bVoteUp);
}

static bool
js_ISteamUGC_GetUserItemVote(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamUGC_GetUserItemVote;

	ISteamUGC_GetUserItemVote = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetUserItemVote");
	result = ISteamUGC_GetUserItemVote(self, nPublishedFileID);
}

static bool
js_ISteamUGC_AddItemToFavorites(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppId;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_UYTRDOL ISteamUGC_AddItemToFavorites;

	ISteamUGC_AddItemToFavorites = (FuncPtr_UYTRDOL)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddItemToFavorites");
	result = ISteamUGC_AddItemToFavorites(self, nAppId, nPublishedFileID);
}

static bool
js_ISteamUGC_RemoveItemFromFavorites(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppId;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_UYTRDOL ISteamUGC_RemoveItemFromFavorites;

	ISteamUGC_RemoveItemFromFavorites = (FuncPtr_UYTRDOL)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RemoveItemFromFavorites");
	result = ISteamUGC_RemoveItemFromFavorites(self, nAppId, nPublishedFileID);
}

static bool
js_ISteamUGC_SubscribeItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamUGC_SubscribeItem;

	ISteamUGC_SubscribeItem = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SubscribeItem");
	result = ISteamUGC_SubscribeItem(self, nPublishedFileID);
}

static bool
js_ISteamUGC_UnsubscribeItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamUGC_UnsubscribeItem;

	ISteamUGC_UnsubscribeItem = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_UnsubscribeItem");
	result = ISteamUGC_UnsubscribeItem(self, nPublishedFileID);
}

static bool
js_ISteamUGC_StartPlaytimeTracking(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * pvecPublishedFileID;
	uint32_t unNumPublishedFileIDs;
	uint64_t result;
	FuncPtr_MZL783D ISteamUGC_StartPlaytimeTracking;

	ISteamUGC_StartPlaytimeTracking = (FuncPtr_MZL783D)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_StartPlaytimeTracking");
	result = ISteamUGC_StartPlaytimeTracking(self, pvecPublishedFileID, unNumPublishedFileIDs);
}

static bool
js_ISteamUGC_StopPlaytimeTracking(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * pvecPublishedFileID;
	uint32_t unNumPublishedFileIDs;
	uint64_t result;
	FuncPtr_MZL783D ISteamUGC_StopPlaytimeTracking;

	ISteamUGC_StopPlaytimeTracking = (FuncPtr_MZL783D)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_StopPlaytimeTracking");
	result = ISteamUGC_StopPlaytimeTracking(self, pvecPublishedFileID, unNumPublishedFileIDs);
}

static bool
js_ISteamUGC_StopPlaytimeTrackingForAllItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamUGC_StopPlaytimeTrackingForAllItems;

	ISteamUGC_StopPlaytimeTrackingForAllItems = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems");
	result = ISteamUGC_StopPlaytimeTrackingForAllItems(self);
}

static bool
js_ISteamUGC_AddDependency(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nParentPublishedFileID;
	uint64_t nChildPublishedFileID;
	uint64_t result;
	FuncPtr_Z7KXEAV ISteamUGC_AddDependency;

	ISteamUGC_AddDependency = (FuncPtr_Z7KXEAV)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddDependency");
	result = ISteamUGC_AddDependency(self, nParentPublishedFileID, nChildPublishedFileID);
}

static bool
js_ISteamUGC_RemoveDependency(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nParentPublishedFileID;
	uint64_t nChildPublishedFileID;
	uint64_t result;
	FuncPtr_Z7KXEAV ISteamUGC_RemoveDependency;

	ISteamUGC_RemoveDependency = (FuncPtr_Z7KXEAV)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RemoveDependency");
	result = ISteamUGC_RemoveDependency(self, nParentPublishedFileID, nChildPublishedFileID);
}

static bool
js_ISteamUGC_AddAppDependency(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint32_t nAppID;
	uint64_t result;
	FuncPtr_PWN3TI5 ISteamUGC_AddAppDependency;

	ISteamUGC_AddAppDependency = (FuncPtr_PWN3TI5)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddAppDependency");
	result = ISteamUGC_AddAppDependency(self, nPublishedFileID, nAppID);
}

static bool
js_ISteamUGC_RemoveAppDependency(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint32_t nAppID;
	uint64_t result;
	FuncPtr_PWN3TI5 ISteamUGC_RemoveAppDependency;

	ISteamUGC_RemoveAppDependency = (FuncPtr_PWN3TI5)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RemoveAppDependency");
	result = ISteamUGC_RemoveAppDependency(self, nPublishedFileID, nAppID);
}

static bool
js_ISteamUGC_GetAppDependencies(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamUGC_GetAppDependencies;

	ISteamUGC_GetAppDependencies = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetAppDependencies");
	result = ISteamUGC_GetAppDependencies(self, nPublishedFileID);
}

static bool
js_ISteamUGC_DeleteItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamUGC_DeleteItem;

	ISteamUGC_DeleteItem = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_DeleteItem");
	result = ISteamUGC_DeleteItem(self, nPublishedFileID);
}

static bool
js_ISteamUGC_GetWorkshopEULAStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamUGC_GetWorkshopEULAStatus;

	ISteamUGC_GetWorkshopEULAStatus = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetWorkshopEULAStatus");
	result = ISteamUGC_GetWorkshopEULAStatus(self);
}

static bool
js_ISteamUGC_GetQueryUGCResult(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	SteamUGCDetails_t * pDetails;
	bool result;
	FuncPtr_ZS1ODO1 ISteamUGC_GetQueryUGCResult;

	ISteamUGC_GetQueryUGCResult = (FuncPtr_ZS1ODO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCResult");
	result = ISteamUGC_GetQueryUGCResult(self, handle, index, pDetails);
}

static bool
js_ISteamUGC_GetQueryUGCTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t indexTag;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_GD9SQE3 ISteamUGC_GetQueryUGCTag;

	ISteamUGC_GetQueryUGCTag = (FuncPtr_GD9SQE3)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCTag");
	result = ISteamUGC_GetQueryUGCTag(self, handle, index, indexTag, pchValue, cchValueSize);
}

static bool
js_ISteamUGC_GetQueryUGCTagDisplayName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t indexTag;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_GD9SQE3 ISteamUGC_GetQueryUGCTagDisplayName;

	ISteamUGC_GetQueryUGCTagDisplayName = (FuncPtr_GD9SQE3)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName");
	result = ISteamUGC_GetQueryUGCTagDisplayName(self, handle, index, indexTag, pchValue, cchValueSize);
}

static bool
js_ISteamUGC_GetQueryUGCPreviewURL(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	char * pchURL;
	uint32_t cchURLSize;
	bool result;
	FuncPtr_I1VRDLC ISteamUGC_GetQueryUGCPreviewURL;

	ISteamUGC_GetQueryUGCPreviewURL = (FuncPtr_I1VRDLC)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCPreviewURL");
	result = ISteamUGC_GetQueryUGCPreviewURL(self, handle, index, pchURL, cchURLSize);
}

static bool
js_ISteamUGC_GetQueryUGCMetadata(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	char * pchMetadata;
	uint32_t cchMetadatasize;
	bool result;
	FuncPtr_I1VRDLC ISteamUGC_GetQueryUGCMetadata;

	ISteamUGC_GetQueryUGCMetadata = (FuncPtr_I1VRDLC)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCMetadata");
	result = ISteamUGC_GetQueryUGCMetadata(self, handle, index, pchMetadata, cchMetadatasize);
}

static bool
js_ISteamUGC_GetQueryUGCChildren(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint64_t * pvecPublishedFileID;
	uint32_t cMaxEntries;
	bool result;
	FuncPtr_8VYZB90 ISteamUGC_GetQueryUGCChildren;

	ISteamUGC_GetQueryUGCChildren = (FuncPtr_8VYZB90)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCChildren");
	result = ISteamUGC_GetQueryUGCChildren(self, handle, index, pvecPublishedFileID, cMaxEntries);
}

static bool
js_ISteamUGC_GetQueryUGCStatistic(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t eStatType;
	uint64_t * pStatValue;
	bool result;
	FuncPtr_2HW9KW2 ISteamUGC_GetQueryUGCStatistic;

	ISteamUGC_GetQueryUGCStatistic = (FuncPtr_2HW9KW2)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCStatistic");
	result = ISteamUGC_GetQueryUGCStatistic(self, handle, index, eStatType, pStatValue);
}

static bool
js_ISteamUGC_GetQueryUGCAdditionalPreview(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t previewIndex;
	char * pchURLOrVideoID;
	uint32_t cchURLSize;
	char * pchOriginalFileName;
	uint32_t cchOriginalFileNameSize;
	uint32_t * pPreviewType;
	bool result;
	FuncPtr_A70981U ISteamUGC_GetQueryUGCAdditionalPreview;

	ISteamUGC_GetQueryUGCAdditionalPreview = (FuncPtr_A70981U)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview");
	result = ISteamUGC_GetQueryUGCAdditionalPreview(self, handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}

static bool
js_ISteamUGC_GetQueryUGCKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t keyValueTagIndex;
	char * pchKey;
	uint32_t cchKeySize;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_9A2QKTN ISteamUGC_GetQueryUGCKeyValueTag;

	ISteamUGC_GetQueryUGCKeyValueTag = (FuncPtr_9A2QKTN)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag");
	result = ISteamUGC_GetQueryUGCKeyValueTag(self, handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

static bool
js_ISteamUGC_GetQueryFirstUGCKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	const char * pchKey;
	char * pchValue;
	uint32_t cchValueSize;
	bool result;
	FuncPtr_A2GBW45 ISteamUGC_GetQueryFirstUGCKeyValueTag;

	ISteamUGC_GetQueryFirstUGCKeyValueTag = (FuncPtr_A2GBW45)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag");
	result = ISteamUGC_GetQueryFirstUGCKeyValueTag(self, handle, index, pchKey, pchValue, cchValueSize);
}

static bool
js_ISteamUGC_ReleaseQueryUGCRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool result;
	FuncPtr_9MUN1QC ISteamUGC_ReleaseQueryUGCRequest;

	ISteamUGC_ReleaseQueryUGCRequest = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_ReleaseQueryUGCRequest");
	result = ISteamUGC_ReleaseQueryUGCRequest(self, handle);
}

static bool
js_ISteamUGC_AddRequiredTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pTagName;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_AddRequiredTag;

	ISteamUGC_AddRequiredTag = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddRequiredTag");
	result = ISteamUGC_AddRequiredTag(self, handle, pTagName);
}

static bool
js_ISteamUGC_AddRequiredTagGroup(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const SteamParamStringArray_t * pTagGroups;
	bool result;
	FuncPtr_1AF4UEI ISteamUGC_AddRequiredTagGroup;

	ISteamUGC_AddRequiredTagGroup = (FuncPtr_1AF4UEI)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddRequiredTagGroup");
	result = ISteamUGC_AddRequiredTagGroup(self, handle, pTagGroups);
}

static bool
js_ISteamUGC_AddExcludedTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pTagName;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_AddExcludedTag;

	ISteamUGC_AddExcludedTag = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddExcludedTag");
	result = ISteamUGC_AddExcludedTag(self, handle, pTagName);
}

static bool
js_ISteamUGC_SetReturnOnlyIDs(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bReturnOnlyIDs;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetReturnOnlyIDs;

	ISteamUGC_SetReturnOnlyIDs = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnOnlyIDs");
	result = ISteamUGC_SetReturnOnlyIDs(self, handle, bReturnOnlyIDs);
}

static bool
js_ISteamUGC_SetReturnKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bReturnKeyValueTags;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetReturnKeyValueTags;

	ISteamUGC_SetReturnKeyValueTags = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnKeyValueTags");
	result = ISteamUGC_SetReturnKeyValueTags(self, handle, bReturnKeyValueTags);
}

static bool
js_ISteamUGC_SetReturnLongDescription(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bReturnLongDescription;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetReturnLongDescription;

	ISteamUGC_SetReturnLongDescription = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnLongDescription");
	result = ISteamUGC_SetReturnLongDescription(self, handle, bReturnLongDescription);
}

static bool
js_ISteamUGC_SetReturnMetadata(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bReturnMetadata;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetReturnMetadata;

	ISteamUGC_SetReturnMetadata = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnMetadata");
	result = ISteamUGC_SetReturnMetadata(self, handle, bReturnMetadata);
}

static bool
js_ISteamUGC_SetReturnChildren(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bReturnChildren;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetReturnChildren;

	ISteamUGC_SetReturnChildren = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnChildren");
	result = ISteamUGC_SetReturnChildren(self, handle, bReturnChildren);
}

static bool
js_ISteamUGC_SetReturnAdditionalPreviews(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bReturnAdditionalPreviews;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetReturnAdditionalPreviews;

	ISteamUGC_SetReturnAdditionalPreviews = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnAdditionalPreviews");
	result = ISteamUGC_SetReturnAdditionalPreviews(self, handle, bReturnAdditionalPreviews);
}

static bool
js_ISteamUGC_SetReturnTotalOnly(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bReturnTotalOnly;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetReturnTotalOnly;

	ISteamUGC_SetReturnTotalOnly = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnTotalOnly");
	result = ISteamUGC_SetReturnTotalOnly(self, handle, bReturnTotalOnly);
}

static bool
js_ISteamUGC_SetReturnPlaytimeStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t unDays;
	bool result;
	FuncPtr_GF74AYO ISteamUGC_SetReturnPlaytimeStats;

	ISteamUGC_SetReturnPlaytimeStats = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetReturnPlaytimeStats");
	result = ISteamUGC_SetReturnPlaytimeStats(self, handle, unDays);
}

static bool
js_ISteamUGC_SetLanguage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchLanguage;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetLanguage;

	ISteamUGC_SetLanguage = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetLanguage");
	result = ISteamUGC_SetLanguage(self, handle, pchLanguage);
}

static bool
js_ISteamUGC_SetAllowCachedResponse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t unMaxAgeSeconds;
	bool result;
	FuncPtr_GF74AYO ISteamUGC_SetAllowCachedResponse;

	ISteamUGC_SetAllowCachedResponse = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetAllowCachedResponse");
	result = ISteamUGC_SetAllowCachedResponse(self, handle, unMaxAgeSeconds);
}

static bool
js_ISteamUGC_SetCloudFileNameFilter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pMatchCloudFileName;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetCloudFileNameFilter;

	ISteamUGC_SetCloudFileNameFilter = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetCloudFileNameFilter");
	result = ISteamUGC_SetCloudFileNameFilter(self, handle, pMatchCloudFileName);
}

static bool
js_ISteamUGC_SetMatchAnyTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bMatchAnyTag;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetMatchAnyTag;

	ISteamUGC_SetMatchAnyTag = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetMatchAnyTag");
	result = ISteamUGC_SetMatchAnyTag(self, handle, bMatchAnyTag);
}

static bool
js_ISteamUGC_SetSearchText(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pSearchText;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetSearchText;

	ISteamUGC_SetSearchText = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetSearchText");
	result = ISteamUGC_SetSearchText(self, handle, pSearchText);
}

static bool
js_ISteamUGC_SetRankedByTrendDays(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t unDays;
	bool result;
	FuncPtr_GF74AYO ISteamUGC_SetRankedByTrendDays;

	ISteamUGC_SetRankedByTrendDays = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetRankedByTrendDays");
	result = ISteamUGC_SetRankedByTrendDays(self, handle, unDays);
}

static bool
js_ISteamUGC_SetTimeCreatedDateRange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t rtStart;
	uint32_t rtEnd;
	bool result;
	FuncPtr_0WTJHBH ISteamUGC_SetTimeCreatedDateRange;

	ISteamUGC_SetTimeCreatedDateRange = (FuncPtr_0WTJHBH)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetTimeCreatedDateRange");
	result = ISteamUGC_SetTimeCreatedDateRange(self, handle, rtStart, rtEnd);
}

static bool
js_ISteamUGC_SetTimeUpdatedDateRange(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t rtStart;
	uint32_t rtEnd;
	bool result;
	FuncPtr_0WTJHBH ISteamUGC_SetTimeUpdatedDateRange;

	ISteamUGC_SetTimeUpdatedDateRange = (FuncPtr_0WTJHBH)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetTimeUpdatedDateRange");
	result = ISteamUGC_SetTimeUpdatedDateRange(self, handle, rtStart, rtEnd);
}

static bool
js_ISteamUGC_AddRequiredKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pKey;
	const char * pValue;
	bool result;
	FuncPtr_RSFEOV3 ISteamUGC_AddRequiredKeyValueTag;

	ISteamUGC_AddRequiredKeyValueTag = (FuncPtr_RSFEOV3)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddRequiredKeyValueTag");
	result = ISteamUGC_AddRequiredKeyValueTag(self, handle, pKey, pValue);
}

static bool
js_ISteamUGC_SetItemTitle(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchTitle;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetItemTitle;

	ISteamUGC_SetItemTitle = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemTitle");
	result = ISteamUGC_SetItemTitle(self, handle, pchTitle);
}

static bool
js_ISteamUGC_SetItemDescription(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchDescription;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetItemDescription;

	ISteamUGC_SetItemDescription = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemDescription");
	result = ISteamUGC_SetItemDescription(self, handle, pchDescription);
}

static bool
js_ISteamUGC_SetItemUpdateLanguage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchLanguage;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetItemUpdateLanguage;

	ISteamUGC_SetItemUpdateLanguage = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemUpdateLanguage");
	result = ISteamUGC_SetItemUpdateLanguage(self, handle, pchLanguage);
}

static bool
js_ISteamUGC_SetItemMetadata(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchMetaData;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetItemMetadata;

	ISteamUGC_SetItemMetadata = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemMetadata");
	result = ISteamUGC_SetItemMetadata(self, handle, pchMetaData);
}

static bool
js_ISteamUGC_SetItemVisibility(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t eVisibility;
	bool result;
	FuncPtr_GF74AYO ISteamUGC_SetItemVisibility;

	ISteamUGC_SetItemVisibility = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemVisibility");
	result = ISteamUGC_SetItemVisibility(self, handle, eVisibility);
}

static bool
js_ISteamUGC_SetItemTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t updateHandle;
	const SteamParamStringArray_t * pTags;
	bool bAllowAdminTags;
	bool result;
	FuncPtr_M42CC7I ISteamUGC_SetItemTags;

	ISteamUGC_SetItemTags = (FuncPtr_M42CC7I)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemTags");
	result = ISteamUGC_SetItemTags(self, updateHandle, pTags, bAllowAdminTags);
}

static bool
js_ISteamUGC_SetItemContent(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pszContentFolder;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetItemContent;

	ISteamUGC_SetItemContent = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemContent");
	result = ISteamUGC_SetItemContent(self, handle, pszContentFolder);
}

static bool
js_ISteamUGC_SetItemPreview(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pszPreviewFile;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_SetItemPreview;

	ISteamUGC_SetItemPreview = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetItemPreview");
	result = ISteamUGC_SetItemPreview(self, handle, pszPreviewFile);
}

static bool
js_ISteamUGC_SetAllowLegacyUpload(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool bAllowLegacyUpload;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_SetAllowLegacyUpload;

	ISteamUGC_SetAllowLegacyUpload = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SetAllowLegacyUpload");
	result = ISteamUGC_SetAllowLegacyUpload(self, handle, bAllowLegacyUpload);
}

static bool
js_ISteamUGC_RemoveAllItemKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	bool result;
	FuncPtr_9MUN1QC ISteamUGC_RemoveAllItemKeyValueTags;

	ISteamUGC_RemoveAllItemKeyValueTags = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags");
	result = ISteamUGC_RemoveAllItemKeyValueTags(self, handle);
}

static bool
js_ISteamUGC_RemoveItemKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchKey;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_RemoveItemKeyValueTags;

	ISteamUGC_RemoveItemKeyValueTags = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RemoveItemKeyValueTags");
	result = ISteamUGC_RemoveItemKeyValueTags(self, handle, pchKey);
}

static bool
js_ISteamUGC_AddItemKeyValueTag(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pchKey;
	const char * pchValue;
	bool result;
	FuncPtr_RSFEOV3 ISteamUGC_AddItemKeyValueTag;

	ISteamUGC_AddItemKeyValueTag = (FuncPtr_RSFEOV3)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddItemKeyValueTag");
	result = ISteamUGC_AddItemKeyValueTag(self, handle, pchKey, pchValue);
}

static bool
js_ISteamUGC_AddItemPreviewFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pszPreviewFile;
	uint32_t type;
	bool result;
	FuncPtr_B0QQLAS ISteamUGC_AddItemPreviewFile;

	ISteamUGC_AddItemPreviewFile = (FuncPtr_B0QQLAS)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddItemPreviewFile");
	result = ISteamUGC_AddItemPreviewFile(self, handle, pszPreviewFile, type);
}

static bool
js_ISteamUGC_AddItemPreviewVideo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	const char * pszVideoID;
	bool result;
	FuncPtr_46B6E53 ISteamUGC_AddItemPreviewVideo;

	ISteamUGC_AddItemPreviewVideo = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddItemPreviewVideo");
	result = ISteamUGC_AddItemPreviewVideo(self, handle, pszVideoID);
}

static bool
js_ISteamUGC_UpdateItemPreviewFile(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	const char * pszPreviewFile;
	bool result;
	FuncPtr_D5EVUKV ISteamUGC_UpdateItemPreviewFile;

	ISteamUGC_UpdateItemPreviewFile = (FuncPtr_D5EVUKV)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_UpdateItemPreviewFile");
	result = ISteamUGC_UpdateItemPreviewFile(self, handle, index, pszPreviewFile);
}

static bool
js_ISteamUGC_UpdateItemPreviewVideo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	const char * pszVideoID;
	bool result;
	FuncPtr_D5EVUKV ISteamUGC_UpdateItemPreviewVideo;

	ISteamUGC_UpdateItemPreviewVideo = (FuncPtr_D5EVUKV)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_UpdateItemPreviewVideo");
	result = ISteamUGC_UpdateItemPreviewVideo(self, handle, index, pszVideoID);
}

static bool
js_ISteamUGC_RemoveItemPreview(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	bool result;
	FuncPtr_GF74AYO ISteamUGC_RemoveItemPreview;

	ISteamUGC_RemoveItemPreview = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RemoveItemPreview");
	result = ISteamUGC_RemoveItemPreview(self, handle, index);
}

static bool
js_ISteamUGC_AddContentDescriptor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t descid;
	bool result;
	FuncPtr_GF74AYO ISteamUGC_AddContentDescriptor;

	ISteamUGC_AddContentDescriptor = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_AddContentDescriptor");
	result = ISteamUGC_AddContentDescriptor(self, handle, descid);
}

static bool
js_ISteamUGC_RemoveContentDescriptor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t descid;
	bool result;
	FuncPtr_GF74AYO ISteamUGC_RemoveContentDescriptor;

	ISteamUGC_RemoveContentDescriptor = (FuncPtr_GF74AYO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_RemoveContentDescriptor");
	result = ISteamUGC_RemoveContentDescriptor(self, handle, descid);
}

static bool
js_ISteamUGC_GetItemInstallInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint64_t * punSizeOnDisk;
	char * pchFolder;
	uint32_t cchFolderSize;
	uint32_t * punTimeStamp;
	bool result;
	FuncPtr_V8ML2ZO ISteamUGC_GetItemInstallInfo;

	ISteamUGC_GetItemInstallInfo = (FuncPtr_V8ML2ZO)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetItemInstallInfo");
	result = ISteamUGC_GetItemInstallInfo(self, nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
}

static bool
js_ISteamUGC_GetItemDownloadInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint64_t * punBytesDownloaded;
	uint64_t * punBytesTotal;
	bool result;
	FuncPtr_G83X4KD ISteamUGC_GetItemDownloadInfo;

	ISteamUGC_GetItemDownloadInfo = (FuncPtr_G83X4KD)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetItemDownloadInfo");
	result = ISteamUGC_GetItemDownloadInfo(self, nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

static bool
js_ISteamUGC_DownloadItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	bool bHighPriority;
	bool result;
	FuncPtr_LFP1UO1 ISteamUGC_DownloadItem;

	ISteamUGC_DownloadItem = (FuncPtr_LFP1UO1)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_DownloadItem");
	result = ISteamUGC_DownloadItem(self, nPublishedFileID, bHighPriority);
}

static bool
js_ISteamUGC_BInitWorkshopForGameServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unWorkshopDepotID;
	const char * pszFolder;
	bool result;
	FuncPtr_C7SQD3V ISteamUGC_BInitWorkshopForGameServer;

	ISteamUGC_BInitWorkshopForGameServer = (FuncPtr_C7SQD3V)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_BInitWorkshopForGameServer");
	result = ISteamUGC_BInitWorkshopForGameServer(self, unWorkshopDepotID, pszFolder);
}

static bool
js_ISteamUGC_ShowWorkshopEULA(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamUGC_ShowWorkshopEULA;

	ISteamUGC_ShowWorkshopEULA = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_ShowWorkshopEULA");
	result = ISteamUGC_ShowWorkshopEULA(self);
}

static bool
js_ISteamUGC_GetQueryUGCNumTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t result;
	FuncPtr_8ZU9CZQ ISteamUGC_GetQueryUGCNumTags;

	ISteamUGC_GetQueryUGCNumTags = (FuncPtr_8ZU9CZQ)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCNumTags");
	result = ISteamUGC_GetQueryUGCNumTags(self, handle, index);
}

static bool
js_ISteamUGC_GetQueryUGCNumAdditionalPreviews(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t result;
	FuncPtr_8ZU9CZQ ISteamUGC_GetQueryUGCNumAdditionalPreviews;

	ISteamUGC_GetQueryUGCNumAdditionalPreviews = (FuncPtr_8ZU9CZQ)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews");
	result = ISteamUGC_GetQueryUGCNumAdditionalPreviews(self, handle, index);
}

static bool
js_ISteamUGC_GetQueryUGCNumKeyValueTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t result;
	FuncPtr_8ZU9CZQ ISteamUGC_GetQueryUGCNumKeyValueTags;

	ISteamUGC_GetQueryUGCNumKeyValueTags = (FuncPtr_8ZU9CZQ)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags");
	result = ISteamUGC_GetQueryUGCNumKeyValueTags(self, handle, index);
}

static bool
js_ISteamUGC_GetQueryUGCContentDescriptors(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint32_t index;
	uint32_t * pvecDescriptors;
	uint32_t cMaxEntries;
	uint32_t result;
	FuncPtr_XWA6K00 ISteamUGC_GetQueryUGCContentDescriptors;

	ISteamUGC_GetQueryUGCContentDescriptors = (FuncPtr_XWA6K00)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors");
	result = ISteamUGC_GetQueryUGCContentDescriptors(self, handle, index, pvecDescriptors, cMaxEntries);
}

static bool
js_ISteamUGC_GetItemUpdateProgress(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint64_t * punBytesProcessed;
	uint64_t * punBytesTotal;
	uint32_t result;
	FuncPtr_ER06W62 ISteamUGC_GetItemUpdateProgress;

	ISteamUGC_GetItemUpdateProgress = (FuncPtr_ER06W62)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetItemUpdateProgress");
	result = ISteamUGC_GetItemUpdateProgress(self, handle, punBytesProcessed, punBytesTotal);
}

static bool
js_ISteamUGC_GetNumSubscribedItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamUGC_GetNumSubscribedItems;

	ISteamUGC_GetNumSubscribedItems = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetNumSubscribedItems");
	result = ISteamUGC_GetNumSubscribedItems(self);
}

static bool
js_ISteamUGC_GetSubscribedItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t * pvecPublishedFileID;
	uint32_t cMaxEntries;
	uint32_t result;
	FuncPtr_1DL64ZG ISteamUGC_GetSubscribedItems;

	ISteamUGC_GetSubscribedItems = (FuncPtr_1DL64ZG)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetSubscribedItems");
	result = ISteamUGC_GetSubscribedItems(self, pvecPublishedFileID, cMaxEntries);
}

static bool
js_ISteamUGC_GetItemState(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t nPublishedFileID;
	uint32_t result;
	FuncPtr_HRQIXGN ISteamUGC_GetItemState;

	ISteamUGC_GetItemState = (FuncPtr_HRQIXGN)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetItemState");
	result = ISteamUGC_GetItemState(self, nPublishedFileID);
}

static bool
js_ISteamUGC_GetUserContentDescriptorPreferences(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * pvecDescriptors;
	uint32_t cMaxEntries;
	uint32_t result;
	FuncPtr_DOJ5AGZ ISteamUGC_GetUserContentDescriptorPreferences;

	ISteamUGC_GetUserContentDescriptorPreferences = (FuncPtr_DOJ5AGZ)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences");
	result = ISteamUGC_GetUserContentDescriptorPreferences(self, pvecDescriptors, cMaxEntries);
}

static bool
js_ISteamUGC_SuspendDownloads(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bSuspend;
	FuncPtr_Z2CYP0L ISteamUGC_SuspendDownloads;

	ISteamUGC_SuspendDownloads = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamUGC_SuspendDownloads");
	ISteamUGC_SuspendDownloads(self, bSuspend);
}

static bool
js_ISteamAppList_GetNumInstalledApps(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamAppList_GetNumInstalledApps;

	ISteamAppList_GetNumInstalledApps = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamAppList_GetNumInstalledApps");
	result = ISteamAppList_GetNumInstalledApps(self);
}

static bool
js_ISteamAppList_GetInstalledApps(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * pvecAppID;
	uint32_t unMaxAppIDs;
	uint32_t result;
	FuncPtr_DOJ5AGZ ISteamAppList_GetInstalledApps;

	ISteamAppList_GetInstalledApps = (FuncPtr_DOJ5AGZ)GetProcAddress(steam_api, "SteamAPI_ISteamAppList_GetInstalledApps");
	result = ISteamAppList_GetInstalledApps(self, pvecAppID, unMaxAppIDs);
}

static bool
js_ISteamAppList_GetAppName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	char * pchName;
	int32_t cchNameMax;
	int32_t result;
	FuncPtr_ADKFPOE ISteamAppList_GetAppName;

	ISteamAppList_GetAppName = (FuncPtr_ADKFPOE)GetProcAddress(steam_api, "SteamAPI_ISteamAppList_GetAppName");
	result = ISteamAppList_GetAppName(self, nAppID, pchName, cchNameMax);
}

static bool
js_ISteamAppList_GetAppInstallDir(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	char * pchDirectory;
	int32_t cchNameMax;
	int32_t result;
	FuncPtr_ADKFPOE ISteamAppList_GetAppInstallDir;

	ISteamAppList_GetAppInstallDir = (FuncPtr_ADKFPOE)GetProcAddress(steam_api, "SteamAPI_ISteamAppList_GetAppInstallDir");
	result = ISteamAppList_GetAppInstallDir(self, nAppID, pchDirectory, cchNameMax);
}

static bool
js_ISteamAppList_GetAppBuildId(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	int32_t result;
	FuncPtr_5LIK133 ISteamAppList_GetAppBuildId;

	ISteamAppList_GetAppBuildId = (FuncPtr_5LIK133)GetProcAddress(steam_api, "SteamAPI_ISteamAppList_GetAppBuildId");
	result = ISteamAppList_GetAppBuildId(self, nAppID);
}

static bool
js_ISteamHTMLSurface_Init(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamHTMLSurface_Init;

	ISteamHTMLSurface_Init = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_Init");
	result = ISteamHTMLSurface_Init(self);
}

static bool
js_ISteamHTMLSurface_Shutdown(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamHTMLSurface_Shutdown;

	ISteamHTMLSurface_Shutdown = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_Shutdown");
	result = ISteamHTMLSurface_Shutdown(self);
}

static bool
js_ISteamHTMLSurface_CreateBrowser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchUserAgent;
	const char * pchUserCSS;
	uint64_t result;
	FuncPtr_0EN8SYN ISteamHTMLSurface_CreateBrowser;

	ISteamHTMLSurface_CreateBrowser = (FuncPtr_0EN8SYN)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_CreateBrowser");
	result = ISteamHTMLSurface_CreateBrowser(self, pchUserAgent, pchUserCSS);
}

static bool
js_ISteamHTMLSurface_RemoveBrowser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_RemoveBrowser;

	ISteamHTMLSurface_RemoveBrowser = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_RemoveBrowser");
	ISteamHTMLSurface_RemoveBrowser(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_LoadURL(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	const char * pchURL;
	const char * pchPostData;
	FuncPtr_N3ELVBW ISteamHTMLSurface_LoadURL;

	ISteamHTMLSurface_LoadURL = (FuncPtr_N3ELVBW)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_LoadURL");
	ISteamHTMLSurface_LoadURL(self, unBrowserHandle, pchURL, pchPostData);
}

static bool
js_ISteamHTMLSurface_SetSize(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t unWidth;
	uint32_t unHeight;
	FuncPtr_PC8GW3Y ISteamHTMLSurface_SetSize;

	ISteamHTMLSurface_SetSize = (FuncPtr_PC8GW3Y)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetSize");
	ISteamHTMLSurface_SetSize(self, unBrowserHandle, unWidth, unHeight);
}

static bool
js_ISteamHTMLSurface_StopLoad(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_StopLoad;

	ISteamHTMLSurface_StopLoad = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_StopLoad");
	ISteamHTMLSurface_StopLoad(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_Reload(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_Reload;

	ISteamHTMLSurface_Reload = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_Reload");
	ISteamHTMLSurface_Reload(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_GoBack(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_GoBack;

	ISteamHTMLSurface_GoBack = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_GoBack");
	ISteamHTMLSurface_GoBack(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_GoForward(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_GoForward;

	ISteamHTMLSurface_GoForward = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_GoForward");
	ISteamHTMLSurface_GoForward(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_AddHeader(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	const char * pchKey;
	const char * pchValue;
	FuncPtr_N3ELVBW ISteamHTMLSurface_AddHeader;

	ISteamHTMLSurface_AddHeader = (FuncPtr_N3ELVBW)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_AddHeader");
	ISteamHTMLSurface_AddHeader(self, unBrowserHandle, pchKey, pchValue);
}

static bool
js_ISteamHTMLSurface_ExecuteJavascript(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	const char * pchScript;
	FuncPtr_VF34662 ISteamHTMLSurface_ExecuteJavascript;

	ISteamHTMLSurface_ExecuteJavascript = (FuncPtr_VF34662)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_ExecuteJavascript");
	ISteamHTMLSurface_ExecuteJavascript(self, unBrowserHandle, pchScript);
}

static bool
js_ISteamHTMLSurface_MouseUp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t eMouseButton;
	FuncPtr_B7L2KIJ ISteamHTMLSurface_MouseUp;

	ISteamHTMLSurface_MouseUp = (FuncPtr_B7L2KIJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_MouseUp");
	ISteamHTMLSurface_MouseUp(self, unBrowserHandle, eMouseButton);
}

static bool
js_ISteamHTMLSurface_MouseDown(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t eMouseButton;
	FuncPtr_B7L2KIJ ISteamHTMLSurface_MouseDown;

	ISteamHTMLSurface_MouseDown = (FuncPtr_B7L2KIJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_MouseDown");
	ISteamHTMLSurface_MouseDown(self, unBrowserHandle, eMouseButton);
}

static bool
js_ISteamHTMLSurface_MouseDoubleClick(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t eMouseButton;
	FuncPtr_B7L2KIJ ISteamHTMLSurface_MouseDoubleClick;

	ISteamHTMLSurface_MouseDoubleClick = (FuncPtr_B7L2KIJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_MouseDoubleClick");
	ISteamHTMLSurface_MouseDoubleClick(self, unBrowserHandle, eMouseButton);
}

static bool
js_ISteamHTMLSurface_MouseMove(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	int32_t x;
	int32_t y;
	FuncPtr_C80CUZ7 ISteamHTMLSurface_MouseMove;

	ISteamHTMLSurface_MouseMove = (FuncPtr_C80CUZ7)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_MouseMove");
	ISteamHTMLSurface_MouseMove(self, unBrowserHandle, x, y);
}

static bool
js_ISteamHTMLSurface_MouseWheel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	int32_t nDelta;
	FuncPtr_WINR73F ISteamHTMLSurface_MouseWheel;

	ISteamHTMLSurface_MouseWheel = (FuncPtr_WINR73F)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_MouseWheel");
	ISteamHTMLSurface_MouseWheel(self, unBrowserHandle, nDelta);
}

static bool
js_ISteamHTMLSurface_KeyDown(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t nNativeKeyCode;
	uint32_t eHTMLKeyModifiers;
	bool bIsSystemKey;
	FuncPtr_TL3U53J ISteamHTMLSurface_KeyDown;

	ISteamHTMLSurface_KeyDown = (FuncPtr_TL3U53J)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_KeyDown");
	ISteamHTMLSurface_KeyDown(self, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers, bIsSystemKey);
}

static bool
js_ISteamHTMLSurface_KeyUp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t nNativeKeyCode;
	uint32_t eHTMLKeyModifiers;
	FuncPtr_PC8GW3Y ISteamHTMLSurface_KeyUp;

	ISteamHTMLSurface_KeyUp = (FuncPtr_PC8GW3Y)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_KeyUp");
	ISteamHTMLSurface_KeyUp(self, unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

static bool
js_ISteamHTMLSurface_KeyChar(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t cUnicodeChar;
	uint32_t eHTMLKeyModifiers;
	FuncPtr_PC8GW3Y ISteamHTMLSurface_KeyChar;

	ISteamHTMLSurface_KeyChar = (FuncPtr_PC8GW3Y)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_KeyChar");
	ISteamHTMLSurface_KeyChar(self, unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

static bool
js_ISteamHTMLSurface_SetHorizontalScroll(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t nAbsolutePixelScroll;
	FuncPtr_B7L2KIJ ISteamHTMLSurface_SetHorizontalScroll;

	ISteamHTMLSurface_SetHorizontalScroll = (FuncPtr_B7L2KIJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetHorizontalScroll");
	ISteamHTMLSurface_SetHorizontalScroll(self, unBrowserHandle, nAbsolutePixelScroll);
}

static bool
js_ISteamHTMLSurface_SetVerticalScroll(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	uint32_t nAbsolutePixelScroll;
	FuncPtr_B7L2KIJ ISteamHTMLSurface_SetVerticalScroll;

	ISteamHTMLSurface_SetVerticalScroll = (FuncPtr_B7L2KIJ)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetVerticalScroll");
	ISteamHTMLSurface_SetVerticalScroll(self, unBrowserHandle, nAbsolutePixelScroll);
}

static bool
js_ISteamHTMLSurface_SetKeyFocus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	bool bHasKeyFocus;
	FuncPtr_8KIREDM ISteamHTMLSurface_SetKeyFocus;

	ISteamHTMLSurface_SetKeyFocus = (FuncPtr_8KIREDM)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetKeyFocus");
	ISteamHTMLSurface_SetKeyFocus(self, unBrowserHandle, bHasKeyFocus);
}

static bool
js_ISteamHTMLSurface_ViewSource(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_ViewSource;

	ISteamHTMLSurface_ViewSource = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_ViewSource");
	ISteamHTMLSurface_ViewSource(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_CopyToClipboard(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_CopyToClipboard;

	ISteamHTMLSurface_CopyToClipboard = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_CopyToClipboard");
	ISteamHTMLSurface_CopyToClipboard(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_PasteFromClipboard(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_PasteFromClipboard;

	ISteamHTMLSurface_PasteFromClipboard = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_PasteFromClipboard");
	ISteamHTMLSurface_PasteFromClipboard(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_Find(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	const char * pchSearchStr;
	bool bCurrentlyInFind;
	bool bReverse;
	FuncPtr_DRGUR2P ISteamHTMLSurface_Find;

	ISteamHTMLSurface_Find = (FuncPtr_DRGUR2P)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_Find");
	ISteamHTMLSurface_Find(self, unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

static bool
js_ISteamHTMLSurface_StopFind(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_StopFind;

	ISteamHTMLSurface_StopFind = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_StopFind");
	ISteamHTMLSurface_StopFind(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_GetLinkAtPosition(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	int32_t x;
	int32_t y;
	FuncPtr_C80CUZ7 ISteamHTMLSurface_GetLinkAtPosition;

	ISteamHTMLSurface_GetLinkAtPosition = (FuncPtr_C80CUZ7)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_GetLinkAtPosition");
	ISteamHTMLSurface_GetLinkAtPosition(self, unBrowserHandle, x, y);
}

static bool
js_ISteamHTMLSurface_SetCookie(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchHostname;
	const char * pchKey;
	const char * pchValue;
	const char * pchPath;
	uint32_t nExpires;
	bool bSecure;
	bool bHTTPOnly;
	FuncPtr_UIO0LTQ ISteamHTMLSurface_SetCookie;

	ISteamHTMLSurface_SetCookie = (FuncPtr_UIO0LTQ)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetCookie");
	ISteamHTMLSurface_SetCookie(self, pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

static bool
js_ISteamHTMLSurface_SetPageScaleFactor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	float flZoom;
	int32_t nPointX;
	int32_t nPointY;
	FuncPtr_XOO7UUN ISteamHTMLSurface_SetPageScaleFactor;

	ISteamHTMLSurface_SetPageScaleFactor = (FuncPtr_XOO7UUN)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetPageScaleFactor");
	ISteamHTMLSurface_SetPageScaleFactor(self, unBrowserHandle, flZoom, nPointX, nPointY);
}

static bool
js_ISteamHTMLSurface_SetBackgroundMode(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	bool bBackgroundMode;
	FuncPtr_8KIREDM ISteamHTMLSurface_SetBackgroundMode;

	ISteamHTMLSurface_SetBackgroundMode = (FuncPtr_8KIREDM)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetBackgroundMode");
	ISteamHTMLSurface_SetBackgroundMode(self, unBrowserHandle, bBackgroundMode);
}

static bool
js_ISteamHTMLSurface_SetDPIScalingFactor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	float flDPIScaling;
	FuncPtr_PKSQVNS ISteamHTMLSurface_SetDPIScalingFactor;

	ISteamHTMLSurface_SetDPIScalingFactor = (FuncPtr_PKSQVNS)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor");
	ISteamHTMLSurface_SetDPIScalingFactor(self, unBrowserHandle, flDPIScaling);
}

static bool
js_ISteamHTMLSurface_OpenDeveloperTools(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	FuncPtr_QX4IH25 ISteamHTMLSurface_OpenDeveloperTools;

	ISteamHTMLSurface_OpenDeveloperTools = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_OpenDeveloperTools");
	ISteamHTMLSurface_OpenDeveloperTools(self, unBrowserHandle);
}

static bool
js_ISteamHTMLSurface_AllowStartRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	bool bAllowed;
	FuncPtr_8KIREDM ISteamHTMLSurface_AllowStartRequest;

	ISteamHTMLSurface_AllowStartRequest = (FuncPtr_8KIREDM)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_AllowStartRequest");
	ISteamHTMLSurface_AllowStartRequest(self, unBrowserHandle, bAllowed);
}

static bool
js_ISteamHTMLSurface_JSDialogResponse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	bool bResult;
	FuncPtr_8KIREDM ISteamHTMLSurface_JSDialogResponse;

	ISteamHTMLSurface_JSDialogResponse = (FuncPtr_8KIREDM)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_JSDialogResponse");
	ISteamHTMLSurface_JSDialogResponse(self, unBrowserHandle, bResult);
}

static bool
js_ISteamHTMLSurface_FileLoadDialogResponse(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unBrowserHandle;
	const char ** pchSelectedFiles;
	FuncPtr_LD8LD51 ISteamHTMLSurface_FileLoadDialogResponse;

	ISteamHTMLSurface_FileLoadDialogResponse = (FuncPtr_LD8LD51)GetProcAddress(steam_api, "SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse");
	ISteamHTMLSurface_FileLoadDialogResponse(self, unBrowserHandle, pchSelectedFiles);
}

static bool
js_ISteamInventory_GetResultStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t resultHandle;
	uint32_t result;
	FuncPtr_A716J7R ISteamInventory_GetResultStatus;

	ISteamInventory_GetResultStatus = (FuncPtr_A716J7R)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetResultStatus");
	result = ISteamInventory_GetResultStatus(self, resultHandle);
}

static bool
js_ISteamInventory_GetResultTimestamp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t resultHandle;
	uint32_t result;
	FuncPtr_A716J7R ISteamInventory_GetResultTimestamp;

	ISteamInventory_GetResultTimestamp = (FuncPtr_A716J7R)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetResultTimestamp");
	result = ISteamInventory_GetResultTimestamp(self, resultHandle);
}

static bool
js_ISteamInventory_GetNumItemsWithPrices(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamInventory_GetNumItemsWithPrices;

	ISteamInventory_GetNumItemsWithPrices = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetNumItemsWithPrices");
	result = ISteamInventory_GetNumItemsWithPrices(self);
}

static bool
js_ISteamInventory_GetResultItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t resultHandle;
	SteamItemDetails_t * pOutItemsArray;
	uint32_t * punOutItemsArraySize;
	bool result;
	FuncPtr_IJD4POG ISteamInventory_GetResultItems;

	ISteamInventory_GetResultItems = (FuncPtr_IJD4POG)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetResultItems");
	result = ISteamInventory_GetResultItems(self, resultHandle, pOutItemsArray, punOutItemsArraySize);
}

static bool
js_ISteamInventory_GetResultItemProperty(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t resultHandle;
	uint32_t unItemIndex;
	const char * pchPropertyName;
	char * pchValueBuffer;
	uint32_t * punValueBufferSizeOut;
	bool result;
	FuncPtr_2PGKO9A ISteamInventory_GetResultItemProperty;

	ISteamInventory_GetResultItemProperty = (FuncPtr_2PGKO9A)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetResultItemProperty");
	result = ISteamInventory_GetResultItemProperty(self, resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

static bool
js_ISteamInventory_CheckResultSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t resultHandle;
	uint64_t steamIDExpected;
	bool result;
	FuncPtr_E9LFWT5 ISteamInventory_CheckResultSteamID;

	ISteamInventory_CheckResultSteamID = (FuncPtr_E9LFWT5)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_CheckResultSteamID");
	result = ISteamInventory_CheckResultSteamID(self, resultHandle, steamIDExpected);
}

static bool
js_ISteamInventory_GetAllItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	bool result;
	FuncPtr_A2KLJPI ISteamInventory_GetAllItems;

	ISteamInventory_GetAllItems = (FuncPtr_A2KLJPI)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetAllItems");
	result = ISteamInventory_GetAllItems(self, pResultHandle);
}

static bool
js_ISteamInventory_GetItemsByID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	const uint64_t * pInstanceIDs;
	uint32_t unCountInstanceIDs;
	bool result;
	FuncPtr_BTHDHNA ISteamInventory_GetItemsByID;

	ISteamInventory_GetItemsByID = (FuncPtr_BTHDHNA)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetItemsByID");
	result = ISteamInventory_GetItemsByID(self, pResultHandle, pInstanceIDs, unCountInstanceIDs);
}

static bool
js_ISteamInventory_SerializeResult(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t resultHandle;
	void * pOutBuffer;
	uint32_t * punOutBufferSize;
	bool result;
	FuncPtr_AOC9G27 ISteamInventory_SerializeResult;

	ISteamInventory_SerializeResult = (FuncPtr_AOC9G27)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_SerializeResult");
	result = ISteamInventory_SerializeResult(self, resultHandle, pOutBuffer, punOutBufferSize);
}

static bool
js_ISteamInventory_DeserializeResult(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pOutResultHandle;
	const void * pBuffer;
	uint32_t unBufferSize;
	bool bRESERVED_MUST_BE_FALSE;
	bool result;
	FuncPtr_OZAQTJ0 ISteamInventory_DeserializeResult;

	ISteamInventory_DeserializeResult = (FuncPtr_OZAQTJ0)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_DeserializeResult");
	result = ISteamInventory_DeserializeResult(self, pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}

static bool
js_ISteamInventory_GenerateItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	const int32_t * pArrayItemDefs;
	const uint32_t * punArrayQuantity;
	uint32_t unArrayLength;
	bool result;
	FuncPtr_LAJRBFZ ISteamInventory_GenerateItems;

	ISteamInventory_GenerateItems = (FuncPtr_LAJRBFZ)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GenerateItems");
	result = ISteamInventory_GenerateItems(self, pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

static bool
js_ISteamInventory_GrantPromoItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	bool result;
	FuncPtr_A2KLJPI ISteamInventory_GrantPromoItems;

	ISteamInventory_GrantPromoItems = (FuncPtr_A2KLJPI)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GrantPromoItems");
	result = ISteamInventory_GrantPromoItems(self, pResultHandle);
}

static bool
js_ISteamInventory_AddPromoItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	int32_t itemDef;
	bool result;
	FuncPtr_6LUROTK ISteamInventory_AddPromoItem;

	ISteamInventory_AddPromoItem = (FuncPtr_6LUROTK)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_AddPromoItem");
	result = ISteamInventory_AddPromoItem(self, pResultHandle, itemDef);
}

static bool
js_ISteamInventory_AddPromoItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	const int32_t * pArrayItemDefs;
	uint32_t unArrayLength;
	bool result;
	FuncPtr_H2RHVEN ISteamInventory_AddPromoItems;

	ISteamInventory_AddPromoItems = (FuncPtr_H2RHVEN)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_AddPromoItems");
	result = ISteamInventory_AddPromoItems(self, pResultHandle, pArrayItemDefs, unArrayLength);
}

static bool
js_ISteamInventory_ConsumeItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	uint64_t itemConsume;
	uint32_t unQuantity;
	bool result;
	FuncPtr_GUPX2E8 ISteamInventory_ConsumeItem;

	ISteamInventory_ConsumeItem = (FuncPtr_GUPX2E8)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_ConsumeItem");
	result = ISteamInventory_ConsumeItem(self, pResultHandle, itemConsume, unQuantity);
}

static bool
js_ISteamInventory_ExchangeItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	const int32_t * pArrayGenerate;
	const uint32_t * punArrayGenerateQuantity;
	uint32_t unArrayGenerateLength;
	const uint64_t * pArrayDestroy;
	const uint32_t * punArrayDestroyQuantity;
	uint32_t unArrayDestroyLength;
	bool result;
	FuncPtr_T5FHRJO ISteamInventory_ExchangeItems;

	ISteamInventory_ExchangeItems = (FuncPtr_T5FHRJO)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_ExchangeItems");
	result = ISteamInventory_ExchangeItems(self, pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}

static bool
js_ISteamInventory_TransferItemQuantity(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	uint64_t itemIdSource;
	uint32_t unQuantity;
	uint64_t itemIdDest;
	bool result;
	FuncPtr_P5GOEQU ISteamInventory_TransferItemQuantity;

	ISteamInventory_TransferItemQuantity = (FuncPtr_P5GOEQU)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_TransferItemQuantity");
	result = ISteamInventory_TransferItemQuantity(self, pResultHandle, itemIdSource, unQuantity, itemIdDest);
}

static bool
js_ISteamInventory_TriggerItemDrop(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	int32_t dropListDefinition;
	bool result;
	FuncPtr_6LUROTK ISteamInventory_TriggerItemDrop;

	ISteamInventory_TriggerItemDrop = (FuncPtr_6LUROTK)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_TriggerItemDrop");
	result = ISteamInventory_TriggerItemDrop(self, pResultHandle, dropListDefinition);
}

static bool
js_ISteamInventory_TradeItems(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	uint64_t steamIDTradePartner;
	const uint64_t * pArrayGive;
	const uint32_t * pArrayGiveQuantity;
	uint32_t nArrayGiveLength;
	const uint64_t * pArrayGet;
	const uint32_t * pArrayGetQuantity;
	uint32_t nArrayGetLength;
	bool result;
	FuncPtr_OE0IK4I ISteamInventory_TradeItems;

	ISteamInventory_TradeItems = (FuncPtr_OE0IK4I)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_TradeItems");
	result = ISteamInventory_TradeItems(self, pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}

static bool
js_ISteamInventory_LoadItemDefinitions(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamInventory_LoadItemDefinitions;

	ISteamInventory_LoadItemDefinitions = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_LoadItemDefinitions");
	result = ISteamInventory_LoadItemDefinitions(self);
}

static bool
js_ISteamInventory_GetItemDefinitionIDs(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pItemDefIDs;
	uint32_t * punItemDefIDsArraySize;
	bool result;
	FuncPtr_L8HOAGO ISteamInventory_GetItemDefinitionIDs;

	ISteamInventory_GetItemDefinitionIDs = (FuncPtr_L8HOAGO)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetItemDefinitionIDs");
	result = ISteamInventory_GetItemDefinitionIDs(self, pItemDefIDs, punItemDefIDsArraySize);
}

static bool
js_ISteamInventory_GetItemDefinitionProperty(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iDefinition;
	const char * pchPropertyName;
	char * pchValueBuffer;
	uint32_t * punValueBufferSizeOut;
	bool result;
	FuncPtr_4XMK85M ISteamInventory_GetItemDefinitionProperty;

	ISteamInventory_GetItemDefinitionProperty = (FuncPtr_4XMK85M)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetItemDefinitionProperty");
	result = ISteamInventory_GetItemDefinitionProperty(self, iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

static bool
js_ISteamInventory_GetEligiblePromoItemDefinitionIDs(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	int32_t * pItemDefIDs;
	uint32_t * punItemDefIDsArraySize;
	bool result;
	FuncPtr_QG8Y9WI ISteamInventory_GetEligiblePromoItemDefinitionIDs;

	ISteamInventory_GetEligiblePromoItemDefinitionIDs = (FuncPtr_QG8Y9WI)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs");
	result = ISteamInventory_GetEligiblePromoItemDefinitionIDs(self, steamID, pItemDefIDs, punItemDefIDsArraySize);
}

static bool
js_ISteamInventory_GetItemsWithPrices(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pArrayItemDefs;
	uint64_t * pCurrentPrices;
	uint64_t * pBasePrices;
	uint32_t unArrayLength;
	bool result;
	FuncPtr_9SDVSM3 ISteamInventory_GetItemsWithPrices;

	ISteamInventory_GetItemsWithPrices = (FuncPtr_9SDVSM3)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetItemsWithPrices");
	result = ISteamInventory_GetItemsWithPrices(self, pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
}

static bool
js_ISteamInventory_GetItemPrice(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iDefinition;
	uint64_t * pCurrentPrice;
	uint64_t * pBasePrice;
	bool result;
	FuncPtr_DV62ZCJ ISteamInventory_GetItemPrice;

	ISteamInventory_GetItemPrice = (FuncPtr_DV62ZCJ)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_GetItemPrice");
	result = ISteamInventory_GetItemPrice(self, iDefinition, pCurrentPrice, pBasePrice);
}

static bool
js_ISteamInventory_RemoveProperty(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint64_t nItemID;
	const char * pchPropertyName;
	bool result;
	FuncPtr_YRJ9B5U ISteamInventory_RemoveProperty;

	ISteamInventory_RemoveProperty = (FuncPtr_YRJ9B5U)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_RemoveProperty");
	result = ISteamInventory_RemoveProperty(self, handle, nItemID, pchPropertyName);
}

static bool
js_ISteamInventory_SetPropertyString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint64_t nItemID;
	const char * pchPropertyName;
	const char * pchPropertyValue;
	bool result;
	FuncPtr_C29D7IL ISteamInventory_SetPropertyString;

	ISteamInventory_SetPropertyString = (FuncPtr_C29D7IL)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_SetPropertyString");
	result = ISteamInventory_SetPropertyString(self, handle, nItemID, pchPropertyName, pchPropertyValue);
}

static bool
js_ISteamInventory_SetPropertyBool(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint64_t nItemID;
	const char * pchPropertyName;
	bool bValue;
	bool result;
	FuncPtr_648KBQY ISteamInventory_SetPropertyBool;

	ISteamInventory_SetPropertyBool = (FuncPtr_648KBQY)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_SetPropertyBool");
	result = ISteamInventory_SetPropertyBool(self, handle, nItemID, pchPropertyName, bValue);
}

static bool
js_ISteamInventory_SetPropertyInt64(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint64_t nItemID;
	const char * pchPropertyName;
	int64_t nValue;
	bool result;
	FuncPtr_421IMAY ISteamInventory_SetPropertyInt64;

	ISteamInventory_SetPropertyInt64 = (FuncPtr_421IMAY)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_SetPropertyInt64");
	result = ISteamInventory_SetPropertyInt64(self, handle, nItemID, pchPropertyName, nValue);
}

static bool
js_ISteamInventory_SetPropertyFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	uint64_t nItemID;
	const char * pchPropertyName;
	float flValue;
	bool result;
	FuncPtr_8751GYB ISteamInventory_SetPropertyFloat;

	ISteamInventory_SetPropertyFloat = (FuncPtr_8751GYB)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_SetPropertyFloat");
	result = ISteamInventory_SetPropertyFloat(self, handle, nItemID, pchPropertyName, flValue);
}

static bool
js_ISteamInventory_SubmitUpdateProperties(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t handle;
	int32_t * pResultHandle;
	bool result;
	FuncPtr_SVZ6UXK ISteamInventory_SubmitUpdateProperties;

	ISteamInventory_SubmitUpdateProperties = (FuncPtr_SVZ6UXK)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_SubmitUpdateProperties");
	result = ISteamInventory_SubmitUpdateProperties(self, handle, pResultHandle);
}

static bool
js_ISteamInventory_InspectItem(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pResultHandle;
	const char * pchItemToken;
	bool result;
	FuncPtr_5MWVS5F ISteamInventory_InspectItem;

	ISteamInventory_InspectItem = (FuncPtr_5MWVS5F)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_InspectItem");
	result = ISteamInventory_InspectItem(self, pResultHandle, pchItemToken);
}

static bool
js_ISteamInventory_DestroyResult(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t resultHandle;
	FuncPtr_WX01A0G ISteamInventory_DestroyResult;

	ISteamInventory_DestroyResult = (FuncPtr_WX01A0G)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_DestroyResult");
	ISteamInventory_DestroyResult(self, resultHandle);
}

static bool
js_ISteamInventory_SendItemDropHeartbeat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamInventory_SendItemDropHeartbeat;

	ISteamInventory_SendItemDropHeartbeat = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_SendItemDropHeartbeat");
	ISteamInventory_SendItemDropHeartbeat(self);
}

static bool
js_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamInventory_RequestEligiblePromoItemDefinitionsIDs;

	ISteamInventory_RequestEligiblePromoItemDefinitionsIDs = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs");
	result = ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(self, steamID);
}

static bool
js_ISteamInventory_StartPurchase(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const int32_t * pArrayItemDefs;
	const uint32_t * punArrayQuantity;
	uint32_t unArrayLength;
	uint64_t result;
	FuncPtr_VNO8RE2 ISteamInventory_StartPurchase;

	ISteamInventory_StartPurchase = (FuncPtr_VNO8RE2)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_StartPurchase");
	result = ISteamInventory_StartPurchase(self, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

static bool
js_ISteamInventory_RequestPrices(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamInventory_RequestPrices;

	ISteamInventory_RequestPrices = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_RequestPrices");
	result = ISteamInventory_RequestPrices(self);
}

static bool
js_ISteamInventory_StartUpdateProperties(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamInventory_StartUpdateProperties;

	ISteamInventory_StartUpdateProperties = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamInventory_StartUpdateProperties");
	result = ISteamInventory_StartUpdateProperties(self);
}

static bool
js_ISteamVideo_GetVideoURL(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unVideoAppID;
	FuncPtr_QX4IH25 ISteamVideo_GetVideoURL;

	ISteamVideo_GetVideoURL = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_GetVideoURL");
	ISteamVideo_GetVideoURL(self, unVideoAppID);
}

static bool
js_ISteamVideo_GetOPFSettings(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unVideoAppID;
	FuncPtr_QX4IH25 ISteamVideo_GetOPFSettings;

	ISteamVideo_GetOPFSettings = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_GetOPFSettings");
	ISteamVideo_GetOPFSettings(self, unVideoAppID);
}

static bool
js_ISteamVideo_AddTimelineHighlightMarker(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchIcon;
	const char * pchTitle;
	const char * pchDescription;
	uint32_t unPriority;
	FuncPtr_7CDA1Y0 ISteamVideo_AddTimelineHighlightMarker;

	ISteamVideo_AddTimelineHighlightMarker = (FuncPtr_7CDA1Y0)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_AddTimelineHighlightMarker");
	ISteamVideo_AddTimelineHighlightMarker(self, pchIcon, pchTitle, pchDescription, unPriority);
}

static bool
js_ISteamVideo_AddTimelineTimestamp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchTitle;
	FuncPtr_ABDKEHU ISteamVideo_AddTimelineTimestamp;

	ISteamVideo_AddTimelineTimestamp = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_AddTimelineTimestamp");
	ISteamVideo_AddTimelineTimestamp(self, pchTitle);
}

static bool
js_ISteamVideo_AddTimelineRangeStart(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchID;
	const char * pchTitle;
	FuncPtr_F7P7QW2 ISteamVideo_AddTimelineRangeStart;

	ISteamVideo_AddTimelineRangeStart = (FuncPtr_F7P7QW2)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_AddTimelineRangeStart");
	ISteamVideo_AddTimelineRangeStart(self, pchID, pchTitle);
}

static bool
js_ISteamVideo_AddTimelineRangeEnd(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchID;
	FuncPtr_ABDKEHU ISteamVideo_AddTimelineRangeEnd;

	ISteamVideo_AddTimelineRangeEnd = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_AddTimelineRangeEnd");
	ISteamVideo_AddTimelineRangeEnd(self, pchID);
}

static bool
js_ISteamVideo_SetTimelineGameMode(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eMode;
	FuncPtr_QX4IH25 ISteamVideo_SetTimelineGameMode;

	ISteamVideo_SetTimelineGameMode = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_SetTimelineGameMode");
	ISteamVideo_SetTimelineGameMode(self, eMode);
}

static bool
js_ISteamVideo_IsBroadcasting(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pnNumViewers;
	bool result;
	FuncPtr_A2KLJPI ISteamVideo_IsBroadcasting;

	ISteamVideo_IsBroadcasting = (FuncPtr_A2KLJPI)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_IsBroadcasting");
	result = ISteamVideo_IsBroadcasting(self, pnNumViewers);
}

static bool
js_ISteamVideo_GetOPFStringForApp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unVideoAppID;
	char * pchBuffer;
	int32_t * pnBufferSize;
	bool result;
	FuncPtr_U6YFTRF ISteamVideo_GetOPFStringForApp;

	ISteamVideo_GetOPFStringForApp = (FuncPtr_U6YFTRF)GetProcAddress(steam_api, "SteamAPI_ISteamVideo_GetOPFStringForApp");
	result = ISteamVideo_GetOPFStringForApp(self, unVideoAppID, pchBuffer, pnBufferSize);
}

static bool
js_ISteamParentalSettings_BIsParentalLockEnabled(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamParentalSettings_BIsParentalLockEnabled;

	ISteamParentalSettings_BIsParentalLockEnabled = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled");
	result = ISteamParentalSettings_BIsParentalLockEnabled(self);
}

static bool
js_ISteamParentalSettings_BIsParentalLockLocked(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamParentalSettings_BIsParentalLockLocked;

	ISteamParentalSettings_BIsParentalLockLocked = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamParentalSettings_BIsParentalLockLocked");
	result = ISteamParentalSettings_BIsParentalLockLocked(self);
}

static bool
js_ISteamParentalSettings_BIsAppBlocked(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	bool result;
	FuncPtr_IF8A7HP ISteamParentalSettings_BIsAppBlocked;

	ISteamParentalSettings_BIsAppBlocked = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamParentalSettings_BIsAppBlocked");
	result = ISteamParentalSettings_BIsAppBlocked(self, nAppID);
}

static bool
js_ISteamParentalSettings_BIsAppInBlockList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nAppID;
	bool result;
	FuncPtr_IF8A7HP ISteamParentalSettings_BIsAppInBlockList;

	ISteamParentalSettings_BIsAppInBlockList = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamParentalSettings_BIsAppInBlockList");
	result = ISteamParentalSettings_BIsAppInBlockList(self, nAppID);
}

static bool
js_ISteamParentalSettings_BIsFeatureBlocked(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eFeature;
	bool result;
	FuncPtr_IF8A7HP ISteamParentalSettings_BIsFeatureBlocked;

	ISteamParentalSettings_BIsFeatureBlocked = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamParentalSettings_BIsFeatureBlocked");
	result = ISteamParentalSettings_BIsFeatureBlocked(self, eFeature);
}

static bool
js_ISteamParentalSettings_BIsFeatureInBlockList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eFeature;
	bool result;
	FuncPtr_IF8A7HP ISteamParentalSettings_BIsFeatureInBlockList;

	ISteamParentalSettings_BIsFeatureInBlockList = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList");
	result = ISteamParentalSettings_BIsFeatureInBlockList(self, eFeature);
}

static bool
js_ISteamRemotePlay_GetSessionCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamRemotePlay_GetSessionCount;

	ISteamRemotePlay_GetSessionCount = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_GetSessionCount");
	result = ISteamRemotePlay_GetSessionCount(self);
}

static bool
js_ISteamRemotePlay_GetSessionID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t iSessionIndex;
	uint32_t result;
	FuncPtr_A716J7R ISteamRemotePlay_GetSessionID;

	ISteamRemotePlay_GetSessionID = (FuncPtr_A716J7R)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_GetSessionID");
	result = ISteamRemotePlay_GetSessionID(self, iSessionIndex);
}

static bool
js_ISteamRemotePlay_GetSessionClientFormFactor(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unSessionID;
	uint32_t result;
	FuncPtr_9UOQ486 ISteamRemotePlay_GetSessionClientFormFactor;

	ISteamRemotePlay_GetSessionClientFormFactor = (FuncPtr_9UOQ486)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor");
	result = ISteamRemotePlay_GetSessionClientFormFactor(self, unSessionID);
}

static bool
js_ISteamRemotePlay_GetSessionSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unSessionID;
	uint64_t result;
	FuncPtr_5IENTZ6 ISteamRemotePlay_GetSessionSteamID;

	ISteamRemotePlay_GetSessionSteamID = (FuncPtr_5IENTZ6)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_GetSessionSteamID");
	result = ISteamRemotePlay_GetSessionSteamID(self, unSessionID);
}

static bool
js_ISteamRemotePlay_GetSessionClientName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unSessionID;
	const char * result;
	FuncPtr_G0H05PP ISteamRemotePlay_GetSessionClientName;

	ISteamRemotePlay_GetSessionClientName = (FuncPtr_G0H05PP)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_GetSessionClientName");
	result = ISteamRemotePlay_GetSessionClientName(self, unSessionID);
}

static bool
js_ISteamRemotePlay_BGetSessionClientResolution(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unSessionID;
	int32_t * pnResolutionX;
	int32_t * pnResolutionY;
	bool result;
	FuncPtr_S4CX9XI ISteamRemotePlay_BGetSessionClientResolution;

	ISteamRemotePlay_BGetSessionClientResolution = (FuncPtr_S4CX9XI)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_BGetSessionClientResolution");
	result = ISteamRemotePlay_BGetSessionClientResolution(self, unSessionID, pnResolutionX, pnResolutionY);
}

static bool
js_ISteamRemotePlay_BStartRemotePlayTogether(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bShowOverlay;
	bool result;
	FuncPtr_PXPPJ5X ISteamRemotePlay_BStartRemotePlayTogether;

	ISteamRemotePlay_BStartRemotePlayTogether = (FuncPtr_PXPPJ5X)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_BStartRemotePlayTogether");
	result = ISteamRemotePlay_BStartRemotePlayTogether(self, bShowOverlay);
}

static bool
js_ISteamRemotePlay_BSendRemotePlayTogetherInvite(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDFriend;
	bool result;
	FuncPtr_9MUN1QC ISteamRemotePlay_BSendRemotePlayTogetherInvite;

	ISteamRemotePlay_BSendRemotePlayTogetherInvite = (FuncPtr_9MUN1QC)GetProcAddress(steam_api, "SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite");
	result = ISteamRemotePlay_BSendRemotePlayTogetherInvite(self, steamIDFriend);
}

static bool
js_ISteamNetworkingMessages_SendMessageToUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityRemote;
	const void * pubData;
	uint32_t cubData;
	int32_t nSendFlags;
	int32_t nRemoteChannel;
	uint32_t result;
	FuncPtr_BSZGLIN ISteamNetworkingMessages_SendMessageToUser;

	ISteamNetworkingMessages_SendMessageToUser = (FuncPtr_BSZGLIN)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingMessages_SendMessageToUser");
	result = ISteamNetworkingMessages_SendMessageToUser(self, identityRemote, pubData, cubData, nSendFlags, nRemoteChannel);
}

static bool
js_ISteamNetworkingMessages_GetSessionConnectionInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityRemote;
	SteamNetConnectionInfo_t * pConnectionInfo;
	SteamNetConnectionRealTimeStatus_t * pQuickStatus;
	uint32_t result;
	FuncPtr_M0XAPPS ISteamNetworkingMessages_GetSessionConnectionInfo;

	ISteamNetworkingMessages_GetSessionConnectionInfo = (FuncPtr_M0XAPPS)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo");
	result = ISteamNetworkingMessages_GetSessionConnectionInfo(self, identityRemote, pConnectionInfo, pQuickStatus);
}

static bool
js_ISteamNetworkingMessages_ReceiveMessagesOnChannel(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nLocalChannel;
	SteamNetworkingMessage_t ** ppOutMessages;
	int32_t nMaxMessages;
	int32_t result;
	FuncPtr_YKYH6EN ISteamNetworkingMessages_ReceiveMessagesOnChannel;

	ISteamNetworkingMessages_ReceiveMessagesOnChannel = (FuncPtr_YKYH6EN)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel");
	result = ISteamNetworkingMessages_ReceiveMessagesOnChannel(self, nLocalChannel, ppOutMessages, nMaxMessages);
}

static bool
js_ISteamNetworkingMessages_AcceptSessionWithUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityRemote;
	bool result;
	FuncPtr_BOY2Z30 ISteamNetworkingMessages_AcceptSessionWithUser;

	ISteamNetworkingMessages_AcceptSessionWithUser = (FuncPtr_BOY2Z30)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser");
	result = ISteamNetworkingMessages_AcceptSessionWithUser(self, identityRemote);
}

static bool
js_ISteamNetworkingMessages_CloseSessionWithUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityRemote;
	bool result;
	FuncPtr_BOY2Z30 ISteamNetworkingMessages_CloseSessionWithUser;

	ISteamNetworkingMessages_CloseSessionWithUser = (FuncPtr_BOY2Z30)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser");
	result = ISteamNetworkingMessages_CloseSessionWithUser(self, identityRemote);
}

static bool
js_ISteamNetworkingMessages_CloseChannelWithUser(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityRemote;
	int32_t nLocalChannel;
	bool result;
	FuncPtr_H4F29ZS ISteamNetworkingMessages_CloseChannelWithUser;

	ISteamNetworkingMessages_CloseChannelWithUser = (FuncPtr_H4F29ZS)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser");
	result = ISteamNetworkingMessages_CloseChannelWithUser(self, identityRemote, nLocalChannel);
}

static bool
js_ISteamNetworkingSockets_CreateFakeUDPPort(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t idxFakeServerPort;
	void * result;
	FuncPtr_VJL8HH3 ISteamNetworkingSockets_CreateFakeUDPPort;

	ISteamNetworkingSockets_CreateFakeUDPPort = (FuncPtr_VJL8HH3)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort");
	result = ISteamNetworkingSockets_CreateFakeUDPPort(self, idxFakeServerPort);
}

static bool
js_ISteamNetworkingSockets_CreateListenSocketIP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIPAddr * localAddress;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_MNTIQFN ISteamNetworkingSockets_CreateListenSocketIP;

	ISteamNetworkingSockets_CreateListenSocketIP = (FuncPtr_MNTIQFN)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP");
	result = ISteamNetworkingSockets_CreateListenSocketIP(self, localAddress, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_ConnectByIPAddress(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIPAddr * address;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_MNTIQFN ISteamNetworkingSockets_ConnectByIPAddress;

	ISteamNetworkingSockets_ConnectByIPAddress = (FuncPtr_MNTIQFN)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress");
	result = ISteamNetworkingSockets_ConnectByIPAddress(self, address, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_CreateListenSocketP2P(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nLocalVirtualPort;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_8NRQEAI ISteamNetworkingSockets_CreateListenSocketP2P;

	ISteamNetworkingSockets_CreateListenSocketP2P = (FuncPtr_8NRQEAI)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P");
	result = ISteamNetworkingSockets_CreateListenSocketP2P(self, nLocalVirtualPort, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_ConnectP2P(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityRemote;
	int32_t nRemoteVirtualPort;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_CQ0C442 ISteamNetworkingSockets_ConnectP2P;

	ISteamNetworkingSockets_ConnectP2P = (FuncPtr_CQ0C442)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ConnectP2P");
	result = ISteamNetworkingSockets_ConnectP2P(self, identityRemote, nRemoteVirtualPort, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_AcceptConnection(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	uint32_t result;
	FuncPtr_9UOQ486 ISteamNetworkingSockets_AcceptConnection;

	ISteamNetworkingSockets_AcceptConnection = (FuncPtr_9UOQ486)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_AcceptConnection");
	result = ISteamNetworkingSockets_AcceptConnection(self, hConn);
}

static bool
js_ISteamNetworkingSockets_SendMessageToConnection(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	const void * pData;
	uint32_t cbData;
	int32_t nSendFlags;
	int64_t * pOutMessageNumber;
	uint32_t result;
	FuncPtr_V3JNHOT ISteamNetworkingSockets_SendMessageToConnection;

	ISteamNetworkingSockets_SendMessageToConnection = (FuncPtr_V3JNHOT)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_SendMessageToConnection");
	result = ISteamNetworkingSockets_SendMessageToConnection(self, hConn, pData, cbData, nSendFlags, pOutMessageNumber);
}

static bool
js_ISteamNetworkingSockets_FlushMessagesOnConnection(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	uint32_t result;
	FuncPtr_9UOQ486 ISteamNetworkingSockets_FlushMessagesOnConnection;

	ISteamNetworkingSockets_FlushMessagesOnConnection = (FuncPtr_9UOQ486)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection");
	result = ISteamNetworkingSockets_FlushMessagesOnConnection(self, hConn);
}

static bool
js_ISteamNetworkingSockets_GetConnectionRealTimeStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	SteamNetConnectionRealTimeStatus_t * pStatus;
	int32_t nLanes;
	SteamNetConnectionRealTimeLaneStatus_t * pLanes;
	uint32_t result;
	FuncPtr_G3P6JMP ISteamNetworkingSockets_GetConnectionRealTimeStatus;

	ISteamNetworkingSockets_GetConnectionRealTimeStatus = (FuncPtr_G3P6JMP)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus");
	result = ISteamNetworkingSockets_GetConnectionRealTimeStatus(self, hConn, pStatus, nLanes, pLanes);
}

static bool
js_ISteamNetworkingSockets_ConfigureConnectionLanes(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	int32_t nNumLanes;
	const int32_t * pLanePriorities;
	const uint16_t * pLaneWeights;
	uint32_t result;
	FuncPtr_V08UICG ISteamNetworkingSockets_ConfigureConnectionLanes;

	ISteamNetworkingSockets_ConfigureConnectionLanes = (FuncPtr_V08UICG)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes");
	result = ISteamNetworkingSockets_ConfigureConnectionLanes(self, hConn, nNumLanes, pLanePriorities, pLaneWeights);
}

static bool
js_ISteamNetworkingSockets_InitAuthentication(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamNetworkingSockets_InitAuthentication;

	ISteamNetworkingSockets_InitAuthentication = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_InitAuthentication");
	result = ISteamNetworkingSockets_InitAuthentication(self);
}

static bool
js_ISteamNetworkingSockets_GetAuthenticationStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamNetAuthenticationStatus_t * pDetails;
	uint32_t result;
	FuncPtr_3ATOIS0 ISteamNetworkingSockets_GetAuthenticationStatus;

	ISteamNetworkingSockets_GetAuthenticationStatus = (FuncPtr_3ATOIS0)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus");
	result = ISteamNetworkingSockets_GetAuthenticationStatus(self, pDetails);
}

static bool
js_ISteamNetworkingSockets_CreatePollGroup(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamNetworkingSockets_CreatePollGroup;

	ISteamNetworkingSockets_CreatePollGroup = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CreatePollGroup");
	result = ISteamNetworkingSockets_CreatePollGroup(self);
}

static bool
js_ISteamNetworkingSockets_ConnectToHostedDedicatedServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityTarget;
	int32_t nRemoteVirtualPort;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_CQ0C442 ISteamNetworkingSockets_ConnectToHostedDedicatedServer;

	ISteamNetworkingSockets_ConnectToHostedDedicatedServer = (FuncPtr_CQ0C442)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer");
	result = ISteamNetworkingSockets_ConnectToHostedDedicatedServer(self, identityTarget, nRemoteVirtualPort, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t result;
	FuncPtr_7GJ6JY0 ISteamNetworkingSockets_GetHostedDedicatedServerPOPID;

	ISteamNetworkingSockets_GetHostedDedicatedServerPOPID = (FuncPtr_7GJ6JY0)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID");
	result = ISteamNetworkingSockets_GetHostedDedicatedServerPOPID(self);
}

static bool
js_ISteamNetworkingSockets_GetHostedDedicatedServerAddress(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamDatagramHostedAddress * pRouting;
	uint32_t result;
	FuncPtr_IMMI5RO ISteamNetworkingSockets_GetHostedDedicatedServerAddress;

	ISteamNetworkingSockets_GetHostedDedicatedServerAddress = (FuncPtr_IMMI5RO)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress");
	result = ISteamNetworkingSockets_GetHostedDedicatedServerAddress(self, pRouting);
}

static bool
js_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nLocalVirtualPort;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_8NRQEAI ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket;

	ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket = (FuncPtr_8NRQEAI)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket");
	result = ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket(self, nLocalVirtualPort, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_GetGameCoordinatorServerLogin(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamDatagramGameCoordinatorServerLogin * pLoginInfo;
	int32_t * pcbSignedBlob;
	void * pBlob;
	uint32_t result;
	FuncPtr_NEWYXZY ISteamNetworkingSockets_GetGameCoordinatorServerLogin;

	ISteamNetworkingSockets_GetGameCoordinatorServerLogin = (FuncPtr_NEWYXZY)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin");
	result = ISteamNetworkingSockets_GetGameCoordinatorServerLogin(self, pLoginInfo, pcbSignedBlob, pBlob);
}

static bool
js_ISteamNetworkingSockets_ConnectP2PCustomSignaling(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pSignaling;
	const SteamNetworkingIdentity * pPeerIdentity;
	int32_t nRemoteVirtualPort;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_JWR6OC1 ISteamNetworkingSockets_ConnectP2PCustomSignaling;

	ISteamNetworkingSockets_ConnectP2PCustomSignaling = (FuncPtr_JWR6OC1)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling");
	result = ISteamNetworkingSockets_ConnectP2PCustomSignaling(self, pSignaling, pPeerIdentity, nRemoteVirtualPort, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t idxFakePort;
	int32_t nOptions;
	const SteamNetworkingConfigValue_t * pOptions;
	uint32_t result;
	FuncPtr_8NRQEAI ISteamNetworkingSockets_CreateListenSocketP2PFakeIP;

	ISteamNetworkingSockets_CreateListenSocketP2PFakeIP = (FuncPtr_8NRQEAI)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP");
	result = ISteamNetworkingSockets_CreateListenSocketP2PFakeIP(self, idxFakePort, nOptions, pOptions);
}

static bool
js_ISteamNetworkingSockets_GetRemoteFakeIPForConnection(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	SteamNetworkingIPAddr * pOutAddr;
	uint32_t result;
	FuncPtr_YKZ0HHY ISteamNetworkingSockets_GetRemoteFakeIPForConnection;

	ISteamNetworkingSockets_GetRemoteFakeIPForConnection = (FuncPtr_YKZ0HHY)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection");
	result = ISteamNetworkingSockets_GetRemoteFakeIPForConnection(self, hConn, pOutAddr);
}

static bool
js_ISteamNetworkingSockets_CloseConnection(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hPeer;
	int32_t nReason;
	const char * pszDebug;
	bool bEnableLinger;
	bool result;
	FuncPtr_USSL888 ISteamNetworkingSockets_CloseConnection;

	ISteamNetworkingSockets_CloseConnection = (FuncPtr_USSL888)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CloseConnection");
	result = ISteamNetworkingSockets_CloseConnection(self, hPeer, nReason, pszDebug, bEnableLinger);
}

static bool
js_ISteamNetworkingSockets_CloseListenSocket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	bool result;
	FuncPtr_IF8A7HP ISteamNetworkingSockets_CloseListenSocket;

	ISteamNetworkingSockets_CloseListenSocket = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CloseListenSocket");
	result = ISteamNetworkingSockets_CloseListenSocket(self, hSocket);
}

static bool
js_ISteamNetworkingSockets_SetConnectionUserData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hPeer;
	int64_t nUserData;
	bool result;
	FuncPtr_YCCEKQN ISteamNetworkingSockets_SetConnectionUserData;

	ISteamNetworkingSockets_SetConnectionUserData = (FuncPtr_YCCEKQN)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_SetConnectionUserData");
	result = ISteamNetworkingSockets_SetConnectionUserData(self, hPeer, nUserData);
}

static bool
js_ISteamNetworkingSockets_GetConnectionName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hPeer;
	char * pszName;
	int32_t nMaxLen;
	bool result;
	FuncPtr_4FH7GMW ISteamNetworkingSockets_GetConnectionName;

	ISteamNetworkingSockets_GetConnectionName = (FuncPtr_4FH7GMW)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetConnectionName");
	result = ISteamNetworkingSockets_GetConnectionName(self, hPeer, pszName, nMaxLen);
}

static bool
js_ISteamNetworkingSockets_GetConnectionInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	SteamNetConnectionInfo_t * pInfo;
	bool result;
	FuncPtr_MVA194A ISteamNetworkingSockets_GetConnectionInfo;

	ISteamNetworkingSockets_GetConnectionInfo = (FuncPtr_MVA194A)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetConnectionInfo");
	result = ISteamNetworkingSockets_GetConnectionInfo(self, hConn, pInfo);
}

static bool
js_ISteamNetworkingSockets_GetListenSocketAddress(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hSocket;
	SteamNetworkingIPAddr * address;
	bool result;
	FuncPtr_UOQVO9S ISteamNetworkingSockets_GetListenSocketAddress;

	ISteamNetworkingSockets_GetListenSocketAddress = (FuncPtr_UOQVO9S)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress");
	result = ISteamNetworkingSockets_GetListenSocketAddress(self, hSocket, address);
}

static bool
js_ISteamNetworkingSockets_CreateSocketPair(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * pOutConnection1;
	uint32_t * pOutConnection2;
	bool bUseNetworkLoopback;
	const SteamNetworkingIdentity * pIdentity1;
	const SteamNetworkingIdentity * pIdentity2;
	bool result;
	FuncPtr_1M479U1 ISteamNetworkingSockets_CreateSocketPair;

	ISteamNetworkingSockets_CreateSocketPair = (FuncPtr_1M479U1)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_CreateSocketPair");
	result = ISteamNetworkingSockets_CreateSocketPair(self, pOutConnection1, pOutConnection2, bUseNetworkLoopback, pIdentity1, pIdentity2);
}

static bool
js_ISteamNetworkingSockets_GetIdentity(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamNetworkingIdentity * pIdentity;
	bool result;
	FuncPtr_GEWGG8Z ISteamNetworkingSockets_GetIdentity;

	ISteamNetworkingSockets_GetIdentity = (FuncPtr_GEWGG8Z)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetIdentity");
	result = ISteamNetworkingSockets_GetIdentity(self, pIdentity);
}

static bool
js_ISteamNetworkingSockets_DestroyPollGroup(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hPollGroup;
	bool result;
	FuncPtr_IF8A7HP ISteamNetworkingSockets_DestroyPollGroup;

	ISteamNetworkingSockets_DestroyPollGroup = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_DestroyPollGroup");
	result = ISteamNetworkingSockets_DestroyPollGroup(self, hPollGroup);
}

static bool
js_ISteamNetworkingSockets_SetConnectionPollGroup(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	uint32_t hPollGroup;
	bool result;
	FuncPtr_QAXP2FJ ISteamNetworkingSockets_SetConnectionPollGroup;

	ISteamNetworkingSockets_SetConnectionPollGroup = (FuncPtr_QAXP2FJ)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup");
	result = ISteamNetworkingSockets_SetConnectionPollGroup(self, hConn, hPollGroup);
}

static bool
js_ISteamNetworkingSockets_ReceivedRelayAuthTicket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const void * pvTicket;
	int32_t cbTicket;
	void * pOutParsedTicket;
	bool result;
	FuncPtr_PA349Q2 ISteamNetworkingSockets_ReceivedRelayAuthTicket;

	ISteamNetworkingSockets_ReceivedRelayAuthTicket = (FuncPtr_PA349Q2)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket");
	result = ISteamNetworkingSockets_ReceivedRelayAuthTicket(self, pvTicket, cbTicket, pOutParsedTicket);
}

static bool
js_ISteamNetworkingSockets_ReceivedP2PCustomSignal(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const void * pMsg;
	int32_t cbMsg;
	void * pContext;
	bool result;
	FuncPtr_PA349Q2 ISteamNetworkingSockets_ReceivedP2PCustomSignal;

	ISteamNetworkingSockets_ReceivedP2PCustomSignal = (FuncPtr_PA349Q2)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal");
	result = ISteamNetworkingSockets_ReceivedP2PCustomSignal(self, pMsg, cbMsg, pContext);
}

static bool
js_ISteamNetworkingSockets_GetCertificateRequest(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t * pcbBlob;
	void * pBlob;
	char * errMsg [1024];
	bool result;
	FuncPtr_K6MSWEM ISteamNetworkingSockets_GetCertificateRequest;

	ISteamNetworkingSockets_GetCertificateRequest = (FuncPtr_K6MSWEM)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetCertificateRequest");
	result = ISteamNetworkingSockets_GetCertificateRequest(self, pcbBlob, pBlob, errMsg [1024]);
}

static bool
js_ISteamNetworkingSockets_SetCertificate(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const void * pCertificate;
	int32_t cbCertificate;
	char * errMsg [1024];
	bool result;
	FuncPtr_6KP7KLW ISteamNetworkingSockets_SetCertificate;

	ISteamNetworkingSockets_SetCertificate = (FuncPtr_6KP7KLW)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_SetCertificate");
	result = ISteamNetworkingSockets_SetCertificate(self, pCertificate, cbCertificate, errMsg [1024]);
}

static bool
js_ISteamNetworkingSockets_BeginAsyncRequestFakeIP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nNumPorts;
	bool result;
	FuncPtr_F9K0A2G ISteamNetworkingSockets_BeginAsyncRequestFakeIP;

	ISteamNetworkingSockets_BeginAsyncRequestFakeIP = (FuncPtr_F9K0A2G)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP");
	result = ISteamNetworkingSockets_BeginAsyncRequestFakeIP(self, nNumPorts);
}

static bool
js_ISteamNetworkingSockets_GetConnectionUserData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hPeer;
	int64_t result;
	FuncPtr_4C98U4L ISteamNetworkingSockets_GetConnectionUserData;

	ISteamNetworkingSockets_GetConnectionUserData = (FuncPtr_4C98U4L)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetConnectionUserData");
	result = ISteamNetworkingSockets_GetConnectionUserData(self, hPeer);
}

static bool
js_ISteamNetworkingSockets_SetConnectionName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hPeer;
	const char * pszName;
	FuncPtr_VF34662 ISteamNetworkingSockets_SetConnectionName;

	ISteamNetworkingSockets_SetConnectionName = (FuncPtr_VF34662)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_SetConnectionName");
	ISteamNetworkingSockets_SetConnectionName(self, hPeer, pszName);
}

static bool
js_ISteamNetworkingSockets_SendMessages(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t nMessages;
	const SteamNetworkingMessage_t * pMessages;
	int64_t * pOutMessageNumberOrResult;
	FuncPtr_F9GQR89 ISteamNetworkingSockets_SendMessages;

	ISteamNetworkingSockets_SendMessages = (FuncPtr_F9GQR89)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_SendMessages");
	ISteamNetworkingSockets_SendMessages(self, nMessages, pMessages, pOutMessageNumberOrResult);
}

static bool
js_ISteamNetworkingSockets_ResetIdentity(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * pIdentity;
	FuncPtr_6IRW6A6 ISteamNetworkingSockets_ResetIdentity;

	ISteamNetworkingSockets_ResetIdentity = (FuncPtr_6IRW6A6)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ResetIdentity");
	ISteamNetworkingSockets_ResetIdentity(self, pIdentity);
}

static bool
js_ISteamNetworkingSockets_RunCallbacks(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamNetworkingSockets_RunCallbacks;

	ISteamNetworkingSockets_RunCallbacks = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_RunCallbacks");
	ISteamNetworkingSockets_RunCallbacks(self);
}

static bool
js_ISteamNetworkingSockets_GetFakeIP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t idxFirstPort;
	SteamNetworkingFakeIPResult_t * pInfo;
	FuncPtr_34FC2FK ISteamNetworkingSockets_GetFakeIP;

	ISteamNetworkingSockets_GetFakeIP = (FuncPtr_34FC2FK)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetFakeIP");
	ISteamNetworkingSockets_GetFakeIP(self, idxFirstPort, pInfo);
}

static bool
js_ISteamNetworkingSockets_ReceiveMessagesOnConnection(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	SteamNetworkingMessage_t ** ppOutMessages;
	int32_t nMaxMessages;
	int32_t result;
	FuncPtr_L5TQNZX ISteamNetworkingSockets_ReceiveMessagesOnConnection;

	ISteamNetworkingSockets_ReceiveMessagesOnConnection = (FuncPtr_L5TQNZX)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection");
	result = ISteamNetworkingSockets_ReceiveMessagesOnConnection(self, hConn, ppOutMessages, nMaxMessages);
}

static bool
js_ISteamNetworkingSockets_GetDetailedConnectionStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	char * pszBuf;
	int32_t cbBuf;
	int32_t result;
	FuncPtr_ADKFPOE ISteamNetworkingSockets_GetDetailedConnectionStatus;

	ISteamNetworkingSockets_GetDetailedConnectionStatus = (FuncPtr_ADKFPOE)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus");
	result = ISteamNetworkingSockets_GetDetailedConnectionStatus(self, hConn, pszBuf, cbBuf);
}

static bool
js_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hPollGroup;
	SteamNetworkingMessage_t ** ppOutMessages;
	int32_t nMaxMessages;
	int32_t result;
	FuncPtr_L5TQNZX ISteamNetworkingSockets_ReceiveMessagesOnPollGroup;

	ISteamNetworkingSockets_ReceiveMessagesOnPollGroup = (FuncPtr_L5TQNZX)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup");
	result = ISteamNetworkingSockets_ReceiveMessagesOnPollGroup(self, hPollGroup, ppOutMessages, nMaxMessages);
}

static bool
js_ISteamNetworkingSockets_FindRelayAuthTicketForServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identityGameServer;
	int32_t nRemoteVirtualPort;
	void * pOutParsedTicket;
	int32_t result;
	FuncPtr_XQ3HV6D ISteamNetworkingSockets_FindRelayAuthTicketForServer;

	ISteamNetworkingSockets_FindRelayAuthTicketForServer = (FuncPtr_XQ3HV6D)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer");
	result = ISteamNetworkingSockets_FindRelayAuthTicketForServer(self, identityGameServer, nRemoteVirtualPort, pOutParsedTicket);
}

static bool
js_ISteamNetworkingSockets_GetHostedDedicatedServerPort(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint16_t result;
	FuncPtr_LWMHJGY ISteamNetworkingSockets_GetHostedDedicatedServerPort;

	ISteamNetworkingSockets_GetHostedDedicatedServerPort = (FuncPtr_LWMHJGY)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort");
	result = ISteamNetworkingSockets_GetHostedDedicatedServerPort(self);
}

static bool
js_ISteamNetworkingUtils_AllocateMessage(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t cbAllocateBuffer;
	SteamNetworkingMessage_t * result;
	FuncPtr_RQEWWKS ISteamNetworkingUtils_AllocateMessage;

	ISteamNetworkingUtils_AllocateMessage = (FuncPtr_RQEWWKS)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_AllocateMessage");
	result = ISteamNetworkingUtils_AllocateMessage(self, cbAllocateBuffer);
}

static bool
js_ISteamNetworkingUtils_InitRelayNetworkAccess(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamNetworkingUtils_InitRelayNetworkAccess;

	ISteamNetworkingUtils_InitRelayNetworkAccess = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess");
	ISteamNetworkingUtils_InitRelayNetworkAccess(self);
}

static bool
js_ISteamNetworkingUtils_ConvertPingLocationToString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkPingLocation_t * location;
	char * pszBuf;
	int32_t cchBufSize;
	FuncPtr_K88VF07 ISteamNetworkingUtils_ConvertPingLocationToString;

	ISteamNetworkingUtils_ConvertPingLocationToString = (FuncPtr_K88VF07)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString");
	ISteamNetworkingUtils_ConvertPingLocationToString(self, location, pszBuf, cchBufSize);
}

static bool
js_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIPAddr * addr;
	char * buf;
	uint32_t cbBuf;
	bool bWithPort;
	FuncPtr_YNQALTX ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString;

	ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString = (FuncPtr_YNQALTX)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString");
	ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString(self, addr, buf, cbBuf, bWithPort);
}

static bool
js_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIdentity * identity;
	char * buf;
	uint32_t cbBuf;
	FuncPtr_V29X3I8 ISteamNetworkingUtils_SteamNetworkingIdentity_ToString;

	ISteamNetworkingUtils_SteamNetworkingIdentity_ToString = (FuncPtr_V29X3I8)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString");
	ISteamNetworkingUtils_SteamNetworkingIdentity_ToString(self, identity, buf, cbBuf);
}

static bool
js_ISteamNetworkingUtils_GetRelayNetworkStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamRelayNetworkStatus_t * pDetails;
	uint32_t result;
	FuncPtr_GPAMHWA ISteamNetworkingUtils_GetRelayNetworkStatus;

	ISteamNetworkingUtils_GetRelayNetworkStatus = (FuncPtr_GPAMHWA)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus");
	result = ISteamNetworkingUtils_GetRelayNetworkStatus(self, pDetails);
}

static bool
js_ISteamNetworkingUtils_GetIPv4FakeIPType(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nIPv4;
	uint32_t result;
	FuncPtr_9UOQ486 ISteamNetworkingUtils_GetIPv4FakeIPType;

	ISteamNetworkingUtils_GetIPv4FakeIPType = (FuncPtr_9UOQ486)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType");
	result = ISteamNetworkingUtils_GetIPv4FakeIPType(self, nIPv4);
}

static bool
js_ISteamNetworkingUtils_GetRealIdentityForFakeIP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIPAddr * fakeIP;
	SteamNetworkingIdentity * pOutRealIdentity;
	uint32_t result;
	FuncPtr_RWA1TRM ISteamNetworkingUtils_GetRealIdentityForFakeIP;

	ISteamNetworkingUtils_GetRealIdentityForFakeIP = (FuncPtr_RWA1TRM)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP");
	result = ISteamNetworkingUtils_GetRealIdentityForFakeIP(self, fakeIP, pOutRealIdentity);
}

static bool
js_ISteamNetworkingUtils_GetConfigValue(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eValue;
	uint32_t eScopeType;
	intptr_t scopeObj;
	uint32_t * pOutDataType;
	void * pResult;
	size_t * cbResult;
	uint32_t result;
	FuncPtr_PWT7KXY ISteamNetworkingUtils_GetConfigValue;

	ISteamNetworkingUtils_GetConfigValue = (FuncPtr_PWT7KXY)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetConfigValue");
	result = ISteamNetworkingUtils_GetConfigValue(self, eValue, eScopeType, scopeObj, pOutDataType, pResult, cbResult);
}

static bool
js_ISteamNetworkingUtils_IterateGenericEditableConfigValues(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eCurrent;
	bool bEnumerateDevVars;
	uint32_t result;
	FuncPtr_ZK9B4EC ISteamNetworkingUtils_IterateGenericEditableConfigValues;

	ISteamNetworkingUtils_IterateGenericEditableConfigValues = (FuncPtr_ZK9B4EC)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues");
	result = ISteamNetworkingUtils_IterateGenericEditableConfigValues(self, eCurrent, bEnumerateDevVars);
}

static bool
js_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIPAddr * addr;
	uint32_t result;
	FuncPtr_3HANRUM ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType;

	ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType = (FuncPtr_3HANRUM)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType");
	result = ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType(self, addr);
}

static bool
js_ISteamNetworkingUtils_GetLocalPingLocation(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamNetworkPingLocation_t * result;
	float result;
	FuncPtr_LSDID3M ISteamNetworkingUtils_GetLocalPingLocation;

	ISteamNetworkingUtils_GetLocalPingLocation = (FuncPtr_LSDID3M)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation");
	result = ISteamNetworkingUtils_GetLocalPingLocation(self, result);
}

static bool
js_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkPingLocation_t * location1;
	const SteamNetworkPingLocation_t * location2;
	int32_t result;
	FuncPtr_38QQMVW ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations;

	ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations = (FuncPtr_38QQMVW)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations");
	result = ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations(self, location1, location2);
}

static bool
js_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkPingLocation_t * remoteLocation;
	int32_t result;
	FuncPtr_1IKME6M ISteamNetworkingUtils_EstimatePingTimeFromLocalHost;

	ISteamNetworkingUtils_EstimatePingTimeFromLocalHost = (FuncPtr_1IKME6M)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost");
	result = ISteamNetworkingUtils_EstimatePingTimeFromLocalHost(self, remoteLocation);
}

static bool
js_ISteamNetworkingUtils_GetPingToDataCenter(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t popID;
	uint32_t * pViaRelayPoP;
	int32_t result;
	FuncPtr_TVS8NDL ISteamNetworkingUtils_GetPingToDataCenter;

	ISteamNetworkingUtils_GetPingToDataCenter = (FuncPtr_TVS8NDL)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter");
	result = ISteamNetworkingUtils_GetPingToDataCenter(self, popID, pViaRelayPoP);
}

static bool
js_ISteamNetworkingUtils_GetDirectPingToPOP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t popID;
	int32_t result;
	FuncPtr_5LIK133 ISteamNetworkingUtils_GetDirectPingToPOP;

	ISteamNetworkingUtils_GetDirectPingToPOP = (FuncPtr_5LIK133)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP");
	result = ISteamNetworkingUtils_GetDirectPingToPOP(self, popID);
}

static bool
js_ISteamNetworkingUtils_GetPOPCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t result;
	FuncPtr_CYW6AM7 ISteamNetworkingUtils_GetPOPCount;

	ISteamNetworkingUtils_GetPOPCount = (FuncPtr_CYW6AM7)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetPOPCount");
	result = ISteamNetworkingUtils_GetPOPCount(self);
}

static bool
js_ISteamNetworkingUtils_GetPOPList(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t * list;
	int32_t nListSz;
	int32_t result;
	FuncPtr_4XTNTXH ISteamNetworkingUtils_GetPOPList;

	ISteamNetworkingUtils_GetPOPList = (FuncPtr_4XTNTXH)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetPOPList");
	result = ISteamNetworkingUtils_GetPOPList(self, list, nListSz);
}

static bool
js_ISteamNetworkingUtils_ParsePingLocationString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszString;
	SteamNetworkPingLocation_t * result;
	bool result;
	FuncPtr_K17TVEL ISteamNetworkingUtils_ParsePingLocationString;

	ISteamNetworkingUtils_ParsePingLocationString = (FuncPtr_K17TVEL)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_ParsePingLocationString");
	result = ISteamNetworkingUtils_ParsePingLocationString(self, pszString, result);
}

static bool
js_ISteamNetworkingUtils_CheckPingDataUpToDate(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	float flMaxAgeSeconds;
	bool result;
	FuncPtr_YOTQJV9 ISteamNetworkingUtils_CheckPingDataUpToDate;

	ISteamNetworkingUtils_CheckPingDataUpToDate = (FuncPtr_YOTQJV9)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate");
	result = ISteamNetworkingUtils_CheckPingDataUpToDate(self, flMaxAgeSeconds);
}

static bool
js_ISteamNetworkingUtils_IsFakeIPv4(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t nIPv4;
	bool result;
	FuncPtr_IF8A7HP ISteamNetworkingUtils_IsFakeIPv4;

	ISteamNetworkingUtils_IsFakeIPv4 = (FuncPtr_IF8A7HP)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_IsFakeIPv4");
	result = ISteamNetworkingUtils_IsFakeIPv4(self, nIPv4);
}

static bool
js_ISteamNetworkingUtils_SetGlobalConfigValueInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eValue;
	int32_t val;
	bool result;
	FuncPtr_WL63N1D ISteamNetworkingUtils_SetGlobalConfigValueInt32;

	ISteamNetworkingUtils_SetGlobalConfigValueInt32 = (FuncPtr_WL63N1D)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32");
	result = ISteamNetworkingUtils_SetGlobalConfigValueInt32(self, eValue, val);
}

static bool
js_ISteamNetworkingUtils_SetGlobalConfigValueFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eValue;
	float val;
	bool result;
	FuncPtr_2UK86R1 ISteamNetworkingUtils_SetGlobalConfigValueFloat;

	ISteamNetworkingUtils_SetGlobalConfigValueFloat = (FuncPtr_2UK86R1)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat");
	result = ISteamNetworkingUtils_SetGlobalConfigValueFloat(self, eValue, val);
}

static bool
js_ISteamNetworkingUtils_SetGlobalConfigValueString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eValue;
	const char * val;
	bool result;
	FuncPtr_C7SQD3V ISteamNetworkingUtils_SetGlobalConfigValueString;

	ISteamNetworkingUtils_SetGlobalConfigValueString = (FuncPtr_C7SQD3V)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString");
	result = ISteamNetworkingUtils_SetGlobalConfigValueString(self, eValue, val);
}

static bool
js_ISteamNetworkingUtils_SetGlobalConfigValuePtr(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eValue;
	void * val;
	bool result;
	FuncPtr_ZDQD8WT ISteamNetworkingUtils_SetGlobalConfigValuePtr;

	ISteamNetworkingUtils_SetGlobalConfigValuePtr = (FuncPtr_ZDQD8WT)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr");
	result = ISteamNetworkingUtils_SetGlobalConfigValuePtr(self, eValue, val);
}

static bool
js_ISteamNetworkingUtils_SetConnectionConfigValueInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	uint32_t eValue;
	int32_t val;
	bool result;
	FuncPtr_L3YNCK3 ISteamNetworkingUtils_SetConnectionConfigValueInt32;

	ISteamNetworkingUtils_SetConnectionConfigValueInt32 = (FuncPtr_L3YNCK3)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32");
	result = ISteamNetworkingUtils_SetConnectionConfigValueInt32(self, hConn, eValue, val);
}

static bool
js_ISteamNetworkingUtils_SetConnectionConfigValueFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	uint32_t eValue;
	float val;
	bool result;
	FuncPtr_203JVG4 ISteamNetworkingUtils_SetConnectionConfigValueFloat;

	ISteamNetworkingUtils_SetConnectionConfigValueFloat = (FuncPtr_203JVG4)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat");
	result = ISteamNetworkingUtils_SetConnectionConfigValueFloat(self, hConn, eValue, val);
}

static bool
js_ISteamNetworkingUtils_SetConnectionConfigValueString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hConn;
	uint32_t eValue;
	const char * val;
	bool result;
	FuncPtr_IRCF3FC ISteamNetworkingUtils_SetConnectionConfigValueString;

	ISteamNetworkingUtils_SetConnectionConfigValueString = (FuncPtr_IRCF3FC)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString");
	result = ISteamNetworkingUtils_SetConnectionConfigValueString(self, hConn, eValue, val);
}

static bool
js_ISteamNetworkingUtils_SetConfigValue(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eValue;
	uint32_t eScopeType;
	intptr_t scopeObj;
	uint32_t eDataType;
	const void * pArg;
	bool result;
	FuncPtr_J5RRDS0 ISteamNetworkingUtils_SetConfigValue;

	ISteamNetworkingUtils_SetConfigValue = (FuncPtr_J5RRDS0)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetConfigValue");
	result = ISteamNetworkingUtils_SetConfigValue(self, eValue, eScopeType, scopeObj, eDataType, pArg);
}

static bool
js_ISteamNetworkingUtils_SetConfigValueStruct(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingConfigValue_t * opt;
	uint32_t eScopeType;
	intptr_t scopeObj;
	bool result;
	FuncPtr_6LQ4HA0 ISteamNetworkingUtils_SetConfigValueStruct;

	ISteamNetworkingUtils_SetConfigValueStruct = (FuncPtr_6LQ4HA0)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct");
	result = ISteamNetworkingUtils_SetConfigValueStruct(self, opt, eScopeType, scopeObj);
}

static bool
js_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamNetworkingIPAddr * pAddr;
	const char * pszStr;
	bool result;
	FuncPtr_3GBARV6 ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString;

	ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString = (FuncPtr_3GBARV6)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString");
	result = ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString(self, pAddr, pszStr);
}

static bool
js_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamNetworkingIdentity * pIdentity;
	const char * pszStr;
	bool result;
	FuncPtr_F5ATXX1 ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString;

	ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString = (FuncPtr_F5ATXX1)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString");
	result = ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString(self, pIdentity, pszStr);
}

static bool
js_ISteamNetworkingUtils_GetLocalTimestamp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int64_t result;
	FuncPtr_WL2O3N8 ISteamNetworkingUtils_GetLocalTimestamp;

	ISteamNetworkingUtils_GetLocalTimestamp = (FuncPtr_WL2O3N8)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp");
	result = ISteamNetworkingUtils_GetLocalTimestamp(self);
}

static bool
js_ISteamNetworkingUtils_GetConfigValueInfo(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t eValue;
	uint32_t * pOutDataType;
	uint32_t * pOutScope;
	const char * result;
	FuncPtr_6IRXZ70 ISteamNetworkingUtils_GetConfigValueInfo;

	ISteamNetworkingUtils_GetConfigValueInfo = (FuncPtr_6IRXZ70)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo");
	result = ISteamNetworkingUtils_GetConfigValueInfo(self, eValue, pOutDataType, pOutScope);
}

static bool
js_ISteamGameServer_SetProduct(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszProduct;
	FuncPtr_ABDKEHU ISteamGameServer_SetProduct;

	ISteamGameServer_SetProduct = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetProduct");
	ISteamGameServer_SetProduct(self, pszProduct);
}

static bool
js_ISteamGameServer_SetGameDescription(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszGameDescription;
	FuncPtr_ABDKEHU ISteamGameServer_SetGameDescription;

	ISteamGameServer_SetGameDescription = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetGameDescription");
	ISteamGameServer_SetGameDescription(self, pszGameDescription);
}

static bool
js_ISteamGameServer_SetModDir(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszModDir;
	FuncPtr_ABDKEHU ISteamGameServer_SetModDir;

	ISteamGameServer_SetModDir = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetModDir");
	ISteamGameServer_SetModDir(self, pszModDir);
}

static bool
js_ISteamGameServer_SetDedicatedServer(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bDedicated;
	FuncPtr_Z2CYP0L ISteamGameServer_SetDedicatedServer;

	ISteamGameServer_SetDedicatedServer = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetDedicatedServer");
	ISteamGameServer_SetDedicatedServer(self, bDedicated);
}

static bool
js_ISteamGameServer_LogOn(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszToken;
	FuncPtr_ABDKEHU ISteamGameServer_LogOn;

	ISteamGameServer_LogOn = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_LogOn");
	ISteamGameServer_LogOn(self, pszToken);
}

static bool
js_ISteamGameServer_LogOnAnonymous(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamGameServer_LogOnAnonymous;

	ISteamGameServer_LogOnAnonymous = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_LogOnAnonymous");
	ISteamGameServer_LogOnAnonymous(self);
}

static bool
js_ISteamGameServer_LogOff(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamGameServer_LogOff;

	ISteamGameServer_LogOff = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_LogOff");
	ISteamGameServer_LogOff(self);
}

static bool
js_ISteamGameServer_SetMaxPlayerCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t cPlayersMax;
	FuncPtr_WX01A0G ISteamGameServer_SetMaxPlayerCount;

	ISteamGameServer_SetMaxPlayerCount = (FuncPtr_WX01A0G)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetMaxPlayerCount");
	ISteamGameServer_SetMaxPlayerCount(self, cPlayersMax);
}

static bool
js_ISteamGameServer_SetBotPlayerCount(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	int32_t cBotplayers;
	FuncPtr_WX01A0G ISteamGameServer_SetBotPlayerCount;

	ISteamGameServer_SetBotPlayerCount = (FuncPtr_WX01A0G)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetBotPlayerCount");
	ISteamGameServer_SetBotPlayerCount(self, cBotplayers);
}

static bool
js_ISteamGameServer_SetServerName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszServerName;
	FuncPtr_ABDKEHU ISteamGameServer_SetServerName;

	ISteamGameServer_SetServerName = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetServerName");
	ISteamGameServer_SetServerName(self, pszServerName);
}

static bool
js_ISteamGameServer_SetMapName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszMapName;
	FuncPtr_ABDKEHU ISteamGameServer_SetMapName;

	ISteamGameServer_SetMapName = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetMapName");
	ISteamGameServer_SetMapName(self, pszMapName);
}

static bool
js_ISteamGameServer_SetPasswordProtected(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bPasswordProtected;
	FuncPtr_Z2CYP0L ISteamGameServer_SetPasswordProtected;

	ISteamGameServer_SetPasswordProtected = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetPasswordProtected");
	ISteamGameServer_SetPasswordProtected(self, bPasswordProtected);
}

static bool
js_ISteamGameServer_SetSpectatorPort(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint16_t unSpectatorPort;
	FuncPtr_457A6DB ISteamGameServer_SetSpectatorPort;

	ISteamGameServer_SetSpectatorPort = (FuncPtr_457A6DB)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetSpectatorPort");
	ISteamGameServer_SetSpectatorPort(self, unSpectatorPort);
}

static bool
js_ISteamGameServer_SetSpectatorServerName(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszSpectatorServerName;
	FuncPtr_ABDKEHU ISteamGameServer_SetSpectatorServerName;

	ISteamGameServer_SetSpectatorServerName = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetSpectatorServerName");
	ISteamGameServer_SetSpectatorServerName(self, pszSpectatorServerName);
}

static bool
js_ISteamGameServer_ClearAllKeyValues(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamGameServer_ClearAllKeyValues;

	ISteamGameServer_ClearAllKeyValues = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_ClearAllKeyValues");
	ISteamGameServer_ClearAllKeyValues(self);
}

static bool
js_ISteamGameServer_SetKeyValue(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pKey;
	const char * pValue;
	FuncPtr_F7P7QW2 ISteamGameServer_SetKeyValue;

	ISteamGameServer_SetKeyValue = (FuncPtr_F7P7QW2)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetKeyValue");
	ISteamGameServer_SetKeyValue(self, pKey, pValue);
}

static bool
js_ISteamGameServer_SetGameTags(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchGameTags;
	FuncPtr_ABDKEHU ISteamGameServer_SetGameTags;

	ISteamGameServer_SetGameTags = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetGameTags");
	ISteamGameServer_SetGameTags(self, pchGameTags);
}

static bool
js_ISteamGameServer_SetGameData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pchGameData;
	FuncPtr_ABDKEHU ISteamGameServer_SetGameData;

	ISteamGameServer_SetGameData = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetGameData");
	ISteamGameServer_SetGameData(self, pchGameData);
}

static bool
js_ISteamGameServer_SetRegion(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const char * pszRegion;
	FuncPtr_ABDKEHU ISteamGameServer_SetRegion;

	ISteamGameServer_SetRegion = (FuncPtr_ABDKEHU)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetRegion");
	ISteamGameServer_SetRegion(self, pszRegion);
}

static bool
js_ISteamGameServer_SetAdvertiseServerActive(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool bActive;
	FuncPtr_Z2CYP0L ISteamGameServer_SetAdvertiseServerActive;

	ISteamGameServer_SetAdvertiseServerActive = (FuncPtr_Z2CYP0L)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SetAdvertiseServerActive");
	ISteamGameServer_SetAdvertiseServerActive(self, bActive);
}

static bool
js_ISteamGameServer_EndAuthSession(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	FuncPtr_ULJ3EGR ISteamGameServer_EndAuthSession;

	ISteamGameServer_EndAuthSession = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_EndAuthSession");
	ISteamGameServer_EndAuthSession(self, steamID);
}

static bool
js_ISteamGameServer_CancelAuthTicket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t hAuthTicket;
	FuncPtr_QX4IH25 ISteamGameServer_CancelAuthTicket;

	ISteamGameServer_CancelAuthTicket = (FuncPtr_QX4IH25)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_CancelAuthTicket");
	ISteamGameServer_CancelAuthTicket(self, hAuthTicket);
}

static bool
js_ISteamGameServer_GetGameplayStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamGameServer_GetGameplayStats;

	ISteamGameServer_GetGameplayStats = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_GetGameplayStats");
	ISteamGameServer_GetGameplayStats(self);
}

static bool
js_ISteamGameServer_SendUserDisconnect_DEPRECATED(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	FuncPtr_ULJ3EGR ISteamGameServer_SendUserDisconnect_DEPRECATED;

	ISteamGameServer_SendUserDisconnect_DEPRECATED = (FuncPtr_ULJ3EGR)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED");
	ISteamGameServer_SendUserDisconnect_DEPRECATED(self, steamIDUser);
}

static bool
js_ISteamGameServer_BLoggedOn(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamGameServer_BLoggedOn;

	ISteamGameServer_BLoggedOn = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_BLoggedOn");
	result = ISteamGameServer_BLoggedOn(self);
}

static bool
js_ISteamGameServer_BSecure(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamGameServer_BSecure;

	ISteamGameServer_BSecure = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_BSecure");
	result = ISteamGameServer_BSecure(self);
}

static bool
js_ISteamGameServer_WasRestartRequested(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	bool result;
	FuncPtr_47F06R2 ISteamGameServer_WasRestartRequested;

	ISteamGameServer_WasRestartRequested = (FuncPtr_47F06R2)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_WasRestartRequested");
	result = ISteamGameServer_WasRestartRequested(self);
}

static bool
js_ISteamGameServer_RequestUserGroupStatus(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	uint64_t steamIDGroup;
	bool result;
	FuncPtr_P2DHG90 ISteamGameServer_RequestUserGroupStatus;

	ISteamGameServer_RequestUserGroupStatus = (FuncPtr_P2DHG90)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_RequestUserGroupStatus");
	result = ISteamGameServer_RequestUserGroupStatus(self, steamIDUser, steamIDGroup);
}

static bool
js_ISteamGameServer_HandleIncomingPacket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const void * pData;
	int32_t cbData;
	uint32_t srcIP;
	uint16_t srcPort;
	bool result;
	FuncPtr_MLJUOOA ISteamGameServer_HandleIncomingPacket;

	ISteamGameServer_HandleIncomingPacket = (FuncPtr_MLJUOOA)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_HandleIncomingPacket");
	result = ISteamGameServer_HandleIncomingPacket(self, pData, cbData, srcIP, srcPort);
}

static bool
js_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint32_t unIPClient;
	const void * pvAuthBlob;
	uint32_t cubAuthBlobSize;
	uint64_t * pSteamIDUser;
	bool result;
	FuncPtr_Y20PO49 ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED;

	ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED = (FuncPtr_Y20PO49)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED");
	result = ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED(self, unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

static bool
js_ISteamGameServer_BUpdateUserData(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchPlayerName;
	uint32_t uScore;
	bool result;
	FuncPtr_B0QQLAS ISteamGameServer_BUpdateUserData;

	ISteamGameServer_BUpdateUserData = (FuncPtr_B0QQLAS)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_BUpdateUserData");
	result = ISteamGameServer_BUpdateUserData(self, steamIDUser, pchPlayerName, uScore);
}

static bool
js_ISteamGameServer_GetSteamID(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamGameServer_GetSteamID;

	ISteamGameServer_GetSteamID = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_GetSteamID");
	result = ISteamGameServer_GetSteamID(self);
}

static bool
js_ISteamGameServer_GetServerReputation(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamGameServer_GetServerReputation;

	ISteamGameServer_GetServerReputation = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_GetServerReputation");
	result = ISteamGameServer_GetServerReputation(self);
}

static bool
js_ISteamGameServer_AssociateWithClan(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDClan;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamGameServer_AssociateWithClan;

	ISteamGameServer_AssociateWithClan = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_AssociateWithClan");
	result = ISteamGameServer_AssociateWithClan(self, steamIDClan);
}

static bool
js_ISteamGameServer_ComputeNewPlayerCompatibility(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDNewPlayer;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamGameServer_ComputeNewPlayerCompatibility;

	ISteamGameServer_ComputeNewPlayerCompatibility = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility");
	result = ISteamGameServer_ComputeNewPlayerCompatibility(self, steamIDNewPlayer);
}

static bool
js_ISteamGameServer_CreateUnauthenticatedUserConnection(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t result;
	FuncPtr_JODKBKN ISteamGameServer_CreateUnauthenticatedUserConnection;

	ISteamGameServer_CreateUnauthenticatedUserConnection = (FuncPtr_JODKBKN)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection");
	result = ISteamGameServer_CreateUnauthenticatedUserConnection(self);
}

static bool
js_ISteamGameServer_GetAuthSessionTicket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pTicket;
	int32_t cbMaxTicket;
	uint32_t * pcbTicket;
	const SteamNetworkingIdentity * pSnid;
	uint32_t result;
	FuncPtr_E5UGQUO ISteamGameServer_GetAuthSessionTicket;

	ISteamGameServer_GetAuthSessionTicket = (FuncPtr_E5UGQUO)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_GetAuthSessionTicket");
	result = ISteamGameServer_GetAuthSessionTicket(self, pTicket, cbMaxTicket, pcbTicket, pSnid);
}

static bool
js_ISteamGameServer_BeginAuthSession(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const void * pAuthTicket;
	int32_t cbAuthTicket;
	uint64_t steamID;
	uint32_t result;
	FuncPtr_YOG5NAN ISteamGameServer_BeginAuthSession;

	ISteamGameServer_BeginAuthSession = (FuncPtr_YOG5NAN)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_BeginAuthSession");
	result = ISteamGameServer_BeginAuthSession(self, pAuthTicket, cbAuthTicket, steamID);
}

static bool
js_ISteamGameServer_UserHasLicenseForApp(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamID;
	uint32_t appID;
	uint32_t result;
	FuncPtr_8ZU9CZQ ISteamGameServer_UserHasLicenseForApp;

	ISteamGameServer_UserHasLicenseForApp = (FuncPtr_8ZU9CZQ)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_UserHasLicenseForApp");
	result = ISteamGameServer_UserHasLicenseForApp(self, steamID, appID);
}

static bool
js_ISteamGameServer_GetPublicIP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamIPAddress_t result;
	FuncPtr_YUNTO1R ISteamGameServer_GetPublicIP;

	ISteamGameServer_GetPublicIP = (FuncPtr_YUNTO1R)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_GetPublicIP");
	result = ISteamGameServer_GetPublicIP(self);
}

static bool
js_ISteamGameServer_GetNextOutgoingPacket(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	void * pOut;
	int32_t cbMaxOut;
	uint32_t * pNetAdr;
	uint16_t * pPort;
	int32_t result;
	FuncPtr_9NGPLAF ISteamGameServer_GetNextOutgoingPacket;

	ISteamGameServer_GetNextOutgoingPacket = (FuncPtr_9NGPLAF)GetProcAddress(steam_api, "SteamAPI_ISteamGameServer_GetNextOutgoingPacket");
	result = ISteamGameServer_GetNextOutgoingPacket(self, pOut, cbMaxOut, pNetAdr, pPort);
}

static bool
js_ISteamGameServerStats_RequestUserStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamGameServerStats_RequestUserStats;

	ISteamGameServerStats_RequestUserStats = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_RequestUserStats");
	result = ISteamGameServerStats_RequestUserStats(self, steamIDUser);
}

static bool
js_ISteamGameServerStats_StoreUserStats(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	uint64_t result;
	FuncPtr_ROMSHXY ISteamGameServerStats_StoreUserStats;

	ISteamGameServerStats_StoreUserStats = (FuncPtr_ROMSHXY)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_StoreUserStats");
	result = ISteamGameServerStats_StoreUserStats(self, steamIDUser);
}

static bool
js_ISteamGameServerStats_GetUserStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	int32_t * pData;
	bool result;
	FuncPtr_4HXQXV5 ISteamGameServerStats_GetUserStatInt32;

	ISteamGameServerStats_GetUserStatInt32 = (FuncPtr_4HXQXV5)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_GetUserStatInt32");
	result = ISteamGameServerStats_GetUserStatInt32(self, steamIDUser, pchName, pData);
}

static bool
js_ISteamGameServerStats_GetUserStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	float * pData;
	bool result;
	FuncPtr_L7ZISJH ISteamGameServerStats_GetUserStatFloat;

	ISteamGameServerStats_GetUserStatFloat = (FuncPtr_L7ZISJH)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_GetUserStatFloat");
	result = ISteamGameServerStats_GetUserStatFloat(self, steamIDUser, pchName, pData);
}

static bool
js_ISteamGameServerStats_GetUserAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	bool * pbAchieved;
	bool result;
	FuncPtr_RS1TYNY ISteamGameServerStats_GetUserAchievement;

	ISteamGameServerStats_GetUserAchievement = (FuncPtr_RS1TYNY)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_GetUserAchievement");
	result = ISteamGameServerStats_GetUserAchievement(self, steamIDUser, pchName, pbAchieved);
}

static bool
js_ISteamGameServerStats_SetUserStatInt32(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	int32_t nData;
	bool result;
	FuncPtr_BMTJBD8 ISteamGameServerStats_SetUserStatInt32;

	ISteamGameServerStats_SetUserStatInt32 = (FuncPtr_BMTJBD8)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_SetUserStatInt32");
	result = ISteamGameServerStats_SetUserStatInt32(self, steamIDUser, pchName, nData);
}

static bool
js_ISteamGameServerStats_SetUserStatFloat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	float fData;
	bool result;
	FuncPtr_3W1B074 ISteamGameServerStats_SetUserStatFloat;

	ISteamGameServerStats_SetUserStatFloat = (FuncPtr_3W1B074)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_SetUserStatFloat");
	result = ISteamGameServerStats_SetUserStatFloat(self, steamIDUser, pchName, fData);
}

static bool
js_ISteamGameServerStats_UpdateUserAvgRateStat(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	float flCountThisSession;
	double dSessionLength;
	bool result;
	FuncPtr_6UJ02C4 ISteamGameServerStats_UpdateUserAvgRateStat;

	ISteamGameServerStats_UpdateUserAvgRateStat = (FuncPtr_6UJ02C4)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat");
	result = ISteamGameServerStats_UpdateUserAvgRateStat(self, steamIDUser, pchName, flCountThisSession, dSessionLength);
}

static bool
js_ISteamGameServerStats_SetUserAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	bool result;
	FuncPtr_46B6E53 ISteamGameServerStats_SetUserAchievement;

	ISteamGameServerStats_SetUserAchievement = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_SetUserAchievement");
	result = ISteamGameServerStats_SetUserAchievement(self, steamIDUser, pchName);
}

static bool
js_ISteamGameServerStats_ClearUserAchievement(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	uint64_t steamIDUser;
	const char * pchName;
	bool result;
	FuncPtr_46B6E53 ISteamGameServerStats_ClearUserAchievement;

	ISteamGameServerStats_ClearUserAchievement = (FuncPtr_46B6E53)GetProcAddress(steam_api, "SteamAPI_ISteamGameServerStats_ClearUserAchievement");
	result = ISteamGameServerStats_ClearUserAchievement(self, steamIDUser, pchName);
}

static bool
js_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	FuncPtr_SGI2TCR ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort;

	ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort = (FuncPtr_SGI2TCR)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort");
	ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort(self);
}

static bool
js_ISteamNetworkingFakeUDPPort_ScheduleCleanup(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIPAddr * remoteAddress;
	FuncPtr_Q11DS9I ISteamNetworkingFakeUDPPort_ScheduleCleanup;

	ISteamNetworkingFakeUDPPort_ScheduleCleanup = (FuncPtr_Q11DS9I)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup");
	ISteamNetworkingFakeUDPPort_ScheduleCleanup(self, remoteAddress);
}

static bool
js_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	const SteamNetworkingIPAddr * remoteAddress;
	const void * pData;
	uint32_t cbData;
	int32_t nSendFlags;
	uint32_t result;
	FuncPtr_IQGQBFY ISteamNetworkingFakeUDPPort_SendMessageToFakeIP;

	ISteamNetworkingFakeUDPPort_SendMessageToFakeIP = (FuncPtr_IQGQBFY)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP");
	result = ISteamNetworkingFakeUDPPort_SendMessageToFakeIP(self, remoteAddress, pData, cbData, nSendFlags);
}

static bool
js_ISteamNetworkingFakeUDPPort_ReceiveMessages(int num_args, bool is_ctor, intptr_t magic)
{
	void * self;
	SteamNetworkingMessage_t ** ppOutMessages;
	int32_t nMaxMessages;
	int32_t result;
	FuncPtr_91FBPMQ ISteamNetworkingFakeUDPPort_ReceiveMessages;

	ISteamNetworkingFakeUDPPort_ReceiveMessages = (FuncPtr_91FBPMQ)GetProcAddress(steam_api, "SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages");
	result = ISteamNetworkingFakeUDPPort_ReceiveMessages(self, ppOutMessages, nMaxMessages);
}

