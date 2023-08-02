//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAContact, WAThreadSafeMutableDictionary;

@interface WAColdLaunchPreFetchCGILogic : NSObject
{
    WAContact *_contact;
    WAThreadSafeMutableDictionary *_cache;
    WAThreadSafeMutableDictionary *_fetchType2Observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *fetchType2Observers; // @synthesize fetchType2Observers=_fetchType2Observers;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)notifyDidFetchResult:(id)arg1 forFetchType:(unsigned int)arg2;
- (void)observeFetchType:(unsigned int)arg1 byCompletion:(CDUnknownBlockType)arg2;
- (void)getColdLaunchPreFetchCGIDataWithFetchType:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearAllCacheData;
- (void)clearCacheDataForFetchType:(unsigned int)arg1;
- (void)onGetRemoteDataRet:(_Bool)arg1 fetchType:(unsigned int)arg2 respData:(id)arg3;
- (void)markFetchingWithFetchType:(unsigned int)arg1;
- (void)asyncDoPreFetchPrivateData;
- (id)initWithContact:(id)arg1;

@end

