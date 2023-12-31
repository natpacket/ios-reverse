//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBannerBaseCell.h"

@class MMRollableLabelView, MMRollableLabelViewConfig;

@interface WCFinderLiveBannerSearchCell : WCFinderLiveBannerBaseCell
{
    MMRollableLabelView *_masterTitleTextView;
    MMRollableLabelView *_subTitleTextView;
    MMRollableLabelViewConfig *_masterTitleConfig;
    MMRollableLabelViewConfig *_subTitleConfig;
}

+ (struct CGSize)bannerSizeByInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMRollableLabelViewConfig *subTitleConfig; // @synthesize subTitleConfig=_subTitleConfig;
@property(retain, nonatomic) MMRollableLabelViewConfig *masterTitleConfig; // @synthesize masterTitleConfig=_masterTitleConfig;
@property(retain, nonatomic) MMRollableLabelView *subTitleTextView; // @synthesize subTitleTextView=_subTitleTextView;
@property(retain, nonatomic) MMRollableLabelView *masterTitleTextView; // @synthesize masterTitleTextView=_masterTitleTextView;
- (void)forceStopPagAnimation;
- (_Bool)updateCurrentSubTitle;
- (_Bool)showDeleteAnimationWithCompleteAction:(CDUnknownBlockType)arg1;
- (double)maxSubTitleWidth;
- (double)maxMasterTitleWidth;
- (double)getRollingSpeedPerSecond:(double)arg1 maxWidth:(double)arg2;
- (void)setBannerVM:(id)arg1;
- (void)setupUIIfNeeded;
- (void)delayStartScrollAnimation;
- (void)stopScrollAnimation;
- (void)startScrollAnimation:(_Bool)arg1;
- (void)prepareForReuse;

@end

