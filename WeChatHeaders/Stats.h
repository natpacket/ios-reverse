//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BitFeature, NSData, NSMutableArray, NSString, OriginVal, ValFeature;

@interface Stats : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long actionTimeMs; // @dynamic actionTimeMs;
@property(retain, nonatomic) NSMutableArray *actionTypes; // @dynamic actionTypes;
@property(nonatomic) unsigned long long authorFinderUin; // @dynamic authorFinderUin;
@property(nonatomic) unsigned int authorUin; // @dynamic authorUin;
@property(retain, nonatomic) BitFeature *bitFeature; // @dynamic bitFeature;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(nonatomic) unsigned long long exposeStartTimeMs; // @dynamic exposeStartTimeMs;
@property(nonatomic) unsigned int feedScene; // @dynamic feedScene;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *innerRecommendReason; // @dynamic innerRecommendReason;
@property(nonatomic) _Bool isLivingIconExposed; // @dynamic isLivingIconExposed;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned long long livingIconExposeTimeMs; // @dynamic livingIconExposeTimeMs;
@property(nonatomic) unsigned long long livingIconObjectId; // @dynamic livingIconObjectId;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(nonatomic) unsigned long long megavideoId; // @dynamic megavideoId;
@property(retain, nonatomic) NSString *megavideoNonceId; // @dynamic megavideoNonceId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned long long objectid; // @dynamic objectid;
@property(retain, nonatomic) OriginVal *orgVal; // @dynamic orgVal;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned long long recvTimeMs; // @dynamic recvTimeMs;
@property(nonatomic) unsigned long long reporterFinderUin; // @dynamic reporterFinderUin;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSData *statExtData; // @dynamic statExtData;
@property(retain, nonatomic) ValFeature *valFeature; // @dynamic valFeature;

@end
