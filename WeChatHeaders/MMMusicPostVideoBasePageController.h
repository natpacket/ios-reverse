//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCFinderNeayByStreamLayoutDelegate-Protocol.h"

@class MMUIActivityIndicatorView, NSString, UICollectionView, UIView, WCFinderContact;
@protocol MMMusicPostVideoBasePageDelegate, MMMusicPostVideoTabFinderBaseControllerDataSource;

@interface MMMusicPostVideoBasePageController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderNeayByStreamLayoutDelegate>
{
    UIView *_contentView;
    MMUIActivityIndicatorView *_loadingView;
    UICollectionView *_listView;
    _Bool _canMultiSelect;
    _Bool _isActive;
    id <MMMusicPostVideoTabFinderBaseControllerDataSource> _dataSource;
    id <MMMusicPostVideoBasePageDelegate> _delegate;
    WCFinderContact *_contact;
    double _minVideoDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(readonly, nonatomic) double minVideoDuration; // @synthesize minVideoDuration=_minVideoDuration;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <MMMusicPostVideoBasePageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicPostVideoTabFinderBaseControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)dataViewModel;
- (double)streamLayout:(id)arg1 heightForItemAtIndex:(id)arg2 itemWidth:(double)arg3;
- (double)streamLayoutHerderTopOffset:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutHeaderHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutFooterHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (_Bool)isNeedSetupDecorationView:(unsigned long long)arg1;
- (_Bool)isNeedSetupFooterView:(unsigned long long)arg1;
- (_Bool)isNeedSetupHeaderView:(unsigned long long)arg1;
- (struct UIEdgeInsets)edgeInsetdInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)rowMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)columnMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)columnCountInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)numberOfStreamLayoutSections;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)isSelectedWithModel:(id)arg1;
- (id)genDefaultFlowLayout;
- (id)cellThumbImage:(id)arg1;
- (struct CGPoint)cellOffsetWithIndexPath:(id)arg1;
- (struct CGRect)cellFrameInVCIndexPath:(id)arg1;
- (id)genDefaultCollectionView;
- (void)updateCanMultiSelect:(_Bool)arg1;
- (_Bool)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateDataSelectedStatus;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)setLoadingVisible:(_Bool)arg1;
- (void)onSwitchToThisPage:(_Bool)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (id)contentView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
