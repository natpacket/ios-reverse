//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveLotteryAttendMethod, FinderLiveLotteryClaimMethod, FinderLiveLotteryPrizeMethod, NSData, NSString;

@interface FinderLiveCreateLotteryRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @dynamic claimMethod;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *lotteryDescription; // @dynamic lotteryDescription;
@property(nonatomic) unsigned int lotteryDuration; // @dynamic lotteryDuration;
@property(nonatomic) unsigned int lotteryMethodId; // @dynamic lotteryMethodId;
@property(nonatomic) unsigned int lotteryWinnerCnt; // @dynamic lotteryWinnerCnt;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *method; // @dynamic method;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod; // @dynamic prizeMethod;
@property(nonatomic) unsigned long long settingFlag; // @dynamic settingFlag;

@end
