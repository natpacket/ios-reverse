//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class NSMutableArray;

@interface WCMusicSearchCgi : WCBaseCgi
{
    int _batchCount;
    long long _minBatchSize;
    NSMutableArray *_batchMusicList;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSMutableArray *batchMusicList; // @synthesize batchMusicList=_batchMusicList;
@property(nonatomic) long long minBatchSize; // @synthesize minBatchSize=_minBatchSize;
@property(nonatomic) int batchCount; // @synthesize batchCount=_batchCount;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)initWithScene:(unsigned long long)arg1 searchKey:(id)arg2 requestBuffer:(id)arg3 minBatchSize:(long long)arg4 resultBlock:(CDUnknownBlockType)arg5;

@end

