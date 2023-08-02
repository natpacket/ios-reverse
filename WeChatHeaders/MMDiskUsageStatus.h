//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMDiskUsageStatus : NSObject <PBCoding>
{
    unsigned int _m_lastStartScanTime;
    unsigned int _m_lastReportTime;
    unsigned int _m_lastScanFinishTime;
    unsigned int _m_lastCleanTmpTime;
}

+ (id)loadStausDataFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_m_lastCleanTmpTime;
+ (void)PBArrayAdd_m_lastScanFinishTime;
+ (void)PBArrayAdd_m_lastReportTime;
+ (void)PBArrayAdd_m_lastStartScanTime;
@property(nonatomic) unsigned int m_lastCleanTmpTime; // @synthesize m_lastCleanTmpTime=_m_lastCleanTmpTime;
@property(nonatomic) unsigned int m_lastScanFinishTime; // @synthesize m_lastScanFinishTime=_m_lastScanFinishTime;
@property(nonatomic) unsigned int m_lastReportTime; // @synthesize m_lastReportTime=_m_lastReportTime;
@property(nonatomic) unsigned int m_lastStartScanTime; // @synthesize m_lastStartScanTime=_m_lastStartScanTime;
@property(readonly, copy) NSString *description;
- (_Bool)saveStatusDataToFile;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

