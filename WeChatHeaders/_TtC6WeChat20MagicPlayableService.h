//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

@interface _TtC6WeChat20MagicPlayableService : MMUserService
{
    // Error parsing type: , name: mainScriptCallback
    // Error parsing type: , name: mainScriptJSContext
    // Error parsing type: , name: $__lazy_storage_$_jsApiContext
    // Error parsing type: , name: config
    // Error parsing type: , name: magicbrush
    // Error parsing type: , name: mbCommonAdapter
    // Error parsing type: , name: $__lazy_storage_$_mbVConsoleHelper
    // Error parsing type: , name: containerView
    // Error parsing type: , name: canvasView
    // Error parsing type: , name: pkg
    // Error parsing type: , name: manualPaused
    // Error parsing type: , name: startTime
}

- (void).cxx_destruct;
- (id)init;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (id)getFileDataByPath:(id)arg1;
- (id)provideFileSystem;
- (void)provideMainScript:(CDUnknownBlockType)arg1;
- (void)provideMainScriptWithJSContext:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)notifyMiniProgramPlayableStatusWithIsEnd:(_Bool)arg1;
- (void)setContainerViewWithView:(id)arg1;
- (void)setMuteWithMute:(_Bool)arg1;
- (void)manualResume;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startWithConfig:(id)arg1;

@end

