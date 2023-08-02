//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OMJThumbnailProvider-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface OMJVideoThumbnailProvider : NSObject <OMJThumbnailProvider>
{
    SharedPtr_cbbc2efe _backingVideoClip;
    struct SharedPtr<XMFVideoClipThumbGen> _backingThumbGen;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> _taskIDs;
    struct XIntegerID<int, -1> _clientID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct XMutexPOSIX _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelAllTasks;
- (void)cancelTask:(long long)arg1;
- (void)onRequestCompleteForTimeRange:(struct XTMTimeRange)arg1 resultHandler:(CDUnknownBlockType)arg2 resultType:(int)arg3 videoFrame:(SharedPtr_43d2f63a)arg4 taskID:(unsigned int)arg5;
- (long long)requestThumbnailAtTimeRange:(CDStruct_e83c9415)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (long long)requestThumbnailAtTime:(CDStruct_1b6d18a9)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)teardownIfNeeded;
- (void)dealloc;
- (id)initWithVideoClip:(SharedPtr_cbbc2efe)arg1 maxPixelSize:(struct CGSize)arg2 callbackQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
