//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLivePaymentSetting, NSData;

@interface FinderLiveNoticeInfo_PayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool hasPurchase; // @dynamic hasPurchase;
@property(nonatomic) _Bool isPay; // @dynamic isPay;
@property(nonatomic) unsigned int needGetPaymentItems; // @dynamic needGetPaymentItems;
@property(retain, nonatomic) NSData *paymentBuff; // @dynamic paymentBuff;
@property(retain, nonatomic) FinderLivePaymentSetting *paymentSetting; // @dynamic paymentSetting;
@property(nonatomic) unsigned int price; // @dynamic price;
@property(nonatomic) unsigned int purchaseUserCount; // @dynamic purchaseUserCount;

@end

