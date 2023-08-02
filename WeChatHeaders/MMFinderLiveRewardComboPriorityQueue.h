//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveRewardComboPriorityQueue : NSObject
{
    NSMutableArray *_comboObjectQueue;
    CDUnknownBlockType _comparator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSMutableArray *comboObjectQueue; // @synthesize comboObjectQueue=_comboObjectQueue;
- (void)insert:(id)arg1;
- (id)toArray;
- (id)poll;
- (id)peek;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)clear;
- (_Bool)contains:(id)arg1;
- (unsigned long long)size;
- (_Bool)isEmpty;
- (id)initWithCapacity:(int)arg1;
- (id)init;

@end
