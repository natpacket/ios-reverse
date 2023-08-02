//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICCollectionViewController.h"

#import "TingViewController-Protocol.h"

@class ICCollentionRefreshHeaderView, MMListenDiscoverLine, MMUIActivityIndicatorView, NSData, NSMutableSet, NSString, TingFooterView;

@interface TingSingersWallViewController : ICCollectionViewController <TingViewController>
{
    int _version;
    NSData *_sessionBuffer;
    MMListenDiscoverLine *_lineItem;
    NSString *_categoryId;
    NSMutableSet *_setSingerIds;
    MMUIActivityIndicatorView *_activityIndicator;
    ICCollentionRefreshHeaderView *_refreshHeader;
    TingFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) ICCollentionRefreshHeaderView *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSMutableSet *setSingerIds; // @synthesize setSingerIds=_setSingerIds;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) MMListenDiscoverLine *lineItem; // @synthesize lineItem=_lineItem;
@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
- (void)setupCollectionViewFooter;
- (void)showSingerInfoWithDiscoverItem:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionLayout;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3 isFirstLoad:(_Bool)arg4;
- (void)didFinishLoadNewData:(id)arg1 error:(id)arg2 hasMore:(_Bool)arg3 isFirstLoad:(_Bool)arg4;
- (id)sendDiscoverRequestWithCompletion:(CDUnknownBlockType)arg1 bFirstLoad:(_Bool)arg2;
- (void)fillSingleInfoImformationIfNeeded:(id)arg1;
- (id)loadMoreData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadNewData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (Class)subCollectionViewCellClassForItem:(id)arg1;
- (id)registerSubCollectionViewCellClasses;
- (void)setupCollectionView;
- (void)initData;
- (void)initSubViews;
- (id)initWithLineItem:(id)arg1 categoryId:(id)arg2;
- (id)initWithLineItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
