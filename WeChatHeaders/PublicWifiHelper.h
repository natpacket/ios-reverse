//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface PublicWifiHelper : MMObject
{
}

+ (_Bool)isNeedSpecialHandling;
+ (_Bool)isWifiConnected;
+ (void)logClickCompleteButtonOfCompletePageWithAPMac:(id)arg1 followBrand:(int)arg2 protoType:(int)arg3;
+ (void)logCloseGuidePageOfProtoFourWithAPMac:(id)arg1;
+ (void)logCloseGuidePageOfProtoOneWithAPMac:(id)arg1;
+ (int)getSvrTypeFromWifiScene:(unsigned int)arg1;
+ (id)stringForNow;
+ (id)genSessionKey;

@end
