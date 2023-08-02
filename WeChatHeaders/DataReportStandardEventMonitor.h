//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataReportStandardEventDelegate-Protocol.h"

@class DataReportStayInfo, NSMutableArray, NSMutableDictionary, NSString;

@interface DataReportStandardEventMonitor : NSObject <DataReportStandardEventDelegate>
{
    NSMutableArray *m_sessionStayInfosList;
    NSMutableDictionary *m_sessionStayInfosMap;
    NSMutableDictionary *m_pageStayInfos;
    DataReportStayInfo *m_curBizStayInfo;
    unsigned long long m_lastAppInTime;
}

- (void).cxx_destruct;
- (void)onCgiResp:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3 cgiParams:(id)arg4 routeRules:(id)arg5 time:(unsigned long long)arg6;
- (void)onCgiReq:(id)arg1 cgiParams:(id)arg2 routeRules:(id)arg3 time:(unsigned long long)arg4;
- (void)onVideoStop:(unsigned long long)arg1;
- (void)onVideoPause:(unsigned long long)arg1;
- (void)onVideoPlay:(unsigned long long)arg1;
- (void)onViewUnExp:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewExp:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewLongPress:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewDoubleTap:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onViewClk:(unsigned long long)arg1 viewParams:(id)arg2 routeRules:(id)arg3;
- (void)onBizOut:(unsigned long long)arg1 page:(id)arg2;
- (void)onBizIn:(unsigned long long)arg1 page:(id)arg2;
- (void)onPageOut:(unsigned long long)arg1 page:(id)arg2 isSubPage:(_Bool)arg3;
- (void)onPageIn:(unsigned long long)arg1 page:(id)arg2 isSubPage:(_Bool)arg3;
- (void)onSessionOut:(unsigned long long)arg1 page:(id)arg2;
- (void)onSessionIn:(unsigned long long)arg1 page:(id)arg2;
- (void)onAppOut:(unsigned long long)arg1;
- (void)onAppIn:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
