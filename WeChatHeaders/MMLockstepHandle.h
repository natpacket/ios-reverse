//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LockstepNativeTask;
@protocol MMLockstepHandleReportDelegate;

@interface MMLockstepHandle : NSObject
{
    struct OpaqueJSContext *_jscontext;
    void *_lockstepMgr;
    struct LockStepScriptState *_lockstepScriptState;
    LockstepNativeTask *lockstepTask;
    struct LockStepCallback *m_pCallback;
    id <MMLockstepHandleReportDelegate> _reportDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLockstepHandleReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)dealloc;
- (void)releaseContext;
- (void)setLogDelegate:(id)arg1;
- (void)setConfig:(map_afe8ac17)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end

