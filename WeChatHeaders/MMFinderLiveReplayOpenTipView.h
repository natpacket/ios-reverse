//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class MMUIButton, MMUIImageView, MMUILabel, UIView;

@interface MMFinderLiveReplayOpenTipView : MMPageSheetBaseView
{
    _Bool _isChargableLive;
    _Bool _isAgreementChecked;
    unsigned long long _replayState;
    CDUnknownBlockType _createReplayBlock;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    MMUIImageView *_headImageView;
    MMUIButton *_closeButton;
    MMUIButton *_agreementCheckbox;
    MMUIButton *_createReplayButton;
    MMUIButton *_agreementButton;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) MMUIButton *agreementButton; // @synthesize agreementButton=_agreementButton;
@property(retain, nonatomic) MMUIButton *createReplayButton; // @synthesize createReplayButton=_createReplayButton;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType createReplayBlock; // @synthesize createReplayBlock=_createReplayBlock;
@property(nonatomic) _Bool isChargableLive; // @synthesize isChargableLive=_isChargableLive;
@property(nonatomic) unsigned long long replayState; // @synthesize replayState=_replayState;
- (void)leftButtonAction;
- (void)createReplayAction;
- (void)updateAccessbility;
- (void)onCheckBoxClicked;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)updateData:(unsigned long long)arg1 isChargableLive:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
