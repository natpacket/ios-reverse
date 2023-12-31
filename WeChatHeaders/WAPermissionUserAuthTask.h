//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAAuthorizeDelegate-Protocol.h"

@class NSString, WATransferJSAPIRuntimeModel, WAUserAuthorizeLogic, WxaExternalInfo;
@protocol IWATransferProxyImplProtocol, WAPermissionUserAuthTaskDelegate;

@interface WAPermissionUserAuthTask : NSObject <WAAuthorizeDelegate>
{
    unsigned int _debugModeType;
    WxaExternalInfo *_externalInfo;
    NSString *_appID;
    NSString *_permissionAppId;
    NSString *_jsapi;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _failHandler;
    unsigned long long _scene;
    WAUserAuthorizeLogic *_authorizeLogic;
    NSString *_scope;
    NSString *_scopeDescription;
    _Bool _isAllowAuth;
    id <WAPermissionUserAuthTaskDelegate> _delegate;
    WATransferJSAPIRuntimeModel *_jsapiModel;
    CDUnknownBlockType _transferHandler;
    id <IWATransferProxyImplProtocol> _transferBridge;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IWATransferProxyImplProtocol> transferBridge; // @synthesize transferBridge=_transferBridge;
@property(copy, nonatomic) CDUnknownBlockType transferHandler; // @synthesize transferHandler=_transferHandler;
@property(retain, nonatomic) WATransferJSAPIRuntimeModel *jsapiModel; // @synthesize jsapiModel=_jsapiModel;
@property(nonatomic) __weak id <WAPermissionUserAuthTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showAuthSheet;
- (void)showAuthorize;
- (void)continueShowSheet;
- (void)transferAuthCompelteWithResult:(id)arg1;
- (void)authFailAndCompleteTaskWithMessage:(id)arg1 errNo:(unsigned int)arg2;
- (void)taskComplete;
- (void)authFailWithMessage:(id)arg1 errNo:(unsigned int)arg2;
- (void)authOK;
- (void)saveAuthInfoWithStatus:(unsigned long long)arg1;
- (void)saveAuthInfo:(id)arg1;
- (id)getAuthInfo;
- (id)getCurrentViewController;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmInconsistent:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmEnd:(_Bool)arg1 response:(id)arg2;
- (void)onAuthorizeNeedConfirm:(id)arg1 cgiResponse:(id)arg2;
- (void)onRequestAuthorizeOK;
- (void)onRequestAuthorizeFail:(id)arg1 errNo:(unsigned int)arg2;
- (void)runUserAuth;
- (void)setUserAuthDataWithAPPID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(CDUnknownBlockType)arg5 failHandler:(CDUnknownBlockType)arg6 transferHandler:(CDUnknownBlockType)arg7 scene:(unsigned long long)arg8;
- (id)getJsapi;
- (id)getAppID;
- (void)dealloc;
- (id)initWithDebugModeType:(unsigned int)arg1 externalInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

