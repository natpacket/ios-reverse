//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveTask.h"

@class MMFinderLiveReplayTaskId, MMFinderLiveReplayView, NSString;

@interface MMFinderLiveReplayTask : MMFinderLiveTask
{
    _Bool _isLivePausedBySlider;
    _Bool _isLivePausedForCapture;
    _Bool _isLivePausedForBarrage;
    _Bool _isLivePausedReplayLiveForOuter;
    MMFinderLiveReplayView *_replayView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveReplayView *replayView; // @synthesize replayView=_replayView;
@property(nonatomic) _Bool isLivePausedReplayLiveForOuter; // @synthesize isLivePausedReplayLiveForOuter=_isLivePausedReplayLiveForOuter;
@property(nonatomic) _Bool isLivePausedForBarrage; // @synthesize isLivePausedForBarrage=_isLivePausedForBarrage;
@property(nonatomic) _Bool isLivePausedForCapture; // @synthesize isLivePausedForCapture=_isLivePausedForCapture;
@property(nonatomic) _Bool isLivePausedBySlider; // @synthesize isLivePausedBySlider=_isLivePausedBySlider;
- (void)resumeReplayLiveForOuter;
- (void)pauseReplayLiveForOuter;
- (void)resumeLiveForBarrage;
- (void)pauseLiveForBarrage;
- (void)resumeLiveForUnCapture;
- (void)pauseLiveForCapture;
- (void)resumeLiveBySlider;
- (void)pauseLiveBySlider;
- (_Bool)unMuteLiveRemoteAudio;
- (_Bool)muteLiveRemoteAudio;
- (void)updateReplayRemoteVideoSize:(struct CGSize)arg1;
- (_Bool)isLiveAudienceDisplayMode;
@property(readonly, nonatomic) _Bool disableForwardByGlobalReplayConfig;
@property(readonly, nonatomic) NSString *audioModeCoverImageUrlString;
- (_Bool)getCurrentShouldForbidLandscape;
- (_Bool)shouldForbidLandScapeForIphone;
- (_Bool)isReplay;
@property(readonly, nonatomic) MMFinderLiveReplayTaskId *replayTaskId;
- (_Bool)resumeOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (_Bool)resumeAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (_Bool)resumeAudioModeBackgroundVideoPlayerIfNeeded;
- (_Bool)pauseOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (_Bool)pauseAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (_Bool)pauseAudioModeBackgroundVideoPlayerIfNeeded;
- (id)getLiveMuteSceneDescription;
- (void)resumeLiveByPIP;
- (void)resumeLiveByMinimizeWindow;
- (id)getLivePauseSceneDescription;
- (_Bool)isLivePause;
- (id)createLiveViewWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (id)getConflictWording;
- (void)checkPaidLiveTrialCountLimitReached;
- (_Bool)needEnterLiveComplete;
- (_Bool)isLiveClosed;
- (_Bool)innerResumeLiveForAudience;
- (_Bool)innerPauseLiveForAudience;
- (_Bool)handleConflictWithNewFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 navigationController:(id)arg3 tabType:(long long)arg4 commentScene:(unsigned long long)arg5 replayEntryType:(id)arg6;
- (_Bool)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (id)createNewTaskId;
- (id)initWithLiveContentVM:(id)arg1;

@end
