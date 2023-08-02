//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCCoinBuyCoinLogicDelegate-Protocol.h"
#import "WCCoinConsumeCGIDelegate-Protocol.h"
#import "WCCoinConsumePanelDelegate-Protocol.h"
#import "WCCoinConsumeTipsViewDelegate-Protocol.h"
#import "WCCoinPrepareConsumeCgiDelegate-Protocol.h"

@class NSString, PrepareWecoinConsumeResponse, WCCoinConsumePanel, WCCoinConsumeParameter, WCCoinInterceptLogic;
@protocol WCCoinConsumeLogicDelegate;

@interface WCCoinConsumeLogic : MMObject <WCCoinPrepareConsumeCgiDelegate, WCCoinConsumeCGIDelegate, WCCoinConsumePanelDelegate, WCCoinBuyCoinLogicDelegate, WCCoinConsumeTipsViewDelegate>
{
    id <WCCoinConsumeLogicDelegate> _delegate;
    WCCoinInterceptLogic *_interceptLogic;
    WCCoinConsumeParameter *_parameter;
    PrepareWecoinConsumeResponse *_prepareConsumeResponse;
    WCCoinConsumePanel *_consumePanel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCoinConsumePanel *consumePanel; // @synthesize consumePanel=_consumePanel;
@property(retain, nonatomic) PrepareWecoinConsumeResponse *prepareConsumeResponse; // @synthesize prepareConsumeResponse=_prepareConsumeResponse;
@property(retain, nonatomic) WCCoinConsumeParameter *parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) WCCoinInterceptLogic *interceptLogic; // @synthesize interceptLogic=_interceptLogic;
@property(nonatomic) __weak id <WCCoinConsumeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)didClose:(id)arg1;
- (void)panelDidClickConsumeTips:(id)arg1;
- (void)panelDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)panelDidClickBalanceButton:(id)arg1;
- (void)panelDidClickConsume:(id)arg1;
- (void)consumeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)consumeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)prepareConsumeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)prepareConsumeCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)prepareErrorWith:(id)arg1;
- (id)errorWithCgiErrorCode:(int)arg1;
- (void)handleIntercept:(id)arg1;
- (id)getTopVC;
- (void)endConsumeLoading;
- (void)startConsumeLoading;
- (void)callCancel;
- (void)callFail:(id)arg1;
- (void)callSuccess:(id)arg1;
- (void)callConsumeCgi:(id)arg1;
- (void)callPrepareCgi;
- (void)handlePrepareResp:(id)arg1;
- (void)handleBuff:(id)arg1;
- (void)startBuyCoin:(id)arg1 startByConsume:(_Bool)arg2;
- (void)directConsume;
- (void)showConsumePanel:(long long)arg1;
- (void)showConsumePanel;
- (void)startWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

