//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface XNetInferenceTensorShape : NSObject
{
    struct TensorShape _underlying;
}

- (id).cxx_construct;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectAtIndexedSubscript:(long long)arg1;
@property(readonly, nonatomic) long long length;
@property(readonly, nonatomic) long long dimension;
@property(readonly, nonatomic) NSArray *data;
- (id)initWithData:(id)arg1;
- (const void *)underlying;
- (id)initWithUnderlying:(const void *)arg1;

@end

