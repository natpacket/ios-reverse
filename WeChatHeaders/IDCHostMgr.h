//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class HostList, NSSet, NSString;

@interface IDCHostMgr : MMUserService <MMServiceProtocol>
{
    HostList *_axHostList;
    NSSet *_axHostSet;
    NSSet *_mainHostSet;
}

+ (void)tryTestMMTlsRegion;
+ (void)ClearMMTlsAllPsk;
+ (unsigned int)GetMMTlsRegion;
+ (void)updateCertRegion:(unsigned int)arg1;
+ (id)GetLocalHostListWithType:(basic_string_0ec669f3)arg1;
+ (id)GetRealHostFromHost:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSSet *mainHostSet; // @synthesize mainHostSet=_mainHostSet;
@property(retain) NSSet *axHostSet; // @synthesize axHostSet=_axHostSet;
@property(retain, nonatomic) HostList *axHostList; // @synthesize axHostList=_axHostList;
- (void)HandleNetworkSectResp:(id)arg1;
- (void)HandleIPListFromPB:(id)arg1 PortList:(id)arg2 TimeOutList:(id)arg3;
- (void)HandleHostListFromPB:(id)arg1;
- (void)HandleAxHostListFromPB:(id)arg1;
- (_Bool)isInAxHostList:(id)arg1;
- (_Bool)isInMainHostList:(id)arg1;
- (id)getAnyAxHost;
- (id)getAnyMainHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

