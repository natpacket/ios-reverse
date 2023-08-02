//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "UITextFieldDelegate-Protocol.h"

@class MMFinderLiveRewardWishView, MMUIButton, MMUILabel, MMUITextField, NSString, UIView;
@protocol MMFinderLiveRewardWishInputViewDelegate;

@interface MMFinderLiveRewardWishInputView : MMPageSheetBaseView <UITextFieldDelegate>
{
    UIView *_contentView;
    UIView *_rewardCountTextFieldBackgroundView;
    MMUITextField *_rewardCountTextField;
    MMUIButton *_backButton;
    MMUILabel *_titleLabel;
    MMUIButton *_doneButton;
    double _contentViewHeight;
    id <MMFinderLiveRewardWishInputViewDelegate> _operationDelegate;
    MMFinderLiveRewardWishView *_targetWishView;
    unsigned long long _maxTargetCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxTargetCount; // @synthesize maxTargetCount=_maxTargetCount;
@property(nonatomic) __weak MMFinderLiveRewardWishView *targetWishView; // @synthesize targetWishView=_targetWishView;
@property(nonatomic) __weak id <MMFinderLiveRewardWishInputViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) MMUITextField *rewardCountTextField; // @synthesize rewardCountTextField=_rewardCountTextField;
@property(retain, nonatomic) UIView *rewardCountTextFieldBackgroundView; // @synthesize rewardCountTextFieldBackgroundView=_rewardCountTextFieldBackgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onDoneButtonClicked:(id)arg1;
- (void)backAction;
- (void)onContentViewTapped;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)pageSheetWillDisappear;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)layoutRewardCountTextField;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithContentViewHeight:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

