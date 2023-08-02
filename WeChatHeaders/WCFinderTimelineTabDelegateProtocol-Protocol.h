//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DelayBubble, FinderSyncTipsShowInfo, NSNumber, WCFinderFeedContentVM, WCFinderRedDotCtrlInfo;
@protocol WCFinderTabViewControllerProtocol;

@protocol WCFinderTimelineTabDelegateProtocol <NSObject>
- (NSNumber *)getTimelineTabHalfScreenProgress;
- (void)timelineTabHalfScreenProgressChanged:(NSNumber *)arg1;
- (_Bool)getTimelineHalfScreenIsShow;
- (void)timelineTabHalfScreenIsShow:(_Bool)arg1;
- (void)onCurrentFocusContentVMChanged:(id <WCFinderTabViewControllerProtocol>)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onTimelineTabVC:(id <WCFinderTabViewControllerProtocol>)arg1 updatestreamTipsShowInfo:(FinderSyncTipsShowInfo *)arg2 delayBubble:(DelayBubble *)arg3 originCtrlInfo:(WCFinderRedDotCtrlInfo *)arg4;
- (void)onCurrentForceIndexPathDidChangedAboveNewFeed:(_Bool)arg1 curFeedIndex:(unsigned long long)arg2;
- (void)onMediaCellPreparedContent;
- (void)onTimelineTabVCTopRefeshTriggleLoading:(id <WCFinderTabViewControllerProtocol>)arg1 enterRefresh:(_Bool)arg2 byTopRefresh:(_Bool)arg3;
- (void)onTimelineTabVC:(id <WCFinderTabViewControllerProtocol>)arg1 byUser:(_Bool)arg2 byTopRefresh:(_Bool)arg3;
@end

