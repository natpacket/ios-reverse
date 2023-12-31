//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

#import "YYModel-Protocol.h"

@class NSData, NSMutableArray, NSString, StatusClusterPresent, StatusFooter;

@interface StatusTopicInfo : WXPBGeneratedMessage <YYModel>
{
}

+ (void)initialize;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int characterSetType; // @dynamic characterSetType;
@property(retain, nonatomic) NSString *clusterIdDeprecated; // @dynamic clusterIdDeprecated;
@property(retain, nonatomic) StatusClusterPresent *clusterPresentDeprecated; // @dynamic clusterPresentDeprecated;
@property(retain, nonatomic) NSMutableArray *clusterPresents; // @dynamic clusterPresents;
@property(retain, nonatomic) NSData *clusterShowInfo; // @dynamic clusterShowInfo;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSData *deprecatedBuffer; // @dynamic deprecatedBuffer;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) StatusFooter *footer; // @dynamic footer;
@property(retain, nonatomic) NSString *footerVerifyInfo; // @dynamic footerVerifyInfo;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *iconActions; // @dynamic iconActions;
@property(retain, nonatomic) NSString *iconId; // @dynamic iconId;
@property(retain, nonatomic) NSMutableArray *jumpElements; // @dynamic jumpElements;
@property(retain, nonatomic) NSMutableArray *jumpInfos; // @dynamic jumpInfos;
@property(retain, nonatomic) NSString *mpSignature; // @dynamic mpSignature;
@property(retain, nonatomic) NSString *sourceActivityId; // @dynamic sourceActivityId;
@property(retain, nonatomic) NSString *sourceIcon; // @dynamic sourceIcon;
@property(retain, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(retain, nonatomic) NSMutableArray *sourceJumpInfos; // @dynamic sourceJumpInfos;
@property(retain, nonatomic) NSString *sourceName; // @dynamic sourceName;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;
@property(retain, nonatomic) NSMutableArray *topics; // @dynamic topics;

@end

