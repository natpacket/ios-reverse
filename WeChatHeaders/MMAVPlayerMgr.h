//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMAVPlayerMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray *m_arrItem;
    NSMutableArray *m_clearQueue;
    int m_aliveAvPlayer;
    _Bool m_isActive;
    _Bool m_pauseMusic;
    _Bool m_slowPlaying;
    int m_queueSemaphore;
    unsigned int m_holdingFlag;
    NSObject<OS_dispatch_queue> *m_avmgrQueue;
}

- (void).cxx_destruct;
- (void)notifyScrollViewStable;
- (void)internalPerformFullPlay:(id)arg1 muted:(_Bool)arg2 audioCategory:(unsigned long long)arg3;
- (void)internalPerformFullPlay:(id)arg1;
- (void)internalPerformSilentPlay:(id)arg1;
- (void)internalPerformClear:(id)arg1;
- (void)internalCheckItemState;
- (void)checkItemState;
- (void)resumeAllItem;
- (_Bool)stackAllItem;
- (void)clearItemImmediatly:(id)arg1;
- (void)removeFromClearQueue:(id)arg1;
- (void)internalClearItemInQueue;
- (void)addToClearQueue:(id)arg1;
- (void)clearItem:(id)arg1;
- (void)syncSilentPlayItem:(id)arg1;
- (void)silentPlayItem:(id)arg1;
- (void)fullPlayItem:(id)arg1 muted:(_Bool)arg2 audioCategory:(unsigned long long)arg3;
- (void)fullPlayItem:(id)arg1;
- (void)fullLoadItem:(id)arg1;
- (void)pauseItem:(id)arg1 isForceToPause:(_Bool)arg2;
- (void)pauseItem:(id)arg1;
- (void)loadItem:(id)arg1 forVideoPath:(id)arg2;
- (void)setItem:(id)arg1 inToScreen:(_Bool)arg2;
- (void)killItem:(id)arg1;
- (void)stopHoldingUpdate:(int)arg1;
- (void)startHoldingUpdate:(int)arg1;
- (_Bool)checkRestartMusic;
- (void)performDeactive;
- (void)unregistItem:(id)arg1;
- (id)registItem:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

