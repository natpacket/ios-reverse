//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@class JSEvent, VoicePrintVerifyLogic;

@interface WebviewJSEventHandler_requestWxVoicePrintVerifyInternal : WebviewJSEventHandlerBase
{
    JSEvent *_cbEvent;
    VoicePrintVerifyLogic *_voicePrintVerifyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic; // @synthesize voicePrintVerifyLogic=_voicePrintVerifyLogic;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

