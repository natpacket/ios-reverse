//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface DeleteBizReadRecordReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appmsgId; // @dynamic appmsgId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUin; // @dynamic bizUin;
@property(nonatomic) unsigned int delType; // @dynamic delType;
@property(nonatomic) unsigned int itemId; // @dynamic itemId;
@property(nonatomic) unsigned int readTime; // @dynamic readTime;

@end

