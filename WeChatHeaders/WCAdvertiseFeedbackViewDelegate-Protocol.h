//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, WCDataItem;

@protocol WCAdvertiseFeedbackViewDelegate <NSObject>
- (void)onClickGuideAdManageBtn:(NSString *)arg1 dataItem:(WCDataItem *)arg2;
- (void)onClickNegativeReasonBtn:(NSMutableArray *)arg1 dataItem:(WCDataItem *)arg2;
- (void)onClickNegativeBtn:(_Bool)arg1 dataItem:(WCDataItem *)arg2;
- (void)onClickPositiveBtn:(WCDataItem *)arg1;
- (void)onClickComplainBtn:(NSString *)arg1 dataItem:(WCDataItem *)arg2;
- (void)onAdFeedbackDisappear:(NSString *)arg1;
@end

