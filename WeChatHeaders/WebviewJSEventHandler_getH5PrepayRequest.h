//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "MMUseCaseCallback-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WXCustomWebViewControllerDelegate-Protocol.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_getH5PrepayRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WXCustomWebViewControllerDelegate, MMUseCaseCallback>
{
    NSString *_jsInjectCode;
    JSEvent *m_jsEvent;
    _Bool m_isNativeCashier;
}

- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doInjectJS;
- (void)getJumpUrl:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendResult:(_Bool)arg1 jsEvent:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

