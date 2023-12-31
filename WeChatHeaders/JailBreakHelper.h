//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMPackageDownloadMgrExt-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface JailBreakHelper : NSObject <PBCoding, MMPackageDownloadMgrExt>
{
    unsigned int _m_hasCheckPuginTimes;
    unsigned int _m_lastCheckTime;
    NSMutableArray *_m_checkPaths;
}

+ (id)loadSetting;
+ (id)getIAPCheckPath;
+ (id)getJailbreakPath;
+ (id)getJailbreakRootDir;
+ (_Bool)JailBroken;
+ (void)initialize;
+ (void)PBArrayAdd_m_lastCheckTime;
+ (void)PBArrayAdd_m_checkPaths;
+ (void)PBArrayAdd_m_hasCheckPuginTimes;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_lastCheckTime; // @synthesize m_lastCheckTime=_m_lastCheckTime;
@property(retain, nonatomic) NSMutableArray *m_checkPaths; // @synthesize m_checkPaths=_m_checkPaths;
@property(nonatomic) unsigned int m_hasCheckPuginTimes; // @synthesize m_hasCheckPuginTimes=_m_hasCheckPuginTimes;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (_Bool)save;
- (_Bool)isOverADay;
- (_Bool)HasInstallJailbreakPlugin:(id)arg1;
- (_Bool)IsJailBreak;
- (id)getKeyStr;
- (id)init;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

