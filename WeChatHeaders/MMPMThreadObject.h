//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMPMThreadInfo;

@interface MMPMThreadObject : NSObject
{
    struct _opaque_pthread_t *m_thread;
    unsigned int m_machThread;
    unsigned long long m_stackTop;
    unsigned long long m_stackBot;
    MMPMThreadInfo *m_lastThreadInfo;
}

+ (id)currentThreadObject;
+ (void)initialize;
- (void).cxx_destruct;
- (id)description;
- (id)markThreadInfo;
- (id)lastThreadInfo;
- (id)threadInfo;
- (_Bool)isSelfThread;
@property(readonly, nonatomic) unsigned int threadID;
- (id)initWithMachThread:(unsigned int)arg1;
- (id)initWithPthread:(struct _opaque_pthread_t *)arg1;
- (id)dumpStack:(_Bool)arg1 skipFrames:(unsigned int)arg2;

@end
