//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FinderLiveContact, MMFinderLiveAudioModeBackgroundConfiguration, MMFinderLiveConnectMicPKInfo, MMFinderLiveFreeMicLocalInfo, NSArray, NSData, NSString, WCFinderContact;

@interface MMFinderLiveConnectMicUser : NSObject <NSCopying>
{
    _Bool _useVideo;
    _Bool _initialUseVideo;
    _Bool _isConnecting;
    _Bool _isConnectWaiting;
    _Bool _isSelf;
    _Bool _isAnchor;
    _Bool _hasConnectedOtherRoom;
    _Bool _isAudioMode;
    _Bool _isAppliedBySelf;
    _Bool _isTalking;
    _Bool _isRemoteClosed;
    _Bool _isInOtherRoom;
    _Bool _isMicTalking;
    _Bool _isMicMutedByAnchor;
    _Bool _isMicMutedBySelf;
    unsigned int _micUserAttrFlag;
    unsigned int _sdkRoomId;
    int _talkingCount;
    WCFinderContact *_connectMicFinderContact;
    unsigned long long _localCloseState;
    NSString *_sdkUserId;
    NSString *_sessionId;
    unsigned long long _sequence;
    unsigned long long _expiredTime;
    NSString *_sdkPkSign;
    NSString *_sdkNewPkSign;
    NSString *_coverImageUrlString;
    MMFinderLiveAudioModeBackgroundConfiguration *_audioModeBackgroundConfiguration;
    MMFinderLiveConnectMicPKInfo *_pkInfo;
    unsigned long long _randomMicState;
    NSData *_randomMicBuffer;
    unsigned long long _zOrder;
    unsigned long long _focusState;
    unsigned long long _uiType;
    NSString *_anchorSdkUserId;
    MMFinderLiveFreeMicLocalInfo *_freeMicLocalInfo;
    NSString *_selfDisplayName;
    unsigned long long _micIndex;
    NSArray *_badgeInfos;
    FinderLiveContact *_finderLiveContact;
    unsigned long long _liveHeatValue;
    struct CGRect _normalizedUserFrame;
}

+ (id)connectMicUserFromContact:(id)arg1;
+ (id)connectMicUserFromAnchorContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long liveHeatValue; // @synthesize liveHeatValue=_liveHeatValue;
@property(retain, nonatomic) FinderLiveContact *finderLiveContact; // @synthesize finderLiveContact=_finderLiveContact;
@property(retain, nonatomic) NSArray *badgeInfos; // @synthesize badgeInfos=_badgeInfos;
@property(nonatomic) unsigned long long micIndex; // @synthesize micIndex=_micIndex;
@property(nonatomic) _Bool isMicMutedBySelf; // @synthesize isMicMutedBySelf=_isMicMutedBySelf;
@property(nonatomic) _Bool isMicMutedByAnchor; // @synthesize isMicMutedByAnchor=_isMicMutedByAnchor;
@property(copy, nonatomic) NSString *selfDisplayName; // @synthesize selfDisplayName=_selfDisplayName;
@property(retain, nonatomic) MMFinderLiveFreeMicLocalInfo *freeMicLocalInfo; // @synthesize freeMicLocalInfo=_freeMicLocalInfo;
@property(nonatomic) _Bool isMicTalking; // @synthesize isMicTalking=_isMicTalking;
@property(copy, nonatomic) NSString *anchorSdkUserId; // @synthesize anchorSdkUserId=_anchorSdkUserId;
@property(nonatomic) _Bool isInOtherRoom; // @synthesize isInOtherRoom=_isInOtherRoom;
@property(nonatomic) unsigned long long uiType; // @synthesize uiType=_uiType;
@property(nonatomic) unsigned long long focusState; // @synthesize focusState=_focusState;
@property(nonatomic) unsigned long long zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) struct CGRect normalizedUserFrame; // @synthesize normalizedUserFrame=_normalizedUserFrame;
@property(retain, nonatomic) NSData *randomMicBuffer; // @synthesize randomMicBuffer=_randomMicBuffer;
@property(nonatomic) unsigned long long randomMicState; // @synthesize randomMicState=_randomMicState;
@property(nonatomic) _Bool isRemoteClosed; // @synthesize isRemoteClosed=_isRemoteClosed;
@property(nonatomic) int talkingCount; // @synthesize talkingCount=_talkingCount;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(nonatomic) _Bool isAppliedBySelf; // @synthesize isAppliedBySelf=_isAppliedBySelf;
@property(retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo; // @synthesize pkInfo=_pkInfo;
@property(retain, nonatomic) MMFinderLiveAudioModeBackgroundConfiguration *audioModeBackgroundConfiguration; // @synthesize audioModeBackgroundConfiguration=_audioModeBackgroundConfiguration;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
@property(copy, nonatomic) NSString *coverImageUrlString; // @synthesize coverImageUrlString=_coverImageUrlString;
@property(nonatomic) _Bool hasConnectedOtherRoom; // @synthesize hasConnectedOtherRoom=_hasConnectedOtherRoom;
@property(copy, nonatomic) NSString *sdkNewPkSign; // @synthesize sdkNewPkSign=_sdkNewPkSign;
@property(copy, nonatomic) NSString *sdkPkSign; // @synthesize sdkPkSign=_sdkPkSign;
@property(nonatomic) unsigned int sdkRoomId; // @synthesize sdkRoomId=_sdkRoomId;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) unsigned int micUserAttrFlag; // @synthesize micUserAttrFlag=_micUserAttrFlag;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(nonatomic) unsigned long long localCloseState; // @synthesize localCloseState=_localCloseState;
@property(nonatomic) _Bool isConnectWaiting; // @synthesize isConnectWaiting=_isConnectWaiting;
@property(nonatomic) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;
@property(nonatomic) _Bool initialUseVideo; // @synthesize initialUseVideo=_initialUseVideo;
@property(nonatomic) _Bool useVideo; // @synthesize useVideo=_useVideo;
@property(retain, nonatomic) WCFinderContact *connectMicFinderContact; // @synthesize connectMicFinderContact=_connectMicFinderContact;
- (void)resetAllStatusValue:(_Bool)arg1;
- (void)resetStatus;
- (void)updateBadgeInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isFinderAuthor;
@property(readonly, nonatomic) _Bool needInvite;
- (void)resetPkInfo;
- (_Bool)isSelfUser;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasAnchorAudioModeBackground;
- (id)init;

@end

