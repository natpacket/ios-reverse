//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingCategoryFlowViewController.h"

#import "RecentForwardScrollViewDelegate-Protocol.h"
#import "SharePreConfirmViewDelegate-Protocol.h"
#import "TingPlayToolBoxHeaderViewDelegate-Protocol.h"
#import "TingRelatedLineCellDelegate-Protocol.h"

@class MMListenCategoryItem, MMScrollActionSheet, NSMutableArray, NSString, SharePreConfirmView, TingStyleWikiHeaderView;

@interface TingStyleWikiViewController : TingCategoryFlowViewController <RecentForwardScrollViewDelegate, SharePreConfirmViewDelegate, TingRelatedLineCellDelegate, TingPlayToolBoxHeaderViewDelegate>
{
    TingStyleWikiHeaderView *_styleHeaderView;
    NSMutableArray *_arrSectionData;
    MMListenCategoryItem *_categoryItem;
    MMScrollActionSheet *_scrollActionSheet;
    SharePreConfirmView *_sharePreConfirmView;
}

+ (id)itemVMFromDiscoverItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(nonatomic) __weak MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(retain, nonatomic) NSMutableArray *arrSectionData; // @synthesize arrSectionData=_arrSectionData;
@property(retain, nonatomic) TingStyleWikiHeaderView *styleHeaderView; // @synthesize styleHeaderView=_styleHeaderView;
- (void)onMoreButtonClicked;
- (void)onDescMoreButtonClicked;
- (void)openPlayListInfo:(id)arg1 sectionData:(id)arg2;
- (void)onPTBItemCellClicked:(id)arg1 sectionData:(id)arg2 index:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionLayout;
- (void)setupCollectionView;
- (id)reuseIdentifierForType:(unsigned long long)arg1;
- (id)loadMore:(CDUnknownBlockType)arg1;
- (_Bool)shouldFetchCommentInfo;
- (void)fetchNewHeaderCategory;
- (void)setUpHeaderView;
- (_Bool)shouldShowHeaderView;
- (void)viewDidLoad;
- (id)getCategoryItem;
- (id)initWithCategory:(id)arg1;
- (void)openPlaylistWall:(id)arg1;
- (void)openSingerWall:(id)arg1;
- (id)buildSectionDataFromRecommendLines:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)showMoreActions;
- (id)shareCategoryItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

