//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderLFUCacheItem : NSObject
{
    id _data;
    unsigned long long _cost;
    unsigned long long _freqCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long freqCount; // @synthesize freqCount=_freqCount;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (id)description;
- (id)initWithData:(id)arg1 cost:(unsigned long long)arg2;

@end
