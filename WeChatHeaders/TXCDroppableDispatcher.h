//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TXCDroppableDispatcher : NSObject
{
    struct Lock _lock;
    NSMutableArray *_cachedObjects;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cachedObjects; // @synthesize cachedObjects=_cachedObjects;
- (void)removeObject:(id)arg1;
@property(readonly) long long cacheCount;
- (void)dispatchObject:(id)arg1 shouldDrop:(CDUnknownBlockType)arg2 withOperation:(CDUnknownBlockType)arg3 inQueue:(id)arg4;
- (id)init;

@end

