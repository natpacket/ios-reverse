//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface EcCustomerGetOrderListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int evaluationStatus; // @dynamic evaluationStatus;
@property(retain, nonatomic) NSString *lastIndex; // @dynamic lastIndex;
@property(retain, nonatomic) NSString *lastOrderId; // @dynamic lastOrderId;
@property(nonatomic) _Bool needEvaluationStatus; // @dynamic needEvaluationStatus;
@property(nonatomic) unsigned int pageSize; // @dynamic pageSize;
@property(nonatomic) unsigned int tabType; // @dynamic tabType;

@end

