//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveConnectMicBaseUserInfoView.h"

@interface MMFinderLiveConnectMicVideoUserInfoView : MMFinderLiveConnectMicBaseUserInfoView
{
    _Bool _isGlobalSmallMode;
}

@property(nonatomic) _Bool isGlobalSmallMode; // @synthesize isGlobalSmallMode=_isGlobalSmallMode;
- (void)updateMicMutedButtonAppearance;
- (void)layoutUI;
- (struct CGRect)displayNormalizedFrame;
- (unsigned long long)viewType;
- (_Bool)needDisplayGlobalRankSignView;
- (void)updateHeadImageViewSize;
- (void)show;

@end
