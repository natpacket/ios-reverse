//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GoodsObject, NSData, NSString;

@interface BizAiScanImageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int aiscanJumpType; // @dynamic aiscanJumpType;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *businessBuffer; // @dynamic businessBuffer;
@property(nonatomic) unsigned int catId; // @dynamic catId;
@property(nonatomic) unsigned int clientReturnType; // @dynamic clientReturnType;
@property(nonatomic) _Bool forceJump; // @dynamic forceJump;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(retain, nonatomic) GoodsObject *matchObj; // @dynamic matchObj;
@property(nonatomic) _Bool needPoi; // @dynamic needPoi;
@property(nonatomic) _Bool needUserCrop; // @dynamic needUserCrop;
@property(nonatomic) unsigned int networkLimitedTime; // @dynamic networkLimitedTime;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int scanid; // @dynamic scanid;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;
@property(retain, nonatomic) NSString *wxaAppid; // @dynamic wxaAppid;
@property(retain, nonatomic) NSString *wxaPath; // @dynamic wxaPath;

@end

