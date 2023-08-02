//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, TPRecursiveLock;

@interface TPPlayerEventPublisher : NSObject
{
    NSPointerArray *_receivers;
    TPRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSPointerArray *receivers; // @synthesize receivers=_receivers;
- (long long)idxOfReceiver:(id)arg1;
- (void)clear;
- (void)publishEvent:(id)arg1;
- (unsigned long long)getReceiverCount;
- (void)removeEventReceiver:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (id)init;

@end
