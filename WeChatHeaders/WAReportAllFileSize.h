//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSArray;

@interface WAReportAllFileSize : WAReportBaseItem
{
    NSArray *m_arrDirPrefixes;
    _Bool _isTriggerSingleAppClean;
    _Bool _isTriggerAllAppClean;
    _Bool _runtimeSpaceStaticsEnable;
    unsigned long long _fileSize;
    long long _dirPrefix;
    long long _reportFileSizeScene;
    unsigned long long _totalFileSize;
    long long _runtimeFileOccupation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool runtimeSpaceStaticsEnable; // @synthesize runtimeSpaceStaticsEnable=_runtimeSpaceStaticsEnable;
@property(nonatomic) long long runtimeFileOccupation; // @synthesize runtimeFileOccupation=_runtimeFileOccupation;
@property(nonatomic) _Bool isTriggerAllAppClean; // @synthesize isTriggerAllAppClean=_isTriggerAllAppClean;
@property(nonatomic) _Bool isTriggerSingleAppClean; // @synthesize isTriggerSingleAppClean=_isTriggerSingleAppClean;
@property(nonatomic) unsigned long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
@property(nonatomic) long long reportFileSizeScene; // @synthesize reportFileSizeScene=_reportFileSizeScene;
@property(nonatomic) long long dirPrefix; // @synthesize dirPrefix=_dirPrefix;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)reportString;
- (int)reportID;
- (id)init;

@end

