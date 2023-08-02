//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MidasKeyChainStore, NSDictionary, NSNumber, NSNumberFormatter, NSString;

@interface MidasConfig : NSObject
{
    NSDictionary *_configResp;
    NSDictionary *_orderResp;
    NSString *_offerID;
    NSNumberFormatter *_decimalFormatter;
    MidasKeyChainStore *_keyChainStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MidasKeyChainStore *keyChainStore; // @synthesize keyChainStore=_keyChainStore;
@property(retain, nonatomic) NSNumberFormatter *decimalFormatter; // @synthesize decimalFormatter=_decimalFormatter;
@property(readonly, copy, nonatomic) NSString *offerID; // @synthesize offerID=_offerID;
@property(readonly, copy, nonatomic) NSDictionary *orderResp; // @synthesize orderResp=_orderResp;
@property(readonly, copy, nonatomic) NSDictionary *configResp; // @synthesize configResp=_configResp;
- (void)_updateRCInfos;
- (void)_updateCurInfos;
- (void)_updateConfigDelay;
- (void)_updateRiskAlert;
- (void)_updateUseNewReceipt;
- (void)_setDiskCacheWithValue:(id)arg1 forKey:(id)arg2 useOfferID:(_Bool)arg3;
- (id)_getDiskValueWithKey:(id)arg1 useOfferID:(_Bool)arg2;
- (id)_getValueFromDict:(unsigned long long)arg1 key:(id)arg2 useDiskCache:(_Bool)arg3 useOfferID:(_Bool)arg4;
- (id)_getNumberFromDict:(unsigned long long)arg1 key:(id)arg2 useDiskCache:(_Bool)arg3 useOfferID:(_Bool)arg4;
- (void)_updateSwitch:(id)arg1;
@property(readonly, nonatomic) NSNumber *isConfigDelay;
@property(readonly, nonatomic) NSNumber *showRiskAlert;
@property(readonly, nonatomic) NSNumber *isNewReceiptEnabled;
@property(readonly, nonatomic) NSNumber *heartBeat;
- (void)getSwitchOf:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateOrderResp:(id)arg1;
- (void)updateConfigResp:(id)arg1;
- (id)initWithOfferID:(id)arg1;

@end

