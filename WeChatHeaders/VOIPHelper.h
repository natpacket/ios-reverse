//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPHelper : NSObject
{
}

+ (void)checkIfUInt64RoomIDOutOfInt32:(unsigned long long)arg1;
+ (void)NotifyWithData:(id)arg1;
+ (void)HandleExtNotifydata:(id)arg1 andRoomId:(unsigned long long)arg2 andRoomKey:(unsigned long long)arg3;
+ (void)DataNotifyWithData:(id)arg1;
+ (void)APNSPushWithUsrInfo:(id)arg1 requestID:(id)arg2;
+ (void)DisableVoIPComLog;
+ (void)EnableVoIPComLog;

@end

