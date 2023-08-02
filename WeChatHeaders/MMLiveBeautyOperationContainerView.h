//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMLiveBeautyOperationPanelDelegate-Protocol.h"
#import "MMLiveBeautyOperationPanelExternalClosing-Protocol.h"
#import "MMLiveBeautySuitCellDelegate-Protocol.h"
#import "MMLiveHalfScreenTitleBarViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, MMLiveTaskId, MMUIButton, MMUILabel, NSArray, NSString, UIButton, UICollectionView, UIImageView, UITapGestureRecognizer;
@protocol MMLiveBeautyLogicProvider, MMLiveBeautyOperationContainerViewDelegate;

@interface MMLiveBeautyOperationContainerView : UIView <MMLiveBeautySuitCellDelegate, MMLiveHalfScreenTitleBarViewDelegate, MMLiveBeautyOperationPanelDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, UICollectionViewDelegate, MMLiveBeautyOperationPanelExternalClosing>
{
    _Bool isOpening;
    _Bool _thumbnailState;
    _Bool _hasChangedDetail;
    _Bool _isCloseDirectly;
    id <MMLiveBeautyOperationContainerViewDelegate> _actionDelegate;
    UIView *_panelView;
    UIView *_suitPanelView;
    MMUIButton *_suitArrowButton;
    MMUILabel *_beautyExtSettingLabel;
    UIImageView *_beautyExtSettingImage;
    CAGradientLayer *_panelBackgroundGradientLayer;
    MMLiveTaskId *_taskId;
    UICollectionView *_suitCollectionView;
    NSArray *_operationPanelList;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) id <MMLiveBeautyLogicProvider> beautyLogicProvider; // @synthesize beautyLogicProvider=_beautyLogicProvider;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *operationPanelList; // @synthesize operationPanelList=_operationPanelList;
@property(retain, nonatomic) UICollectionView *suitCollectionView; // @synthesize suitCollectionView=_suitCollectionView;
@property(nonatomic) _Bool isCloseDirectly; // @synthesize isCloseDirectly=_isCloseDirectly;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer; // @synthesize panelBackgroundGradientLayer=_panelBackgroundGradientLayer;
@property(retain, nonatomic) UIImageView *beautyExtSettingImage; // @synthesize beautyExtSettingImage=_beautyExtSettingImage;
@property(retain, nonatomic) MMUILabel *beautyExtSettingLabel; // @synthesize beautyExtSettingLabel=_beautyExtSettingLabel;
@property(retain, nonatomic) MMUIButton *suitArrowButton; // @synthesize suitArrowButton=_suitArrowButton;
@property(retain, nonatomic) UIView *suitPanelView; // @synthesize suitPanelView=_suitPanelView;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) _Bool hasChangedDetail; // @synthesize hasChangedDetail=_hasChangedDetail;
@property(nonatomic) _Bool thumbnailState; // @synthesize thumbnailState=_thumbnailState;
@property(nonatomic) __weak id <MMLiveBeautyOperationContainerViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening;
- (id)beautyLogic;
- (id)liveTask;
- (_Bool)isInRoom;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)closeContainerView;
- (void)onExitChangeDetailMode;
- (void)onTappedresetDefaultValueButton;
- (void)onSliderValueChange;
- (void)onTappedChangeDetailLabel;
- (void)onTappedSuitChangeButton:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)closePanelDirectly;
- (void)closeDirectly;
- (void)closeAction;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)currentPanel;
- (_Bool)canSwipeWithGesture:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (void)onLeftSwipeGesture:(id)arg1;
- (void)moveToDetailAdjustingState;
- (void)resetViewsStateOnOpen;
- (void)layoutOperationPanels;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 beautyLogic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

