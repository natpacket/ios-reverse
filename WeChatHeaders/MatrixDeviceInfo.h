//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MatrixDeviceInfo : NSObject
{
}

+ (_Bool)isBeingDebugged;
+ (int)L3CacheSize;
+ (int)L2CacheSize;
+ (int)L1DCacheSize;
+ (int)L1ICacheSize;
+ (int)cacheLine;
+ (int)userMemory;
+ (int)totalMemory;
+ (int)busFrequency;
+ (float)appCpuUsage;
+ (float)cpuUsage;
+ (int)cpuFrequency;
+ (int)cpuCount;
+ (id)platform;
+ (id)model;
+ (id)systemVersion;
+ (id)systemName;
+ (int)getSysInfo:(unsigned int)arg1;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)getDeviceType;
+ (id)SystemNameForDeviceType;
+ (_Bool)isiPad;

@end

