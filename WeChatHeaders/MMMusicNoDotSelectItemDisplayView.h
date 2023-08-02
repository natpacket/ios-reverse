//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMMusicNoDotSelectItemViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMMusicNoDotSelectItemDisplayViewBgView, MMMusicNoDotSelectItemDisplayViewCustomLayout, MMMusicNoDotSelectItemView, NSString, UICollectionView;
@protocol MMMusicNoDotSelectItemDisplayViewDataSource, MMMusicNoDotSelectItemDisplayViewDelegate;

@interface MMMusicNoDotSelectItemDisplayView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMMusicNoDotSelectItemViewDelegate>
{
    _Bool _isInLongSelectedStatus;
    id <MMMusicNoDotSelectItemDisplayViewDataSource> _dataSource;
    id <MMMusicNoDotSelectItemDisplayViewDelegate> _delegate;
    UICollectionView *_collectionView;
    MMMusicNoDotSelectItemDisplayViewCustomLayout *_collectionViewLayout;
    MMMusicNoDotSelectItemView *_curSelectedItemView;
    MMMusicNoDotSelectItemDisplayViewBgView *_bgView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInLongSelectedStatus; // @synthesize isInLongSelectedStatus=_isInLongSelectedStatus;
@property(retain, nonatomic) MMMusicNoDotSelectItemDisplayViewBgView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) MMMusicNoDotSelectItemView *curSelectedItemView; // @synthesize curSelectedItemView=_curSelectedItemView;
@property(retain, nonatomic) MMMusicNoDotSelectItemDisplayViewCustomLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MMMusicNoDotSelectItemDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicNoDotSelectItemDisplayViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)updateSelectedDataLongSelectedDragStatusAndReload:(_Bool)arg1;
- (_Bool)checkIsValidForLongSelected:(id)arg1;
- (void)handleLongGesture:(id)arg1;
- (void)addLongGesture;
- (void)mmMusicNoDotSelectItemView:(id)arg1 onDeleteBtnClicked:(id)arg2;
- (void)changeBgViewWithAnimation:(double)arg1 delay:(double)arg2;
- (id)selectedItemViewModels;
- (double)getBgViewLeftWithItemCount:(unsigned long long)arg1 itemSize:(struct CGSize)arg2 itemMargin:(double)arg3 itemInsets:(struct UIEdgeInsets)arg4;
- (double)getDisplayItemLen;
- (double)getContentRightOffset;
- (double)getContentBottomOffset;
- (double)getContentTopOffset;
- (double)getContentLineSpacing;
- (double)getContentInterSpacing;
- (void)reload:(_Bool)arg1;
- (void)layoutSubviews;
- (void)handleRemoveSelectedItemWithIndex:(unsigned long long)arg1;
- (void)handleAddSelectedItem:(id)arg1;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)cellCount;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
