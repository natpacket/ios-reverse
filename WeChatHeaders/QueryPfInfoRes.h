//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AAOperationInfo, BaseResponse, NSMutableArray, NSString, NoticeItem, SessionIdList;

@interface QueryPfInfoRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) AAOperationInfo *operationInfo; // @dynamic operationInfo;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(retain, nonatomic) NSString *picSign; // @dynamic picSign;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) SessionIdList *sessionidList; // @dynamic sessionidList;

@end
