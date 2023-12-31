//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveReplayTransitionInfo, FinderLiveReplayTransitionPreloadInfo, MMFinderLiveReplayStopgapConfiguration, MMFinderLiveReplayStopgapMediaItem, MMFinderLiveReplayStopgapPreloadRecord, MMLiveTaskId;

@interface MMFinderLiveReplayStopgapLogic : NSObject
{
    _Bool _h265Capable;
    _Bool _preloadInvoked;
    unsigned int _currentLiveQuality;
    FinderLiveReplayTransitionInfo *_stopgapInfo;
    FinderLiveReplayTransitionPreloadInfo *_preloadInfo;
    MMLiveTaskId *_taskId;
    MMFinderLiveReplayStopgapConfiguration *_stopgapConfig;
    MMFinderLiveReplayStopgapPreloadRecord *_preloadRecord;
}

+ (_Bool)stopgapInfoValid:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool preloadInvoked; // @synthesize preloadInvoked=_preloadInvoked;
@property(retain, nonatomic) MMFinderLiveReplayStopgapPreloadRecord *preloadRecord; // @synthesize preloadRecord=_preloadRecord;
@property(retain, nonatomic) MMFinderLiveReplayStopgapConfiguration *stopgapConfig; // @synthesize stopgapConfig=_stopgapConfig;
@property(nonatomic) _Bool h265Capable; // @synthesize h265Capable=_h265Capable;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned int currentLiveQuality; // @synthesize currentLiveQuality=_currentLiveQuality;
@property(retain, nonatomic) FinderLiveReplayTransitionPreloadInfo *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(retain, nonatomic) FinderLiveReplayTransitionInfo *stopgapInfo; // @synthesize stopgapInfo=_stopgapInfo;
- (void)updateCurrentLiveQuality;
- (void)markPreloadCompleteWithPreloadRecord:(id)arg1;
- (void)tryStartPreload;
- (void)updateWithStopgapInfo:(id)arg1 preloadInfo:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveReplayStopgapMediaItem *preferredMediaItem;
@property(readonly, nonatomic) _Bool stopgapPresent;
- (id)initWithTaskId:(id)arg1;

@end

