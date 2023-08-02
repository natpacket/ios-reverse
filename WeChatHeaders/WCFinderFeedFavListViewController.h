//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCFinderFansProfileViewControllerDelegate-Protocol.h"
#import "WCFinderFeedFavListViewModelDelegate-Protocol.h"
#import "WCFinderHalfScreenProtocol-Protocol.h"
#import "WCFinderStreamFooterViewActionDelegate-Protocol.h"

@class MMUIButton, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderCustomImageRichTextView, WCFinderFavInfo, WCFinderFeedFavListViewModel, WCFinderStreamFooterView;

@interface WCFinderFeedFavListViewController : MMUIHalfScreenViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderFeedFavListViewModelDelegate, WCFinderHalfScreenProtocol>
{
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    MMUIButton *_closeBtn;
    WCFinderCustomImageRichTextView *_richTextView;
    UILabel *_subTitleLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCFinderStreamFooterView *_refreshFooterView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    unsigned long long _footerRefreshState;
    WCFinderFeedFavListViewModel *_viewModel;
    NSString *_tid;
    WCFinderFavInfo *_currentSelectFavInfo;
    double _heightRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) WCFinderFavInfo *currentSelectFavInfo; // @synthesize currentSelectFavInfo=_currentSelectFavInfo;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) WCFinderFeedFavListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long footerRefreshState; // @synthesize footerRefreshState=_footerRefreshState;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderStreamFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (void)showHalfProfileVC:(id)arg1;
- (void)onClickClose;
- (void)stateRetryGestureAction;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)feedFavListDataFavCountChange;
- (void)feedFavListDataError:(int)arg1;
- (void)feedFavListDataNoMore;
- (void)feedFavListDataChange;
- (void)showNoMoreData;
- (void)resetRefreshStateNormal;
- (void)updateTitleWithCount:(long long)arg1;
- (void)fetchNextPage;
- (void)layoutUI;
- (void)setupUI;
- (_Bool)isHideCloseButton;
- (_Bool)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidLoad;
- (double)getMaxHalfScreenHeight;
- (id)initWithContentVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
