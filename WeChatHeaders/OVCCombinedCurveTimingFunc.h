//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OVCCombinedCurveTimingFunc : NSObject
{
    struct SharedPtr<XMFCombinedCurveTimingFunc> _backingTimingFunc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_1b6d18a9)reverseMapTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mapTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithSourceDuration:(CDStruct_1b6d18a9)arg1 targetDuration:(CDStruct_1b6d18a9)arg2 controlPoints:(id)arg3;

@end

