//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMVisableLogger : NSObject
{
}

+ (void *)getSwiftUIMachHeader;
+ (void)setupSwiftUISO;
+ (void)__onLogWithType:(unsigned long long)arg1 module:(id)arg2 file:(id)arg3 line:(int)arg4 func:(id)arg5 message:(id)arg6;
+ (void)logWithLevel:(unsigned long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 printXLog:(_Bool)arg6 format:(id)arg7;
+ (void)__setupSwiftUIDSO;
+ (void)__doBreakpoint:(id)arg1;

@end

