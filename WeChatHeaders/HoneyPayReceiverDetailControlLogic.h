//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayHoneyPayBaseControlLogic.h"

#import "HoneyPayReceiverStatusViewControllerDelegate-Protocol.h"
#import "WCPayGetHoneyPayCardCgiDelegate-Protocol.h"
#import "WCPayQryHoneyUserDetailCgiDelegate-Protocol.h"

@class HoneyPayReceiverStatusViewController, NSString, WCPayGetHoneyPayCardCgi, WCPayQryHoneyUserDetailCgi;
@protocol HoneyPayReceiverDetailControlLogicDelegate;

@interface HoneyPayReceiverDetailControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayReceiverStatusViewControllerDelegate, WCPayQryHoneyUserDetailCgiDelegate, WCPayGetHoneyPayCardCgiDelegate>
{
    _Bool _receiveCardSuccess;
    id <HoneyPayReceiverDetailControlLogicDelegate> _delegate;
    HoneyPayReceiverStatusViewController *_detailVC;
    WCPayQryHoneyUserDetailCgi *_detailCgi;
    WCPayGetHoneyPayCardCgi *_getCardCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool receiveCardSuccess; // @synthesize receiveCardSuccess=_receiveCardSuccess;
@property(retain, nonatomic) WCPayGetHoneyPayCardCgi *getCardCgi; // @synthesize getCardCgi=_getCardCgi;
@property(retain, nonatomic) WCPayQryHoneyUserDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(retain, nonatomic) HoneyPayReceiverStatusViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(nonatomic) __weak id <HoneyPayReceiverDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void)getHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyUserDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyUserDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)receiverStatusVCDidClickGotoBankCardList:(id)arg1;
- (void)receiverStatusVCDidClickGetCard:(id)arg1;
- (id)cardNo;
- (void)requestDetail;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

