//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTimelineTabDelegateProtocol-Protocol.h"

@class FinderRecommendCloseConfig, NSData, UIImage, WCFinderAppendTabDatasModel;

@protocol WCFinderFollowViewControllerDelegate <WCFinderTimelineTabDelegateProtocol>

@optional
- (void)currentTabViewControllerPopOthers:(unsigned long long)arg1;
- (void)currentTabViewControllerPushOthers:(unsigned long long)arg1;
- (_Bool)onFollowIsByFindPage;
- (_Bool)onFollowEnableShowMachineTab;
- (FinderRecommendCloseConfig *)onFollowGetTimelineTabConfig;
- (void)onFollowResetAppendTabDatasModel;
- (WCFinderAppendTabDatasModel *)onFollowGetAppendTabDatasModel;
- (void)onFollowClickCollectActionShowAnimation:(UIImage *)arg1 mediaCellRect:(struct CGRect)arg2;
- (void)onFollowFeedChanged;
- (void)onFeedFollowClickMoreHotContent;
- (_Bool)onFollowGetHotTabNeedTopRefresh;
- (NSData *)onFollowGetHotTabLastBuff;
- (void)onFollowTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (_Bool)onFollowTimelineNoMoreCanShowHotSwitch;
@end

