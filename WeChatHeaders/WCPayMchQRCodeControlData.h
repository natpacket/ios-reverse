//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CgiGetQrcodeUrlMchResp, CgiGetShortTermQrcodeMchResp, CgiSaveQrcodeMchResp, NSMutableArray, VoiceOperateSwitchMchResponse;

@interface WCPayMchQRCodeControlData : NSObject
{
    int _mchCodeMoneyScene;
    CgiGetQrcodeUrlMchResp *_qrCodeUrlResp;
    CgiSaveQrcodeMchResp *_saveQrCodeResp;
    CgiGetShortTermQrcodeMchResp *_fixedQrCodeResp;
    VoiceOperateSwitchMchResponse *_voiceOperateResp;
    NSMutableArray *_arrFacingReceiveMoneyPayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFacingReceiveMoneyPayer; // @synthesize arrFacingReceiveMoneyPayer=_arrFacingReceiveMoneyPayer;
@property(nonatomic) int mchCodeMoneyScene; // @synthesize mchCodeMoneyScene=_mchCodeMoneyScene;
@property(retain, nonatomic) VoiceOperateSwitchMchResponse *voiceOperateResp; // @synthesize voiceOperateResp=_voiceOperateResp;
@property(retain, nonatomic) CgiGetShortTermQrcodeMchResp *fixedQrCodeResp; // @synthesize fixedQrCodeResp=_fixedQrCodeResp;
@property(retain, nonatomic) CgiSaveQrcodeMchResp *saveQrCodeResp; // @synthesize saveQrCodeResp=_saveQrCodeResp;
@property(retain, nonatomic) CgiGetQrcodeUrlMchResp *qrCodeUrlResp; // @synthesize qrCodeUrlResp=_qrCodeUrlResp;

@end
