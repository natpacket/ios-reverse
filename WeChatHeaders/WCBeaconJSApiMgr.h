//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "CBCentralManagerDelegate-Protocol.h"
#import "ILocationMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CBCentralManager, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface WCBeaconJSApiMgr : MMUserService <ILocationMgrExt, MMServiceProtocol, PBMessageObserverDelegate, CBCentralManagerDelegate>
{
    MMUIViewController<WXCustomWebViewControllerProtocol> *m_currentWebViewController;
    NSString *m_ticket;
    CBCentralManager *m_bleMgr;
    unsigned long long m_locationMgrTag;
    NSMutableArray *m_aryUUID;
    NSMutableDictionary *m_canRegionDic;
    NSMutableArray *m_hadGetBeacons;
    NSMutableArray *m_getBeaconsInfoWatingQueue;
    NSMutableArray *m_getBeaconsInfoRunningQueue;
    unsigned long long m_verifyReqResult;
}

- (void).cxx_destruct;
- (void)onDidRangeBeacons:(id)arg1 inRegion:(id)arg2 withTag:(unsigned long long)arg3;
- (void)onRangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 withTag:(unsigned long long)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyStartMonitoringFailByRangeFailedWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailByBLEPowerOffWithErrorMsg:(id)arg1;
- (void)notifyStartMonitoringFailWithErrorMsg:(id)arg1;
- (void)finishCauseOf:(unsigned long long)arg1;
- (void)stopMonitoring;
- (unsigned long long)startMonitorBeacon:(id)arg1 ticket:(id)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

