//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, LbsLocation, NSString, SKBuiltinBuffer_t;

@interface GetLbsLifeListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *buff; // @dynamic buff;
@property(nonatomic) unsigned int entryTime; // @dynamic entryTime;
@property(nonatomic) unsigned int indoorSwitch; // @dynamic indoorSwitch;
@property(nonatomic) unsigned int isAutoQuery; // @dynamic isAutoQuery;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) LbsLocation *loc; // @dynamic loc;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

