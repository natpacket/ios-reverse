//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface QueryAsyncTTSResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioExtInfo; // @dynamic audioExtInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *contextBuff; // @dynamic contextBuff;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) _Bool finish; // @dynamic finish;
@property(nonatomic) unsigned int interval; // @dynamic interval;

@end

