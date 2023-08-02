//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICFlowViewController.h"

#import "ICCategoryFlowModelDelegate-Protocol.h"
#import "MMNavBarInteractiveDelegate-Protocol.h"
#import "TingCategoryCommonHeaderViewDelegate-Protocol.h"
#import "TingFlowModelExtension-Protocol.h"
#import "TingFlowPlayerNotification-Protocol.h"
#import "TingViewController-Protocol.h"

@class MMListenCommentInfo, MMUILabel, NSString, TingAlbumDetailNoContentView, TingCategoryCommonHeaderView, TingCollectionViewAutoSizeProvider, TingFooterView, TingTagsView, UIBarButtonItem;

@interface TingCategoryFlowViewController : ICFlowViewController <TingFlowPlayerNotification, TingViewController, MMNavBarInteractiveDelegate, TingCategoryCommonHeaderViewDelegate, ICCategoryFlowModelDelegate, TingFlowModelExtension>
{
    UIBarButtonItem *_navLeftButton;
    TingCategoryCommonHeaderView *_headerView;
    MMListenCommentInfo *_commentInfo;
    TingFooterView *_footerView;
    TingAlbumDetailNoContentView *_commonNoContentView;
    TingCollectionViewAutoSizeProvider *_provider;
    TingTagsView *_curTagsView;
    double _originOffsetY;
    MMUILabel *_forbiddenLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *forbiddenLabel; // @synthesize forbiddenLabel=_forbiddenLabel;
@property(nonatomic) double originOffsetY; // @synthesize originOffsetY=_originOffsetY;
@property(retain, nonatomic) TingTagsView *curTagsView; // @synthesize curTagsView=_curTagsView;
@property(retain, nonatomic) TingCollectionViewAutoSizeProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) TingAlbumDetailNoContentView *commonNoContentView; // @synthesize commonNoContentView=_commonNoContentView;
@property(retain, nonatomic) TingFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMListenCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) TingCategoryCommonHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIBarButtonItem *navLeftButton; // @synthesize navLeftButton=_navLeftButton;
- (void)scrollsCollectionViewToTop;
- (void)tingFlowModel:(id)arg1 flowSession:(id)arg2 onAppendItems:(id)arg3;
- (void)tingFlowModel:(id)arg1 flowSession:(id)arg2 onReloadItems:(id)arg3 context:(id)arg4;
- (void)dataReportForListItemAppear:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadMore:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadMore:(id)arg1;
- (void)setFooterViewWithCommonNoContentView;
- (double)noContentMarginTop;
- (id)noContentText;
- (_Bool)shouldUseCommonFooterView;
- (void)showTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)manuallyInvokeLoadMethod;
- (id)executeLoadNew;
- (id)executeLoadMore;
- (id)loadMore:(CDUnknownBlockType)arg1;
- (id)loadNew:(CDUnknownBlockType)arg1;
- (void)didClickCategoryStyleLabel:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidClickStyle:(id)arg1;
- (void)didClickNoCopyRightDescLabel:(id)arg1;
- (void)tingCategoryCommonHeaderView:(id)arg1 didClickNoCopyRightDescLabel:(id)arg2;
- (void)didClickCamera:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidClickCamera:(id)arg1;
- (void)didClickPencil:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidClickPencil:(id)arg1;
- (void)didTapAddView:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidTapAddView:(id)arg1;
- (void)didClickDescMore:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidClickDescMore:(id)arg1;
- (void)tingCategoryCommonHeaderView:(id)arg1 didClickLike:(id)arg2;
- (void)didClickMore:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidClickMore:(id)arg1;
- (void)didTapAuthor:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidTapAuthor:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidClickPlayShuffle:(id)arg1;
- (void)tingCategoryCommonHeaderViewDidClickPlayAll:(id)arg1;
- (id)getReportContext;
- (void)categoryDeleteOneItem:(id)arg1;
- (void)addCategoryToLibrary;
- (id)generateMoreBarButtonWithColor:(id)arg1;
- (void)onMoreButtonClicked;
- (void)handleTingMoreButtonAction;
- (_Bool)showTingMoreButton;
- (void)fetchCommentInfoComplete;
- (unsigned long long)getCommentSecureBits;
- (void)fetchCommentInfo;
- (_Bool)shouldFetchCommentInfo;
- (void)didClickLike:(_Bool)arg1;
- (_Bool)reportInSubclass;
- (int)getTingScene;
- (void)playShuffle;
- (void)playAll;
- (id)currentPlayer;
- (id)currentFlowPlayerModel;
- (_Bool)isTingItemPlaying:(id)arg1;
- (void)checkPlayingState;
- (double)paddingLeftRight;
- (id)player;
- (id)albumItem;
- (id)detailModel;
- (struct CGPoint)originOffset;
- (id)tintColor;
- (_Bool)shouldSetUpSupNavigation;
- (id)tingPreferredNavigationItemColor;
- (struct CGSize)cellSizeWithCell:(id)arg1 indexPath:(id)arg2;
- (void)updateDataWithCell:(id)arg1 indexPath:(id)arg2;
- (Class)cellClass;
- (id)cellReuseIdentifier;
- (void)didSelectItemInSubAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)resetCollectionContentSet;
- (id)collectionLayout;
- (unsigned long long)headerViewType;
- (void)setupHeaderViewFinished;
- (void)fetchNewHeaderCategoryFinished;
- (void)fetchNewHeaderCategory;
- (void)setupHeaderView;
- (_Bool)shouldShowHeaderView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCategoryModel:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithCategoryItem:(id)arg1;
- (id)initWithCategoryId:(id)arg1;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

