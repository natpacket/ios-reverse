//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface MMThreadManager : NSObject
{
    NSLock *m_lock;
    _Bool m_hasInit;
    void *m_threads;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)enumerateThreadList:(CDUnknownBlockType)arg1;
- (void)onThreadEnd:(struct _opaque_pthread_t *)arg1;
- (void)onThreadStart:(struct _opaque_pthread_t *)arg1;
- (void)buildThreadList;
- (void)dealloc;
- (id)init;

@end

