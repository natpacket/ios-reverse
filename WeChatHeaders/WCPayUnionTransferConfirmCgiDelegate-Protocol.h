//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CgiUnionTransferOperationResp, NSString;

@protocol WCPayUnionTransferConfirmCgiDelegate <NSObject>
- (void)onWCPayUnionTransferConfirmCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferConfirmCgiResponseOK:(CgiUnionTransferOperationResp *)arg1;
@end

