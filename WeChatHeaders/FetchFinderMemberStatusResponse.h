//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse;

@interface FetchFinderMemberStatusResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long leftDay; // @dynamic leftDay;
@property(nonatomic) unsigned int membershipStatus; // @dynamic membershipStatus;
@property(nonatomic) unsigned long long validTime; // @dynamic validTime;
@property(nonatomic) unsigned int visitorMemberStatus; // @dynamic visitorMemberStatus;

@end

