//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "WCFinderFeedListTransitionInnserScrollViewProvider-Protocol.h"

@class NSString, WARefreshFooter, WCShareCardListRefreshHeader, ZZScrollViewChainModel;

@interface UIScrollView (Rect) <WCFinderFeedListTransitionInnserScrollViewProvider>
+ (void)doSwizzle:(Class)arg1;
+ (_Bool)isWKChildScrollViewHooked:(id)arg1;
+ (void)hookWKChildScrollView;
+ (Class)wkChildScrollViewClass;
+ (void)doSwizzlePullRefresh:(Class)arg1;
+ (void)hookPullRefreshWKScrollView:(id)arg1;
+ (CDUnknownBlockType)zz_create;
- (struct CGRect)visibleRect;
@property(retain, nonatomic) WARefreshFooter *wa_footer;
@property(retain, nonatomic) WCShareCardListRefreshHeader *wc_header;
@property(nonatomic) double offsetY;
@property(nonatomic) double offsetX;
@property(nonatomic) double insetRight;
@property(nonatomic) double insetLeft;
@property(nonatomic) double insetBottom;
@property(nonatomic) double insetTop;
- (id)finderFetchTransitionInnerScrollView;
- (void)sendTongCengChangedWKScrollView;
- (void)container_didMoveToSuperview;
- (void)container_didMoveToWindow;
- (void)container_setScrollEnabled:(_Bool)arg1;
- (void)container_setDelegate:(id)arg1;
- (void)container_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)containerScrollViewLogic;
- (void)setContainerScrollViewLogic:(id)arg1;
- (id)bindContainerScrollViewLogic;
@property(nonatomic) _Bool lockScrollEnable;
@property(nonatomic) _Bool isForbidScrollViewScrollEnable;
@property(nonatomic) _Bool isForbidScrollViewBackgroundColor;
- (_Bool)isPullRefreshScrollView;
@property(nonatomic) _Bool isForbidScrollViewYZero;
- (void)pullRefresh_setBackgroundColor:(id)arg1;
- (void)pullRefresh_setScrollEnabled:(_Bool)arg1;
- (void)pullRefresh_setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)pullRefresh_setContentOffset:(struct CGPoint)arg1;
@property(readonly, copy, nonatomic) ZZScrollViewChainModel *zz_setup;
- (void)alwaysShowVerticalIndicator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

