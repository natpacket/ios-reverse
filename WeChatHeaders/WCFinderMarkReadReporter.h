//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class MMTimer, NSMutableArray, NSMutableSet, NSString;

@interface WCFinderMarkReadReporter : MMUserService <MMServiceProtocol>
{
    NSMutableArray *_waitingReportPool;
    MMTimer *_reportTimer;
    NSMutableArray *_failedItems;
    NSMutableArray *_streamWaittingPool;
    NSMutableSet *_tidContainSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) NSMutableArray *streamWaittingPool; // @synthesize streamWaittingPool=_streamWaittingPool;
@property(retain, nonatomic) NSMutableArray *failedItems; // @synthesize failedItems=_failedItems;
@property(retain, nonatomic) MMTimer *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(retain, nonatomic) NSMutableArray *waitingReportPool; // @synthesize waitingReportPool=_waitingReportPool;
- (_Bool)isFlowCommentScene:(unsigned long long)arg1;
- (void)failedItemSyncRetrySuccess:(id)arg1;
- (void)reportFailedGroupItem:(id)arg1;
- (void)startReportFiledItem;
- (void)appendItemsAtFailed:(id)arg1;
- (_Bool)isFailedItem:(id)arg1 atScene:(unsigned long long)arg2;
- (void)wattingPoolItemReportSuccess:(id)arg1;
- (void)reportStatsPoolArrayWithDelayTime:(double)arg1;
- (void)reportGroupItem:(id)arg1;
- (void)reportAll;
- (void)startStatsReport;
- (void)clearSteramMarkReadSessionHistory;
- (void)processStreamMarkSessionHistory;
- (void)clearStreamStats:(id)arg1;
- (id)getStreamReadStats;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(unsigned long long)arg4 duration:(long long)arg5 autoPlayTimeInMs:(unsigned long long)arg6 autoPlayWithSound:(_Bool)arg7 startExposeMs:(unsigned long long)arg8 sessionExtraKey:(id)arg9;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(unsigned long long)arg4 duration:(long long)arg5;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(unsigned long long)arg4;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(unsigned long long)arg3 duration:(long long)arg4;
- (void)markStreamReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(unsigned long long)arg3;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(unsigned long long)arg4 duration:(unsigned long long)arg5 index:(unsigned long long)arg6 autoPlayTimeInMs:(unsigned long long)arg7 autoPlayWithSound:(_Bool)arg8 startExposeMs:(unsigned long long)arg9 sessionExtraKey:(id)arg10 actionType:(long long)arg11;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(unsigned long long)arg4 duration:(unsigned long long)arg5 index:(unsigned long long)arg6;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 subScene:(unsigned long long)arg3 commentScene:(unsigned long long)arg4;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(unsigned long long)arg3 duration:(long long)arg4 index:(unsigned long long)arg5;
- (void)markReadTid:(id)arg1 markReadScene:(unsigned long long)arg2 commentScene:(unsigned long long)arg3;
- (void)reportImmediately;
- (_Bool)isFailedItem:(id)arg1;
- (void)syncStreamWaittingPoolItems;
- (void)syncWattingPoolItems;
- (void)syncFailedItems;
- (id)mmkvMapID;
- (void)resetServiceData;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

