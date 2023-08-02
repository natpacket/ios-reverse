//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBaseFile, NSMutableArray, NSMutableDictionary, NSString, WCRMFrame, WCRMRule;

@interface WCRMStatus : NSObject
{
    NSString *_ticket;
    WCRMRule *_rule;
    unsigned long long _completeFramesCount;
    WCRMFrame *_firstCompleteFrame;
    WCRMFrame *_finalCompleteFrame;
    double _framesWaitTime;
    double _framesSleepTime;
    NSMutableDictionary *_stageTotalDurationTable;
    NSMutableArray *_cacheFrames;
    unsigned long long _completeCacheFramesCount;
    unsigned long long _collectEachFrameDataBatch;
    WCRMFrame *_lastCollectEachFrameDataBatchFinalFrame;
    double _sleepDurationBeforeNextFrame;
    unsigned long long _notGoodFramesCount;
    unsigned long long _badFramesCount;
    unsigned long long _veryBadFramesCount;
    unsigned long long _failedFramesCount;
    CBaseFile *_eachFramesDataCacheFile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBaseFile *eachFramesDataCacheFile; // @synthesize eachFramesDataCacheFile=_eachFramesDataCacheFile;
@property(nonatomic) unsigned long long failedFramesCount; // @synthesize failedFramesCount=_failedFramesCount;
@property(nonatomic) unsigned long long veryBadFramesCount; // @synthesize veryBadFramesCount=_veryBadFramesCount;
@property(nonatomic) unsigned long long badFramesCount; // @synthesize badFramesCount=_badFramesCount;
@property(nonatomic) unsigned long long notGoodFramesCount; // @synthesize notGoodFramesCount=_notGoodFramesCount;
@property(nonatomic) double sleepDurationBeforeNextFrame; // @synthesize sleepDurationBeforeNextFrame=_sleepDurationBeforeNextFrame;
@property(retain, nonatomic) WCRMFrame *lastCollectEachFrameDataBatchFinalFrame; // @synthesize lastCollectEachFrameDataBatchFinalFrame=_lastCollectEachFrameDataBatchFinalFrame;
@property(nonatomic) unsigned long long collectEachFrameDataBatch; // @synthesize collectEachFrameDataBatch=_collectEachFrameDataBatch;
@property(nonatomic) unsigned long long completeCacheFramesCount; // @synthesize completeCacheFramesCount=_completeCacheFramesCount;
@property(retain, nonatomic) NSMutableArray *cacheFrames; // @synthesize cacheFrames=_cacheFrames;
@property(retain, nonatomic) NSMutableDictionary *stageTotalDurationTable; // @synthesize stageTotalDurationTable=_stageTotalDurationTable;
@property(nonatomic) double framesSleepTime; // @synthesize framesSleepTime=_framesSleepTime;
@property(nonatomic) double framesWaitTime; // @synthesize framesWaitTime=_framesWaitTime;
@property(retain, nonatomic) WCRMFrame *finalCompleteFrame; // @synthesize finalCompleteFrame=_finalCompleteFrame;
@property(retain, nonatomic) WCRMFrame *firstCompleteFrame; // @synthesize firstCompleteFrame=_firstCompleteFrame;
@property(nonatomic) unsigned long long completeFramesCount; // @synthesize completeFramesCount=_completeFramesCount;
@property(retain, nonatomic) WCRMRule *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
- (void)collectEachFrameDataLocallyWithContent:(id)arg1;
- (void)collectEachFrameDataWithContent:(id)arg1;
- (void)dealloc;
- (id)initWithTicket:(id)arg1 rule:(id)arg2;

@end

