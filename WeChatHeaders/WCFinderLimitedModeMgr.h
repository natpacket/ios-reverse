//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMLimitedModeMgrExt-Protocol.h"
#import "MMLimitedModeAuthorizationUtilLogicDelegate-Protocol.h"

@class MMLimitedModeAuthorizationUtilLogic, NSString, WCFinderLimitAccessAuthorizationModel;
@protocol WCFinderLimitedModeMgrDelegate;

@interface WCFinderLimitedModeMgr : NSObject <IMMLimitedModeMgrExt, MMLimitedModeAuthorizationUtilLogicDelegate>
{
    _Bool _checkAntiVCIsShowing;
    _Bool _openShareListFeedsIgnoreLimited;
    _Bool _enableShowShareRelatedWhenYoungContentLimit;
    id <WCFinderLimitedModeMgrDelegate> _delegate;
    long long _finderLimitedModeConfig;
    unsigned long long _antiAddictInterval;
    unsigned long long _antiAddictPassSeconds;
    unsigned long long _lastLiftCurfewTimeStamp;
    unsigned long long _lastInFinderTimeStamp;
    MMLimitedModeAuthorizationUtilLogic *_authorizationLogic;
    WCFinderLimitAccessAuthorizationModel *_authorizationModel;
    unsigned long long _antiSceneTotalWatchSeconds;
}

+ (CDUnknownBlockType)getOpenTeenageBlockByLiveParams:(id)arg1;
+ (CDUnknownBlockType)getOpenTeenageBlockByFeedId:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 shareScene:(unsigned long long)arg4 currentNavController:(id)arg5 customParam:(id)arg6 functionalParams:(id)arg7 reportModel:(id)arg8 cardType:(unsigned long long)arg9;
+ (id)getLiveAuthorizationBizKeyWithFeedId:(id)arg1;
+ (id)getFeedAuthorizationBizKeyWithFeedId:(id)arg1;
+ (id)getTimeLockAuthorizationBizKey;
+ (id)getCurfewAuthorizationBizKey;
+ (_Bool)canCheckAntiAddictLogicBySwitch;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long antiSceneTotalWatchSeconds; // @synthesize antiSceneTotalWatchSeconds=_antiSceneTotalWatchSeconds;
@property(retain, nonatomic) WCFinderLimitAccessAuthorizationModel *authorizationModel; // @synthesize authorizationModel=_authorizationModel;
@property(retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *authorizationLogic; // @synthesize authorizationLogic=_authorizationLogic;
@property(nonatomic) _Bool enableShowShareRelatedWhenYoungContentLimit; // @synthesize enableShowShareRelatedWhenYoungContentLimit=_enableShowShareRelatedWhenYoungContentLimit;
@property(nonatomic) unsigned long long lastInFinderTimeStamp; // @synthesize lastInFinderTimeStamp=_lastInFinderTimeStamp;
@property(nonatomic) unsigned long long lastLiftCurfewTimeStamp; // @synthesize lastLiftCurfewTimeStamp=_lastLiftCurfewTimeStamp;
@property(nonatomic) unsigned long long antiAddictPassSeconds; // @synthesize antiAddictPassSeconds=_antiAddictPassSeconds;
@property(nonatomic) unsigned long long antiAddictInterval; // @synthesize antiAddictInterval=_antiAddictInterval;
@property(nonatomic) long long finderLimitedModeConfig; // @synthesize finderLimitedModeConfig=_finderLimitedModeConfig;
@property(nonatomic) _Bool openShareListFeedsIgnoreLimited; // @synthesize openShareListFeedsIgnoreLimited=_openShareListFeedsIgnoreLimited;
@property(nonatomic) _Bool checkAntiVCIsShowing; // @synthesize checkAntiVCIsShowing=_checkAntiVCIsShowing;
@property(nonatomic) __weak id <WCFinderLimitedModeMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAgreenAuthorization:(id)arg1 agreenAuthorizationInfo:(id)arg2;
- (void)onVerifyCancelWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessAndAnimationEndedWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)startQuestAccessFeedAuthorizationWithContentVM:(id)arg1 bizKey:(id)arg2 currentNavController:(id)arg3;
- (void)startQuestAccessFeedAuthorizationWithModel:(id)arg1;
- (_Bool)checkWhetherLimitedByFuncFlag:(unsigned long long)arg1 paramsModel:(id)arg2;
- (unsigned long long)getTotalWatchSecondsCheckInterval:(_Bool)arg1;
- (void)clearRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)resetCacheAntiSceneTotalWatchSeconds;
- (void)resetCacheAntiAddictPassSeconds;
- (id)initWithPassSeconds:(unsigned long long)arg1 lastLiftCurfewTimeStamp:(unsigned long long)arg2 antiSceneTotalWatchSeconds:(unsigned long long)arg3 dynamicConfigModel:(id)arg4;
- (long long)getAntiAddictStyle;
- (void)triggerAntiAddictCheckLogic:(unsigned long long)arg1 fromVC:(id)arg2 checkViewWillAppearBlock:(CDUnknownBlockType)arg3 checkViewDidAppearBlock:(CDUnknownBlockType)arg4 checkVerifySucBlock:(CDUnknownBlockType)arg5 checkViewExitBlock:(CDUnknownBlockType)arg6 controlExitState:(_Bool)arg7;
- (void)resetAntiAddictPassSeconds;
- (void)_isTimeToCheckAntiAddictLogic:(long long)arg1 scene:(unsigned long long)arg2 fromVC:(id)arg3 checkViewWillAppearBlock:(CDUnknownBlockType)arg4 checkViewDidAppearBlock:(CDUnknownBlockType)arg5 checkVerifySucBlock:(CDUnknownBlockType)arg6 checkViewExitBlock:(CDUnknownBlockType)arg7 controlExitState:(_Bool)arg8;
- (_Bool)_checkFromVCCanShowAntiAddict:(id)arg1;
- (_Bool)_shouldCheckAntiAddictByCurfew;
- (void)_updateAntiSceneTotalWatchSeconds;
- (void)limitedAgreeAuthorization:(id)arg1;
- (void)limitedModeChanged:(_Bool)arg1;
- (void)_updateAntiAddictPassSeconds;
- (void)updateAntiTimeDatas;
- (void)updateLastInFinderTimeStamp;
- (void)leaveAntiScene;
- (void)enterAntiScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
