//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderContact, WCFinderProfileRecommendFollowView;

@protocol WCFinderProfileRecommendFollowViewDelegate <NSObject>
- (void)onProfileRecommendFollowViewClickMore:(WCFinderProfileRecommendFollowView *)arg1;
- (void)onProfileRecommendFollowView:(WCFinderProfileRecommendFollowView *)arg1 clickContact:(WCFinderContact *)arg2;

@optional
- (void)onProfileRecommendFollowViewExposeMore:(WCFinderProfileRecommendFollowView *)arg1;
- (void)onProfileRecommendFollowView:(WCFinderProfileRecommendFollowView *)arg1 exposeContact:(WCFinderContact *)arg2;
@end

