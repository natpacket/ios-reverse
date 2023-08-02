//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "CAAnimationDelegate-Protocol.h"

@class GetWxaGameConfigResponse_WxagGameOriginalReviewConfig, MMUIButton, MMUILabel, MMUIView, NSString, UIImageView, UIView;
@protocol WAGameEvaluatePopSheetDelegate;

@interface WAGameEvaluatePopSheet : MMObject <CAAnimationDelegate>
{
    NSString *_appId;
    NSString *_weAppName;
    MMUIView *_interactView;
    MMUIView *_sheetView;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMUILabel *_questionLabel;
    MMUIView *_optionView;
    UIImageView *_thanksView;
    MMUILabel *_thanksLabel;
    unsigned int _choseOption;
    GetWxaGameConfigResponse_WxagGameOriginalReviewConfig *_config;
    id <WAGameEvaluatePopSheetDelegate> _delegate;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <WAGameEvaluatePopSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickOptionButton:(id)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setThanksViewAnimation;
- (void)showThanksView;
- (void)resetSheetViewCornerRadius;
- (id)closeButton;
- (id)genOptionButtonWithIndex:(unsigned int)arg1;
- (id)genOptionView;
- (void)genSheetView;
- (void)addInteractView;
- (double)sheetViewWidth;
- (void)releaseViews;
- (void)dismissWithWithoutAnimation;
- (void)relayoutWhenResize;
- (void)showInView:(id)arg1;
- (id)initWithAppid:(id)arg1 WeAppName:(id)arg2 Config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

