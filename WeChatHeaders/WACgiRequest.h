//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WXPBGeneratedMessage;

@interface WACgiRequest : NSObject
{
    _Bool _needSpeedyFlag;
    _Bool _dispatchSyncToMainThread;
    _Bool _needKeepAlive;
    _Bool _needRouteToServiceWhenWeakNet;
    unsigned int _uiCgi;
    unsigned int _retryCount;
    WXPBGeneratedMessage *_pbRequest;
    NSObject *_oUserData;
    NSString *_appid;
    NSString *_username;
    NSString *_respClass;
}

+ (id)createWithCgi:(unsigned int)arg1 pbRequest:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *respClass; // @synthesize respClass=_respClass;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) _Bool needRouteToServiceWhenWeakNet; // @synthesize needRouteToServiceWhenWeakNet=_needRouteToServiceWhenWeakNet;
@property(nonatomic) _Bool needKeepAlive; // @synthesize needKeepAlive=_needKeepAlive;
@property(nonatomic) _Bool dispatchSyncToMainThread; // @synthesize dispatchSyncToMainThread=_dispatchSyncToMainThread;
@property(nonatomic) _Bool needSpeedyFlag; // @synthesize needSpeedyFlag=_needSpeedyFlag;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSObject *oUserData; // @synthesize oUserData=_oUserData;
@property(nonatomic) unsigned int uiCgi; // @synthesize uiCgi=_uiCgi;
@property(retain, nonatomic) WXPBGeneratedMessage *pbRequest; // @synthesize pbRequest=_pbRequest;
- (id)init;
- (id)initWithCgi:(unsigned int)arg1 pbRequest:(id)arg2;
- (id)toProtobufCGIWrap;

@end

