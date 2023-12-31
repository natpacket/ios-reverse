//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSWebViewPluginBase.h"

@interface WSWebViewPlugin_JSBridge : WSWebViewPluginBase
{
    _Bool _autoSendOnUIInit;
    _Bool _bViewAppear;
    _Bool _hasSendUiInitEvent;
    _Bool _bPreRender;
    long long _uiinitRetryCount;
}

@property(nonatomic) long long uiinitRetryCount; // @synthesize uiinitRetryCount=_uiinitRetryCount;
@property(nonatomic) _Bool bPreRender; // @synthesize bPreRender=_bPreRender;
@property(nonatomic) _Bool hasSendUiInitEvent; // @synthesize hasSendUiInitEvent=_hasSendUiInitEvent;
@property(nonatomic) _Bool bViewAppear; // @synthesize bViewAppear=_bViewAppear;
@property(nonatomic) _Bool autoSendOnUIInit; // @synthesize autoSendOnUIInit=_autoSendOnUIInit;
- (id)getContextMap;
- (void)doSendOnUIInitEvent;
- (void)trySendOnUIInitEvent;
- (void)trySendOnUIInitEventWhenPreRender;
- (void)trySendOnUIInitEventWhenPageExpose;
- (void)sendVertSearchEntriesDataEvent;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end

