//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMUIButton, NSIndexPath, NSString, UICollectionView, UIView, WCVideoProducerDataSource;
@protocol WCVideoProducerMusicBarDelegate;

@interface WCVideoProducerMusicBarViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    struct CGRect _hostVCFrame;
    NSIndexPath *_focusedIndex;
    NSIndexPath *_selectedIndex;
    long long _centerItemRow;
    _Bool _isMusicSearcherEnabled;
    id <WCVideoProducerMusicBarDelegate> _delegate;
    WCVideoProducerDataSource *_cellVMData;
    MMUIButton *_switchBGMButton;
    MMUIButton *_switchOSTButton;
    UIView *_contentContainerView;
    UICollectionView *_selectListCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *selectListCollectionView; // @synthesize selectListCollectionView=_selectListCollectionView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) MMUIButton *switchOSTButton; // @synthesize switchOSTButton=_switchOSTButton;
@property(retain, nonatomic) MMUIButton *switchBGMButton; // @synthesize switchBGMButton=_switchBGMButton;
@property(retain, nonatomic) WCVideoProducerDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(nonatomic) _Bool isMusicSearcherEnabled; // @synthesize isMusicSearcherEnabled=_isMusicSearcherEnabled;
@property(nonatomic) __weak id <WCVideoProducerMusicBarDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_getContentSafeHeight;
- (double)_cellPageWidthAutoFit;
- (double)_cellItemWidthScaled;
- (double)_cellItemWidthAutoFit;
- (double)_cellItemWidth;
- (void)_initBottomBarView;
- (void)_initSelectorView;
- (void)_initSearchBarView;
- (void)_initTopBarView;
- (void)_initContentView;
- (void)_initBackgroundCloseView;
- (void)_initView;
- (void)_relayoutView;
- (id)_centerItemIndexOfScrollView:(id)arg1;
- (void)_onMusicStatusShouldChangeToEnableBGM:(_Bool)arg1 enableOST:(_Bool)arg2;
- (void)_onMusicAtIndex:(id)arg1 changedSelectTo:(_Bool)arg2;
- (void)_onClickOSTSwitch:(id)arg1;
- (void)_onClickBGMSwitch:(id)arg1;
- (void)_onClickDismiss:(id)arg1;
- (void)_onClickSearchMusic:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (void)_updateCellOrder;
- (id)indexPathOfMusicById:(id)arg1;
- (void)selectMusicById:(id)arg1;
- (void)updateMusicStatusWithIsBGMEnabled:(_Bool)arg1 isOSTEnabled:(_Bool)arg2;
- (void)updateMusicDataWithRecommendMusicList:(id)arg1 searchMusicList:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateContainerFrame:(struct CGRect)arg1;
- (id)initInFrame:(struct CGRect)arg1 enableMusicSearching:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

