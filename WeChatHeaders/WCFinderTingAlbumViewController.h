//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCFinderStreamFooterViewActionDelegate-Protocol.h"
#import "WCFinderStreamLayoutDelegate-Protocol.h"
#import "WCFinderTingAlbumViewModelDelegate-Protocol.h"

@class NSString, UICollectionView, WCFinderStreamFooterView, WCFinderTingAlbumViewModel;

@interface WCFinderTingAlbumViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderTingAlbumViewModelDelegate, WCFinderStreamLayoutDelegate>
{
    WCFinderTingAlbumViewModel *_viewModel;
    UICollectionView *_collectionView;
    WCFinderStreamFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderTingAlbumViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onTingAlbumFetchDataSuc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)getStaticCoverConfig;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)updateNavTitle;
- (struct CGSize)getItemSize;
- (void)viewDidLoad;
- (id)initWithDataProvider:(id)arg1 innerType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
