//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCDeviceUtil : NSObject
{
}

+ (id)deviceFromILinkDeviceInfo:(id)arg1;
+ (unsigned int)getUploadStepBeginTime;
+ (id)deviceFromHardDevice:(id)arg1 DeviceAttr:(id)arg2;
+ (id)displayNameFromDevice:(id)arg1;
+ (_Bool)isInternalSportBrand:(id)arg1;
+ (id)parseDeviceLikeMessageXML:(id)arg1;
+ (id)parseDeviceRankMessageXML:(id)arg1;
+ (struct AccessoryCmd *)deepCopyAccessoryCmd:(struct AccessoryCmd *)arg1;
+ (_Bool)parseConnectProto:(id)arg1:(id)arg2;
+ (unsigned int)hashString:(id)arg1;
+ (_Bool)saveDeviceBoundRelationshipVersion:(unsigned int)arg1;
+ (unsigned int)getDeviceBoundRelationshipVersion;
+ (long long)genTaskId;
+ (id)parseWCDeviceMsg:(id)arg1;

@end

