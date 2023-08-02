//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MidasIAPConcurrentJobDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol MidasIAPConcurrentJobQueueDelegate;

@interface MidasIAPConcurrentJobQueue : NSObject <MidasIAPConcurrentJobDelegate>
{
    id <MidasIAPConcurrentJobQueueDelegate> _delegate;
    NSMutableArray *_jobQueue;
}

- (void).cxx_destruct;
- (void)_jobFinishedAction:(id)arg1;
- (void)onFinish:(id)arg1;
- (void)onStart:(id)arg1;
- (void)enqueue:(id)arg1 runImmediately:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

