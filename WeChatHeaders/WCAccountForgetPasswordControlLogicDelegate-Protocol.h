//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCAccountForgetPasswordControlLogic;

@protocol WCAccountForgetPasswordControlLogicDelegate <NSObject>

@optional
- (void)onWCAccountForgetPasswordControlLogicStop:(WCAccountForgetPasswordControlLogic *)arg1;
- (void)onWCAccountForgetPasswordControlLogic:(WCAccountForgetPasswordControlLogic *)arg1 continueWithTicket:(NSString *)arg2 ticketType:(unsigned int)arg3 handled:(_Bool *)arg4;
@end
