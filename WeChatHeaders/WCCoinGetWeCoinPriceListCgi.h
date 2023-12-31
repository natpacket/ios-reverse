//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class NSString;
@protocol WCCoinGetWeCoinPriceListCgiDelegate;

@interface WCCoinGetWeCoinPriceListCgi : WCBaseCgi
{
    unsigned int _diffWecoinCount;
    unsigned int _scene;
    unsigned long long _businessId;
    NSString *_currencyCode;
    id <WCCoinGetWeCoinPriceListCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinGetWeCoinPriceListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int diffWecoinCount; // @synthesize diffWecoinCount=_diffWecoinCount;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId=_businessId;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

