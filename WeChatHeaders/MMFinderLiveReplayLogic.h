//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderLiveExt-Protocol.h"

@class MMFinderLiveReplayTask, MMFinderLiveReplayTaskId, NSData, NSString;
@protocol MMFinderLiveReplayLogicDelegate;

@interface MMFinderLiveReplayLogic : NSObject <WCFinderLiveExt>
{
    _Bool _isFetchingPreviewThumb;
    _Bool _hasFetchedPreviewThumb;
    unsigned int _continueFailCnt;
    id <MMFinderLiveReplayLogicDelegate> _logicDelegate;
    MMFinderLiveReplayTaskId *_replayTaskId;
    NSData *_lastPreviewThumbReqBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int continueFailCnt; // @synthesize continueFailCnt=_continueFailCnt;
@property(nonatomic) _Bool hasFetchedPreviewThumb; // @synthesize hasFetchedPreviewThumb=_hasFetchedPreviewThumb;
@property(nonatomic) _Bool isFetchingPreviewThumb; // @synthesize isFetchingPreviewThumb=_isFetchingPreviewThumb;
@property(retain, nonatomic) NSData *lastPreviewThumbReqBuffer; // @synthesize lastPreviewThumbReqBuffer=_lastPreviewThumbReqBuffer;
@property(retain, nonatomic) MMFinderLiveReplayTaskId *replayTaskId; // @synthesize replayTaskId=_replayTaskId;
@property(nonatomic) __weak id <MMFinderLiveReplayLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)clearFetchingPreviewThumbParams;
- (void)inner_getReplayPreviewThumbList;
- (void)getReplayPreviewThumbList;
- (void)fetchDetailNewDataItem;
- (void)enableCurrentLiveReplay:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)enableCurrentLiveReplay:(_Bool)arg1 scene:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)enableCurrentLiveReplay:(_Bool)arg1 isDelete:(_Bool)arg2 scene:(long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)saveLastLiveInfo;
- (_Bool)getLiveInfoWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)clearLive;
@property(readonly, nonatomic) MMFinderLiveReplayTask *replayLiveTask;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
