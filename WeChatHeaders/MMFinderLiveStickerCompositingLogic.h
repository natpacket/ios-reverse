//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, OrderedDictionary;
@protocol OS_dispatch_semaphore;

@interface MMFinderLiveStickerCompositingLogic : NSObject
{
    MMFinderLiveTaskId *_taskId;
    unsigned long long _maxStickerCount;
    OrderedDictionary *_compositingStickerDict;
    NSObject<OS_dispatch_semaphore> *_stickerDictLock;
}

+ (id)createStickerTransmitCompositingLogicWithMaxStickerCount:(unsigned long long)arg1 taskId:(id)arg2;
+ (id)createStickerTransmitCompositingLogicWithTaskId:(id)arg1;
+ (id)createStickerCompositingLogic:(unsigned long long)arg1 maxStickerCount:(unsigned long long)arg2 taskId:(id)arg3;
+ (id)createStickerCompositingLogic:(unsigned long long)arg1 taskId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *stickerDictLock; // @synthesize stickerDictLock=_stickerDictLock;
@property(retain, nonatomic) OrderedDictionary *compositingStickerDict; // @synthesize compositingStickerDict=_compositingStickerDict;
@property(nonatomic) unsigned long long maxStickerCount; // @synthesize maxStickerCount=_maxStickerCount;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (id)getCompositingStickerList;
- (unsigned long long)removeStickerItemWithId:(id)arg1;
- (unsigned long long)removeStickerItem:(id)arg1;
- (unsigned long long)insertStickerItemToBack:(id)arg1;
- (unsigned long long)addStickerItem:(id)arg1;
- (void)initDefaultData;
- (id)initWithMaxCount:(unsigned long long)arg1 taskId:(id)arg2;

@end

