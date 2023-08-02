//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MatrixPluginConfig.h"

@class NSDictionary;

@interface WCMemoryStatConfig : MatrixPluginConfig
{
    _Bool _allocationsMemgraphEnable;
    int _skipMinMallocSize;
    int _skipMaxStackDepth;
    int _leaksSampleFactor;
    int _vmRegionsDumpInterval;
    unsigned long long _reportStrategy;
    NSDictionary *_observedCategories;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *observedCategories; // @synthesize observedCategories=_observedCategories;
@property(nonatomic) unsigned long long reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(nonatomic) int vmRegionsDumpInterval; // @synthesize vmRegionsDumpInterval=_vmRegionsDumpInterval;
@property(nonatomic) int leaksSampleFactor; // @synthesize leaksSampleFactor=_leaksSampleFactor;
@property(nonatomic) _Bool allocationsMemgraphEnable; // @synthesize allocationsMemgraphEnable=_allocationsMemgraphEnable;
@property(nonatomic) int skipMaxStackDepth; // @synthesize skipMaxStackDepth=_skipMaxStackDepth;
@property(nonatomic) int skipMinMallocSize; // @synthesize skipMinMallocSize=_skipMinMallocSize;

@end

