//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TingPlayerCoverCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TingPlayerCoverCell, UICollectionView;

@interface TingPlayerCoverView : UIView <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, TingPlayerCoverCellDelegate>
{
    _Bool _isAnimating;
    _Bool _isPlaying;
    _Bool _shouldReloadOnAnimationEnd;
    _Bool _shouldReloadItemsOnAnimationEnd;
    _Bool _isGestureAnimating;
    _Bool _shouldKeepGestureAnimatingIndex;
    _Bool _isDragging;
    CDUnknownBlockType _onMVListUpdated;
    CDUnknownBlockType _onMVScrollToIndex;
    CDUnknownBlockType _onMVDidScrollToIndex;
    CDUnknownBlockType _onMVDidScroll;
    CDUnknownBlockType _onMVClicked;
    CDUnknownBlockType _onCustomDisplayingViewClicked;
    CDUnknownBlockType _onImageCoverClicked;
    CDUnknownBlockType _onMVDidEndDisplaying;
    CDUnknownBlockType _onMVWillDisplay;
    unsigned long long _mode;
    UICollectionView *_collectionView;
    NSMutableArray *_dataItems;
    double _currentTime;
    double _duration;
    long long _animatingIndex;
    TingPlayerCoverCell *_animatingCell;
    UIView *_animatingParentView;
    long long _curIndex;
    struct CGRect _curRect;
}

- (void).cxx_destruct;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) _Bool shouldKeepGestureAnimatingIndex; // @synthesize shouldKeepGestureAnimatingIndex=_shouldKeepGestureAnimatingIndex;
@property(nonatomic) struct CGRect curRect; // @synthesize curRect=_curRect;
@property(nonatomic) _Bool isGestureAnimating; // @synthesize isGestureAnimating=_isGestureAnimating;
@property(nonatomic) _Bool shouldReloadItemsOnAnimationEnd; // @synthesize shouldReloadItemsOnAnimationEnd=_shouldReloadItemsOnAnimationEnd;
@property(nonatomic) _Bool shouldReloadOnAnimationEnd; // @synthesize shouldReloadOnAnimationEnd=_shouldReloadOnAnimationEnd;
@property(retain, nonatomic) UIView *animatingParentView; // @synthesize animatingParentView=_animatingParentView;
@property(retain, nonatomic) TingPlayerCoverCell *animatingCell; // @synthesize animatingCell=_animatingCell;
@property(nonatomic) long long animatingIndex; // @synthesize animatingIndex=_animatingIndex;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) CDUnknownBlockType onMVWillDisplay; // @synthesize onMVWillDisplay=_onMVWillDisplay;
@property(copy, nonatomic) CDUnknownBlockType onMVDidEndDisplaying; // @synthesize onMVDidEndDisplaying=_onMVDidEndDisplaying;
@property(copy, nonatomic) CDUnknownBlockType onImageCoverClicked; // @synthesize onImageCoverClicked=_onImageCoverClicked;
@property(copy, nonatomic) CDUnknownBlockType onCustomDisplayingViewClicked; // @synthesize onCustomDisplayingViewClicked=_onCustomDisplayingViewClicked;
@property(copy, nonatomic) CDUnknownBlockType onMVClicked; // @synthesize onMVClicked=_onMVClicked;
@property(copy, nonatomic) CDUnknownBlockType onMVDidScroll; // @synthesize onMVDidScroll=_onMVDidScroll;
@property(copy, nonatomic) CDUnknownBlockType onMVDidScrollToIndex; // @synthesize onMVDidScrollToIndex=_onMVDidScrollToIndex;
@property(copy, nonatomic) CDUnknownBlockType onMVScrollToIndex; // @synthesize onMVScrollToIndex=_onMVScrollToIndex;
@property(copy, nonatomic) CDUnknownBlockType onMVListUpdated; // @synthesize onMVListUpdated=_onMVListUpdated;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (void)updateMusicCurrentTime:(double)arg1 duration:(double)arg2;
- (void)updateIsPlaying:(_Bool)arg1;
- (id)videoView;
- (id)currentCustomCell;
- (id)currentMVCell;
- (_Bool)tingCoverCell_isAnimating;
- (unsigned long long)tingCoverCell_coverMode;
- (double)tingCoverCell_musicDuration;
- (double)tingCoverCell_musicCurrentTime;
- (_Bool)tingCoverCell_isMusicPlaying;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)currentCell;
- (void)callMVDidScrollToIndexBlock;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (long long)count;
- (id)coverItemArr;
- (_Bool)currentCellIsMV;
- (_Bool)isScrolling;
- (void)endAnimationWithProgress:(_Bool)arg1;
- (void)animateWithDisplayViewSize:(struct CGSize)arg1;
- (void)endAnimation;
- (void)animateToMode:(unsigned long long)arg1;
- (void)beginAnimation;
- (_Bool)isCollectionViewScrollEnabled;
- (_Bool)hasMV;
- (void)reloadDataIfNeedWhenAnimationEnd;
- (void)reloadItemsAtRow:(long long)arg1;
- (void)reloadDataAndRefreshCollectionView;
- (id)restoreDataWithType:(unsigned long long)arg1;
- (void)reloadWithItemDisplayElement:(id)arg1 tingItem:(id)arg2 coverUrl:(id)arg3 onlyRefreshCell:(_Bool)arg4;
- (void)updateWhenDisplayViewMTKViewCreated;
- (void)reloadCustomDisplay:(id)arg1 tingItem:(id)arg2;
- (void)reloadMVList:(id)arg1;
- (id)getRestoreCoverItemWithTingItem:(id)arg1;
- (void)reloadWithTingItem:(id)arg1;
- (void)reloadCoverWithTingItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)reset;
- (void)_reset;
- (_Bool)shouldDisableUpdateFrameWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)clearSubview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
