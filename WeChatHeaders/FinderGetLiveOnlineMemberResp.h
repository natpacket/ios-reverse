//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveContact, NSData, NSMutableArray, NSString;

@interface FinderGetLiveOnlineMemberResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adImgUrl; // @dynamic adImgUrl;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *liveContacts; // @dynamic liveContacts;
@property(nonatomic) unsigned int liveContactsContinueFlag; // @dynamic liveContactsContinueFlag;
@property(retain, nonatomic) NSData *liveContactsLastBuffer; // @dynamic liveContactsLastBuffer;
@property(nonatomic) unsigned int liveContactsMaxDisplayCount; // @dynamic liveContactsMaxDisplayCount;
@property(nonatomic) unsigned long long liveHeatValue; // @dynamic liveHeatValue;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSMutableArray *offlineContacts; // @dynamic offlineContacts;
@property(nonatomic) unsigned int offlineMemberCount; // @dynamic offlineMemberCount;
@property(nonatomic) unsigned int onlineMemberCount; // @dynamic onlineMemberCount;
@property(retain, nonatomic) NSMutableArray *recentRewardContacts; // @dynamic recentRewardContacts;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @dynamic rewardTotalAmountInHeat;
@property(retain, nonatomic) FinderLiveContact *selfContact; // @dynamic selfContact;

@end

