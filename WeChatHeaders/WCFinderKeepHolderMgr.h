//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCFinderFeedListTransitionHelperDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCFinderKeepHolderMgr : MMUserService <WCFinderFeedListTransitionHelperDelegate, IMinimizeTaskDelegateInterface, MMImageLoaderObserver, MMServiceProtocol>
{
    NSMutableDictionary *_loadingImageDict;
}

+ (_Bool)shouldMinimizeWithTLRecFinderCardData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadingImageDict; // @synthesize loadingImageDict=_loadingImageDict;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)generateOneTaskDataWithTLRecFinderCardData:(id)arg1 generateType:(unsigned long long)arg2;
- (id)generateOneTaskDataWithContentVM:(id)arg1 generateType:(unsigned long long)arg2;
- (id)generateOneShareVCWithMinimizeKey:(id)arg1 nonceId:(id)arg2 startPlayVideoTime:(double)arg3;
- (id)minimizeTaskDataWithTLRecFinderCardData:(id)arg1;
- (_Bool)tryAddMinimizeTask:(id)arg1;
- (id)takeCurrentScreenSnapshot;
- (id)takeMediaCellSnapshot:(id)arg1;
- (void)updateSnapShotWithImage:(id)arg1 contentVM:(id)arg2;
- (void)updateSnapShotWithCell:(id)arg1 contentVM:(id)arg2;
- (void)updateMinimizeTaskDataWithContentVM:(id)arg1;
- (void)addMinimizeTaskWithContentVM:(id)arg1 coverImage:(id)arg2 snapShotView:(id)arg3 animationStartFrame:(struct CGRect)arg4 fromViewControler:(id)arg5 generateType:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)addMinimizeTaskWithContentVM:(id)arg1 coverImage:(id)arg2 generateType:(unsigned long long)arg3;
- (void)tryMinimizeTaskWithContentVM:(id)arg1 cell:(id)arg2;
- (_Bool)shouldMinimizeWithDataItem:(id)arg1 cell:(id)arg2;
- (id)minimizeTaskDataWithTid:(id)arg1;
- (void)closeVCForKeepHold:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onTransitionTriggerMininize:(id)arg1 userInfo:(id)arg2 giveUpClose:(_Bool *)arg3;
- (id)keepHoldDelegateFromVC:(id)arg1;
- (id)createAnimation:(_Bool)arg1 forVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
