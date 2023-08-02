//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseRecommendAppMsgCellView.h"

#import "BTScrollableFinderCellViewModelDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BTRecommendFinderHeaderView, BTScrollableFinderCellViewModel, NSArray, NSString, UICollectionView;
@protocol BTScrollableFinderCellViewDelegate;

@interface BTScrollableFinderCellView : BTBaseRecommendAppMsgCellView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, BTScrollableFinderCellViewModelDelegate>
{
    id <BTScrollableFinderCellViewDelegate> _finderCellViewDelegate;
    BTRecommendFinderHeaderView *_headerView;
    UICollectionView *_collectionView;
}

+ (double)headerViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) BTRecommendFinderHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <BTScrollableFinderCellViewDelegate> finderCellViewDelegate; // @synthesize finderCellViewDelegate=_finderCellViewDelegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onDidDeleteFinderInterestData;
- (void)onDidReceiveFinderInterestData;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)indexForFinderTid:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didHideFinderItemViewWithIndexArr:(id)arg1;
@property(readonly, nonatomic) NSArray *indexesOfValidShowItem;
@property(readonly, nonatomic) NSArray *indexesOfVisibleItem;
- (id)finderItemCellWithIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)setFinderItemCellWithIndex:(long long)arg1 bHighlight:(_Bool)arg2;
- (struct CGRect)convertFinderItemCellFrameWithIndex:(long long)arg1 toView:(id)arg2;
- (void)onUpdateViewModel;
- (void)setViewModel:(id)arg1;
- (void)initSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTScrollableFinderCellViewModel *viewModel; // @dynamic viewModel;

@end

