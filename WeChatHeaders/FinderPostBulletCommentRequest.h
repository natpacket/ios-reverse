//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPostBulletCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned long long commentSource; // @dynamic commentSource;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned long long contentType; // @dynamic contentType;
@property(nonatomic) unsigned int feedPlayTimes; // @dynamic feedPlayTimes;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long followBulletCommentId; // @dynamic followBulletCommentId;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned int postIdentity; // @dynamic postIdentity;
@property(nonatomic) unsigned long long videoTimestamp; // @dynamic videoTimestamp;

@end

