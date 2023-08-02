//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveTask.h"

@class MMGroupLiveCommentDataFetchEngine, MMGroupLiveInfoItem, MMLiveTaskId, NSString;

@interface MMGroupLiveTask : MMLiveTask
{
    unsigned int _anchorScene;
    unsigned int _audienceScene;
    MMLiveTaskId *_taskId;
    MMGroupLiveInfoItem *_liveInfoItem;
}

+ (id)createTaskWithGroupLiveInfoItem:(id)arg1;
+ (id)createTaskWithShareLiveMsg:(id)arg1;
+ (id)createTaskWithReplaySysMsg:(id)arg1 linkUrl:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int audienceScene; // @synthesize audienceScene=_audienceScene;
@property(nonatomic) unsigned int anchorScene; // @synthesize anchorScene=_anchorScene;
@property(retain, nonatomic) MMGroupLiveInfoItem *liveInfoItem; // @synthesize liveInfoItem=_liveInfoItem;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)handleRemoteSdkUserMediaDataAvailableChanged;
- (id)pauseTimeCachedKey;
- (id)pauseStatusCachedKey;
- (id)micMutedCachedKey;
- (id)lastCameraModeCachedKey;
- (void)initBeautyLogic;
- (void)initFaceBeautyParam;
- (long long)getBeautySceneType;
- (void)initFrontCameraMirrorMode;
- (_Bool)canChangeAudioQuality;
- (_Bool)isOverDisplaySize;
- (void)updateMainRemoteViewFillMode;
- (id)conflictWording;
- (_Bool)resolveExternalConflicts;
- (_Bool)resolveConflictsWithLiveTask:(id)arg1 navigationController:(id)arg2 maximizeLiveBlock:(CDUnknownBlockType)arg3 switchLiveBlock:(CDUnknownBlockType)arg4;
- (_Bool)isOnlineStateButtonDisabled;
- (id)anchorIdentityId;
- (unsigned int)liveStartTime;
- (_Bool)isLiveClosed;
- (_Bool)isSameToTask:(id)arg1;
@property(readonly, nonatomic) MMGroupLiveCommentDataFetchEngine *groupCommentFetchEngine;
- (id)createNewCommentFetchEngine;
- (id)createNewTaskId;
- (void)updateLiveInfo:(id)arg1;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 roomId:(id)arg3 andAnchorId:(id)arg4;
@property(readonly, copy, nonatomic) NSString *roomId; // @dynamic roomId;

// Remaining properties
@property(nonatomic) unsigned long long frontCameraMirrorMode; // @dynamic frontCameraMirrorMode;
@property(nonatomic) _Bool isFrontCameraMirrored; // @dynamic isFrontCameraMirrored;

@end

