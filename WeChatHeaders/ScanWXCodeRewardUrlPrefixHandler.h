//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ScanWXCodeUrlPrefixHandler.h"

#import "WCPayQRCodeRewardPayControlLogicDelegate-Protocol.h"

@class NSString, WCPayQRCodeRewardPayControlLogic;

@interface ScanWXCodeRewardUrlPrefixHandler : ScanWXCodeUrlPrefixHandler <WCPayQRCodeRewardPayControlLogicDelegate>
{
    WCPayQRCodeRewardPayControlLogic *_qrcodeRewardPayerLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayQRCodeRewardPayControlLogic *qrcodeRewardPayerLogic; // @synthesize qrcodeRewardPayerLogic=_qrcodeRewardPayerLogic;
- (BOOL)QRCodeType;
- (void)onQRCodeRewardPayLogicStop;
- (id)matchingPrefixArray;
- (void)handleUrl:(id)arg1;
- (void)reportCount;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

