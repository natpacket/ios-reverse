//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class FinderLiveNoticeInfo, FinderLivePaymentSetting, NSArray, NSString;

@interface WCFinderCreateLiveNoticeCGI : WCFinderBaseCgi
{
    unsigned int _optype;
    NSString *_finderUserName;
    NSString *_delReason;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSArray *_couponsStockIDs;
    FinderLivePaymentSetting *_paymentSetting;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLivePaymentSetting *paymentSetting; // @synthesize paymentSetting=_paymentSetting;
@property(retain, nonatomic) NSArray *couponsStockIDs; // @synthesize couponsStockIDs=_couponsStockIDs;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int optype; // @synthesize optype=_optype;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(copy, nonatomic) NSString *delReason; // @synthesize delReason=_delReason;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUserName:(id)arg1 liveNoticeInfo:(id)arg2 optype:(unsigned int)arg3 paymentSetting:(id)arg4 couponsStockIDs:(id)arg5 delReason:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

