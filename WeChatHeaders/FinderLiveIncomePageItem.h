//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEncashPrepareInfo, FinderJumpInfo, NSString;

@interface FinderLiveIncomePageItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *actionAppId; // @dynamic actionAppId;
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *actionUrl; // @dynamic actionUrl;
@property(retain, nonatomic) FinderEncashPrepareInfo *encashPrepareInfo; // @dynamic encashPrepareInfo;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int pageType; // @dynamic pageType;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(nonatomic) unsigned int wecoinBusinessId; // @dynamic wecoinBusinessId;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end
