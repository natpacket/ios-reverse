//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface BizMsgReSortResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int contextMsgLimit; // @dynamic contextMsgLimit;
@property(nonatomic) unsigned int extraRecMsgCount; // @dynamic extraRecMsgCount;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned long long limitTime; // @dynamic limitTime;
@property(nonatomic) unsigned int maxMsgCount; // @dynamic maxMsgCount;
@property(nonatomic) unsigned long long nextReqTime; // @dynamic nextReqTime;
@property(retain, nonatomic) NSString *rankSessionid; // @dynamic rankSessionid;
@property(retain, nonatomic) NSString *recBuffer; // @dynamic recBuffer;
@property(retain, nonatomic) NSMutableArray *recommendArticleInfo; // @dynamic recommendArticleInfo;
@property(nonatomic) unsigned int subscribeMsgLimit; // @dynamic subscribeMsgLimit;
@property(nonatomic) unsigned int threshold; // @dynamic threshold;
@property(nonatomic) unsigned int unreadThreshold; // @dynamic unreadThreshold;
@property(retain, nonatomic) NSMutableArray *updateMsg; // @dynamic updateMsg;

@end

