//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimeStepLog : NSObject
{
    double _begin;
    NSString *_prefix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) double begin; // @synthesize begin=_begin;
- (double)showTimeStep:(id)arg1;
- (id)initWithPrefix:(id)arg1;

@end

