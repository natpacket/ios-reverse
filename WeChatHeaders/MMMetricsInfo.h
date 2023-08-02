//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMBatteryInfo, MMGPUUtilization, MMNetworkStatistics, NSArray, NSString;

@interface MMMetricsInfo : NSObject
{
    _Bool isAutoIncrement;
    _Bool _isLowPowerModeEnabled;
    unsigned short _locationRetrievingCount;
    unsigned short _locationUsage;
    float _appCPUUsage;
    float _appAverageCPUUsage;
    float _deviceCPUUsage;
    unsigned int _networkType;
    float _brightness;
    unsigned long long _infoID;
    double _time;
    double _lastTime;
    NSString *_scene;
    NSString *_weAppScene;
    NSArray *_otherScenes;
    unsigned long long _userType;
    long long _thermalState;
    long long _overheatingEvent;
    double _overheatingDuration;
    long long _overheatingTorchStatus;
    MMBatteryInfo *_batteryInfo;
    MMGPUUtilization *_deviceGPUUtilization;
    MMGPUUtilization *_deviceAverageGPUUtilization;
    unsigned long long _appPhysicalMemory;
    unsigned long long _appFootprintMemory;
    unsigned long long _appAverageFootprintMemory;
    double _appFootprintMemoryRisingDuration;
    long long _appFootprintMemoryRisingLength;
    NSString *_networkTypeDescription;
    MMNetworkStatistics *_appNetworkUsage;
    MMNetworkStatistics *_deviceNetworkUsage;
    long long _energyMode;
    NSString *_energyRuleID;
}

+ (id)averageMetricsInfoByinfoList:(id)arg1;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (id)swift_deviceNetworkWwanReceived;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)deviceNetworkWwanReceived;
+ (id)swift_deviceNetworkWwanSent;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)deviceNetworkWwanSent;
+ (id)swift_deviceNetworkWifiReceived;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)deviceNetworkWifiReceived;
+ (id)swift_deviceNetworkWifiSent;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)deviceNetworkWifiSent;
+ (id)swift_appNetworkWwanReceived;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)appNetworkWwanReceived;
+ (id)swift_appNetworkWwanSent;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)appNetworkWwanSent;
+ (id)swift_appNetworkWifiReceived;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)appNetworkWifiReceived;
+ (id)swift_appNetworkWifiSent;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)appNetworkWifiSent;
+ (id)swift_networkType;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)networkType;
+ (id)swift_brightness;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)brightness;
+ (id)swift_locationUsage;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)locationUsage;
+ (id)swift_locationRetrievingCount;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)locationRetrievingCount;
+ (id)swift_appFootprintMemory;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)appFootprintMemory;
+ (id)swift_appGPUUsage;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)appGPUUsage;
+ (id)swift_deviceCPUUsage;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)deviceCPUUsage;
+ (id)swift_appCPUUsage;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)appCPUUsage;
+ (id)swift_isLowPowerModeEnabled;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)isLowPowerModeEnabled;
+ (id)swift_batteryLevel;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)batteryLevel;
+ (id)swift_batteryState;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)batteryState;
+ (id)swift_overheatingTorchStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)overheatingTorchStatus;
+ (id)swift_overheatingEvent;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)overheatingEvent;
+ (id)swift_thermalState;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)thermalState;
+ (id)swift_weAppScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)weAppScene;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)scene;
+ (id)swift_time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)time;
+ (id)swift_infoID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)infoID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) float brightness; // @synthesize brightness=_brightness;
@property(nonatomic) unsigned short locationUsage; // @synthesize locationUsage=_locationUsage;
@property(nonatomic) unsigned short locationRetrievingCount; // @synthesize locationRetrievingCount=_locationRetrievingCount;
@property(copy, nonatomic) NSString *energyRuleID; // @synthesize energyRuleID=_energyRuleID;
@property(nonatomic) long long energyMode; // @synthesize energyMode=_energyMode;
@property(retain, nonatomic) MMNetworkStatistics *deviceNetworkUsage; // @synthesize deviceNetworkUsage=_deviceNetworkUsage;
@property(retain, nonatomic) MMNetworkStatistics *appNetworkUsage; // @synthesize appNetworkUsage=_appNetworkUsage;
@property(retain, nonatomic) NSString *networkTypeDescription; // @synthesize networkTypeDescription=_networkTypeDescription;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long appFootprintMemoryRisingLength; // @synthesize appFootprintMemoryRisingLength=_appFootprintMemoryRisingLength;
@property(nonatomic) double appFootprintMemoryRisingDuration; // @synthesize appFootprintMemoryRisingDuration=_appFootprintMemoryRisingDuration;
@property(nonatomic) unsigned long long appAverageFootprintMemory; // @synthesize appAverageFootprintMemory=_appAverageFootprintMemory;
@property(nonatomic) unsigned long long appFootprintMemory; // @synthesize appFootprintMemory=_appFootprintMemory;
@property(nonatomic) unsigned long long appPhysicalMemory; // @synthesize appPhysicalMemory=_appPhysicalMemory;
@property(retain, nonatomic) MMGPUUtilization *deviceAverageGPUUtilization; // @synthesize deviceAverageGPUUtilization=_deviceAverageGPUUtilization;
@property(retain, nonatomic) MMGPUUtilization *deviceGPUUtilization; // @synthesize deviceGPUUtilization=_deviceGPUUtilization;
@property(nonatomic) float deviceCPUUsage; // @synthesize deviceCPUUsage=_deviceCPUUsage;
@property(nonatomic) float appAverageCPUUsage; // @synthesize appAverageCPUUsage=_appAverageCPUUsage;
@property(nonatomic) float appCPUUsage; // @synthesize appCPUUsage=_appCPUUsage;
@property(nonatomic) _Bool isLowPowerModeEnabled; // @synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled;
@property(retain, nonatomic) MMBatteryInfo *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property(nonatomic) long long overheatingTorchStatus; // @synthesize overheatingTorchStatus=_overheatingTorchStatus;
@property(nonatomic) double overheatingDuration; // @synthesize overheatingDuration=_overheatingDuration;
@property(nonatomic) long long overheatingEvent; // @synthesize overheatingEvent=_overheatingEvent;
@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSArray *otherScenes; // @synthesize otherScenes=_otherScenes;
@property(retain, nonatomic) NSString *weAppScene; // @synthesize weAppScene=_weAppScene;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long infoID; // @synthesize infoID=_infoID;
- (void)setIsAutoIncrement:(_Bool)arg1;
- (_Bool)isAutoIncrement;
- (id)reportString;
- (id)description;
- (id)allScenes;
- (unsigned long long)deviceNetworkWwanReceived;
- (unsigned long long)deviceNetworkWwanSent;
- (unsigned long long)deviceNetworkWifiReceived;
- (unsigned long long)deviceNetworkWifiSent;
- (unsigned long long)appNetworkWwanReceived;
- (unsigned long long)appNetworkWwanSent;
- (unsigned long long)appNetworkWifiReceived;
- (unsigned long long)appNetworkWifiSent;
- (float)appGPUUsage;
- (float)batteryLevel;
- (long long)batteryState;
- (id)init;

@end
