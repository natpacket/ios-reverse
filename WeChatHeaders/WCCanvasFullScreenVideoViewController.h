//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "WCAdInteractionViewDelegate-Protocol.h"

@class NSString, UIButton, UIView, WCAdInteractionView, WCAdvertiseInfo, WCCanvasAdControlView, WCCanvasComponentItem, WCPlayerView, WCStatTimerHelper;
@protocol WCCanvasFullScreenVideoViewControllerDelegate;

@interface WCCanvasFullScreenVideoViewController : FullScreenViewController <WCAdInteractionViewDelegate>
{
    _Bool _bPlay;
    _Bool _forceLanscapeWhenTurnToFullscreen;
    _Bool _isVideoPlayWhenExit;
    id <WCCanvasFullScreenVideoViewControllerDelegate> _delegate;
    WCCanvasComponentItem *_componentItem;
    WCAdvertiseInfo *_advertiseInfo;
    WCPlayerView *_playerView;
    WCCanvasAdControlView *_controlView;
    UIView *_fullScreenContent;
    UIButton *_closeButton;
    WCAdInteractionView *_floatAreaView;
    WCStatTimerHelper *_timerHelper;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStatTimerHelper *timerHelper; // @synthesize timerHelper=_timerHelper;
@property(retain, nonatomic) WCAdInteractionView *floatAreaView; // @synthesize floatAreaView=_floatAreaView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool isVideoPlayWhenExit; // @synthesize isVideoPlayWhenExit=_isVideoPlayWhenExit;
@property(retain, nonatomic) UIView *fullScreenContent; // @synthesize fullScreenContent=_fullScreenContent;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) _Bool forceLanscapeWhenTurnToFullscreen; // @synthesize forceLanscapeWhenTurnToFullscreen=_forceLanscapeWhenTurnToFullscreen;
@property(nonatomic) _Bool bPlay; // @synthesize bPlay=_bPlay;
@property(retain, nonatomic) WCCanvasAdControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) WCCanvasComponentItem *componentItem; // @synthesize componentItem=_componentItem;
@property(nonatomic) __weak id <WCCanvasFullScreenVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)fetchStayTotalTime;
- (void)startVideoInner;
- (void)pauseVideoInner;
- (void)interactionViewDeterminationWasMadeWithRelatedId:(id)arg1 forType:(unsigned long long)arg2;
- (id)fetchFloatBarInfo;
- (void)reportFloatAreaExposedData;
- (void)generateFloatAreaViewForComponentItem:(id)arg1;
- (void)tryToSetCurrentOrientations:(unsigned long long)arg1;
- (void)tryToForceOrientationToLanscape;
- (void)onClickCloseButton;
- (void)clearSubviews;
- (void)dismissFullScreenWindow;
- (void)hideVCAnimation;
- (void)makeSurePortraitAndDismissFullScreenWindow;
- (void)stopAndCloseFullScreenWindow;
- (void)showVCAnimation;
- (void)resetPlayerViewFrameForSize:(struct CGSize)arg1;
- (void)resetPlayerViewFrame;
- (void)didControlViewHidden:(_Bool)arg1;
- (void)closeFullscreen;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

