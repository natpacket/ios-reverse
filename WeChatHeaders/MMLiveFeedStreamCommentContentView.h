//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveCommentBaseContentView.h"

@interface MMLiveFeedStreamCommentContentView : MMFinderLiveCommentBaseContentView
{
}

+ (double)currentCommentTableWidth:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)commentTableWidthPortrait;
+ (double)commentTableWidth:(id)arg1;
- (id)createUnReadCountLabel;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(_Bool)arg1;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (struct CGRect)getCommentTableViewFrame;
- (void)layoutCommentTableView;
- (void)layoutUI;
- (void)handleUnReadCountLabelTap:(id)arg1;
- (id)commentDataMgr;

@end

