//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTFixedFinderBaseItemView.h"

@class BTFinderRecommendRedPacketView, CAGradientLayer;

@interface BTFixedReaderStyleFinderItemView : BTFixedFinderBaseItemView
{
    BTFinderRecommendRedPacketView *_redPacketView;
    CAGradientLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) BTFinderRecommendRedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
- (void)layoutCoverContainerView:(id)arg1;
- (void)setupCoverContainer:(id)arg1;
- (void)setupHeader:(id)arg1;

@end

