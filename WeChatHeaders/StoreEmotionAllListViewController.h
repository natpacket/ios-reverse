//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLoadMoreCollectionViewDelegate-Protocol.h"
#import "StoreEmotionGetEmotionListCgiDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class EmoticonLoadMoreFooterView, EmotionBannerSet, EmotionSetInfo, MMLoadMoreCollectionView, NSMutableArray, NSString, StoreEmotionAllListReportInfo, StoreEmotionGetEmotionListCgi, StoreEmotionPageShareLogic, UICollectionViewFlowLayout, UIView;

@interface StoreEmotionAllListViewController : MMUIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate, StoreEmotionGetEmotionListCgiDelegate>
{
    StoreEmotionAllListReportInfo *_reportInfo;
    EmotionBannerSet *_bannerSet;
    long long _extranceScene;
    MMLoadMoreCollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    EmoticonLoadMoreFooterView *_loadingFooterView;
    StoreEmotionGetEmotionListCgi *_getEmotionListCgi;
    NSMutableArray *_storeItems;
    EmotionSetInfo *_emotionSetInfo;
    StoreEmotionPageShareLogic *_shareLogic;
    UIView *_loadingView;
    unsigned long long _forwardCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) StoreEmotionPageShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(retain, nonatomic) EmotionSetInfo *emotionSetInfo; // @synthesize emotionSetInfo=_emotionSetInfo;
@property(retain, nonatomic) NSMutableArray *storeItems; // @synthesize storeItems=_storeItems;
@property(retain, nonatomic) StoreEmotionGetEmotionListCgi *getEmotionListCgi; // @synthesize getEmotionListCgi=_getEmotionListCgi;
@property(retain, nonatomic) EmoticonLoadMoreFooterView *loadingFooterView; // @synthesize loadingFooterView=_loadingFooterView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) MMLoadMoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long extranceScene; // @synthesize extranceScene=_extranceScene;
@property(retain, nonatomic) EmotionBannerSet *bannerSet; // @synthesize bannerSet=_bannerSet;
@property(retain, nonatomic) StoreEmotionAllListReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void)onOperate:(id)arg1;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onLoadDone;
- (void)onLoadMore;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)useBlackStatusbar;
- (void)setupRightBarButton;
- (void)initData;
- (void)initViews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBannerSet:(id)arg1 extrance:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

