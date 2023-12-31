//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, UIImageView;

@interface MMFinderLivePaymentTrialTimeSettingCell : MMUIView
{
    unsigned int _curTrialTimeHour;
    unsigned int _curTrialTimeMinute;
    long long _purchaseLivePreviewType;
    MMUILabel *_titleLabel;
    MMUILabel *_durationLabel;
    UIImageView *_arrowIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned int curTrialTimeMinute; // @synthesize curTrialTimeMinute=_curTrialTimeMinute;
@property(nonatomic) unsigned int curTrialTimeHour; // @synthesize curTrialTimeHour=_curTrialTimeHour;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getFormatTrialTimeString;
- (void)updateTrialTimeHour:(unsigned int)arg1 trialTimeMinute:(unsigned int)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 purchaseLivePreviewType:(long long)arg2 curTrialTimeHour:(unsigned int)arg3 curTrialTimeMinute:(unsigned int)arg4;

@end

