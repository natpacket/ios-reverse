//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ICFlowBatchFetchingDelegate-Protocol.h"
#import "ICFlowModelObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class ICCollectionView, ICFlowModel, NSString;

@interface ICFlowViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ICFlowBatchFetchingDelegate, ICFlowModelObserver>
{
    ICFlowModel *_model;
    ICCollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ICFlowModel *model; // @synthesize model=_model;
- (void)updateFooterViewHidden:(_Bool)arg1;
- (void)flowModel:(id)arg1 deleteDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataSectionsAt:(id)arg2;
- (void)flowModel:(id)arg1 deleteDataItemsAt:(id)arg2;
- (void)flowModel:(id)arg1 insertDataItemsAt:(id)arg2;
- (void)flowModelReloadDataItems:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadMore:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadMore:(id)arg1;
- (void)flowModel:(id)arg1 didFinishLoadNew:(id)arg2 error:(id)arg3;
- (void)flowModelWillLoadNew:(id)arg1;
- (void)startBatchFetching:(id)arg1;
- (_Bool)shouldBeginBatchFetching;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
