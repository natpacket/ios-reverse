//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMPollingFetchQueueItemProtocol-Protocol.h"

@class MMLiveTaskId, NSString;

@interface MMLivePollingFetchTask : NSObject <MMPollingFetchQueueItemProtocol>
{
    MMLiveTaskId *_taskId;
    long long _cmdId;
    unsigned long long _interval;
    long long _lastExecuteTimeInterval;
}

+ (id)createWithTaskId:(id)arg1 cmdId:(long long)arg2 interval:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long lastExecuteTimeInterval; // @synthesize lastExecuteTimeInterval=_lastExecuteTimeInterval;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long cmdId; // @synthesize cmdId=_cmdId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) long long sortId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

