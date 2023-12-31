//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMMsgTipsExpandViewDelegate-Protocol.h"
#import "TipsViewDelegate-Protocol.h"

@class MMMsgCommonTipsView, MMMsgContentTipsItem, MMMsgTipsExpandView, MMMsgTipsMixedListExpandView, MMUIButton, MsgNewTipsBarReporter, NSArray, NSMutableArray, NSString, UIButton, UITapGestureRecognizer;
@protocol MMNewMsgContentNavBarDelegate;

@interface MMNewMsgContentNavBar : UIView <TipsViewDelegate, MMMsgTipsExpandViewDelegate>
{
    _Bool _hideBottomLine;
    _Bool _tipsBarVisible;
    _Bool _isShowingExpandView;
    _Bool _isAddingMultipleTipsBar;
    id <MMNewMsgContentNavBarDelegate> _delegate;
    MsgNewTipsBarReporter *_reporter;
    unsigned long long _closeScene;
    double _navigationBarHeight;
    NSMutableArray *_tipsBarInMixedList;
    NSArray *_oldTipsBarInMixedList;
    UIView *_separatorView;
    UIView *_blurBgView;
    UIView *_mixedListContainerView;
    UITapGestureRecognizer *_mixedListTapGesture;
    MMMsgCommonTipsView *_commonTipsView;
    MMMsgContentTipsItem *_currentItem;
    UIView *_mixedListFoldBottomView;
    MMMsgTipsMixedListExpandView *_mixedListExpandView;
    MMMsgTipsExpandView *_currentShowingExpandView;
    UIView *_expandViewContainerView;
    UIView *_expandBottomView;
    MMUIButton *_closeButton;
    UIButton *_bgMaskView;
    NSMutableArray *_exposedTipsItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *exposedTipsItems; // @synthesize exposedTipsItems=_exposedTipsItems;
@property(nonatomic) _Bool isAddingMultipleTipsBar; // @synthesize isAddingMultipleTipsBar=_isAddingMultipleTipsBar;
@property(retain, nonatomic) UIButton *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *expandBottomView; // @synthesize expandBottomView=_expandBottomView;
@property(retain, nonatomic) UIView *expandViewContainerView; // @synthesize expandViewContainerView=_expandViewContainerView;
@property(retain, nonatomic) MMMsgTipsExpandView *currentShowingExpandView; // @synthesize currentShowingExpandView=_currentShowingExpandView;
@property(nonatomic) _Bool isShowingExpandView; // @synthesize isShowingExpandView=_isShowingExpandView;
@property(retain, nonatomic) MMMsgTipsMixedListExpandView *mixedListExpandView; // @synthesize mixedListExpandView=_mixedListExpandView;
@property(retain, nonatomic) UIView *mixedListFoldBottomView; // @synthesize mixedListFoldBottomView=_mixedListFoldBottomView;
@property(retain, nonatomic) MMMsgContentTipsItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) MMMsgCommonTipsView *commonTipsView; // @synthesize commonTipsView=_commonTipsView;
@property(retain, nonatomic) UITapGestureRecognizer *mixedListTapGesture; // @synthesize mixedListTapGesture=_mixedListTapGesture;
@property(retain, nonatomic) UIView *mixedListContainerView; // @synthesize mixedListContainerView=_mixedListContainerView;
@property(retain, nonatomic) UIView *blurBgView; // @synthesize blurBgView=_blurBgView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSArray *oldTipsBarInMixedList; // @synthesize oldTipsBarInMixedList=_oldTipsBarInMixedList;
@property(retain, nonatomic) NSMutableArray *tipsBarInMixedList; // @synthesize tipsBarInMixedList=_tipsBarInMixedList;
@property(nonatomic) _Bool tipsBarVisible; // @synthesize tipsBarVisible=_tipsBarVisible;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) unsigned long long closeScene; // @synthesize closeScene=_closeScene;
@property(retain, nonatomic) MsgNewTipsBarReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <MMNewMsgContentNavBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)expandNavBarHeight:(double)arg1 animated:(_Bool)arg2 showExpandView:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)expandNavBarHeight:(double)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (unsigned long long)reportIndexOfTipsItem:(id)arg1;
- (void)onMenuControllerVisible:(id)arg1;
- (void)onRightButtonWaitingForConfirm:(id)arg1;
- (void)onTipsViewHeightChanged:(id)arg1;
- (id)tipsItemForTipsView:(id)arg1;
- (void)onTipsViewHideAtTimeout:(id)arg1;
- (void)onTipsViewDidShow:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)onMaskBgClick;
- (void)onCloseExpandButtonClick;
- (void)onHideExpandView:(_Bool)arg1;
- (void)onExpandViewSizeChange:(struct CGSize)arg1 animateAction:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)hideExpandViewWithAnimated:(_Bool)arg1;
- (void)showExpandView:(id)arg1 animated:(_Bool)arg2;
- (void)hideExpandViewOfFirstTipsViewAnimated:(_Bool)arg1;
- (void)hideExpandViewInMixedListAnimated:(_Bool)arg1;
- (void)showExpandViewInMixedListAnimated:(_Bool)arg1;
- (double)mixedListTop;
- (void)onTapMixedList;
- (void)reportTipsBarAddedOrRemoved;
- (void)sortTipsBarInMixedList;
- (void)updateMixedListTopTipsBar;
- (void)addMultipleTipsBarInMixedListWithItem:(id)arg1;
- (void)removeAllTipsBarInMixedList;
- (void)removeTipsBarDataInMixedListWithType:(long long)arg1;
- (void)removeTipsBarInMixedListWithType:(long long)arg1;
- (void)addTipsBarInMixedListWithItem:(id)arg1;
- (struct CGRect)getRectInWindowWithTipsItem:(id)arg1;
- (id)currentItemInMixedList;
- (id)currentItemInMixedListForType:(long long)arg1;
- (double)currentExpandNavBarHeight;
- (double)currentTipsBarHeight;
- (_Bool)isShowingTipsBar;
- (void)setNavBarHeight:(double)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 navigationBarHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

