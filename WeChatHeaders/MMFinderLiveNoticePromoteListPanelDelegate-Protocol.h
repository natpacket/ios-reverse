//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, MMFinderLiveNoticePromoteListPanel;

@protocol MMFinderLiveNoticePromoteListPanelDelegate <NSObject>

@optional
- (void)onLiveNoticeRevoked:(FinderLiveNoticeInfo *)arg1 noticeCleared:(_Bool)arg2 byLiveNoticePromoteListPanel:(MMFinderLiveNoticePromoteListPanel *)arg3;
- (void)onAddLiveNoticeToListRequested:(FinderLiveNoticeInfo *)arg1 byLiveNoticePromoteListPanel:(MMFinderLiveNoticePromoteListPanel *)arg2;
- (void)onCreateLiveNoticeRequestedByLiveNoticePromoteListPanel:(MMFinderLiveNoticePromoteListPanel *)arg1;
@end

