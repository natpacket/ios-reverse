//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderUniGetCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(nonatomic) unsigned int direction; // @dynamic direction;
@property(retain, nonatomic) NSString *entityId; // @dynamic entityId;
@property(retain, nonatomic) NSString *feedOwnerUsername; // @dynamic feedOwnerUsername;
@property(retain, nonatomic) FinderBaseRequest *finderBaserequest; // @dynamic finderBaserequest;
@property(nonatomic) unsigned int interactionIdentity; // @dynamic interactionIdentity;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long maxCommentId; // @dynamic maxCommentId;
@property(nonatomic) unsigned int pullScene; // @dynamic pullScene;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;

@end

