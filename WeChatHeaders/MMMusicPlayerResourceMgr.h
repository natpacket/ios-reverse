//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MVVideoTransitionResourceConfig, NSMutableDictionary, NSString;

@interface MMMusicPlayerResourceMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
{
    _Bool _hasLoadVideoResourcePath;
    unsigned int _kVideoResrouceCount;
    NSString *_resMainDir;
    NSMutableDictionary *_dicVideoResourcePath;
    MVVideoTransitionResourceConfig *_curConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MVVideoTransitionResourceConfig *curConfig; // @synthesize curConfig=_curConfig;
@property(nonatomic) unsigned int kVideoResrouceCount; // @synthesize kVideoResrouceCount=_kVideoResrouceCount;
@property(nonatomic) _Bool hasLoadVideoResourcePath; // @synthesize hasLoadVideoResourcePath=_hasLoadVideoResourcePath;
@property(retain, nonatomic) NSMutableDictionary *dicVideoResourcePath; // @synthesize dicVideoResourcePath=_dicVideoResourcePath;
@property(retain, nonatomic) NSString *resMainDir; // @synthesize resMainDir=_resMainDir;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)genNameWithCurLanguage:(id)arg1;
- (_Bool)unzipRes:(unsigned long long)arg1 from:(id)arg2;
- (id)genMVTransitionModelArr;
- (id)getVideoResourcePathWithSubType:(unsigned int)arg1;
- (void)deleteVideoResourcePathWithSubType:(unsigned int)arg1;
- (void)addVideoResourcePath:(id)arg1 withSubType:(unsigned int)arg2;
- (void)loadVideoResourcePath;
- (id)pathForSubType:(unsigned long long)arg1;
- (id)nameForSubType:(unsigned long long)arg1;
- (_Bool)dirIsEmpty:(id)arg1;
- (id)getMVTransitionPathById:(id)arg1;
- (id)availableMVTransitionModelArrForPanel;
- (id)translucentIconPathForAppId:(id)arg1;
- (id)translucentIconForAppId:(id)arg1 size:(struct CGSize)arg2;
- (id)getVideoResourcePathWithIndex:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
