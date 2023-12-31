//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, WCVideoProducerSearchRequest;

@interface WCVideoProducerSearchOperation : NSObject <NSCopying>
{
    NSMutableArray *_searchRequestList;
    WCVideoProducerSearchRequest *_currentSearchRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCVideoProducerSearchRequest *currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property(retain, nonatomic) NSMutableArray *searchRequestList; // @synthesize searchRequestList=_searchRequestList;
- (void)_searchOperationDidStopPlayingResultMusic;
- (void)_searchOperationDidStartPlayingResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchOperationDidSelectResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchOperationDidRequestNewKey:(id)arg1;
- (void)_searchOperationDidFinish;
- (void)_searchOperationDidStart;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

