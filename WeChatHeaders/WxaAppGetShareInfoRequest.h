//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, WxaAppmsgSignature3rd;

@interface WxaAppGetShareInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityInfo; // @dynamic activityInfo;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool isSecretmsg; // @dynamic isSecretmsg;
@property(nonatomic) _Bool isTodomsg; // @dynamic isTodomsg;
@property(nonatomic) _Bool isUpdatablemsg; // @dynamic isUpdatablemsg;
@property(retain, nonatomic) NSMutableArray *shareName; // @dynamic shareName;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *todoActivityId; // @dynamic todoActivityId;
@property(retain, nonatomic) WxaAppmsgSignature3rd *wxaSignature3Rd; // @dynamic wxaSignature3Rd;

@end

