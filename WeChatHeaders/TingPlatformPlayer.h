//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingAudioFocus-Protocol.h"
#import "TingFlowPlayerProtocol-Protocol.h"
#import "TingPlayTaskStateListener-Protocol.h"
#import "TingPlayerCoreExtension-Protocol.h"
#import "TingPlayerStateClient-Protocol.h"

@class NSString, TingFlowModel, TingItem, TingPlatformPlayerCore, TingPlayerAudioModuleHelper, TingPlayerContext, TingPlayerDisplayElement;
@protocol TingAudioFocusCallback, TingPlayTask;

@interface TingPlatformPlayer : NSObject <TingPlayerStateClient, TingAudioFocus, TingPlayerCoreExtension, TingPlayTaskStateListener, TingFlowPlayerProtocol>
{
    unsigned int _playerId;
    TingFlowModel *_flowModel;
    id <TingPlayTask> _playTask;
    NSString *_playTaskId;
    TingPlatformPlayerCore *_playerCore;
    TingPlayerAudioModuleHelper *_audioModuleHelper;
    id <TingAudioFocusCallback> _audioFocusCallback;
    TingPlayerContext *_playingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingPlayerContext *playingContext; // @synthesize playingContext=_playingContext;
@property(retain, nonatomic) id <TingAudioFocusCallback> audioFocusCallback; // @synthesize audioFocusCallback=_audioFocusCallback;
@property(retain, nonatomic) TingPlayerAudioModuleHelper *audioModuleHelper; // @synthesize audioModuleHelper=_audioModuleHelper;
@property(retain, nonatomic) TingPlatformPlayerCore *playerCore; // @synthesize playerCore=_playerCore;
@property(retain, nonatomic) NSString *playTaskId; // @synthesize playTaskId=_playTaskId;
@property(retain, nonatomic) id <TingPlayTask> playTask; // @synthesize playTask=_playTask;
@property(retain, nonatomic) TingFlowModel *flowModel; // @synthesize flowModel=_flowModel;
@property(nonatomic) unsigned int playerId; // @synthesize playerId=_playerId;
- (void)logError:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)onTingPlayTaskReportAction:(int)arg1 context:(id)arg2;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)notifyStatusChaged:(int)arg1 item:(id)arg2 message:(id)arg3;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 message:(id)arg4;
- (void)onTingPlayTaskPlayerStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 message:(id)arg4;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)handlePlayingContextChanged:(id)arg1;
- (void)onPlayingIndexChanged:(int)arg1;
- (void)onPlayModeChanged;
- (void)onPlayingItemUpdate:(id)arg1;
- (void)onServiceChanged:(id)arg1;
- (void)onTingItemListenIdAvailable:(id)arg1 item:(id)arg2;
- (void)tingPlayerCore:(id)arg1 onDisplayViewMTKViewCreated:(id)arg2;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementAvailable:(id)arg3;
- (void)tingPlayerCore:(id)arg1 tingItem:(id)arg2 onDisplayElementFrameOut:(id)arg3;
- (void)_onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)onInactivated:(id)arg1 update:(_Bool)arg2;
- (void)onActivated:(id)arg1 taskId:(id)arg2 update:(_Bool)arg3;
- (void)onHeartbeatResponseUpdateWithContext:(id)arg1 extInfo:(id)arg2;
- (void)_onPlayInfoEvent:(int)arg1 context:(id)arg2 msg:(id)arg3;
- (void)onPlayInfoEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)performOnMainThread:(CDUnknownBlockType)arg1;
- (void)_onPlayerEvent:(int)arg1 item:(id)arg2 msg:(id)arg3;
- (void)onPlayEvent:(id)arg1 event:(int)arg2 msg:(id)arg3;
- (void)requestFocus:(int)arg1 context:(id)arg2;
- (void)_requestFocus:(int)arg1 context:(id)arg2;
- (void)playWithModel:(id)arg1 configuration:(id)arg2;
- (void)loadWithModel:(id)arg1 configuration:(id)arg2;
- (id)reportContext;
- (id)currentPlayingInfo;
@property(nonatomic) _Bool isDissociative;
@property(nonatomic) _Bool isIsolateModule;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double displayTime;
@property(readonly, nonatomic) double currentTime;
- (_Bool)checkAndActiveAudioModule;
- (void)playWithContext:(id)arg1;
@property(nonatomic) _Bool enableAutoPlayRecommendList;
@property(readonly, nonatomic) TingPlayerDisplayElement *currentDisplayElement;
- (id)tapeItem;
- (void)refreshMembershipOpenStatusIfNeeded;
- (int)getPreferredAudioQuality;
- (void)setPreferredAudioQuality:(int)arg1;
- (_Bool)isPlayRateSupported;
@property(nonatomic) float playRate;
@property(readonly, nonatomic) long long playListCount;
@property(readonly, nonatomic) long long currentIndex;
- (id)genearetePlayingContext;
- (id)generateCurrentItem;
@property(readonly, nonatomic) _Bool shuffled;
- (void)setShuffled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isPlayModeInteractionEnabled;
@property(readonly, nonatomic) int playMode;
- (void)setPlayMode:(int)arg1;
- (void)setShuffled:(_Bool)arg1 saveSettings:(_Bool)arg2;
- (void)setPlayMode:(int)arg1 saveSettings:(_Bool)arg2;
- (_Bool)playNext;
- (_Bool)canPlayNext;
- (void)playPreviousOrSeekToStartPos;
- (_Bool)playPrevious;
- (_Bool)canPlayPrevious;
- (void)clear;
- (void)seek:(double)arg1;
- (_Bool)canSeek;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)playCurrentIndex;
- (void)play;
- (void)playWithIndex:(long long)arg1;
- (void)playWithModel:(id)arg1;
- (void)setupPlayerWithconfiguration:(id)arg1;
- (void)_loadListSource:(id)arg1 index:(unsigned long long)arg2 configuration:(id)arg3;
- (void)_loadModel:(id)arg1 configureation:(id)arg2;
- (void)setEnableBackupItemFetching:(_Bool)arg1;
- (id)generateCurrentFlowModel;
@property(readonly, nonatomic) TingItem *currentItem;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
