//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LocalJSEventHandler_BaseEvent.h"

#import "JSEventHandler-Protocol.h"
#import "LocalJSEventHandlerWebAPIBridgeEventDelegate-Protocol.h"
#import "WXCustomWebViewControllerProtocol-Protocol.h"
#import "WebviewJSEventHandlerBaseDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIView, WebViewA8KeyLogicImpl, WebViewJSLogicImpl, WebviewJSEventHandlerBase;
@protocol WXCustomWebViewControllerDelegate, YYWebViewInterface;

@interface LocalJSEventHandler_WebAPIBridge : LocalJSEventHandler_BaseEvent <WebviewJSEventHandlerBaseDelegate, WXCustomWebViewControllerProtocol, JSEventHandler, LocalJSEventHandlerWebAPIBridgeEventDelegate>
{
    WebviewJSEventHandlerBase *_handler;
}

+ (_Bool)CanHandlerEvent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WebviewJSEventHandlerBase *handler; // @synthesize handler=_handler;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(CDUnknownBlockType)arg2;
- (void)setDisableWebAlertView:(_Bool)arg1;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (id)getShareUrl;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getCurrentUrl;
- (unsigned int)getCurrentScene;
- (id)getCurrentAppId;
- (void)forceShowCloseButton;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo;
- (id)extraInfo;
- (void)enableWebContentImageLongPressingTag;
- (void)doJsApiInitEvent;
- (_Bool)allowShareByImage;
- (_Bool)allowScanQRCodeByImage;
- (_Bool)allowImagePreview;
- (_Bool)allowFayByImage;
- (id)getInitUrl;
- (id)webviewController;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)debugModuleName;
- (id)JSAPIName;
- (void)handleJSEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading;
@property(readonly, nonatomic) _Bool m_bOfflinePage;
@property(nonatomic) __weak id <WXCustomWebViewControllerDelegate> m_delegate;
@property(readonly, nonatomic) NSString *m_initUrl;
@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView;

@end

