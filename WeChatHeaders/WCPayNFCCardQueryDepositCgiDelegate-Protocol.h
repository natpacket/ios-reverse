//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DepositQueryDepositResponse, NSString, WCPayNFCCardQueryDepositCgi;

@protocol WCPayNFCCardQueryDepositCgiDelegate <NSObject>
- (void)onWCPayNFCCardQueryDepositCgiResponseError:(WCPayNFCCardQueryDepositCgi *)arg1 errorMsg:(NSString *)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayNFCCardQueryDepositCgiResponseOK:(WCPayNFCCardQueryDepositCgi *)arg1 result:(DepositQueryDepositResponse *)arg2;
@end

