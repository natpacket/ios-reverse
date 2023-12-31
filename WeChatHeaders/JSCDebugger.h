//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext;

@interface JSCDebugger : NSObject
{
    JSContext *_context;
}

+ (void)JSCDebuggerQueueTaskOnGlobalQueue:(CDUnknownBlockType)arg1;
+ (struct __CFString *)JSCDebuggerRunLoopMode;
+ (_Bool)isSupportedDebugger;
+ (id)debuggerWithContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak JSContext *context; // @synthesize context=_context;
- (CDUnknownBlockType)setupConnectionAdapter:(void *)arg1 disconnectBlock:(id *)arg2;
- (void)removeDebuggerWrapper;
- (void)setupJSCConnectionIfNeeded:(_Bool)arg1;
- (id)debuggerWrapperFromContext;
- (void)getMemoryConsume:(CDUnknownBlockType)arg1;
- (void)disconnectToJSCDebugger;
- (void)sendMessageToJSCDebugger:(id)arg1;
- (_Bool)setupJSCDebuggerConnection:(CDUnknownBlockType)arg1 needFilter:(_Bool)arg2;
- (_Bool)setupJSCDebuggerConnection:(CDUnknownBlockType)arg1;

@end

