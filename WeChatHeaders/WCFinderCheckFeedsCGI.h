//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSArray;

@interface WCFinderCheckFeedsCGI : WCFinderBaseCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSArray *_readItems;
    NSArray *_unreadItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *unreadItems; // @synthesize unreadItems=_unreadItems;
@property(copy, nonatomic) NSArray *readItems; // @synthesize readItems=_readItems;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithReadItems:(id)arg1 unreadItems:(id)arg2 scene:(unsigned long long)arg3 prefetchType:(int)arg4 lastCheckBuffer:(id)arg5 liveBaseInfo:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end
