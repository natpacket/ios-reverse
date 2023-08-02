//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WAWebViewController;
@protocol WAJSEventHandlerContextDelegate;

@interface WAJSEventHandler_BaseEvent : NSObject
{
    _Bool _runInMainThread;
    _Bool _responseUseBase64;
    unsigned int _callbackId;
    unsigned int _appServiceType;
    unsigned int _contextId;
    unsigned int _workerId;
    id <WAJSEventHandlerContextDelegate> _context;
    WAWebViewController *_webviewController;
    MMUIViewController *_contextViewController;
    NSString *_permissionAppid;
    id _userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool responseUseBase64; // @synthesize responseUseBase64=_responseUseBase64;
@property(copy, nonatomic) NSString *permissionAppid; // @synthesize permissionAppid=_permissionAppid;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) _Bool runInMainThread; // @synthesize runInMainThread=_runInMainThread;
@property(nonatomic) __weak MMUIViewController *contextViewController; // @synthesize contextViewController=_contextViewController;
@property(nonatomic) __weak WAWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) __weak id <WAJSEventHandlerContextDelegate> context; // @synthesize context=_context;
@property(nonatomic) unsigned int callbackId; // @synthesize callbackId=_callbackId;
- (void)internalEndWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (void)macroEnd:(long long)arg1 optionalArg1:(id)arg2 optionalArg2:(id)arg3;
- (void)macroEndWithErrno:(id)arg1 msg:(id)arg2 dic:(id)arg3;
- (id)getValidWebViewController;
- (void)listenWebViewDidAppearCallBack:(CDUnknownBlockType)arg1;
- (id)JSAPIName;
- (void)handleJSEvent:(id)arg1;
- (id)getWxaExternalInfo;
- (id)getAppID;
- (void)endWithResult:(id)arg1;

@end

