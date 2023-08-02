//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFlutterPlugin-Protocol.h"
#import "WeAPMApi-Protocol.h"

@class FlutterEngine, NSNumber, NSString;

@interface FlutterAPMPluginImpl : NSObject <MMFlutterPlugin, WeAPMApi>
{
    NSNumber *_engineCreateStartMs;
    NSNumber *_engineCreateFinishMs;
    FlutterEngine *_engine;
}

- (void).cxx_destruct;
@property(nonatomic) __weak FlutterEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSNumber *engineCreateFinishMs; // @synthesize engineCreateFinishMs=_engineCreateFinishMs;
@property(retain, nonatomic) NSNumber *engineCreateStartMs; // @synthesize engineCreateStartMs=_engineCreateStartMs;
- (id)getSnapshotRenderMillsWithError:(id *)arg1;
- (id)getNativeFirstScrollMillsWithError:(id *)arg1;
- (id)getNativeFirstPointerDownMillsWithError:(id *)arg1;
- (id)getFlutterEngineCreateStartMillsWithError:(id *)arg1;
- (id)getFlutterEngineCreateFinishMillsWithError:(id *)arg1;
- (void)getDartVMMemoryInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)initWithEngineCreateStartMs:(id)arg1 engineCreateFinishMs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

