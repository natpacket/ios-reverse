//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSContext, NSDictionary, WAJSEventHandler_BaseEvent;

@protocol WAJSServiceProtocol <NSObject>
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)suspendWorkingThread;
- (void)endWithResult:(NSDictionary *)arg1 handler:(WAJSEventHandler_BaseEvent *)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4 workerId:(unsigned int)arg5;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(NSDictionary *)arg2 pluginParam:(NSDictionary *)arg3 webviewID:(unsigned long long)arg4;
- (void)innerSendJSEventToService:(NSDictionary *)arg1;
- (void)startServiceThread:(unsigned long long)arg1;
- (void)startServiceThread;

@optional
- (void)onSubContextCreate:(JSContext *)arg1 contextId:(unsigned int)arg2 newInst:(_Bool)arg3;
@end

