//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMapTable, NSMutableArray, NSString, WCFinderFluencyReportCenter, WCFinderLoadReporter, WCFinderTimelineFluencyReportManager;

@interface WCFinderReportService : MMUserService <MMServiceProtocol>
{
    WCFinderTimelineFluencyReportManager *_finderReportManager;
    WCFinderLoadReporter *_loadReporter;
    WCFinderFluencyReportCenter *_fluencyReportCenter;
    NSMutableArray *_streamEntranceResourceIdStack;
    NSMapTable *_pageUdfInfoMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *pageUdfInfoMap; // @synthesize pageUdfInfoMap=_pageUdfInfoMap;
@property(retain, nonatomic) NSMutableArray *streamEntranceResourceIdStack; // @synthesize streamEntranceResourceIdStack=_streamEntranceResourceIdStack;
@property(retain, nonatomic) WCFinderFluencyReportCenter *fluencyReportCenter; // @synthesize fluencyReportCenter=_fluencyReportCenter;
@property(retain, nonatomic) WCFinderLoadReporter *loadReporter; // @synthesize loadReporter=_loadReporter;
@property(retain, nonatomic) WCFinderTimelineFluencyReportManager *finderReportManager; // @synthesize finderReportManager=_finderReportManager;
- (id)getCurrentPageUdfInfoDict;
- (void)addPageUdfInfoWithViewController:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)bindViewController:(id)arg1;
- (id)getSourceId;
- (id)getTraceId;
- (void)popTraceId:(id)arg1;
- (void)pushTraceIdWithFromScene:(unsigned long long)arg1 toScene:(unsigned long long)arg2 entranceType:(unsigned long long)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

