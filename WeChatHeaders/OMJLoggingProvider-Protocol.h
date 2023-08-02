//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol OMJLoggingProvider <NSObject>
- (void)logFatalWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logErrorWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logWarnWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logDebugWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
- (void)logInfoWithTag:(NSString *)arg1 filename:(NSString *)arg2 lineNum:(long long)arg3 functionName:(NSString *)arg4 message:(NSString *)arg5;
@end
