//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMPrefetcherClientADJsApiHandler : NSObject
{
}

- (void)addApi_getExposedAd:(id)arg1;
- (void)addApi_setQuota:(id)arg1;
- (void)addApi_getCanvasBizPkgVersion:(id)arg1;
- (id)getInsertedAdDataWithContent:(id)arg1;
- (void)addApi_setAdExposeParams:(id)arg1;
- (void)addApi_setAdInsertType:(id)arg1;
- (_Bool)deleteAdWithMsgId:(unsigned int)arg1 forceDelete:(_Bool)arg2 deleteCache:(_Bool)arg3;
- (void)addApi_getInfo:(id)arg1;
- (void)addApi_deleteAdEx:(id)arg1;
- (void)addApi_deleteAd:(id)arg1;
- (void)addApi_replaceAdData:(id)arg1;
- (void)addApi_clearAdPushMsg:(id)arg1;
- (void)addApi_getAdPushMsg:(id)arg1;
- (void)addApi_getAdContext:(id)arg1;
- (void)setupApiWithJSContext:(id)arg1;

@end

