//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayGppfLaunchControlLogicDelegate-Protocol.h"

@class JSEvent, NSDictionary, NSString;
@protocol WCPayJSLaunchGroupPayPfLogicDelegate;

@interface WCPayJSLaunchGroupPayPfLogic : WCPayControlLogic <WCPayGppfLaunchControlLogicDelegate>
{
    id <WCPayJSLaunchGroupPayPfLogicDelegate> _logicDelegate;
    JSEvent *_jsEvent;
    NSDictionary *_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(nonatomic) __weak id <WCPayJSLaunchGroupPayPfLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onPfLaunchControlLogicDidStop:(_Bool)arg1;
- (void)startLogic;
- (void)setJsPfLaunchLogicDelegate:(id)arg1;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
