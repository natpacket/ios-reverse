//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderTableViewHelper : NSObject
{
}

+ (id)visibleCellInTableView:(id)arg1 forLiveId:(id)arg2;
+ (struct CGRect)morphDismissTargetFrameInTableView:(id)arg1 forLiveId:(id)arg2 videoSize:(struct CGSize)arg3;
+ (struct CGRect)videoFrameInLiveCellForCellSize:(struct CGSize)arg1 videoSize:(struct CGSize)arg2 landScapeMarginTop:(double)arg3 landScapeMarginBottom:(double)arg4;
+ (id)getCurrentFocusIndexPath:(id)arg1 tableView:(id)arg2 targetContentOffset:(struct CGPoint)arg3;
+ (id)getCurrentFocusIndexPath:(id)arg1 tableView:(id)arg2;
+ (double)feedHightOfIndexPath:(id)arg1 contentVM:(id)arg2 width:(double)arg3 paramModel:(id)arg4;
+ (id)_fullScreenFeedCellForForTableView:(id)arg1 rowAtIndexPath:(id)arg2 delegate:(id)arg3 contentVM:(id)arg4 feedViewerScene:(unsigned long long)arg5 paramModel:(id)arg6;
+ (id)feedCellForTableView:(id)arg1 rowAtIndexPath:(id)arg2 delegate:(id)arg3 contentVM:(id)arg4 feedViewerScene:(unsigned long long)arg5 paramModel:(id)arg6;
+ (void)tableViewRegisterCell:(id)arg1;

@end
