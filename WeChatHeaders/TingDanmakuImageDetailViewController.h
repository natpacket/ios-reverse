//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "TingDanmakuViewModelExtension-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCPlayerConfigDelegate-Protocol.h"

@class MMUIButton, NSString, TingDanmakuViewModel, UIImageView, WCPlayerConfigControlView, WCPlayerView;

@interface TingDanmakuImageDetailViewController : MMUIViewController <UIGestureRecognizerDelegate, WCPlayerConfigDelegate, TingDanmakuViewModelExtension>
{
    TingDanmakuViewModel *_model;
    UIImageView *_imageView;
    MMUIButton *_closeButton;
    MMUIButton *_likeButton;
    WCPlayerView *_playerView;
    WCPlayerConfigControlView *_controlView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerConfigControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TingDanmakuViewModel *model; // @synthesize model=_model;
- (void)onModel:(id)arg1 isLikedChangeFromOldValue:(_Bool)arg2 newValue:(_Bool)arg3;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapRecognized:(id)arg1;
- (void)onLikeButtonClicked;
- (void)onCloseButtonClick;
- (void)viewDidLayoutSubviews;
- (void)initViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDanmakuModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

