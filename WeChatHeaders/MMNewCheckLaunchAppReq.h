//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MMNewCheckLaunchAppReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appmsgInnerType; // @dynamic appmsgInnerType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *msgUsername; // @dynamic msgUsername;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *schemeUrl; // @dynamic schemeUrl;
@property(nonatomic) unsigned int secCtrlMode; // @dynamic secCtrlMode;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) unsigned long long timespanFromTouchToLaunch; // @dynamic timespanFromTouchToLaunch;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int userTouchActionFlag; // @dynamic userTouchActionFlag;
@property(nonatomic) unsigned int userTouchLocationX; // @dynamic userTouchLocationX;
@property(nonatomic) unsigned int userTouchLocationY; // @dynamic userTouchLocationY;

@end

