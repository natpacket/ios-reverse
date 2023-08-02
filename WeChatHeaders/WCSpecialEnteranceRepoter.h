//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SessionFinderPOISwitchExt-Protocol.h"
#import "SessionFinderTabSwitchExt-Protocol.h"
#import "SessionFinderTopicListExt-Protocol.h"
#import "SessionNearbyTabSwitchExt-Protocol.h"
#import "WCAccountSwitchProtocol-Protocol.h"
#import "WCSessionFlowMonitorExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCSpecialEnteranceRepoter : NSObject <WCSessionFlowMonitorExt, SessionFinderTabSwitchExt, SessionFinderTopicListExt, SessionNearbyTabSwitchExt, SessionFinderPOISwitchExt, WCAccountSwitchProtocol>
{
    unsigned long long _nearbyTabType;
    unsigned long long _nearbySubTabType;
    NSString *_finderTabSessionID;
    NSString *_finderContextID;
    NSMutableDictionary *_specialSessionDatas;
    NSMutableDictionary *_specialPageDatas;
    NSMutableArray *_specialSessionConfig;
    NSMutableArray *_specialPageConfig;
    _Bool m_isReplenishPopEvent;
    NSMutableSet *_finderPhotoWallConfig;
    NSString *_cacheAppearPageName;
    unsigned long long _cacheAppearHashCode;
}

- (void).cxx_destruct;
- (void)onFinderPOIDisappear:(id)arg1;
- (void)onFinderPOIAppear:(id)arg1;
- (void)onFinderPOIPop:(id)arg1;
- (void)onFinderPOIPush:(id)arg1;
- (void)onFinderTopicListDisappear:(unsigned long long)arg1;
- (void)onFinderTopicListAppear:(unsigned long long)arg1;
- (void)onFinderTopicListQuit:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
- (void)onFinderTopicListEnter:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
- (void)onNearbyLifeSubTabDisappear:(unsigned long long)arg1;
- (void)onNearbyLifeSubTabAppear:(unsigned long long)arg1;
- (void)onNearbyLifeDisappear;
- (void)onNearbyLifeAppear;
- (void)onNearbyLiveSubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyLiveSubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyTabDisappear:(unsigned long long)arg1;
- (void)onNearbyTabAppear:(unsigned long long)arg1;
- (void)onFinderTabDisappear:(long long)arg1;
- (void)onFinderTabAppear:(long long)arg1;
- (_Bool)isSepecialSessionReportConflict;
- (id)getSpecialPageConfig:(id)arg1;
- (id)getSpecialSessionConfig:(id)arg1;
- (void)initSpecialPageConfigs;
- (void)initSpecialSessionConfigs;
- (void)reportSpecialSessionData:(id)arg1;
- (void)reportSpecialPageData:(id)arg1;
- (_Bool)checkIsNeedFixFinderEventByPhotoWall:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (_Bool)checkIsFinderInPhotoWall:(id)arg1;
- (_Bool)isHalfFinderPoiDetailVC:(id)arg1;
- (_Bool)checkTopViewControllerIsHalfPage:(id)arg1;
- (void)onSpecialPageDisappear:(id)arg1;
- (_Bool)onSpecialPageAppear:(id)arg1;
- (void)onSpecialSessionQuit:(id)arg1 withHashCode:(unsigned long long)arg2;
- (void)onSpecialSessionEnter:(id)arg1 withHashCode:(unsigned long long)arg2;
- (void)onDisappearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onQuitPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onClearData;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

