//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWifiInfo : NSObject
{
    NSString *_wifiSSID;
    NSString *_wifiBSSID;
    unsigned long long _updateTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long updateTimeInMs; // @synthesize updateTimeInMs=_updateTimeInMs;
@property(retain, nonatomic) NSString *wifiBSSID; // @synthesize wifiBSSID=_wifiBSSID;
@property(retain, nonatomic) NSString *wifiSSID; // @synthesize wifiSSID=_wifiSSID;
- (void)accessWifiInfo:(id *)arg1 BSSID:(id *)arg2;

@end
