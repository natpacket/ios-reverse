//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCCommentListContentView, WCDataItem, WCImageView;

@protocol WCCommentListContentViewDelegate <NSObject>
- (void)commentListContentView:(WCCommentListContentView *)arg1 didClickWCImage:(WCImageView *)arg2;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onHeadAdSpecialClick:(WCDataItem *)arg1;
- (void)onHeadImageDoubleClicked:(id)arg1;
- (void)onHeadImageClicked:(NSString *)arg1;
@end
