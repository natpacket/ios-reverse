//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKPaySettingsService-Protocol.h"
#import "WCPayOpenTouchIDAuthLogicDelegate-Protocol.h"

@class DelaySwitchSettingLogic, MMVoidBoolCallback, NSString, WCPayUserInfo;

@interface KindaPaySettingsService : NSObject <WCPayOpenTouchIDAuthLogicDelegate, MMKPaySettingsService>
{
    DelaySwitchSettingLogic *_delaySetting;
    MMVoidBoolCallback *_bioPayResultCallback;
    WCPayUserInfo *_payUserInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayUserInfo *payUserInfo; // @synthesize payUserInfo=_payUserInfo;
@property(retain, nonatomic) MMVoidBoolCallback *bioPayResultCallback; // @synthesize bioPayResultCallback=_bioPayResultCallback;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySetting; // @synthesize delaySetting=_delaySetting;
- (void)markXMLReddotConsumed:(id)arg1;
- (id)getUnexpiredXMLReddot:(id)arg1;
- (void)onWCPayCloseTouchIDSuccess;
- (void)onWCPayCloseTouchIDFailed;
- (void)onWCPayOpenTouchIDAuthLogicOpenFailed;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)logGeneralUserAction:(int)arg1;
- (void)setBioPayTypeEnabledImpl:(long long)arg1 enabled:(_Bool)arg2 resultCallback:(id)arg3;
- (void)handlePushBioPaySettingPageImpl:(id)arg1;
- (_Bool)isBioPayTypeEnabled:(long long)arg1;
- (id)supportedBioPayTypes;
- (void)commitHbRefundWayTypeChange;
- (void)setHbRefundWayType:(long long)arg1;
- (long long)getHbRefundWayType;
- (void)markReddotConsumed:(id)arg1;
- (_Bool)getReddotStatus:(id)arg1;
- (void)setTransferPhoneGrantFlag:(int)arg1;
- (int)getTransferPhoneGrantFlag;
- (void)commitTransferDelayTypeChange;
- (void)setTransferDelayType:(long long)arg1;
- (long long)getTransferDelayType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

