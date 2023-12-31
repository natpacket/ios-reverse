//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class MidasIAPUserInfo, MidasIapOrderInfo, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MidasIAPCache : NSObject <SKProductsRequestDelegate>
{
    NSMutableDictionary *_cache;
    NSMutableSet *_pendingKeys;
    NSMutableArray *_pendingReq;
    NSMutableArray *_batchReq;
    NSMutableArray *_completionItems;
    MidasIAPUserInfo *_userInfo;
    MidasIapOrderInfo *_orderInfo;
    _Bool _enableCache;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableCache; // @synthesize enableCache=_enableCache;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)getReqObject:(id)arg1;
- (id)itemFromFailedReturn:(id)arg1 error:(id)arg2;
- (id)itemFromInvalidReturn:(id)arg1;
- (id)itemFromResp:(id)arg1;
- (void)notify:(id)arg1;
- (_Bool)isReqBatch:(id)arg1;
- (_Bool)isKeyExsited:(id)arg1;
- (_Bool)isKeyPending:(id)arg1;
- (id)pushSKProduct2Cache:(id)arg1;
- (void)appendKeys:(id)arg1 orderInfo:(id)arg2 userInfo:(id)arg3;
- (void)getKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCacheEnable:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

