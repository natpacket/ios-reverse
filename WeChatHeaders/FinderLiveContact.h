//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderLiveBadgeInfo, LiveRoomImg, NSData, NSMutableArray, NSString;

@interface FinderLiveContact : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveBadgeInfo *badgeInfo; // @dynamic badgeInfo;
@property(retain, nonatomic) NSMutableArray *badgeInfos; // @dynamic badgeInfos;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int disableComment; // @dynamic disableComment;
@property(nonatomic) _Bool disablePersonalMsg; // @dynamic disablePersonalMsg;
@property(retain, nonatomic) NSString *displayNickname; // @dynamic displayNickname;
@property(nonatomic) unsigned int enableComment; // @dynamic enableComment;
@property(nonatomic) unsigned long long intimacy; // @dynamic intimacy;
@property(retain, nonatomic) NSString *liveBgImgUrl; // @dynamic liveBgImgUrl;
@property(retain, nonatomic) NSData *liveContactExtInfo; // @dynamic liveContactExtInfo;
@property(nonatomic) unsigned int liveContactFlag; // @dynamic liveContactFlag;
@property(nonatomic) unsigned long long liveHeatValue; // @dynamic liveHeatValue;
@property(nonatomic) unsigned int liveIdentity; // @dynamic liveIdentity;
@property(nonatomic) unsigned int rewardAmountInHeat; // @dynamic rewardAmountInHeat;
@property(retain, nonatomic) LiveRoomImg *voiceLiveImg; // @dynamic voiceLiveImg;

@end

