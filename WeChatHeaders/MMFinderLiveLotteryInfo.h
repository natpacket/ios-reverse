//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveLotteryAttendMethod, FinderLiveLotteryClaimMethod, FinderLiveLotteryInfo_ParticipantInfo, FinderLiveLotteryParticipability, FinderLiveLotteryPrizeMethod, NSString;

@interface MMFinderLiveLotteryInfo : NSObject
{
    unsigned int _beginTime;
    unsigned int _endTime;
    unsigned int _remainTime;
    unsigned int _winnerCnt;
    unsigned int _participantCnt;
    unsigned int _lotteryStatus;
    unsigned int _extFlag;
    unsigned int _realWinnerCnt;
    unsigned int _updateLotteryPanel;
    unsigned int _methodId;
    NSString *_lotteryId;
    NSString *_lotteryDescription;
    FinderLiveLotteryAttendMethod *_lotteryMethod;
    FinderLiveLotteryInfo_ParticipantInfo *_participantInfo;
    FinderLiveLotteryParticipability *_participability;
    FinderLiveLotteryClaimMethod *_claimMethod;
    FinderLiveLotteryPrizeMethod *_prizeMethod;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int methodId; // @synthesize methodId=_methodId;
@property(nonatomic) unsigned int updateLotteryPanel; // @synthesize updateLotteryPanel=_updateLotteryPanel;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod; // @synthesize prizeMethod=_prizeMethod;
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @synthesize claimMethod=_claimMethod;
@property(retain, nonatomic) FinderLiveLotteryParticipability *participability; // @synthesize participability=_participability;
@property(retain, nonatomic) FinderLiveLotteryInfo_ParticipantInfo *participantInfo; // @synthesize participantInfo=_participantInfo;
@property(nonatomic) unsigned int realWinnerCnt; // @synthesize realWinnerCnt=_realWinnerCnt;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned int lotteryStatus; // @synthesize lotteryStatus=_lotteryStatus;
@property(nonatomic) unsigned int participantCnt; // @synthesize participantCnt=_participantCnt;
@property(nonatomic) unsigned int winnerCnt; // @synthesize winnerCnt=_winnerCnt;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *lotteryMethod; // @synthesize lotteryMethod=_lotteryMethod;
@property(retain, nonatomic) NSString *lotteryDescription; // @synthesize lotteryDescription=_lotteryDescription;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
- (void)updateWithNewLotteryInfo:(id)arg1;
- (id)description;
- (_Bool)isShopProductType;
- (id)initWithFinderLotteryInfo:(id)arg1;
- (id)initWithLotteryInfo:(id)arg1;

@end

