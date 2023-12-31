//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, NSString, UICollectionView, WCVideoProducerDataSource;
@protocol WCMomentsCompositorTemplateTableDelegate;

@interface WCMomentsCompositorTemplateTableViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    struct CGSize _size;
    NSIndexPath *_focusedIndex;
    long long _originSection;
    id <WCMomentsCompositorTemplateTableDelegate> _delegate;
    WCVideoProducerDataSource *_cellVMData;
    UICollectionView *_templateCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *templateCollectionView; // @synthesize templateCollectionView=_templateCollectionView;
@property(retain, nonatomic) WCVideoProducerDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(nonatomic) __weak id <WCMomentsCompositorTemplateTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initView;
- (void)onTemplateAtIndex:(id)arg1 changedFocusTo:(_Bool)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (void)showWithTemplateData:(id)arg1 fromSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

