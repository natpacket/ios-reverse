//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveLotteryAttendMethod, FinderLiveLotteryClaimMethod, FinderLiveLotteryPrizeMethod, NSString;

@interface FinderLiveLotteryMethodItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @dynamic claimMethod;
@property(nonatomic) unsigned int itemId; // @dynamic itemId;
@property(retain, nonatomic) NSString *lotteryDescription; // @dynamic lotteryDescription;
@property(nonatomic) unsigned int lotteryDuration; // @dynamic lotteryDuration;
@property(nonatomic) unsigned int lotteryWinnerCnt; // @dynamic lotteryWinnerCnt;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *method; // @dynamic method;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod; // @dynamic prizeMethod;
@property(nonatomic) unsigned long long settingFlag; // @dynamic settingFlag;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *statusWording; // @dynamic statusWording;

@end

