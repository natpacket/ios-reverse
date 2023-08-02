//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class FinderLiveVotingInfo, MMFinderLiveTaskId, MMTimer, NSString;

@interface MMLiveVoteViewModel : NSObject <WCFinderLiveExt, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isAttending;
    unsigned int _remainTime;
    FinderLiveVotingInfo *_voteInfo;
    MMFinderLiveTaskId *_taskId;
    MMTimer *_countdownTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isAttending; // @synthesize isAttending=_isAttending;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(retain, nonatomic) FinderLiveVotingInfo *voteInfo; // @synthesize voteInfo=_voteInfo;
- (_Bool)hasSelfParticipantIn:(id)arg1;
- (void)safeMinusCountOfChoice:(id)arg1;
- (id)currentLiveTask;
- (void)onGetLiveVoteInfo:(id)arg1 forTaskId:(id)arg2;
- (void)updateModelOnVoteInfoUpdate;
- (void)updateVoteInfo:(id)arg1 fromMsg:(_Bool)arg2;
- (_Bool)checkAndClearVoteForSpamCheckIfNeeded;
- (void)countdownTimerCallBack;
- (_Bool)couldUpdateWith:(id)arg1;
- (id)getCheckAttendChoicesOnClickIndex:(long long)arg1;
- (id)getRadioAttendChoicesOnClickIndex:(long long)arg1;
- (void)updateLocalChoiceListOnAttendSuccessWith:(long long)arg1;
- (void)updateLocalInfoOnAttendSuccessWith:(long long)arg1;
- (void)attendVoteOnSelectIndex:(long long)arg1;
- (void)cancelCurrentVoting;
- (_Bool)isVoteEnd;
- (_Bool)isVoteComputing;
- (_Bool)isVoteRunning;
- (_Bool)canManageVote;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

