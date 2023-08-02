//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class DepositQueryDepositRequest;
@protocol WCPayNFCCardQueryDepositCgiDelegate;

@interface WCPayNFCCardQueryDepositCgi : WCPayBaseCgi
{
    id <WCPayNFCCardQueryDepositCgiDelegate> _m_delegate;
    unsigned long long _m_retryDelay;
    unsigned long long _m_maxRetryCount;
    unsigned long long _m_currentRetryCount;
    DepositQueryDepositRequest *_m_queryDepositReuqest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DepositQueryDepositRequest *m_queryDepositReuqest; // @synthesize m_queryDepositReuqest=_m_queryDepositReuqest;
@property unsigned long long m_currentRetryCount; // @synthesize m_currentRetryCount=_m_currentRetryCount;
@property unsigned long long m_maxRetryCount; // @synthesize m_maxRetryCount=_m_maxRetryCount;
@property unsigned long long m_retryDelay; // @synthesize m_retryDelay=_m_retryDelay;
@property(nonatomic) __weak id <WCPayNFCCardQueryDepositCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (void)startWithRequest:(id)arg1 retryDelay:(unsigned long long)arg2 maxRetryCount:(unsigned long long)arg3;
- (id)initWithDelegate:(id)arg1;

@end

