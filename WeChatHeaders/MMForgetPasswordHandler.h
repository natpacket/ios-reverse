//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrivateCommonApiHandler.h"

#import "WCAccountForgetPasswordControlLogicDelegate-Protocol.h"

@class NSString, WCAccountForgetPasswordControlLogic;

@interface MMForgetPasswordHandler : PrivateCommonApiHandler <WCAccountForgetPasswordControlLogicDelegate>
{
    WCAccountForgetPasswordControlLogic *_forgetPwdLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountForgetPasswordControlLogic *forgetPwdLogic; // @synthesize forgetPwdLogic=_forgetPwdLogic;
- (void)onWCAccountForgetPasswordControlLogic:(id)arg1 continueWithTicket:(id)arg2 ticketType:(unsigned int)arg3 handled:(_Bool *)arg4;
- (void)onWCAccountForgetPasswordControlLogicStop:(id)arg1;
- (void)handleCommonApiWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
