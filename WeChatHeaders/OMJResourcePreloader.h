//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OMJResourcePreloader : NSObject
{
    WeakPtr_55ba20e6 _backingPreloader;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) WeakPtr_55ba20e6 backingPreloader; // @synthesize backingPreloader=_backingPreloader;
- (void)updateExpectedResourceUsage:(id)arg1;
- (void)stopPreloading;
- (void)startPreloading;
- (void)setPreloadResourceSizeLimit:(long long)arg1;
- (void)setConcurrencyLimit:(long long)arg1;
- (id)initWithBackingPreloader:(const void *)arg1;
- (void)dealloc;

@end

