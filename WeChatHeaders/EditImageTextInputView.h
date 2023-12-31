//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EditImageColorSquareBarDelegate-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "textViewDelegate-Protocol.h"

@class EditImageColorSquareBar, EditImageTextInputViewParams, EditImageTextView, MMUIButton, NSString, UIButton, UIColor, UIView;
@protocol EditImageTextInputDelegate;

@interface EditImageTextInputView : MMUIView <textViewDelegate, UITextViewDelegate, IUiUtilExt, EditImageColorSquareBarDelegate>
{
    EditImageTextView *_inputView;
    MMUIButton *_cancelBtn;
    UIView *_colorBarContainerView;
    EditImageColorSquareBar *_colorBar;
    UIColor *_textColor;
    MMUIView *_translucentView;
    struct CGRect _editViewFrame;
    unsigned long long _textStyle;
    EditImageTextInputView *_tempTextInputView;
    _Bool _enableMultiline;
    id <EditImageTextInputDelegate> _delegate;
    NSString *_textStr;
    UIView *_textView;
    MMUIButton *_confirmBtn;
    UIButton *_textStyleBtn;
    unsigned long long _maxNumberOfLines;
    EditImageTextInputViewParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditImageTextInputViewParams *params; // @synthesize params=_params;
@property(nonatomic) unsigned long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(nonatomic) _Bool enableMultiline; // @synthesize enableMultiline=_enableMultiline;
@property(retain, nonatomic) UIButton *textStyleBtn; // @synthesize textStyleBtn=_textStyleBtn;
@property(retain, nonatomic) MMUIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *_textView; // @synthesize _textView;
@property(copy, nonatomic) NSString *_textStr; // @synthesize _textStr;
@property(nonatomic) __weak id <EditImageTextInputDelegate> _delegate; // @synthesize _delegate;
- (void)dealloc;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setSelectedColorFromSquareBar:(id)arg1;
- (void)onMainWindowFrameChanged;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (unsigned long long)getNextStyle;
- (void)onTextStyleChange;
- (id)getTextStyleIconName;
- (void)onConfirm;
- (void)onCancel;
- (void)dropDownAndRemove;
- (void)didMoveToSuperview;
- (void)addTranslucent;
- (void)addBlur;
@property(nonatomic) double textHighlightAlpha;
- (void)layoutSubviews;
- (void)updateFrame:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1 withParams:(id)arg2;
- (id)initWithEditViewFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

