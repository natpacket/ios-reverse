//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCBusyThread : NSObject
{
    unsigned int _thread;
    float _usage;
    int _depth;
    unsigned long long *_callstack;
}

@property(nonatomic) unsigned long long *callstack; // @synthesize callstack=_callstack;
@property(nonatomic) int depth; // @synthesize depth=_depth;
@property(nonatomic) float usage; // @synthesize usage=_usage;
@property(nonatomic) unsigned int thread; // @synthesize thread=_thread;
- (void)dealloc;
- (id)initWithThread:(unsigned int)arg1 usage:(float)arg2 depth:(int)arg3 callstack:(unsigned long long *)arg4;

@end
