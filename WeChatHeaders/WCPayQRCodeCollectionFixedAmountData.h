//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayQRCodeCollectionFixedAmountData : NSObject
{
    _Bool _payerDescRequired;
    NSString *_QRCodeURL;
    NSString *_desc;
    long long _amount;
    NSString *_payerDescPlaceholder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *payerDescPlaceholder; // @synthesize payerDescPlaceholder=_payerDescPlaceholder;
@property(nonatomic) _Bool payerDescRequired; // @synthesize payerDescRequired=_payerDescRequired;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *QRCodeURL; // @synthesize QRCodeURL=_QRCodeURL;
- (void)reset;

@end
