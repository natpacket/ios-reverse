//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XNetInferenceOptions : NSObject
{
    struct Options _underlying;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *typicalShape;
@property(nonatomic) _Bool allowNPU;
@property(nonatomic) _Bool allowGPU;
@property(nonatomic) _Bool allowQuantize;
@property(nonatomic) int precisionLevel;
@property(retain, nonatomic) NSString *modelCachePath;
@property(nonatomic) int numThreads;
- (const void *)underlying;
- (id)initWithUnderlying:(const void *)arg1;

@end

