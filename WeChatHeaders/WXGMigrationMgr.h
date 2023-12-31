//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSObject, NSString, WXGMigrationInfoDB;
@protocol OS_dispatch_queue;

@interface WXGMigrationMgr : MMUserService <MMKernelExt, MMServiceProtocol>
{
    WXGMigrationInfoDB *m_infoDB;
    NSObject<OS_dispatch_queue> *m_updateTimeQueue;
    _Bool m_bShouldNotInterruption;
    NSString *m_deviceID;
    _Bool m_bCheckState;
    unsigned int m_deviceType;
    _Bool m_bBackground;
}

- (void).cxx_destruct;
- (void)onAuthOK;
- (_Bool)hasBeenMigrationWithSessionNameArray:(id)arg1;
- (_Bool)hasBeenMigration;
- (void)resetSession:(id)arg1 withBeginTime:(unsigned int)arg2 withEndTime:(unsigned int)arg3;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)arg1 withTmpLastTime:(unsigned int)arg2;
- (void)setUserDeviceIDAndCreateTable:(id)arg1;
- (unsigned int)getPairDeviceType;
- (void)setPairDeviceType:(unsigned int)arg1;
- (void)showUseHotspotContinueToMigrate;
- (void)showLocalNotificationWhenChatMigrationWorking;
- (void)canInterrutpion;
- (void)shouldNotInterruption;
- (_Bool)isMigrationWorking;
- (void)p_onMainThreadShowServerEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (void)p_onMainThreadShowClientEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (void)checkState;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

