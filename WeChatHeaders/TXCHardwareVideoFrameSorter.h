//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TXCHardwareVideoFrameSorter : NSObject
{
    NSMutableArray *_waitingArray;
    NSMutableArray *_sortedArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sortedArray; // @synthesize sortedArray=_sortedArray;
@property(retain, nonatomic) NSMutableArray *waitingArray; // @synthesize waitingArray=_waitingArray;
- (void)dealloc;
- (id)popSortedFrameInfo;
- (void)pushFrameInfo:(id)arg1;
- (id)init;

@end

