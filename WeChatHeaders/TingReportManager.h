//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingFlowPlayerNotification-Protocol.h"

@class MemoryMappedKV, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface TingReportManager : NSObject <TingFlowPlayerNotification>
{
    unsigned int _reportTimeGap;
    unsigned int _isAppInBackground;
    int _audioSessionRoute;
    unsigned int _netType;
    NSString *_sessionId;
    NSString *_tingPlayerSessionId;
    NSTimer *_checkingTimer;
    NSMutableDictionary *_pageStayTimeMap;
    MemoryMappedKV *_uniExposedIdKv;
    NSMutableArray *_reportContextList;
    NSMutableDictionary *_uiFinishPlayActionDictionary;
    NSMutableDictionary *_higherPriorityPauseResumeActionDictionary;
    NSDate *_tingPlayerSessionIdCreateDate;
    NSMutableSet *_shouldKeepSessionIdSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *shouldKeepSessionIdSet; // @synthesize shouldKeepSessionIdSet=_shouldKeepSessionIdSet;
@property(retain, nonatomic) NSDate *tingPlayerSessionIdCreateDate; // @synthesize tingPlayerSessionIdCreateDate=_tingPlayerSessionIdCreateDate;
@property(retain, nonatomic) NSMutableDictionary *higherPriorityPauseResumeActionDictionary; // @synthesize higherPriorityPauseResumeActionDictionary=_higherPriorityPauseResumeActionDictionary;
@property(retain, nonatomic) NSMutableDictionary *uiFinishPlayActionDictionary; // @synthesize uiFinishPlayActionDictionary=_uiFinishPlayActionDictionary;
@property(nonatomic) unsigned int netType; // @synthesize netType=_netType;
@property(nonatomic) int audioSessionRoute; // @synthesize audioSessionRoute=_audioSessionRoute;
@property(nonatomic) unsigned int isAppInBackground; // @synthesize isAppInBackground=_isAppInBackground;
@property(retain, nonatomic) NSMutableArray *reportContextList; // @synthesize reportContextList=_reportContextList;
@property(nonatomic) unsigned int reportTimeGap; // @synthesize reportTimeGap=_reportTimeGap;
@property(retain, nonatomic) MemoryMappedKV *uniExposedIdKv; // @synthesize uniExposedIdKv=_uniExposedIdKv;
@property(retain, nonatomic) NSMutableDictionary *pageStayTimeMap; // @synthesize pageStayTimeMap=_pageStayTimeMap;
@property(retain, nonatomic) NSTimer *checkingTimer; // @synthesize checkingTimer=_checkingTimer;
@property(copy, nonatomic) NSString *tingPlayerSessionId; // @synthesize tingPlayerSessionId=_tingPlayerSessionId;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)markPlayFinishAction:(int)arg1;
- (void)markCurrentPlayerSessionIdWillTerminated;
- (void)markAudioModuleResume;
- (void)markAudioModulePausePlay;
- (void)markAudioModuleInterrupted;
- (void)markPlayCenterClear;
- (void)markMinimizeCloseButtonClicked;
- (void)onPlayerAction:(int)arg1 context:(id)arg2;
- (int)popActionFromStorage:(id)arg1 key:(id)arg2 currentAction:(int)arg3;
- (_Bool)isTingPauseResumeAction:(int)arg1;
- (_Bool)isTingFinishPlayAction:(int)arg1;
- (_Bool)isListenIdFinishPlayAction:(int)arg1;
- (void)markTingPlayResumeAction:(int)arg1;
- (void)markTingPlayPauseAction:(int)arg1;
- (void)markTingPlayStopAction:(int)arg1;
- (void)keepCurrentPlayerSessionId;
- (_Bool)shouldKeepCurrentPlayerSessionId;
- (void)tryUpdateCurrentSessionId;
- (void)updateTingPlayerSessionId:(id)arg1;
- (void)onClickWithLine:(id)arg1 item:(id)arg2 scene:(int)arg3;
- (void)onClickWithCategory:(id)arg1 scene:(int)arg2 index:(int)arg3 fill:(CDUnknownBlockType)arg4;
- (void)onClickWithItem:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 fill:(CDUnknownBlockType)arg5;
- (void)onClickWithItemPlayButton:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 play:(_Bool)arg5 fill:(CDUnknownBlockType)arg6;
- (void)onExposedWithLine:(id)arg1 item:(id)arg2 scene:(int)arg3;
- (void)onExposedWithCategory:(id)arg1 scene:(int)arg2 index:(int)arg3 fill:(CDUnknownBlockType)arg4;
- (void)onExposedWithItem:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 fill:(CDUnknownBlockType)arg5;
- (void)onAction:(int)arg1 scene:(int)arg2 category:(id)arg3 fill:(CDUnknownBlockType)arg4;
- (void)onAction:(int)arg1 scene:(int)arg2 withItem:(id)arg3 belongsToCategory:(id)arg4 fill:(CDUnknownBlockType)arg5;
- (void)onPageDisappear:(int)arg1 fill:(CDUnknownBlockType)arg2;
- (void)onPageAppear:(int)arg1 fill:(CDUnknownBlockType)arg2;
- (void)onAction:(int)arg1 scene:(int)arg2 fill:(CDUnknownBlockType)arg3;
- (void)onAction:(int)arg1 context:(id)arg2;
- (void)onAction:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)arg1;
- (void)updateAudioSessionRoute;
- (void)didReceiveDidEnterBackgroundNotification;
- (void)didReceiveWillEnterForegroundNotification;
- (void)_reportV2;
- (void)restartTimer;
- (void)setupTimerIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

