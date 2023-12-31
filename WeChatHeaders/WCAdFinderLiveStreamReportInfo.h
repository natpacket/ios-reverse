//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCAdFinderLiveStreamReportInfo : NSObject
{
    _Bool _joinLiveFlag;
    unsigned int _joinLiveStartTimestamp;
    unsigned int _joinLiveEndTimestamp;
    long long _playStartTimestampMs;
    long long _totalPlayTimeMs;
}

@property(nonatomic) long long totalPlayTimeMs; // @synthesize totalPlayTimeMs=_totalPlayTimeMs;
@property(nonatomic) long long playStartTimestampMs; // @synthesize playStartTimestampMs=_playStartTimestampMs;
@property(nonatomic) unsigned int joinLiveEndTimestamp; // @synthesize joinLiveEndTimestamp=_joinLiveEndTimestamp;
@property(nonatomic) unsigned int joinLiveStartTimestamp; // @synthesize joinLiveStartTimestamp=_joinLiveStartTimestamp;
@property(nonatomic) _Bool joinLiveFlag; // @synthesize joinLiveFlag=_joinLiveFlag;
- (void)processBeforeReport;
- (long long)fetchTotalPlayTimeMs;
- (void)recordPlayEnd;
- (void)recordPlayStart;

@end

