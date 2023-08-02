//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WCCanvasAdControlViewDelegate <NSObject>

@optional
- (_Bool)shouldHideVoiceBtn;
- (_Bool)shouldAdaptProgressBarFrame;
- (void)onControlViewDoubleTap;
- (void)onControlViewSingleTap;
- (void)onFullscreenBtnClick:(_Bool)arg1;
- (void)onProgressBarActionBtnClick:(_Bool)arg1;
- (void)onAudioButtonClick:(_Bool)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onToolViewAutoClose;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
@end

