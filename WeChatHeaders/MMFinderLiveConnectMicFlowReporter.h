//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMFinderLiveConnectMicFlowReporter : NSObject
{
}

- (void)reportMicEndedWithUserId:(id)arg1 endType:(unsigned long long)arg2 reason:(long long)arg3 andRoleType:(unsigned long long)arg4;
- (void)reportMicEndedWithUserId:(id)arg1 endType:(unsigned long long)arg2 andRoleType:(unsigned long long)arg3;
- (void)reportAudienceMicConnectedWithUserId:(id)arg1 andRoleType:(unsigned long long)arg2;
- (void)reportAcceptAudienceMicWithUserId:(id)arg1;
- (void)reportAnchorMicConnectedWithUserId:(id)arg1 andRoleType:(unsigned long long)arg2;
- (void)reportStartAnchorMicWithUserId:(id)arg1 andOpType:(unsigned long long)arg2;
- (void)reportWithUserId:(id)arg1 opType:(unsigned long long)arg2 andOpMsg:(id)arg3;

@end

