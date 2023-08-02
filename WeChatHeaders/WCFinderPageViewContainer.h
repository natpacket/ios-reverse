//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollView.h"

#import "WCFinderFeedFlowViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WCFinderPageViewContainerDelegate;

@interface WCFinderPageViewContainer : MMScrollView <WCFinderFeedFlowViewDelegate>
{
    _Bool _delayPageViewCreateTime;
    _Bool _lazyLoadingDisabled;
    id <WCFinderPageViewContainerDelegate> _containerDelegate;
    double _contentTopInset;
    double _linkedContentOffsetY;
    double _topOffsetWhenHover;
    unsigned long long _selectedIndex;
    unsigned long long _pageViewCount;
    NSMutableDictionary *_index2ViewDict;
    unsigned long long _dragCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long dragCount; // @synthesize dragCount=_dragCount;
@property(retain, nonatomic) NSMutableDictionary *index2ViewDict; // @synthesize index2ViewDict=_index2ViewDict;
@property(nonatomic) _Bool lazyLoadingDisabled; // @synthesize lazyLoadingDisabled=_lazyLoadingDisabled;
@property(nonatomic) _Bool delayPageViewCreateTime; // @synthesize delayPageViewCreateTime=_delayPageViewCreateTime;
@property(nonatomic) unsigned long long pageViewCount; // @synthesize pageViewCount=_pageViewCount;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) double topOffsetWhenHover; // @synthesize topOffsetWhenHover=_topOffsetWhenHover;
@property(nonatomic) double linkedContentOffsetY; // @synthesize linkedContentOffsetY=_linkedContentOffsetY;
@property(nonatomic) double contentTopInset; // @synthesize contentTopInset=_contentTopInset;
@property(nonatomic) __weak id <WCFinderPageViewContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)checkDidSwitchToTargetIndex;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupPageViewAtIndex:(unsigned long long)arg1;
- (void)loadAllPageView;
- (void)callDelegateIfNeedForPageViewSwithToIndex:(unsigned long long)arg1;
- (void)displayPageViewAtIndex:(unsigned long long)arg1;
- (void)adjustPageViewContentOffset:(id)arg1;
- (void)removePageViewAtIndex:(unsigned long long)arg1;
- (void)addPageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)initContainer;
- (id)pageViewAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)addObserverForFlowView:(id)arg1;
- (void)removeObserverForFlowView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

