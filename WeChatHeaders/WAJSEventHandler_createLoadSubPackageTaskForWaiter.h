//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_createLoadSubPackageTask.h"

@class WAJSContextPlugin_SyncWaiter;

@interface WAJSEventHandler_createLoadSubPackageTaskForWaiter : WAJSEventHandler_createLoadSubPackageTask
{
    WAJSContextPlugin_SyncWaiter *_syncWaiter;
}

+ (id)getAwaitTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak WAJSContextPlugin_SyncWaiter *syncWaiter; // @synthesize syncWaiter=_syncWaiter;
- (void)onLoadReuslt:(id)arg1 result:(id)arg2;
- (void)doBeforeTask:(id)arg1;

@end

