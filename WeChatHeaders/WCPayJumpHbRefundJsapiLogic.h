//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayHongBaoRefundConfigCgiDelegate-Protocol.h"

@class GetHbRefundConfigResp, JSEvent, NSString, WCPayHongBaoRefundConfigCgi;

@interface WCPayJumpHbRefundJsapiLogic : WCPayControlLogic <WCPayHongBaoRefundConfigCgiDelegate>
{
    JSEvent *m_jsEvent;
    WCPayHongBaoRefundConfigCgi *_hbRefundConfigCgi;
    GetHbRefundConfigResp *_hbRefundConfigResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetHbRefundConfigResp *hbRefundConfigResp; // @synthesize hbRefundConfigResp=_hbRefundConfigResp;
@property(retain, nonatomic) WCPayHongBaoRefundConfigCgi *hbRefundConfigCgi; // @synthesize hbRefundConfigCgi=_hbRefundConfigCgi;
- (void)OnHongBaoRefundConfigRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)arg1;
- (void)onChangeHongBaoRefundPayWay;
- (void)requestHbRefundConfig;
- (void)startLogic;
- (void)stopLogic;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

