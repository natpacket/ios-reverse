//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TXCDispatchQueue;
@protocol OS_dispatch_source, TXCTimedOutputDelegate;

@interface TXCTimedOutput : NSObject
{
    _Bool _keepsLastObject;
    _Bool _isLastObjectOutput;
    double _interval;
    NSMutableArray *_buffer;
    id <TXCTimedOutputDelegate> _delegate;
    TXCDispatchQueue *_queue;
    long long _cacheSize;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isLastObjectOutput; // @synthesize isLastObjectOutput=_isLastObjectOutput;
@property(readonly, nonatomic) _Bool keepsLastObject; // @synthesize keepsLastObject=_keepsLastObject;
@property(readonly, nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <TXCTimedOutputDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void)outputObject;
- (void)pushObject:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1 inQueue:(id)arg2 interval:(double)arg3 cacheSize:(long long)arg4 keepsLastObject:(_Bool)arg5;

@end

