//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WCSiriDataUtil : MMObject
{
}

+ (id)logFolderPath;
+ (id)avatarFolderPath;
+ (id)reportFilePath;
+ (id)reportFolderPath;
+ (id)contactsFilePath;
+ (_Bool)clearAllValues;
+ (_Bool)syncUserDefaults;
+ (void)saveShortHost:(id)arg1;
+ (void)saveExtensionKey:(id)arg1;
+ (void)saveExtensionServerID:(id)arg1;
+ (void)saveHeadDeviceType:(unsigned short)arg1;
+ (void)saveDeviceType:(id)arg1;
+ (void)saveDeviceID:(id)arg1;
+ (void)saveAppVersion:(unsigned int)arg1;
+ (void)saveCryptUin:(unsigned long long)arg1;
+ (void)saveUsername:(id)arg1;
+ (id)containerURL;
+ (id)appGroupID;
+ (id)userDefaults;

@end

