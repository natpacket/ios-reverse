//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CouponCodeList, NSString, OfflineStoreInfoList, ValidityPeriodInfo;

@interface OrderCouponCodeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *couponcodeId; // @dynamic couponcodeId;
@property(retain, nonatomic) CouponCodeList *couponcodes; // @dynamic couponcodes;
@property(retain, nonatomic) OfflineStoreInfoList *offlineStoreInfos; // @dynamic offlineStoreInfos;
@property(nonatomic) unsigned int qrcodeExpireTime; // @dynamic qrcodeExpireTime;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) ValidityPeriodInfo *validityPeriodInfo; // @dynamic validityPeriodInfo;

@end

