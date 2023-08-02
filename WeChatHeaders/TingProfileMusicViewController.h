//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingCategoryFlowViewController.h"

#import "TingFlowPlayerNotification-Protocol.h"
#import "TingPlayToolBoxHeaderViewDelegate-Protocol.h"
#import "TingRelatedLineCellDelegate-Protocol.h"
#import "TingUGCCategoryUpdateExt-Protocol.h"
#import "TingViewController-Protocol.h"

@class MMListenDiscoverResponse, MemoryMappedKV, NSMutableArray, NSMutableDictionary, NSString, TingCategoryFlowModel, TingPlayToolBoxHeaderView, TingSearchMainViewController, TingVipEducationToastView;

@interface TingProfileMusicViewController : TingCategoryFlowViewController <TingRelatedLineCellDelegate, TingViewController, TingPlayToolBoxHeaderViewDelegate, TingUGCCategoryUpdateExt, TingFlowPlayerNotification>
{
    _Bool _isFirstLoad;
    _Bool _isCacheLoadFinished;
    _Bool _isRecommandInfoLoadFinished;
    unsigned int _discvoerItemCheckTs;
    TingPlayToolBoxHeaderView *_searchHeaderView;
    TingVipEducationToastView *_educationToastView;
    MemoryMappedKV *_mmkv;
    TingSearchMainViewController *_searchViewController;
    NSMutableArray *_arrSectionData;
    MMListenDiscoverResponse *_cacheResponse;
    NSMutableDictionary *_itemsDic;
    NSMutableDictionary *_sectionDataDicOfAppear;
    NSMutableArray *_ctxArrayWhenAppear;
    TingCategoryFlowModel *_flowModelOfTodayCategory;
}

+ (id)itemVMFromDiscoverItem:(id)arg1;
+ (id)itemVMFromTapeItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int discvoerItemCheckTs; // @synthesize discvoerItemCheckTs=_discvoerItemCheckTs;
@property(retain, nonatomic) TingCategoryFlowModel *flowModelOfTodayCategory; // @synthesize flowModelOfTodayCategory=_flowModelOfTodayCategory;
@property(retain, nonatomic) NSMutableArray *ctxArrayWhenAppear; // @synthesize ctxArrayWhenAppear=_ctxArrayWhenAppear;
@property(retain, nonatomic) NSMutableDictionary *sectionDataDicOfAppear; // @synthesize sectionDataDicOfAppear=_sectionDataDicOfAppear;
@property(retain, nonatomic) NSMutableDictionary *itemsDic; // @synthesize itemsDic=_itemsDic;
@property(retain, nonatomic) MMListenDiscoverResponse *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(nonatomic) _Bool isRecommandInfoLoadFinished; // @synthesize isRecommandInfoLoadFinished=_isRecommandInfoLoadFinished;
@property(nonatomic) _Bool isCacheLoadFinished; // @synthesize isCacheLoadFinished=_isCacheLoadFinished;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) NSMutableArray *arrSectionData; // @synthesize arrSectionData=_arrSectionData;
@property(retain, nonatomic) TingSearchMainViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) TingVipEducationToastView *educationToastView; // @synthesize educationToastView=_educationToastView;
@property(retain, nonatomic) TingPlayToolBoxHeaderView *searchHeaderView; // @synthesize searchHeaderView=_searchHeaderView;
- (void)doReportVisibleCellsDisplay;
- (_Bool)isPlayerViewOnDisplay;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tingViewDidAppear:(_Bool)arg1;
- (void)onUGCCategoryDeleted:(id)arg1;
- (void)onTingTapeInfoSyncDone:(id)arg1;
- (void)playToolBoxHeaderView:(id)arg1 didLongPressProfileBtn:(id)arg2;
- (void)playToolBoxHeaderView:(id)arg1 didClickProfileBtn:(id)arg2;
- (void)playToolBoxHeaderView:(id)arg1 didClickSearchBar:(id)arg2;
- (void)deleteViewModel:(id)arg1 inSectionData:(id)arg2;
- (void)onPTBItemCellLongPressed:(id)arg1 sectionData:(id)arg2;
- (void)onPTBItemCellDisplayed:(id)arg1 sectionData:(id)arg2 index:(long long)arg3;
- (void)onPTBItemCellClicked:(id)arg1 sectionData:(id)arg2 index:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionLayout;
- (void)setupCollectionView;
- (id)reuseIdentifierForType:(unsigned long long)arg1;
- (_Bool)showTingMoreButton;
- (_Bool)shouldShowHeaderView;
- (int)getTingScene;
- (void)setUpVipEducationView:(id)arg1;
- (void)setupCollectionViewHeaderView;
- (void)viewDidTransitionToNewSize;
- (void)setHasShownSquareMusicEducation:(_Bool)arg1;
- (_Bool)hasShownSquareMusicEducation;
- (void)checkoutEducationView:(id)arg1;
- (void)dealloc;
- (void)registerObservers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setUpTodayCategoryModel:(id)arg1;
- (void)fetchNewDiscvoerItemWhenAppear;
- (void)checkNeedUpdateNewDiscvoerItemWhenAppearInForce:(_Bool)arg1;
- (void)fetchNewDiscoverItemAndReloadData;
- (id)buildNewDiscoverCtxsWithSectionDatas:(id)arg1;
- (void)onTapeInfoListUpdated;
- (id)tingPlaySectionDataWithTapeInfos:(id)arg1;
- (id)genPlayedSectionData;
- (long long)indexOfPlayedSection;
- (id)buildSectionDataFromRecommendLines:(id)arg1 bLoadNew:(_Bool)arg2;
- (id)loadData:(CDUnknownBlockType)arg1;
- (void)flowModel:(id)arg1 didFinishLoadMore:(id)arg2 error:(id)arg3;
- (id)loadMore:(CDUnknownBlockType)arg1;
- (id)loadNew:(CDUnknownBlockType)arg1;
- (void)openSquareItemViewModel:(id)arg1 sectionData:(id)arg2;
- (void)openTapeList;
- (void)openLineActivityPage:(id)arg1;
- (void)openPlaylistWall:(id)arg1;
- (void)runShowAndHideSearch:(_Bool)arg1;
- (void)showSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

