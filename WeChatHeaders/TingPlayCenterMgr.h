//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITingBizExt-Protocol.h"
#import "ITingCategoryManagerExt-Protocol.h"
#import "ITingRouterExt-Protocol.h"
#import "TingAudioTabDataManagerExt-Protocol.h"
#import "TingPlayCenterManagerDelegate-Protocol.h"
#import "TingTapeHandlerDelegate-Protocol.h"

@class NSString, TingTapeHandler;

@interface TingPlayCenterMgr : NSObject <TingTapeHandlerDelegate, ITingBizExt, TingPlayCenterManagerDelegate, ITingCategoryManagerExt, TingAudioTabDataManagerExt, ITingRouterExt>
{
    TingTapeHandler *_curTapeHandler;
    long long _taskBarControl;
}

- (void).cxx_destruct;
@property(nonatomic) long long taskBarControl; // @synthesize taskBarControl=_taskBarControl;
@property(retain, nonatomic) TingTapeHandler *curTapeHandler; // @synthesize curTapeHandler=_curTapeHandler;
- (void)willAddListenLaterWithItem:(id)arg1;
- (void)onTingAppBePresentedFromScene:(int)arg1;
- (_Bool)isInTaskBarControlBlack;
- (long long)calTaskBarControl;
- (void)onMarkTingUserActions;
- (_Bool)enableTaskBarControl;
- (id)currentPlayer;
- (id)currentFlowPlayerModel;
- (id)currentFlowPlayer;
- (id)listenTimeKeyForScene:(int)arg1;
- (unsigned long long)cacheTingListenTimeForScene:(int)arg1;
- (void)onTingListenTimeUpdated:(unsigned long long)arg1 forScene:(unsigned int)arg2;
- (void)onTapeInfoChanged:(id)arg1 playingInfo:(id)arg2;
- (void)onPause;
- (void)onPlay;
- (void)onStop;
- (void)onEnterWithScene:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePlayerEventComing:(id)arg1;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)applyCurrentTapeHandler:(id)arg1;
- (void)onLastPlayingInfoChangedEvent:(id)arg1;
- (void)onRecentTapeInfoListChangedEvent:(id)arg1;
- (id)lastestPlayedTapeInfoInCategory;
- (id)commonPreviousPlayedTapeInfo;
- (id)lastestPlayedTapeInfo;
- (void)clearLastestPlayedTapeInfo;
- (void)deleteCommonTapeInfo:(id)arg1;
- (id)__tapeInfoListFromDataList:(id)arg1;
- (id)commonTapeInfoList;
- (void)checkNeedUpdateTapeInfoList;
- (void)setLastTapePlayingInfoExpired;
- (void)setLastTapePlayingInfoModified;
- (_Bool)isLastTapePlayingInfoValid;
- (id)lastPlayingInfoFromTape;
- (id)lastestPlayingInfo;
- (void)updatePlayingInfoWithPlayer:(id)arg1;
- (void)onTingCategoryItemUpdated:(id)arg1;
- (void)onTingFlutterEnabledChanged:(_Bool)arg1;
- (void)onMgrClearData;
- (void)dealloc;
- (void)unregiesterObserver;
- (void)registerObserver;
- (id)init;
- (void)updateRemovingTapeInfos:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
