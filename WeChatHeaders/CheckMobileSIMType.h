//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "CNetworkStatusExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, NSTimer;

@interface CheckMobileSIMType : MMUserService <CNetworkStatusExt, MMServiceProtocol, MMKernelExt, PBMessageObserverDelegate>
{
    _Bool hasGetSimType;
    unsigned int businessFlag;
    unsigned int productType;
    unsigned int simType;
    unsigned long long lastCheckMobileSIMTypeTime;
    unsigned long long cacheExpiredTime;
    NSTimer *timer;
    NSString *simCardIp;
}

- (void).cxx_destruct;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)autoUpdate;
- (void)NotifyWKTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)NotifySimTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (_Bool)isUnicomNetwork;
- (id)getIPAddresses;
- (id)getIPAddress;
- (id)GetIDFV;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)Check:(int)arg1;
- (_Bool)ParseSIMType:(int)arg1 flag:(unsigned int)arg2;
- (int)GetWKType;
- (int)GetSIMType:(int)arg1;
- (void)onAuthOK;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (int)voIPMobileSIMType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

