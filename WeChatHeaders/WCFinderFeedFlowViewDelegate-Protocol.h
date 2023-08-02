//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class MMUIViewController, NSIndexPath, NSString, UICollectionReusableView, UICollectionViewCell, WCFinderFeedContentVM, WCFinderFeedFlowView, WCFinderFeedFlowViewReportParams, WCFinderFeedFlowViewTipsConfig, WCFinderFlowViewAutoPlayParams, WCFinderStreamLayout;
@protocol WCFinderFeedBaseViewControllerProtocol;

@protocol WCFinderFeedFlowViewDelegate <UIScrollViewDelegate>
- (unsigned long long)finderFeedFlowViewState:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(WCFinderFeedFlowView *)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(WCFinderFeedFlowView *)arg1;
- (MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *)finderFeedFlowViewCurrentViewController:(WCFinderFeedFlowView *)arg1;

@optional
- (void)onFinderFeedFlowViewAnchor:(WCFinderFeedContentVM *)arg1;
- (void)onFinderFeedFlowViewDelete:(WCFinderFeedContentVM *)arg1;
- (void)onFinderFeedFlowViewEditTag:(WCFinderFeedContentVM *)arg1;
- (void)onFinderFeedFlowViewForward:(WCFinderFeedContentVM *)arg1;
- (void)onFinderFeedFlowViewMultiSelect;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didClickFollowTagLabel:(WCFinderFeedContentVM *)arg2;
- (void)finderFeedFlowViewStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 layout:(WCFinderStreamLayout *)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (void)finderFeedFlowViewDidScrollToTop:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didEndDisplayingSupplementaryView:(UICollectionReusableView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 willDisplaySupplementaryView:(UICollectionReusableView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)finderFeedFlowViewReloadData:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowViewDidFooterViewStateChange:(WCFinderFeedFlowView *)arg1 state:(unsigned long long)arg2;
- (WCFinderFlowViewAutoPlayParams *)finderFeedFlowViewAutoPlayParams:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowViewDidEndDragging:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(WCFinderFeedFlowView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedFlowViewDidEndScrolling:(WCFinderFeedFlowView *)arg1;
- (WCFinderFeedFlowViewReportParams *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 reportParametersAtIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didClickLinkWithUrl:(NSString *)arg2;
- (WCFinderFeedFlowViewTipsConfig *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedFlowViewDidScroll:(WCFinderFeedFlowView *)arg1;
@end

