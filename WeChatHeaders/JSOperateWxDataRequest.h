//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString, WxaExternalInfo;

@interface JSOperateWxDataRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int avatarId; // @dynamic avatarId;
@property(nonatomic) unsigned int avatarOpt; // @dynamic avatarOpt;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) WxaExternalInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *grantScope; // @dynamic grantScope;
@property(nonatomic) unsigned int opt; // @dynamic opt;
@property(nonatomic) _Bool privacyProtectInfoChecked; // @dynamic privacyProtectInfoChecked;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

