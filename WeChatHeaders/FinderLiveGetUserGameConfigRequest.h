//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ExtDeviceInfo, FinderBaseRequest, FinderLiveDynamicCardVersion, NSString;

@interface FinderLiveGetUserGameConfigRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveDynamicCardVersion *dynamicCardVersion; // @dynamic dynamicCardVersion;
@property(retain, nonatomic) ExtDeviceInfo *extDeviceInfo; // @dynamic extDeviceInfo;
@property(retain, nonatomic) NSString *extraAntiInfo; // @dynamic extraAntiInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *gameUserId; // @dynamic gameUserId;
@property(nonatomic) _Bool onlyNeedPlayTogetherInfo; // @dynamic onlyNeedPlayTogetherInfo;
@property(nonatomic) unsigned int opensdkVersion; // @dynamic opensdkVersion;
@property(nonatomic) unsigned int platformId; // @dynamic platformId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

