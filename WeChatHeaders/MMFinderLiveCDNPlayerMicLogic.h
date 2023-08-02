//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUsersInfo, MMLiveSEIConnectMicMsg, NSMutableArray, NSMutableDictionary, NSString, WCFinderDataItem;
@protocol MMFinderLiveCDNPlayerMicLogicDelegate;

@interface MMFinderLiveCDNPlayerMicLogic : NSObject
{
    _Bool _isVideoLandscapeMode;
    _Bool _canUseNewMicSEI;
    _Bool _isInCgiProcess;
    _Bool _shouldGetMicUsersAfterCgiProcess;
    _Bool _hasUnknownMicUser;
    _Bool _isOtherRoomMicAnchorAudioMode;
    unsigned int _cgiRequestNextTime;
    id <MMFinderLiveCDNPlayerMicLogicDelegate> _actionDelegate;
    WCFinderDataItem *_finderDataItem;
    NSString *_anchorSdkUserId;
    MMFinderLiveConnectMicUsersInfo *_allConnectedMicUsersInfo;
    unsigned long long _commentScene;
    NSMutableDictionary *_lastMicUsersDicFromServer;
    NSMutableArray *_lastConnectMicUserInfoListFromSEI;
    MMLiveSEIConnectMicMsg *_seiMicMsgInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOtherRoomMicAnchorAudioMode; // @synthesize isOtherRoomMicAnchorAudioMode=_isOtherRoomMicAnchorAudioMode;
@property(retain, nonatomic) MMLiveSEIConnectMicMsg *seiMicMsgInfo; // @synthesize seiMicMsgInfo=_seiMicMsgInfo;
@property(nonatomic) _Bool hasUnknownMicUser; // @synthesize hasUnknownMicUser=_hasUnknownMicUser;
@property(nonatomic) unsigned int cgiRequestNextTime; // @synthesize cgiRequestNextTime=_cgiRequestNextTime;
@property(nonatomic) _Bool shouldGetMicUsersAfterCgiProcess; // @synthesize shouldGetMicUsersAfterCgiProcess=_shouldGetMicUsersAfterCgiProcess;
@property(nonatomic) _Bool isInCgiProcess; // @synthesize isInCgiProcess=_isInCgiProcess;
@property(retain, nonatomic) NSMutableArray *lastConnectMicUserInfoListFromSEI; // @synthesize lastConnectMicUserInfoListFromSEI=_lastConnectMicUserInfoListFromSEI;
@property(retain, nonatomic) NSMutableDictionary *lastMicUsersDicFromServer; // @synthesize lastMicUsersDicFromServer=_lastMicUsersDicFromServer;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo; // @synthesize allConnectedMicUsersInfo=_allConnectedMicUsersInfo;
@property(retain, nonatomic) NSString *anchorSdkUserId; // @synthesize anchorSdkUserId=_anchorSdkUserId;
@property(nonatomic) _Bool canUseNewMicSEI; // @synthesize canUseNewMicSEI=_canUseNewMicSEI;
@property(nonatomic) _Bool isVideoLandscapeMode; // @synthesize isVideoLandscapeMode=_isVideoLandscapeMode;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(nonatomic) __weak id <MMFinderLiveCDNPlayerMicLogicDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)clearSeiData;
- (void)updateOtherMicAnchorUserIsAudioMode:(_Bool)arg1;
- (_Bool)receiveSeiConnectMicMsg:(id)arg1;
- (_Bool)receiveOldVersionSeiMsg:(id)arg1;
- (void)checkAndGetMicUsersAfterDelay:(_Bool)arg1;
- (void)wrapTryGetMicUsersFromServer:(id)arg1;
- (void)tryGetMicUsersFromServer:(_Bool)arg1;
@property(readonly, nonatomic) NSString *otherMicAnchorSdkUserId;
- (void)checkAndUpdateConnectMicUsersList;
- (void)checkAndUpdateConnectMicUsersListWithOldVersionSeiMsg;
- (void)clearMicUsersList;
- (void)updateHasUnknownMicUserAfterClearList;
- (void)clearMicUsersInfoOnly;
- (void)clearLastMicUsersDicFromServer;
- (void)checkLiveMicInfo:(id)arg1;
- (id)initWithFinderDataItem:(id)arg1 commentScene:(unsigned long long)arg2;

@end
