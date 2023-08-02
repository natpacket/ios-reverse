//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSIndexPath, NSIndexSet, NSString, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCFinderFeedFollowVMDelegate <NSObject>

@optional
- (unsigned long long)followVMGetVCCommentScene;
- (void)onFeedServerNeedUpdateDataFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)feedFollowScrollToTargetIndexPath:(NSIndexPath *)arg1;
- (NSString *)feedFollowVCCurrentForceTid;
- (void)onFeedFollowVMUploadSucWithDataItem:(WCFinderDataItem *)arg1;
- (_Bool)onFeedFollowVMGetHotTabNeedTopRefresh;
- (NSData *)onFeedFollowVMGetHotTabLastBuff;
- (void)onFeedFollowVMShouldReloadAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)WCFinderFeedFollowVMIsSelected;
- (void)onFeedVMLiveDataRefreshData;
- (void)onFeedPrivateMsgTipsUpdate;
- (void)onFeedAllDataItemsNeedClean;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedVMDataTextDidShowFullText:(WCFinderFeedContentVM *)arg1;
- (void)onFeedVMLiveDataFetchFinish:(_Bool)arg1;
- (void)onFeedVMLiveDataNoMore;
- (void)onFeedVMLiveDataChanged;
- (void)onFeedVMGetNewMsg;
- (void)onFeedVMCommentFailNeedReload;
- (void)onFeedVMDataWillRemovedIndex:(long long)arg1;
- (void)onFeedVMDataWillRemoved:(WCFinderFeedContentVM *)arg1;
- (void)onFeedVMDataChangedAtIndexPath:(NSIndexPath *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 animated:(_Bool)arg3;
- (void)onFeedVMDataFetchSuccess;
- (void)onFeedVMDataLocalEmpty;
- (void)onFeedVMDataFootRefreshError;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedServerFetchHistorySuccess:(_Bool)arg1;
- (void)onFeedServerFetchSuccess;
- (void)onFeedVMInsertContentVM:(WCFinderFeedContentVM *)arg1 section:(long long)arg2;
- (void)onFeedVMDataPullRefreshStopLoading;
- (void)onFeedVMDataChangedByPublish:(NSIndexSet *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFeedVMDataAppend:(NSArray *)arg1;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(NSIndexSet *)arg1;
- (void)onFeedVMDataDeleteWithIndexSet:(NSIndexSet *)arg1;
- (void)onFeedVMDataChanged;
- (void)onFeedVMWillChangeOriginDataIndex:(_Bool)arg1;
@end
