//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "JSEventHandler-Protocol.h"
#import "WebviewJSEventHandlerBaseDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, WKWebView, WebviewJSEventHandlerFacade;
@protocol WebViewJSLogicDelegate, YYWebViewInterface;

@interface WebViewJSLogicImpl : MMObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
    _Bool _isUseMd5ForJSAPI;
    _Bool _bInjectJSFailed;
    id <WebViewJSLogicDelegate> _delegate;
    WKWebView<YYWebViewInterface> *_webView;
    WebviewJSEventHandlerFacade *_jsEventHandlerFacade;
    NSMutableDictionary *_jsCallbackHooks;
    NSMutableDictionary *_jsUrlHooks;
    NSMutableArray *_jsEvents;
    NSMutableDictionary *_dictPageRamdomSigns;
    NSMutableDictionary *_dictPageSha2Host;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictPageSha2Host; // @synthesize dictPageSha2Host=_dictPageSha2Host;
@property(retain, nonatomic) NSMutableDictionary *dictPageRamdomSigns; // @synthesize dictPageRamdomSigns=_dictPageRamdomSigns;
@property(retain, nonatomic) NSMutableArray *jsEvents; // @synthesize jsEvents=_jsEvents;
@property(retain, nonatomic) NSMutableDictionary *jsUrlHooks; // @synthesize jsUrlHooks=_jsUrlHooks;
@property(retain, nonatomic) NSMutableDictionary *jsCallbackHooks; // @synthesize jsCallbackHooks=_jsCallbackHooks;
@property(retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandlerFacade; // @synthesize jsEventHandlerFacade=_jsEventHandlerFacade;
@property(nonatomic) _Bool bInjectJSFailed; // @synthesize bInjectJSFailed=_bInjectJSFailed;
@property(retain, nonatomic) WKWebView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WebViewJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportIDKeyForJsApiCall:(id)arg1;
- (void)reportIDKeyForInjectOptimizatedJS;
- (void)reportIDKeyForInjectJS;
- (void)injectWeixinEnvInfo;
- (id)sha1:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)injectWeixinJSBridge;
- (void)sendGetA8KeyUrlOrCookieEvent:(id)arg1 HasCookie:(_Bool)arg2;
- (void)markPageWebCached;
- (id)getWeixinEnvStr;
- (id)getWeixinJSBridgeAndPluginStr;
- (void)sendReadyEventToJSBridgeWithParams:(id)arg1;
- (void)sendAuthedEventToJSBridge:(id)arg1;
- (void)injectWeixinOptimizatedJSBridge;
- (void)tryInjectWeixinOptimizatedJSBridge:(id)arg1;
- (void)sysInitDocument:(id)arg1;
- (void)resetSysInitMarkIfNeeded;
- (void)tryInjectClassicWeixinJSBridge:(id)arg1;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (id)isExistJSApis:(id)arg1;
- (id)webviewController;
- (id)GetCurrentWebviewViewController;
- (void)jsHandlerHandle:(id)arg1;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (_Bool)isJsEventInvokeSourcBridgeeCall:(unsigned int)arg1;
- (id)wxShareCSK;
- (void)wxShareFunCall:(id)arg1 params:(id)arg2 withCallbackID:(id)arg3;
- (void)setJSAPIFunctionMap:(id)arg1;
- (id)funcDefByName:(id)arg1;
- (void)webviewWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (id)currentContextRandomID;
- (void)changeJSAPIContextRandomIDWithCurrentURL:(id)arg1;
- (void)recoverJSAPIEventDelegateWithBackup;
- (void)cleanJSAPIDelegate;
- (void)handleMonitorMessage:(id)arg1;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (void)__excutefunctionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3 apiPermission:(unsigned char)arg4 eventCompleteBlock:(CDUnknownBlockType)arg5 eventInvokeContext:(id)arg6;
- (void)__excutefunctionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3 apiPermission:(unsigned char)arg4;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)functionOuterCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3 eventCompleteBlock:(CDUnknownBlockType)arg4 eventInvokeContext:(id)arg5;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3 eventCompleteBlock:(CDUnknownBlockType)arg4 eventInvokeContext:(id)arg5;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3 eventCompleteBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

