//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderShopCouponInfo_AcquireInfo, FinderShopCouponInfo_Condition, FinderWindowProductInfo, NSString;

@interface FinderShopCouponInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
@property(readonly, nonatomic) FinderShopCouponInfo *validInfoForNotice;
@property(readonly, nonatomic) _Bool isValidForNotice;
@property(readonly, copy, nonatomic) NSString *typeWording;

// Remaining properties
@property(retain, nonatomic) FinderShopCouponInfo_AcquireInfo *acquireInfo; // @dynamic acquireInfo;
@property(retain, nonatomic) FinderWindowProductInfo *associatedProduct; // @dynamic associatedProduct;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(nonatomic) unsigned int clickButtonAction; // @dynamic clickButtonAction;
@property(retain, nonatomic) FinderShopCouponInfo_Condition *condition; // @dynamic condition;
@property(retain, nonatomic) NSString *couponId; // @dynamic couponId;
@property(nonatomic) unsigned long long couponMinimum; // @dynamic couponMinimum;
@property(retain, nonatomic) NSString *couponName; // @dynamic couponName;
@property(nonatomic) unsigned int couponSourceType; // @dynamic couponSourceType;
@property(nonatomic) unsigned int couponStatus; // @dynamic couponStatus;
@property(nonatomic) unsigned long long couponValue; // @dynamic couponValue;
@property(retain, nonatomic) NSString *discountWording; // @dynamic discountWording;
@property(retain, nonatomic) NSString *expiredWording; // @dynamic expiredWording;
@property(nonatomic) unsigned long long expiryTimestamp; // @dynamic expiryTimestamp;
@property(nonatomic) unsigned int isSingle; // @dynamic isSingle;
@property(nonatomic) unsigned int remainCouponCount; // @dynamic remainCouponCount;
@property(retain, nonatomic) NSString *sourceMerchantName; // @dynamic sourceMerchantName;
@property(retain, nonatomic) NSString *stockId; // @dynamic stockId;
@property(nonatomic) unsigned int stockStatus; // @dynamic stockStatus;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

