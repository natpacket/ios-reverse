//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "ITingPlayCenterMgrExt-Protocol.h"
#import "MinimizeTaskContainerInfoDelegate-Protocol.h"
#import "TingItemDataServiceExtension-Protocol.h"
#import "TingMinimizeTaskDelegate-Protocol.h"

@class NSString, TingMinimizeBaseTask, TingTapePlayingInfo;

@interface TingMinimizeMgr : NSObject <ITingPlayCenterMgrExt, IMinimizeTaskDelegateInterface, MinimizeTaskContainerInfoDelegate, TingMinimizeTaskDelegate, TingItemDataServiceExtension>
{
    _Bool _disableMinimizeTask;
    TingTapePlayingInfo *_playingInfo;
    TingMinimizeBaseTask *_task;
}

+ (_Bool)canTingAppAddMinimization;
+ (_Bool)isTingViewControllerTop:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableMinimizeTask; // @synthesize disableMinimizeTask=_disableMinimizeTask;
@property(retain, nonatomic) TingMinimizeBaseTask *task; // @synthesize task=_task;
@property(retain, nonatomic) TingTapePlayingInfo *playingInfo; // @synthesize playingInfo=_playingInfo;
- (_Bool)isReminimizable;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (id)minimizeTaskData;
- (void)onRemoveMinimizeTaskAnimiated:(_Bool)arg1 onlyFade:(_Bool)arg2;
- (void)onAddMinimizeTaskAnimiated:(_Bool)arg1 voiceTic:(_Bool)arg2;
- (_Bool)hasMinimizeTask;
- (id)copyContainerView;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(_Bool)arg2;
- (void)updateMinimizeTaskStateWithContext:(id)arg1;
- (void)setMinimizeDisable:(_Bool)arg1;
- (void)setMinimizeTaskFold:(_Bool)arg1;
- (_Bool)hasActiveMinimieTask;
- (void)deactiveMinimizeTask;
- (void)activeMinimizeTask;
- (void)initMinimizeTask;
- (void)unregiesterObserver;
- (void)registerObserver;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

