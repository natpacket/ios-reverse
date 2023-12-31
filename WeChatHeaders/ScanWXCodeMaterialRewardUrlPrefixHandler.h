//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ScanWXCodeUrlPrefixHandler.h"

#import "MMWebViewDelegate-Protocol.h"
#import "WCPayQRCodeRewardPayControlLogicDelegate-Protocol.h"
#import "WCPayScanMaterialRewardCodeCgiDelegate-Protocol.h"

@class NSString, WCPayQRCodeRewardPayControlLogic, WCPayScanMaterialRewardCodeCgi;

@interface ScanWXCodeMaterialRewardUrlPrefixHandler : ScanWXCodeUrlPrefixHandler <WCPayQRCodeRewardPayControlLogicDelegate, WCPayScanMaterialRewardCodeCgiDelegate, MMWebViewDelegate>
{
    WCPayQRCodeRewardPayControlLogic *_qrcodeRewardPayerLogic;
    WCPayScanMaterialRewardCodeCgi *_scanMaterialRewardCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayScanMaterialRewardCodeCgi *scanMaterialRewardCgi; // @synthesize scanMaterialRewardCgi=_scanMaterialRewardCgi;
@property(retain, nonatomic) WCPayQRCodeRewardPayControlLogic *qrcodeRewardPayerLogic; // @synthesize qrcodeRewardPayerLogic=_qrcodeRewardPayerLogic;
- (BOOL)QRCodeType;
- (void)webViewReturn:(id)arg1;
- (void)onQRCodeRewardPayLogicStop;
- (id)matchingPrefixArray;
- (void)errorAlertViewClick;
- (void)onGetMaterialRewardCodeScanResp:(id)arg1;
- (void)handleUrl:(id)arg1;
- (void)reportCount;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

