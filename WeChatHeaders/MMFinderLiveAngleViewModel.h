//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MMFinderLiveMultiAngleView, MMFinderLiveTaskId, NSMutableArray, NSString, UICollectionView;

@interface MMFinderLiveAngleViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _enableRotate;
    UICollectionView *_mainCollectionView;
    unsigned long long _seq;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderLiveMultiAngleView *_angleView;
    NSMutableArray *_dataArray;
    long long _selectRow;
    NSString *_coverUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) long long selectRow; // @synthesize selectRow=_selectRow;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) MMFinderLiveMultiAngleView *angleView; // @synthesize angleView=_angleView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) _Bool enableRotate; // @synthesize enableRotate=_enableRotate;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)handleVisibleCell:(id)arg1;
- (void)endScrolling:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)getAngleViewCollectionViewHeight;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)getAspectRatio;
- (double)getItemHeight;
- (double)getItemWidth;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)liveTask;
- (void)dismissWithAnimated;
- (void)showWithAnimated;
- (void)updateData:(id)arg1;
- (id)audioModeCoverImageUrlString:(id)arg1;
- (void)updateLiveTaskId:(id)arg1 angleView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

