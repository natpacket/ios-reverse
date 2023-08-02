//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMCameraEffectPanelViewModelDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CAGradientLayer, MMCameraEffectPanelViewModel, NSString, UICollectionView, UIView;
@protocol MMCameraTemplatePanelPanelDelegate;

@interface MMCameraTemplatePanel : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, MMCameraEffectPanelViewModelDelegate, UICollectionViewDelegateFlowLayout>
{
    id <MMCameraTemplatePanelPanelDelegate> _delegate;
    unsigned long long _currentSelectedIndex;
    UICollectionView *_collectionView;
    CAGradientLayer *_maskLayer;
    UIView *_maskView;
    MMCameraEffectPanelViewModel *_viewModel;
}

+ (double)viewH;
- (void).cxx_destruct;
@property(retain, nonatomic) MMCameraEffectPanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) __weak id <MMCameraTemplatePanelPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)cameraEffectPanelViewModelGetScene;
- (void)cameraEffectPanelViewModelDidFetchTemplateComplete:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)templateItemAtIndex:(unsigned long long)arg1;
- (id)currentSelectedTemplateItem;
- (double)getCollectInset;
- (void)reloadData;
- (void)setupView;
- (void)fetchDataWithTargetId:(id)arg1;
- (void)setupData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

