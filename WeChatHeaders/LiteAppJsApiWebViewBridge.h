//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiteAppPermanentJsApi.h"

#import "JSEventHandler-Protocol.h"
#import "WebviewJSEventHandlerBaseDelegate-Protocol.h"

@class NSString, WebviewJSEventHandlerFacade;

@interface LiteAppJsApiWebViewBridge : LiteAppPermanentJsApi <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    NSString *_errorMsg;
    WebviewJSEventHandlerFacade *_jsEventHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandler; // @synthesize jsEventHandler=_jsEventHandler;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (id)webviewController;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

