//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface EcCustomerSearchOrderListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSMutableArray *orderDetailJsonList; // @dynamic orderDetailJsonList;
@property(retain, nonatomic) NSMutableArray *orderList; // @dynamic orderList;

@end

