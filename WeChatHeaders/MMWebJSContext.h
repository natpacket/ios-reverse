//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXFileLoaderDelegate-Protocol.h"
#import "WXWASMLogDelegate-Protocol.h"

@class JSContext, MMWebJsTimerHandler, NSString, NSThread, WasmAdaptor;
@protocol MMWebJSContextWasmDelegate, OS_dispatch_queue;

@interface MMWebJSContext : NSObject <WXWASMLogDelegate, WXFileLoaderDelegate>
{
    _Bool _isWasmInit;
    JSContext *_jsContext;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSThread *_subThread;
    id <MMWebJSContextWasmDelegate> _wasmDelegate;
    MMWebJsTimerHandler *_timerHandler;
    WasmAdaptor *_wasmAdaptor;
    CDUnknownBlockType _exceptionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(nonatomic) _Bool isWasmInit; // @synthesize isWasmInit=_isWasmInit;
@property(retain, nonatomic) WasmAdaptor *wasmAdaptor; // @synthesize wasmAdaptor=_wasmAdaptor;
@property(retain, nonatomic) MMWebJsTimerHandler *timerHandler; // @synthesize timerHandler=_timerHandler;
@property(nonatomic) __weak id <MMWebJSContextWasmDelegate> wasmDelegate; // @synthesize wasmDelegate=_wasmDelegate;
@property(retain, nonatomic) NSThread *subThread; // @synthesize subThread=_subThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (id)getFileData:(id)arg1;
- (void)logDebug:(id)arg1 target:(long long)arg2;
- (void)logWarning:(id)arg1 target:(long long)arg2;
- (void)logInfo:(id)arg1 target:(long long)arg2;
- (void)logError:(id)arg1 target:(long long)arg2;
- (void)addTimerhandler;
- (void)addConsoleLogHandler;
- (void)addExceptionHandler;
- (void)invalidAllTimers;
- (void)releaseWasm;
- (void)enableWasm;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)evaluateScript:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithJVM:(id)arg1 name:(id)arg2 workQueue:(id)arg3;
- (id)initWithJVM:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

