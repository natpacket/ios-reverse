//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SnsUserPageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int alreadyPulledCount; // @dynamic alreadyPulledCount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int checkWithTaEntrance; // @dynamic checkWithTaEntrance;
@property(nonatomic) unsigned int filterType; // @dynamic filterType;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int lastRequestTime; // @dynamic lastRequestTime;
@property(nonatomic) unsigned long long maxId; // @dynamic maxId;
@property(nonatomic) unsigned long long minFilterId; // @dynamic minFilterId;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

