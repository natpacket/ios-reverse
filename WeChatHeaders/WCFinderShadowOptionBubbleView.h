//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class RichTextView, UIButton, UIView;

@interface WCFinderShadowOptionBubbleView : MMUIView
{
    UIView *_containerView;
    RichTextView *_leftContenTextView;
    UIButton *_actionBtn;
    UIButton *_closeBtn;
    CDUnknownBlockType _closeBlock;
}

+ (unsigned long long)getLeftTextAreaMaxLengthCountByTotalWidth:(double)arg1 rightTips:(id)arg2;
+ (double)leftTextAreaMaxWidthByTotalWidth:(double)arg1 rightTips:(id)arg2;
+ (double)bubbleViewHeightByTotalWidth:(double)arg1 leftContent:(id)arg2 rightTips:(id)arg3;
+ (id)genCloseBtnTarget:(id)arg1 action:(SEL)arg2;
+ (id)genRighTextViewByWidth:(double)arg1;
+ (id)genActionBtnBy:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) RichTextView *leftContenTextView; // @synthesize leftContenTextView=_leftContenTextView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)onClickCloseBtn;
- (void)removeViewAction:(_Bool)arg1;
- (void)willRemoveView;
- (void)layoutAllSubviews;
- (void)setUpUIByLeftContent:(id)arg1 rightTips:(id)arg2 actionClickBlock:(CDUnknownBlockType)arg3 closeClickBlock:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 leftContent:(id)arg2 rightTips:(id)arg3 actionClickBlock:(CDUnknownBlockType)arg4 closeClickBlock:(CDUnknownBlockType)arg5;

@end

