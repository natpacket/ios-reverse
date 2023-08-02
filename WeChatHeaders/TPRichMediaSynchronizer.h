//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPInnerRichMediaProcessWrapperCallback-Protocol.h"
#import "ITPInnerRichMediaSynchronizer-Protocol.h"
#import "ITPPlayerRichMediaProcessorWrapperCallback-Protocol.h"

@class NSString, TPPlayerLogContext, TPPluginManager;
@protocol ITPInnerRichMediaSynchronizerDelegate, ITPPlayerRichMediaProcessorWrapper, ITPRichMediaSynchronizerDelegate;

@interface TPRichMediaSynchronizer : NSObject <ITPPlayerRichMediaProcessorWrapperCallback, ITPInnerRichMediaProcessWrapperCallback, ITPInnerRichMediaSynchronizer>
{
    id <ITPRichMediaSynchronizerDelegate> delegate;
    id <ITPInnerRichMediaSynchronizerDelegate> innerDelegate;
    id <ITPPlayerRichMediaProcessorWrapper> _processor;
    TPPlayerLogContext *_log;
    TPPluginManager *_pluginManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(retain, nonatomic) id <ITPPlayerRichMediaProcessorWrapper> processor; // @synthesize processor=_processor;
@property(nonatomic) __weak id <ITPInnerRichMediaSynchronizerDelegate> innerDelegate; // @synthesize innerDelegate;
@property(nonatomic) __weak id <ITPRichMediaSynchronizerDelegate> delegate; // @synthesize delegate;
- (void)pushEventToPluginWithEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (long long)OnGetCurrentPositionMs:(id)arg1;
- (void)onRichMediaProcessor:(id)arg1 infoType:(int)arg2 param1:(long long)arg3 param2:(long long)arg4 param3:(long long)arg5 object:(void *)arg6;
- (void)onRichMediaFeatureFailure:(id)arg1 richMediaIndex:(int)arg2 errorCode:(int)arg3;
- (void)onSelectFeatureSuccess:(id)arg1 richMediaIndex:(int)arg2;
- (void)onDeselectFeatureSuccess:(id)arg1 richMediaIndex:(int)arg2;
- (void)onRichMediaProcessor:(id)arg1 richMediaIndex:(int)arg2 featureData:(const void *)arg3;
- (void)onRichMediaProcessor:(id)arg1 errorCode:(int)arg2;
- (void)onRichMediaProcessorPrepared:(id)arg1;
- (long long)setPlaybackRate:(float)arg1;
- (id)getFeatureDataWithCurrentPositionMs:(long long)arg1 richMediaIndexes:(id)arg2;
- (long long)seekTo:(long long)arg1;
- (void)releaseRichMedia;
- (long long)reset;
- (long long)deselectFeatureAsync:(int)arg1;
- (long long)selectFeatureAsync:(int)arg1 extraRequestInfo:(id)arg2;
- (id)features;
- (long long)prepareAsync;
- (long long)setRichMediaSource:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
