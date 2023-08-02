//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OMJLoggingProvider-Protocol.h"

@class NSString;

@interface OMJDefaultLoggingProvider : NSObject <OMJLoggingProvider>
{
}

- (void)logFatalWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logErrorWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logWarnWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logDebugWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;
- (void)logInfoWithTag:(id)arg1 filename:(id)arg2 lineNum:(long long)arg3 functionName:(id)arg4 message:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

