//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CgiGetQrcodeUrlV2Resp, NSString;

@protocol WCPayF2FQrcodeCgiDelegate <NSObject>
- (void)onGetF2FQrcodeError:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onGetF2FQrcode:(CgiGetQrcodeUrlV2Resp *)arg1;
@end

