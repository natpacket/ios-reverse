//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface WCBusyThreadHandler : NSObject
{
    int _size;
    int _tailIndex;
    NSMutableArray *_cycleArray;
    NSLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *cycleArray; // @synthesize cycleArray=_cycleArray;
@property(nonatomic) int tailIndex; // @synthesize tailIndex=_tailIndex;
@property(nonatomic) int size; // @synthesize size=_size;
- (id)makeCallTrees;
- (void)recordBusyThreads;
- (id)initWithCycleArraySize:(int)arg1;

@end
