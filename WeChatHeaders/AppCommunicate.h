//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppCommunicate : NSObject
{
}

+ (id)appCommunicateDataForDic:(id)arg1;
+ (id)appCommunicateDataForString:(id)arg1;
+ (id)processPropertyList:(id)arg1;
+ (id)appCommunicateDataForAppID:(id)arg1;
+ (_Bool)setAppCommunicateData:(id)arg1 forAppID:(id)arg2;
+ (_Bool)setPropertyList:(id)arg1 forAppID:(id)arg2 dataLenPtr:(unsigned long long *)arg3 orginTextLenPtr:(unsigned long long *)arg4 canReadPasteBoard:(_Bool)arg5;
+ (id)propertyListForAppID:(id)arg1 dataLenPtr:(unsigned long long *)arg2 orginTextLenPtr:(unsigned long long *)arg3;
+ (id)propertyListForAllApp:(unsigned long long *)arg1 orginTextLenPtr:(unsigned long long *)arg2;
+ (id)getDataPasteboard;
+ (id)getDataPasteboardName;

@end
