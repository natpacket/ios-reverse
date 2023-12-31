//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MagicBrushFileSystemBizRegistry.h"

@class NSMutableSet;
@protocol IMBFileSystem;

@interface MagicBrushPublicServiceFileSystem : MagicBrushFileSystemBizRegistry
{
    id <IMBFileSystem> _mAssetsFS;
    id <IMBFileSystem> _mWxaPkgFS;
    NSMutableSet *_mBizNameList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *mBizNameList; // @synthesize mBizNameList=_mBizNameList;
@property(retain, nonatomic) id <IMBFileSystem> mWxaPkgFS; // @synthesize mWxaPkgFS=_mWxaPkgFS;
@property(retain, nonatomic) id <IMBFileSystem> mAssetsFS; // @synthesize mAssetsFS=_mAssetsFS;
- (void)removePkgFS:(id)arg1;
- (void)addPkgFS:(id)arg1 pkgPath:(id)arg2 assetsFS:(id)arg3;
- (id)getPkgFileSystem:(id)arg1 bizName:(id)arg2;
- (id)getFlattenFileSystem:(id)arg1 prefix:(id)arg2;
- (id)getNonFlattenFileSystem:(id)arg1 prefix:(id)arg2;
- (void)provideFileSystemList:(id)arg1;
- (id)findOtherBizName:(id)arg1;
- (id)findAppropriateFileSystem:(id)arg1;
- (id)precondition:(id)arg1;
- (id)initWithPara:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 bizNameList:(id)arg5;

@end

