//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, WxaExternalInfo, WxaPluginAppInfo;

@interface JSAuthorizeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) WxaExternalInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *jsapiName; // @dynamic jsapiName;
@property(retain, nonatomic) WxaPluginAppInfo *pluginInfo; // @dynamic pluginInfo;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

