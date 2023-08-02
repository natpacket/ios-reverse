//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMLiveBeautyLogicProvider-Protocol.h"
#import "MMLiveTaskMgrExt-Protocol.h"

@class MMFinderLiveTask, MMLiveDecorationContext, MMLiveEnergyController, MMLiveTask, MMWeEffectManager, MemoryMappedKV, NSArray, NSMutableArray, NSString, WCFinderLiveAnchorLogReporter, WCFinderLiveStarterReporter;

@interface MMLiveBeautyLogic : NSObject <MMLiveBeautyLogicProvider, MMLiveTaskMgrExt>
{
    _Bool _isAudience;
    float _lastSelectMakeupFilterValue;
    MMLiveTask *_task;
    MMWeEffectManager *_effectManager;
    unsigned long long _currentUsedSuit;
    unsigned long long _currentUsedFilter;
    unsigned long long _currentUsedMakeup;
    unsigned long long _currentFilterSource;
    MMLiveDecorationContext *_decorCtx;
    MMLiveEnergyController *_energyController;
    MemoryMappedKV *_mappedKV;
    NSArray *_beautySuitItemsList;
    NSMutableArray *_filterDataItemsList;
    NSArray *_makeupDataItemList;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
    WCFinderLiveStarterReporter *_starterReporter;
}

- (void).cxx_destruct;
@property float lastSelectMakeupFilterValue; // @synthesize lastSelectMakeupFilterValue=_lastSelectMakeupFilterValue;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) WCFinderLiveStarterReporter *starterReporter; // @synthesize starterReporter=_starterReporter;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(retain, nonatomic) NSArray *makeupDataItemList; // @synthesize makeupDataItemList=_makeupDataItemList;
@property(retain, nonatomic) NSMutableArray *filterDataItemsList; // @synthesize filterDataItemsList=_filterDataItemsList;
@property(retain, nonatomic) NSArray *beautySuitItemsList; // @synthesize beautySuitItemsList=_beautySuitItemsList;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) MMLiveEnergyController *energyController; // @synthesize energyController=_energyController;
@property(retain, nonatomic) MMLiveDecorationContext *decorCtx; // @synthesize decorCtx=_decorCtx;
@property(nonatomic) unsigned long long currentFilterSource; // @synthesize currentFilterSource=_currentFilterSource;
@property(nonatomic) unsigned long long currentUsedMakeup; // @synthesize currentUsedMakeup=_currentUsedMakeup;
@property(nonatomic) unsigned long long currentUsedFilter; // @synthesize currentUsedFilter=_currentUsedFilter;
@property(nonatomic) unsigned long long currentUsedSuit; // @synthesize currentUsedSuit=_currentUsedSuit;
@property(retain, nonatomic) MMWeEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(nonatomic) __weak MMLiveTask *task; // @synthesize task=_task;
- (void)onLiveTask:(id)arg1 liveClosed:(_Bool)arg2;
- (float)getValidParamValue:(float)arg1;
@property(readonly, nonatomic) __weak MMFinderLiveTask *finderLiveTask;
- (id)getFilterDataItemsList;
- (id)getCurrentUsedBeautyDataItemsList;
- (id)getCurrentSuitItem;
- (id)getBeautySuitItemsList;
- (id)currentMakeupItem;
- (id)currentFilterItem;
- (id)getMakeupDataItemList;
- (void)saveAllEffectFilterValues;
- (void)saveAllMakeupDataItemValues;
- (id)getMeizhuangResultString;
- (void)reportFilterActionOnStarter;
- (void)reportMakeupActionOnStarter;
- (void)reportFilterAction;
- (void)reportMakeupAction;
- (void)setEffectBeauty:(unsigned long long)arg1 withValue:(float)arg2;
- (void)saveAllEffectBeautyValues;
- (void)resetDataItemsValueToDefault;
- (void)reloadDataItemsValue;
- (_Bool)isCurrentBeautyDefaultValueWithType:(unsigned long long)arg1;
- (_Bool)isCurrentBeautySuitDefaultValue;
- (void)setEffectBeautyWithSuit:(unsigned long long)arg1;
- (void)initBeautyParamsWithSelfGender;
- (void)initBeautyParamsWithDefaultType:(unsigned long long)arg1;
- (void)setLiveFilterValue:(float)arg1;
- (void)setFilterType:(long long)arg1 showToast:(_Bool)arg2;
- (void)setFilterType:(long long)arg1;
- (void)initFilter;
- (void)setMakeupFilterWithRate:(float)arg1;
- (void)setMakeupWithRate:(float)arg1;
- (void)updateMakeupType:(long long)arg1;
- (void)initMakeup;
@property(nonatomic) _Bool skinSegEnable;
- (void)resetFilterStatusToSkinSegOpen;
- (void)saveCurrentFilterStatusOnSkinSegOpen;
- (void)_internalUpdateSkinSegStatus:(_Bool)arg1 success:(CDUnknownBlockType)arg2 saveCurStatus:(_Bool)arg3;
- (void)updateSkinSegStatus:(_Bool)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)initSkinSeg;
- (void)dealloc;
- (id)initWithWeEffectManager:(id)arg1 isAudience:(_Bool)arg2 task:(id)arg3;
- (void)reportDecorAction:(unsigned long long)arg1 item:(id)arg2;
- (_Bool)loadMaterialResource:(id)arg1;
- (_Bool)isMaterialResourceDownloading:(id)arg1;
- (_Bool)isMaterialResourcePrepared:(id)arg1;
- (void)setLiveDecorEffect:(id)arg1;
- (id)getDecorDataItemList;
- (id)beautyLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

