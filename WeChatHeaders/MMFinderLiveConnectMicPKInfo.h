//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MMFinderLiveConnectMicPKInfo : NSObject <NSCopying>
{
    unsigned int _timeLeft;
    unsigned int _displayedTimeLeft;
    unsigned int _inviteTimeLeft;
    unsigned int _winningStreakCount;
    unsigned long long _anchorPkState;
    NSString *_sessionId;
    unsigned long long _currentRewardWecoin;
    unsigned long long _otherRewardWecoin;
    long long _pkResult;
    unsigned long long _sequence;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int winningStreakCount; // @synthesize winningStreakCount=_winningStreakCount;
@property(nonatomic) unsigned int inviteTimeLeft; // @synthesize inviteTimeLeft=_inviteTimeLeft;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) long long pkResult; // @synthesize pkResult=_pkResult;
@property(nonatomic) unsigned long long otherRewardWecoin; // @synthesize otherRewardWecoin=_otherRewardWecoin;
@property(nonatomic) unsigned long long currentRewardWecoin; // @synthesize currentRewardWecoin=_currentRewardWecoin;
@property(nonatomic) unsigned int displayedTimeLeft; // @synthesize displayedTimeLeft=_displayedTimeLeft;
@property(nonatomic) unsigned int timeLeft; // @synthesize timeLeft=_timeLeft;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long anchorPkState; // @synthesize anchorPkState=_anchorPkState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

