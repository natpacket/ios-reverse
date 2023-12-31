//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSData, NSString;

@interface WCNewClickStatReportConfig : MMObject <PBCoding>
{
    unsigned int _configVersion;
    unsigned int _nextUpdateInterval;
    unsigned int _samplePeriod;
    NSArray *_arrEventConfig;
    NSData *_versionBuffer;
}

+ (id)reportConfigWithXml:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_versionBuffer;
+ (void)PBArrayAdd_arrEventConfig;
+ (void)PBArrayAdd_samplePeriod;
+ (void)PBArrayAdd_nextUpdateInterval;
+ (void)PBArrayAdd_configVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *versionBuffer; // @synthesize versionBuffer=_versionBuffer;
@property(retain, nonatomic) NSArray *arrEventConfig; // @synthesize arrEventConfig=_arrEventConfig;
@property(nonatomic) unsigned int samplePeriod; // @synthesize samplePeriod=_samplePeriod;
@property(nonatomic) unsigned int nextUpdateInterval; // @synthesize nextUpdateInterval=_nextUpdateInterval;
@property(nonatomic) unsigned int configVersion; // @synthesize configVersion=_configVersion;
- (_Bool)isMatchSpecialPVPage:(id)arg1 prePage:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

