//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasVideoBaseComponent.h"

#import "WCCanvasAdControlViewDelegate-Protocol.h"
#import "WCCanvasImageLoaderObserver-Protocol.h"
#import "WCPlayerDownloaderExt-Protocol.h"

@class NSString;

@interface WCCanvasSightCDNComponent : WCCanvasVideoBaseComponent <WCCanvasImageLoaderObserver, WCPlayerDownloaderExt, WCCanvasAdControlViewDelegate>
{
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (_Bool)shouldLandscapeWhenTurnToFullscreen;
- (long long)fetchWCPlayerContentMode;
- (id)createMediaItem;
- (void)reportFullscreenVideoPlayStart;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFloatAreaClickWithFullClick:(_Bool)arg1;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (id)fetchFloatBarActionItem;
- (void)setAllowVoiceFlag:(_Bool)arg1;
- (_Bool)isAllowVoice;
- (_Bool)isForbiddenControlViewShow;
- (_Bool)tryToPauseVideo;
- (_Bool)tryToPlayVideo;
- (void)initAllSubviews;
- (void)reportTotalVideoTotalTime:(double)arg1;
- (void)tryToResumePlayWhenDisplayScaleChange;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)doOnPlayEnd;
- (void)onFullscreenBtnClick:(_Bool)arg1;
- (void)onControlViewDoubleTap;
- (void)onControlViewSingleTap;
- (void)onAudioButtonClick:(_Bool)arg1;
- (void)onTapSightIconView;
- (void)onProgressBarActionBtnClick:(_Bool)arg1;
- (_Bool)isSightVideoExist;
- (void)tryToLoadSightVideo;
- (_Bool)tryToLoadThumbImage;
- (void)initWCPlayerViewInner;
- (void)tryToSetVideoPlayingState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

