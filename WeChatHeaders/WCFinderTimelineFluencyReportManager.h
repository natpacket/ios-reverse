//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderFluencyReportCenter;

@interface WCFinderTimelineFluencyReportManager : NSObject
{
    WCFinderFluencyReportCenter *_reportCenter;
    CDUnknownBlockType _reportBlock;
    NSMutableArray *_infoBuffer;
}

+ (id)genSceneKeyWithCommentScene:(unsigned long long)arg1 andPullType:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *infoBuffer; // @synthesize infoBuffer=_infoBuffer;
@property(copy, nonatomic) CDUnknownBlockType reportBlock; // @synthesize reportBlock=_reportBlock;
@property(retain, nonatomic) WCFinderFluencyReportCenter *reportCenter; // @synthesize reportCenter=_reportCenter;
- (id)getStoredMediaIdWithSceneKey:(id)arg1;
- (void)setLoadingStartTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullStatus:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setFirstVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoMediaId:(id)arg1 sceneKey:(id)arg2;
- (void)setShowUIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setDebugMessage:(id)arg1 sceneKey:(id)arg2;
- (void)setIsFromPrefetch:(_Bool)arg1 sceneKey:(id)arg2;
- (void)setPullCGIFailWithSceneKey:(id)arg1;
- (void)setPullCGIProfile:(id)arg1 sceneKey:(id)arg2;
- (void)setPullCGIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullHistoryCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullStreamCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setLocalOperationFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (_Bool)isStartSceneEnterWithSceneKey:(id)arg1;
- (void)setCommentScene:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setStartScene:(long long)arg1 sceneKey:(id)arg2;
- (void)setEnterTimestamp:(unsigned long long)arg1 sceneKey:(id)arg2;
- (id)initWithReportCenter:(id)arg1;

@end

