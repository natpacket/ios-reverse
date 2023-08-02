//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZFLEXAngel.h"

#import "UICollectionViewDelegate-Protocol.h"

@class MMFinderLiveBannerCellViewModel, NSArray, NSString;
@protocol MMFinderLiveBannerAngelDelegate;

@interface MMFinderLiveBannerAngel : ZZFLEXAngel <UICollectionViewDelegate>
{
    _Bool _isAnimation;
    _Bool _disablePagAnimation;
    _Bool _isInScrollAnimated;
    CDUnknownBlockType _viewEventAction;
    id <MMFinderLiveBannerAngelDelegate> _delegate;
    CDUnknownBlockType _scrollAnimationCompleteAction;
    MMFinderLiveBannerCellViewModel *_scrollingVM;
}

+ (Class)cellClassWithBannerInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveBannerCellViewModel *scrollingVM; // @synthesize scrollingVM=_scrollingVM;
@property(copy, nonatomic) CDUnknownBlockType scrollAnimationCompleteAction; // @synthesize scrollAnimationCompleteAction=_scrollAnimationCompleteAction;
@property(nonatomic) _Bool isInScrollAnimated; // @synthesize isInScrollAnimated=_isInScrollAnimated;
@property(nonatomic) __weak id <MMFinderLiveBannerAngelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disablePagAnimation; // @synthesize disablePagAnimation=_disablePagAnimation;
@property(copy, nonatomic) CDUnknownBlockType viewEventAction; // @synthesize viewEventAction=_viewEventAction;
@property(readonly, nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
- (void)updateDisablePagAnimationSwitch:(_Bool)arg1;
- (void)onScrollComplete;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollToPageIndex:(long long)arg1 animated:(_Bool)arg2 completeAction:(CDUnknownBlockType)arg3;
- (id)currentDisplayCell;
- (void)checkDeleteSameBanner;
- (void)deleteNotifyBanner:(id)arg1;
- (void)addNotifyBanner:(id)arg1 index:(long long)arg2;
- (void)setIsAnimation:(_Bool)arg1;
- (void)deleteBannerItem:(id)arg1 completeAction:(CDUnknownBlockType)arg2;
- (id)cellWithIndexPath:(id)arg1;
- (_Bool)showBannerInnerAnimationIfNeed:(id)arg1;
- (void)replaceAnimatedBanner:(id)arg1 lastBannerInfo:(id)arg2;
- (void)deleteAnimatedBanenr:(_Bool)arg1;
- (void)deleteAnimatedLastBanenr;
- (void)deleteAnimatedFirstBanenr;
- (void)fixBannerPositionIfNeed:(id)arg1;
@property(readonly, nonatomic) long long lastBannerUIIndex;
@property(readonly, nonatomic) long long firstBannerUIIndex;
@property(readonly, nonatomic) long long bannerCount;
@property(readonly, nonatomic) NSArray *bannerVMList;
@property(readonly, nonatomic) NSArray *bannerList;
@property(readonly, nonatomic) _Bool isInManualScroll;
- (void)reloadOnScrollFinish;
- (void)reloadData;
- (void)setBannerList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

