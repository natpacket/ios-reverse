//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "CBCentralManagerDelegate-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CBCentralManager, CLLocation, DeviceInfoData, LocationRetriever, MMTimer, NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol AccessCardLogicDelegate;

@interface AccessCardLogicController : MMObject <CBCentralManagerDelegate, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    MMTimer *_uploadTimer;
    CBCentralManager *_centralManager;
    DeviceInfoData *_foundDeviceWithMaxRSSI;
    _Bool _deviceInfoHasChanged;
    _Bool _deviceForceUpdate;
    NSString *_cardID;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    LocationRetriever *_locationRetriver;
    CLLocation *_curLocation;
    _Bool _locationHasChanged;
    _Bool _bIsBleScanning;
    _Bool _hasTurnedOnBluetooth;
    _Bool _hasAuthorizeLocation;
    _Bool _bIsShowingAlert;
    double _timerInterval;
    _Bool _bIsAlreadyShowLocationSwitchOff;
    id <AccessCardLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AccessCardLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onResponseProcess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)makeUploadRequest;
- (void)doUplaodAction;
- (void)tryStopUploadDataLogic;
- (void)tryUploadDataLogic;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)tryStopBLELogic;
- (void)realScanBLE;
- (void)tryStartBLELogic;
- (void)reportLocationWithLocation:(id)arg1 ErrorCode:(long long)arg2;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)stopRetriveLocation;
- (void)startRetriveLocation;
- (void)tryStopLocationLogic;
- (void)tryStartLocationLogic;
- (void)alertConfirmRetriveLocation;
- (void)alertRefuseRetriveLocation;
- (void)tryStop;
- (void)tryStart;
- (void)updateWithCardID:(id)arg1 andCardInfo:(id)arg2 andCardTPInfo:(id)arg3;
- (void)dealloc;
- (id)initWithCardID:(id)arg1 andCardInfo:(id)arg2 andCardTPInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
