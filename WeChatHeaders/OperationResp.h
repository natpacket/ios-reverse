//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, NoticeItem;

@interface OperationResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int maxTransferAmt; // @dynamic maxTransferAmt;
@property(nonatomic) unsigned int minPoundage; // @dynamic minPoundage;
@property(nonatomic) unsigned int nameLenLimit; // @dynamic nameLenLimit;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;
@property(retain, nonatomic) NSString *paylistUrl; // @dynamic paylistUrl;
@property(nonatomic) unsigned int reasonLenLimit; // @dynamic reasonLenLimit;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

