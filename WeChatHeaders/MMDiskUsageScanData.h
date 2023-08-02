//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMDiskUsageScanStat, MMFolderWrap, NSString;

@interface MMDiskUsageScanData : NSObject <PBCoding>
{
    MMDiskUsageScanStat *_m_stat;
    MMFolderWrap *_m_rootFolder;
}

+ (id)getNewDiskUsageScanData;
+ (id)scanRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_m_rootFolder;
+ (void)PBArrayAdd_m_stat;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFolderWrap *m_rootFolder; // @synthesize m_rootFolder=_m_rootFolder;
@property(retain, nonatomic) MMDiskUsageScanStat *m_stat; // @synthesize m_stat=_m_stat;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
