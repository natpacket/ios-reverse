//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSMapTable;

@interface MagicBrushFileSystemFactory : NSObject
{
    NSMapTable *_mBizFsMap;
    NSMapTable *_mPublicServiceFsMap;
    MemoryMappedKV *_mmkv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) NSMapTable *mPublicServiceFsMap; // @synthesize mPublicServiceFsMap=_mPublicServiceFsMap;
@property(retain, nonatomic) NSMapTable *mBizFsMap; // @synthesize mBizFsMap=_mBizFsMap;
- (unsigned int)getBizFsOpenTime:(id)arg1;
- (_Bool)getBizFsState:(id)arg1;
- (void)setFSLifeState:(id)arg1 state:(_Bool)arg2;
- (void)destroyBizPkgFileSystem:(id)arg1;
- (id)getBizFileSystem:(id)arg1;
- (id)getOrCreatePublicServiceFileSystem:(id)arg1 pkgPath:(id)arg2 assetsFS:(id)arg3 bizNameSet:(id)arg4;
- (id)getOrCreateBizFileSystem:(id)arg1 pkgPath:(id)arg2 assetsFS:(id)arg3;
- (void)removePublicServiceFsMap:(id)arg1;
- (void)addPublicServiceFsMap:(id)arg1 bizFileSystem:(id)arg2;
- (void)removeBizFsMap:(id)arg1;
- (void)addBizFsMap:(id)arg1 bizFileSystem:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
