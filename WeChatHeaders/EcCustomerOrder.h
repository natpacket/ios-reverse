//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SalesFinderInfo, ShopInfo, SimpleDeliveryInfo;

@interface EcCustomerOrder : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int afterSalesState; // @dynamic afterSalesState;
@property(retain, nonatomic) NSString *appUserName; // @dynamic appUserName;
@property(retain, nonatomic) SimpleDeliveryInfo *deliveryInfo; // @dynamic deliveryInfo;
@property(retain, nonatomic) NSString *evaluationAppUserName; // @dynamic evaluationAppUserName;
@property(retain, nonatomic) NSString *evaluationPagePath; // @dynamic evaluationPagePath;
@property(nonatomic) unsigned int evaluationStatus; // @dynamic evaluationStatus;
@property(retain, nonatomic) NSString *index; // @dynamic index;
@property(nonatomic) unsigned long long orderCloseTime; // @dynamic orderCloseTime;
@property(nonatomic) unsigned long long orderCreateTime; // @dynamic orderCreateTime;
@property(retain, nonatomic) NSString *orderDetailJson; // @dynamic orderDetailJson;
@property(retain, nonatomic) NSString *orderId; // @dynamic orderId;
@property(nonatomic) unsigned int orderState; // @dynamic orderState;
@property(retain, nonatomic) NSString *orderStateStr; // @dynamic orderStateStr;
@property(retain, nonatomic) NSString *pagePath; // @dynamic pagePath;
@property(nonatomic) unsigned long long price; // @dynamic price;
@property(nonatomic) unsigned int priceType; // @dynamic priceType;
@property(retain, nonatomic) NSString *priceUnit; // @dynamic priceUnit;
@property(retain, nonatomic) NSMutableArray *priceWordingPartList; // @dynamic priceWordingPartList;
@property(retain, nonatomic) SalesFinderInfo *salesFinderInfo; // @dynamic salesFinderInfo;
@property(retain, nonatomic) ShopInfo *shopInfo; // @dynamic shopInfo;
@property(retain, nonatomic) NSMutableArray *skuList; // @dynamic skuList;

@end

