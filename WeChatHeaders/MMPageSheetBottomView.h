//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FixTitleColorButton, MMPageSheetConfig;
@protocol MMPageSheetBottomViewDelegate;

@interface MMPageSheetBottomView : UIView
{
    id <MMPageSheetBottomViewDelegate> _delegate;
    FixTitleColorButton *_cancelButton;
    FixTitleColorButton *_confirmButton;
    UIView *_customSubview;
    long long _type;
    MMPageSheetConfig *_config;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetConfig *config; // @synthesize config=_config;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *customSubview; // @synthesize customSubview=_customSubview;
@property(retain, nonatomic) FixTitleColorButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) FixTitleColorButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <MMPageSheetBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (void)layoutSubviews;
- (id)buttonWithConfig:(id)arg1 isConfirm:(_Bool)arg2;
- (void)resetButtonsWithConfig:(id)arg1;
- (void)updateConfig:(id)arg1;
- (void)onPageSheetDidAppear;

@end

