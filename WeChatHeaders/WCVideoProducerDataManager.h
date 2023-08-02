//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCVideoProducerPreloadConfigs;

@interface WCVideoProducerDataManager : NSObject
{
    NSMutableDictionary *_extConfigMap;
    NSArray *_inputAssetInfoList;
    NSArray *_inputAssetIdList;
    NSString *_createSameTemplateId;
    NSString *_createSameMusicId;
    NSMutableArray *_defaultTemplateList;
    NSMutableArray *_createSameTemplateList;
    NSMutableArray *_stubTemplateList;
    NSMutableArray *_launcherTemplateList;
    NSMutableArray *_folderTemplateList;
    NSMutableArray *_recommendTemplateList;
    NSMutableArray *_extRecommendTemplateList;
    NSMutableArray *_pickOutTemplateList;
    NSMutableArray *_recommendMusicList;
    NSMutableArray *_searchMusicList;
    WCVideoProducerPreloadConfigs *_preloadConfigs;
    NSMutableSet *_editedImageFileNameSet;
    NSMutableSet *_wxDefaultAndCreateSameTemplateIdSet;
}

+ (_Bool)removeTemplateById:(id)arg1 fromList:(id)arg2;
+ (id)findMusicById:(id)arg1 inList:(id)arg2;
+ (id)findTemplateById:(id)arg1 inList:(id)arg2;
+ (void)loadDemoCacheFileForTemplate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (id)fixedPreloadConfigs:(id)arg1;
+ (_Bool)_isMusic:(id)arg1 containedInList:(id)arg2;
+ (_Bool)_isTemplate:(id)arg1 containedInList:(id)arg2;
+ (void)_checkTaskCount:(unsigned long long)arg1 forBlock:(CDUnknownBlockType)arg2 withResult:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *wxDefaultAndCreateSameTemplateIdSet; // @synthesize wxDefaultAndCreateSameTemplateIdSet=_wxDefaultAndCreateSameTemplateIdSet;
@property(retain, nonatomic) NSMutableSet *editedImageFileNameSet; // @synthesize editedImageFileNameSet=_editedImageFileNameSet;
@property(retain, nonatomic) WCVideoProducerPreloadConfigs *preloadConfigs; // @synthesize preloadConfigs=_preloadConfigs;
@property(retain, nonatomic) NSMutableArray *searchMusicList; // @synthesize searchMusicList=_searchMusicList;
@property(retain, nonatomic) NSMutableArray *recommendMusicList; // @synthesize recommendMusicList=_recommendMusicList;
@property(retain, nonatomic) NSMutableArray *pickOutTemplateList; // @synthesize pickOutTemplateList=_pickOutTemplateList;
@property(retain, nonatomic) NSMutableArray *extRecommendTemplateList; // @synthesize extRecommendTemplateList=_extRecommendTemplateList;
@property(retain, nonatomic) NSMutableArray *recommendTemplateList; // @synthesize recommendTemplateList=_recommendTemplateList;
@property(retain, nonatomic) NSMutableArray *folderTemplateList; // @synthesize folderTemplateList=_folderTemplateList;
@property(retain, nonatomic) NSMutableArray *launcherTemplateList; // @synthesize launcherTemplateList=_launcherTemplateList;
@property(retain, nonatomic) NSMutableArray *stubTemplateList; // @synthesize stubTemplateList=_stubTemplateList;
@property(retain, nonatomic) NSMutableArray *createSameTemplateList; // @synthesize createSameTemplateList=_createSameTemplateList;
@property(retain, nonatomic) NSMutableArray *defaultTemplateList; // @synthesize defaultTemplateList=_defaultTemplateList;
@property(retain, nonatomic) NSString *createSameMusicId; // @synthesize createSameMusicId=_createSameMusicId;
@property(retain, nonatomic) NSString *createSameTemplateId; // @synthesize createSameTemplateId=_createSameTemplateId;
@property(retain, nonatomic) NSArray *inputAssetIdList; // @synthesize inputAssetIdList=_inputAssetIdList;
@property(retain, nonatomic) NSArray *inputAssetInfoList; // @synthesize inputAssetInfoList=_inputAssetInfoList;
- (_Bool)isCreateSameTemplateForId:(id)arg1;
- (_Bool)isDefaultTemplateForId:(id)arg1;
- (id)removeExtConfigForKey:(id)arg1;
- (id)getExtConfigForKey:(id)arg1;
- (id)setExtConfig:(id)arg1 forKey:(id)arg2;
- (void)removeAllRecommendMusics;
- (_Bool)safeInsertSearchMusic:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)removeExtRecommendTemplateById:(id)arg1;
- (void)removeAllStubTemplates;
- (_Bool)addPickOutTemplate:(id)arg1;
- (id)findTemplateById:(id)arg1;
- (id)findAssetInfoByLocalIdentifier:(id)arg1;
- (void)_initData;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 inputAssetInfoList:(id)arg2;
- (void)cleanLocalCache;
- (id)convertOMJAssetInfoList;
- (id)_assembleAvailableMusicList;
- (id)_assembleAvailableTemplateList;
- (id)_genCenterDiffusionListFrom:(id)arg1 atCenterIndex:(long long)arg2 preferRightItem:(_Bool)arg3 includingCenterItem:(_Bool)arg4 maxCount:(long long)arg5;
- (id)genMusicPreloadConfigForId:(id)arg1;
- (id)genTemplatePreloadConfigForId:(id)arg1;
- (void)updatePreloadProviderWithConfigs:(id)arg1;
- (_Bool)shouldPreloadForRule:(unsigned long long)arg1;
- (id)_fetchMusicsFromTemplateId:(id)arg1 withSession:(id)arg2;
- (void)_removeRecommendPageCtxExtConfig;
- (void)_setRecommendPageCtxExtConfig:(id)arg1;
- (id)_getRecommendPageCtxExtConfig;
- (_Bool)_addExtRecommendTemplate:(id)arg1;
- (void)_fetchExtRecommendTemplatesFromTemplateSession:(id)arg1 withMusicRecommendationEnabled:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fetchMJRecommendTemplatesForMaxCount:(unsigned long long)arg1 fromTemplateSession:(id)arg2 withMusicRecommendationEnabled:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_fetchWXRecommendTemplatesForMaxCount:(unsigned long long)arg1 byScene:(unsigned long long)arg2 withMusicRecommendationEnabled:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_fetchFolderTemplateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fetchMJAppLauncherTemplatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fetchStubTemplatesForMaxCount:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fetchCreateSameTemplatesForTemplateId:(id)arg1 byScene:(unsigned long long)arg2 withMusicRecommendationEnabled:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_fetchDefaultTemplatesWithMusicRecommendationEnabled:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_shouldSkipFetching;
- (void)_removeSkipFetchingMark;
- (void)_addSkipFetchingMark;
- (id)_fetchTemplatesWithOptions:(id)arg1 localDataCompletion:(CDUnknownBlockType)arg2 serverDataCompletion:(CDUnknownBlockType)arg3;
- (id)getAnalysisDataFromTemplateSession:(id)arg1;
- (void)fetchMoreExtRecommendTemplatesFromTemplateSession:(id)arg1 withMusicRecommendationEnabled:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)skipNextFetching;
- (void)filterLocalTemplatesWithTemplateSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchMusicsFromTemplateId:(id)arg1 withSession:(id)arg2;
- (id)fetchTemplatesWithOptions:(id)arg1 localDataCompletion:(CDUnknownBlockType)arg2 serverDataCompletion:(CDUnknownBlockType)arg3 allDataCompletion:(CDUnknownBlockType)arg4;

@end

