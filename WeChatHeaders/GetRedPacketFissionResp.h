//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetRedPacketFissionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *logoMd5; // @dynamic logoMd5;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(nonatomic) _Bool showFission; // @dynamic showFission;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

