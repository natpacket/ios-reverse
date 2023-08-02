//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveDecorationResExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class CAGradientLayer, MMLiveDecorationDataItem, MMLiveTaskId, MMUIButton, NSArray, NSString, UICollectionView, UITapGestureRecognizer;
@protocol MMLiveBeautyLogicProvider, MMLiveDecorationOperationPanelDelegate;

@interface MMLiveDecorationOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, MMFinderLiveDecorationResExt, WCGeneralMonitorDelegate>
{
    _Bool _isShowing;
    id <MMLiveDecorationOperationPanelDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_arrowButton;
    UICollectionView *_itemsCollectionView;
    NSArray *_dataItemsList;
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider;
    MMLiveDecorationDataItem *_downloadingItemWaitingForApplyEffect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveDecorationDataItem *downloadingItemWaitingForApplyEffect; // @synthesize downloadingItemWaitingForApplyEffect=_downloadingItemWaitingForApplyEffect;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) id <MMLiveBeautyLogicProvider> beautyLogicProvider; // @synthesize beautyLogicProvider=_beautyLogicProvider;
@property(retain, nonatomic) NSArray *dataItemsList; // @synthesize dataItemsList=_dataItemsList;
@property(retain, nonatomic) UICollectionView *itemsCollectionView; // @synthesize itemsCollectionView=_itemsCollectionView;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveDecorationOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onDecorationMaterialResourceDownloadFailed:(id)arg1;
- (void)onDecorationMaterialResourceDownloadFinish:(id)arg1;
- (id)beautyLogic;
- (_Bool)isInRoom;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)closePanelDirectly;
- (void)close:(_Bool)arg1;
- (void)closeAction;
- (void)didDisAppear;
- (void)didAppear;
- (void)showPanel;
- (void)updateDataItemsList;
- (id)getLiveTask;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
