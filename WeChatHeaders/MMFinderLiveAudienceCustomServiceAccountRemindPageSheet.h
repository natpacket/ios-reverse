//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class CAShapeLayer, MMFinderLiveAccountInfo, MMFinderLiveTaskId, MMUIButton, MMUILabel, MMWebImageView, UILabel, UIView;

@interface MMFinderLiveAudienceCustomServiceAccountRemindPageSheet : MMPageSheetBaseView
{
    _Bool _isContinue;
    UIView *_contentView;
    MMWebImageView *_headImageView;
    UILabel *_labelView;
    MMUILabel *_titleLabel;
    MMUIButton *_continueButton;
    MMUIButton *_cancelButton;
    MMFinderLiveTaskId *_taskId;
    CAShapeLayer *_shapeLayer;
    UIView *_separateViewTop;
    UIView *_separateViewDown;
    MMFinderLiveAccountInfo *_accountInfo;
    CDUnknownBlockType _completion;
}

+ (void)showWithAccountInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MMFinderLiveAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(nonatomic) _Bool isContinue; // @synthesize isContinue=_isContinue;
@property(retain, nonatomic) UIView *separateViewDown; // @synthesize separateViewDown=_separateViewDown;
@property(retain, nonatomic) UIView *separateViewTop; // @synthesize separateViewTop=_separateViewTop;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onCancelButtonClicked;
- (void)onContinueButtonClicked;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (id)initWithAccountInfo:(id)arg1;

@end

