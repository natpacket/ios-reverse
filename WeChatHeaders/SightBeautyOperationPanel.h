//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, MMLiveBeautyStyleSlider, MMUIButton, NSMutableArray, NSString, UICollectionView, UITapGestureRecognizer;
@protocol SightBeautyOperationPanelDelegate;

@interface SightBeautyOperationPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    id <SightBeautyOperationPanelDelegate> _actionDelegate;
    UIView *_panelView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMUIButton *_arrowButton;
    UICollectionView *_beautyItemsCollectionView;
    MMLiveBeautyStyleSlider *_beautyStyleSlider;
    NSMutableArray *_beautyDataItemsList;
    unsigned long long _currentBeautyItemIndex;
    MMUIButton *_checkButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(nonatomic) unsigned long long currentBeautyItemIndex; // @synthesize currentBeautyItemIndex=_currentBeautyItemIndex;
@property(retain, nonatomic) NSMutableArray *beautyDataItemsList; // @synthesize beautyDataItemsList=_beautyDataItemsList;
@property(retain, nonatomic) MMLiveBeautyStyleSlider *beautyStyleSlider; // @synthesize beautyStyleSlider=_beautyStyleSlider;
@property(retain, nonatomic) UICollectionView *beautyItemsCollectionView; // @synthesize beautyItemsCollectionView=_beautyItemsCollectionView;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak id <SightBeautyOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onBeautyStyleSliderValueChanged:(id)arg1;
- (id)sightBeautyEffectInfo;
- (void)closePanelDirectly;
- (void)saveAllEffectBeautyValues;
- (void)close:(_Bool)arg1;
- (void)closeAction;
- (void)switchBeautyEffect:(id)arg1;
- (void)showPanelWithCompletion:(CDUnknownBlockType)arg1;
- (void)showPanel;
- (void)updateBeautyStyleSliderValue;
- (void)initBeautyDataItemsList;
- (void)updatePanelViews;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

