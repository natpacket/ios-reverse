//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveSpringLotteryDetailSubView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UILabel, UIScrollView, UIView;

@interface MMFinderLiveSpringLotteryDetailMenuView : MMFinderLiveSpringLotteryDetailSubView <UIScrollViewDelegate>
{
    _Bool _isFirstLayout;
    double _initScrollOffset;
    NSArray *_items;
    UIView *_itemContainerView;
    UIScrollView *_itemScrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIColor *_textBaseColor;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property(retain, nonatomic) UIColor *textBaseColor; // @synthesize textBaseColor=_textBaseColor;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *itemScrollView; // @synthesize itemScrollView=_itemScrollView;
@property(retain, nonatomic) UIView *itemContainerView; // @synthesize itemContainerView=_itemContainerView;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double initScrollOffset; // @synthesize initScrollOffset=_initScrollOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onItemButtonClicked:(id)arg1;
- (id)buildViewWithItem:(id)arg1 index:(unsigned long long)arg2;
- (void)rebuildItemViews;
- (void)reloadGradientLayerIfNeeded;
- (void)autoScrollToLatestLottery;
- (void)layoutSubviews;
@property(readonly, nonatomic) double currentScrollOffset;
- (void)commonInitWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)getMenuItems;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 items:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
