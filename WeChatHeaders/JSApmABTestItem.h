//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JSApmABTestItem : NSObject
{
    _Bool _enabled;
    _Bool _watchdogEnabled;
    _Bool _powerEnabled;
    _Bool _btEnabled;
    _Bool _mainThreadEnabled;
    _Bool _runLoopLongTaskEnabled;
    _Bool _runLoopHangEnabled;
    long long _watchdogLimit;
    long long _cpuUsageLimit;
    long long _cpuDurationLimit;
    unsigned long long _tickCountLimit;
    long long _ver;
    long long _runLoopCheckPeriod;
    long long _runLoopLongTaskThreshold;
    long long _runLoopHangThreshold;
}

@property(nonatomic) long long runLoopHangThreshold; // @synthesize runLoopHangThreshold=_runLoopHangThreshold;
@property(nonatomic) long long runLoopLongTaskThreshold; // @synthesize runLoopLongTaskThreshold=_runLoopLongTaskThreshold;
@property(nonatomic) long long runLoopCheckPeriod; // @synthesize runLoopCheckPeriod=_runLoopCheckPeriod;
@property(nonatomic) _Bool runLoopHangEnabled; // @synthesize runLoopHangEnabled=_runLoopHangEnabled;
@property(nonatomic) _Bool runLoopLongTaskEnabled; // @synthesize runLoopLongTaskEnabled=_runLoopLongTaskEnabled;
@property(nonatomic) _Bool mainThreadEnabled; // @synthesize mainThreadEnabled=_mainThreadEnabled;
@property(nonatomic) _Bool btEnabled; // @synthesize btEnabled=_btEnabled;
@property(nonatomic) _Bool powerEnabled; // @synthesize powerEnabled=_powerEnabled;
@property(nonatomic) _Bool watchdogEnabled; // @synthesize watchdogEnabled=_watchdogEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long ver; // @synthesize ver=_ver;
@property(nonatomic) unsigned long long tickCountLimit; // @synthesize tickCountLimit=_tickCountLimit;
@property(nonatomic) long long cpuDurationLimit; // @synthesize cpuDurationLimit=_cpuDurationLimit;
@property(nonatomic) long long cpuUsageLimit; // @synthesize cpuUsageLimit=_cpuUsageLimit;
@property(nonatomic) long long watchdogLimit; // @synthesize watchdogLimit=_watchdogLimit;
- (id)description;
- (void)setup;
- (long long)integerWithKey:(id)arg1 undef:(long long)arg2;
- (_Bool)boolWithKey:(id)arg1 undef:(_Bool)arg2;
- (_Bool)isEnable:(id)arg1 valeIfUndefined:(_Bool)arg2;
- (_Bool)boolForKey:(id)arg1 valeIfUndefined:(_Bool)arg2;
- (id)keyWith:(id)arg1;

@end

