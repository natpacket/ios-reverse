//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetRedpacketCoverRecvEntranceResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *emoticonPrize; // @dynamic emoticonPrize;
@property(retain, nonatomic) NSString *entranceUrl; // @dynamic entranceUrl;
@property(nonatomic) unsigned int reqIntervalSecond; // @dynamic reqIntervalSecond;
@property(nonatomic) _Bool showEntrance; // @dynamic showEntrance;

@end

