//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class EntranceExposeContent_ExposeRecord, NSString;

@interface WCFinderSyncReportMgr : MMUserService <MMServiceProtocol>
{
    unsigned int _lastEnterMomentsTs;
    unsigned int _lastEnterFinderTs;
    unsigned int _lastEnterLiveTs;
    unsigned int _lastEnterFinderEntryTs;
    EntranceExposeContent_ExposeRecord *_momentsRecord;
    EntranceExposeContent_ExposeRecord *_finderRecord;
    EntranceExposeContent_ExposeRecord *_liveRecord;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastEnterFinderEntryTs; // @synthesize lastEnterFinderEntryTs=_lastEnterFinderEntryTs;
@property(nonatomic) unsigned int lastEnterLiveTs; // @synthesize lastEnterLiveTs=_lastEnterLiveTs;
@property(retain, nonatomic) EntranceExposeContent_ExposeRecord *liveRecord; // @synthesize liveRecord=_liveRecord;
@property(nonatomic) unsigned int lastEnterFinderTs; // @synthesize lastEnterFinderTs=_lastEnterFinderTs;
@property(retain, nonatomic) EntranceExposeContent_ExposeRecord *finderRecord; // @synthesize finderRecord=_finderRecord;
@property(nonatomic) unsigned int lastEnterMomentsTs; // @synthesize lastEnterMomentsTs=_lastEnterMomentsTs;
@property(retain, nonatomic) EntranceExposeContent_ExposeRecord *momentsRecord; // @synthesize momentsRecord=_momentsRecord;
- (long long)getStayFinderTimelineInterval;
- (id)currentEntranceRecord:(unsigned long long)arg1;
- (unsigned int)lastEnterEntranceTime:(unsigned long long)arg1;
- (void)updateEntranceTime:(unsigned long long)arg1 isEnter:(_Bool)arg2;
- (void)cleanData;
- (void)updateSyncRecord:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (id)genExposeRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
