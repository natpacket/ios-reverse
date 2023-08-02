//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveGestureLogicExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class MMFinderLiveTaskId, NSArray, NSString, UICollectionView, UIImageView, UILabel, UISwitch, UIView;
@protocol MMFinderLiveGesturePageSheetDelegate;

@interface MMFinderLiveGesturePageSheet : MMPageSheetBaseView <UICollectionViewDataSource, MMFinderLiveGestureLogicExt>
{
    _Bool _showHint;
    id <MMFinderLiveGesturePageSheetDelegate> _delegate;
    UIView *_switchSectionView;
    UILabel *_switchTitleLabel;
    UILabel *_switchSubtitleLabel;
    UIView *_switchContainerView;
    UISwitch *_switchView;
    UICollectionView *_collectionView;
    UIView *_parentView;
    UIView *_hintContainerView;
    UIImageView *_hintIconView;
    UILabel *_hintLabel;
    unsigned long long _currentHintIndex;
    MMFinderLiveTaskId *_taskId;
    NSArray *_gestureItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gestureItems; // @synthesize gestureItems=_gestureItems;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long currentHintIndex; // @synthesize currentHintIndex=_currentHintIndex;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIImageView *hintIconView; // @synthesize hintIconView=_hintIconView;
@property(retain, nonatomic) UIView *hintContainerView; // @synthesize hintContainerView=_hintContainerView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool showHint; // @synthesize showHint=_showHint;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UIView *switchContainerView; // @synthesize switchContainerView=_switchContainerView;
@property(retain, nonatomic) UILabel *switchSubtitleLabel; // @synthesize switchSubtitleLabel=_switchSubtitleLabel;
@property(retain, nonatomic) UILabel *switchTitleLabel; // @synthesize switchTitleLabel=_switchTitleLabel;
@property(retain, nonatomic) UIView *switchSectionView; // @synthesize switchSectionView=_switchSectionView;
@property(nonatomic) __weak id <MMFinderLiveGesturePageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidateHint;
- (void)hideHint;
- (void)showNextHint;
- (id)liveTask;
- (void)setupPageSheetConfig;
- (void)onGestureAnimationInvokedForGestureId:(id)arg1 taskId:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onSwitchToggled;
- (void)layoutSubviews;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidAppear;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
