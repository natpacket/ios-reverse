//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OMJLoggingProvider;

@interface OMJLoggingParams : NSObject
{
    id <OMJLoggingProvider> _loggingProvider;
    long long _maxLogLevel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long maxLogLevel; // @synthesize maxLogLevel=_maxLogLevel;
@property(readonly, nonatomic) id <OMJLoggingProvider> loggingProvider; // @synthesize loggingProvider=_loggingProvider;
- (id)initWithLoggingProvider:(id)arg1 maxLogLevel:(long long)arg2;
- (id)initWithLoggingProvider:(id)arg1;

@end

