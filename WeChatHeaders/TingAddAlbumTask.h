//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMListenCategoryItem, NSString, TingDurationFetcherTask, TingItem;

@interface TingAddAlbumTask : NSObject
{
    NSString *_taskId;
    TingItem *_tingItem;
    MMListenCategoryItem *_targetCategoryItem;
    CDUnknownBlockType _completion;
    TingDurationFetcherTask *_durationFetchTask;
    unsigned long long _retryCount;
    CDUnknownBlockType _onFinishHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onFinishHandler; // @synthesize onFinishHandler=_onFinishHandler;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) TingDurationFetcherTask *durationFetchTask; // @synthesize durationFetchTask=_durationFetchTask;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MMListenCategoryItem *targetCategoryItem; // @synthesize targetCategoryItem=_targetCategoryItem;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void)runAddToAlbum;
- (void)runAfterListenIdAvailable;
- (void)runFetchListenId;
- (void)runAfterDurationAvailable;
- (void)fetchDurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)onFetchDuration:(double)arg1;
- (void)performFetchDuration;
- (id)currentMusicDataUrl;
- (void)fetchDuration;
- (void)onError:(id)arg1;
- (void)notifyOutsideOnFinish;
- (void)execute;
- (id)init;

@end

