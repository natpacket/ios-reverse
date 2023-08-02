//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXGRoamAutoBackupSetting : NSObject
{
}

+ (id)getRelatedMemoryKV;
+ (id)weakRemindKey:(id)arg1;
+ (id)strongRemindKey:(id)arg1;
+ (id)queryStringKey:(id)arg1;
+ (id)lastAutoBackupTimeKey:(id)arg1;
+ (id)lastBackupTimeKey:(id)arg1;
+ (id)backupRangeStateKey:(id)arg1;
+ (id)backupUserNameKey:(id)arg1;
+ (id)backupDeviceID;
+ (void)setStrongRemind:(_Bool)arg1 deviceID:(id)arg2;
+ (_Bool)canStrongRemind:(id)arg1;
+ (void)setWeakRemind:(_Bool)arg1 deviceID:(id)arg2;
+ (_Bool)canWeakRemind:(id)arg1;
+ (id)queryStringForDeviceID:(id)arg1;
+ (void)saveQueryString:(id)arg1 forDeviceID:(id)arg2;
+ (void)saveLastAutoBackupTime:(unsigned long long)arg1 of:(id)arg2;
+ (unsigned long long)lastAutoBackupTime:(id)arg1;
+ (void)saveLastBackupTime:(unsigned long long)arg1 of:(id)arg2;
+ (unsigned long long)lastBackupTime:(id)arg1;
+ (void)saveAutoBackup:(id)arg1 of:(id)arg2;
+ (id)getAutoBackupUserName:(id)arg1;
+ (void)setAutoBackupRange:(unsigned long long)arg1 of:(id)arg2;
+ (unsigned long long)autoBackupRange:(id)arg1;
+ (id)curAutoBackupDeviceID;
+ (void)removeAllLocalStateOf:(id)arg1;
+ (unsigned long long)msgBeforeTime;
+ (unsigned long long)autoBackupMsgBeforeTime;
+ (unsigned long long)autoBackupInterval;
+ (unsigned long long)checkSDKMinimizeVersion;
+ (unsigned long long)checkAutoBackupInterval;

@end
