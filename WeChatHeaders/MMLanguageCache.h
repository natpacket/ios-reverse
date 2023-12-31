//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSDate, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMLanguageCache : NSObject <PBCoding>
{
    _Bool m_haveSave;
    unsigned int m_currentCount;
    NSRecursiveLock *m_dictLock;
    unsigned int _appVersion;
    NSString *_curSystemLanguage;
    NSMutableDictionary *_cacheLanStringDict;
    NSString *_appUUID;
    NSDate *_updateModifeTime;
}

+ (id)getLanguageCache;
+ (void)initialize;
+ (void)PBArrayAdd_updateModifeTime;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_appUUID;
+ (void)PBArrayAdd_cacheLanStringDict;
+ (void)PBArrayAdd_curSystemLanguage;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *updateModifeTime; // @synthesize updateModifeTime=_updateModifeTime;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appUUID; // @synthesize appUUID=_appUUID;
@property(retain, nonatomic) NSMutableDictionary *cacheLanStringDict; // @synthesize cacheLanStringDict=_cacheLanStringDict;
@property(copy, nonatomic) NSString *curSystemLanguage; // @synthesize curSystemLanguage=_curSystemLanguage;
- (void)save;
- (id)getStringForStringID:(id)arg1;
- (void)resetString:(id)arg1 for:(id)arg2;
- (void)resetCurLan:(id)arg1 withUpdateBundlePath:(id)arg2;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

