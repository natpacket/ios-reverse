//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class EmoticonStoreItem, GetEmotionDetailRequest, NSString;

@interface StoreEmotionGetDetailCgi : StoreEmotionBaseCgi
{
    _Bool _forceUpdate;
    _Bool _isActive;
    unsigned int _scene;
    NSString *_productID;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _getValidCacheItemBlock;
    unsigned long long _lastRequestTime;
    EmoticonStoreItem *_originItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreItem *originItem; // @synthesize originItem=_originItem;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(copy, nonatomic) CDUnknownBlockType getValidCacheItemBlock; // @synthesize getValidCacheItemBlock=_getValidCacheItemBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)loadEmoticonItem;
- (void)startRequest;
- (void)tryStartRequest;
- (void)createRequest;
- (id)initWithPackageId:(id)arg1;

// Remaining properties
@property(retain, nonatomic) GetEmotionDetailRequest *request; // @dynamic request;

@end

