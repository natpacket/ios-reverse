//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "UITextViewDelegate-Protocol.h"

@class MMUILabel, NSString, UIButton, UIImageView, UITextView, UIView;
@protocol WAAlertDialogDelegate;

@interface WAAlertDialog : MMObject <UITextViewDelegate>
{
    UIButton *_backgroundRoot;
    UIView *_contentView;
    UIImageView *_contentBg;
    MMUILabel *_tipsTitleLabel;
    UITextView *_tipsContentLabel;
    UITextView *_tipsPlaceHolderLabel;
    _Bool _editable;
    NSString *_confirmText;
    NSString *_cancelText;
    id <WAAlertDialogDelegate> _delegate;
    UIView *_view;
    UIView *_alignView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *alignView; // @synthesize alignView=_alignView;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <WAAlertDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)getContentText;
- (id)getTitleText;
- (id)getInputText;
- (void)bringToFront;
- (void)fadeIn:(double)arg1;
- (void)hide;
- (void)onClickBtn:(id)arg1;
- (void)onTapBackground;
- (void)orientationDidChange;
- (void)relayoutSubviews;
- (void)updateSubViewsFrame;
- (void)setButtonColor:(id)arg1 withTag:(long long)arg2;
- (void)setButtonTitle:(id)arg1 cancel:(id)arg2;
- (id)bulidNSAttributedStringText:(id)arg1 onlyTitle:(_Bool)arg2 onlyContent:(_Bool)arg3;
- (void)setContent:(id)arg1 title:(id)arg2 editable:(_Bool)arg3 placeHolder:(id)arg4;
- (id)initWithWebView:(id)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 alignView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

