//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface ExptDebugReportLogic : MMObject <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendToSvr:(id)arg1 byKey:(unsigned int)arg2 scene:(unsigned int)arg3 type:(unsigned int)arg4;
- (void)sendSvrPushXML:(id)arg1 usrName:(id)arg2 withType:(id)arg3;
- (void)sendSession:(id)arg1;
- (void)sendPageDisappear:(id)arg1;
- (void)sendPageAppear:(id)arg1;
- (void)sendKV:(unsigned int)arg1 value:(id)arg2;
- (void)stopMonitorKV:(id)arg1;
- (void)sendStartMonitorKV:(id)arg1;
- (void)dealloc;

@end

