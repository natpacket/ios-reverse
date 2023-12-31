//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveAchievementsProfileInfoCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MMFinderLiveAchievementsModel, MMFinderLiveTaskId, NSString, UICollectionView, WCFinderContact;
@protocol MMFinderLiveAchievementsPageSheetDelegate;

@interface MMFinderLiveAchievementsPageSheet : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegate, MMFinderLiveAchievementsProfileInfoCellDelegate>
{
    _Bool _followActionOngoing;
    _Bool _heightUpdated;
    id <MMFinderLiveAchievementsPageSheetDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveAchievementsModel *_model;
    WCFinderContact *_contact;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool heightUpdated; // @synthesize heightUpdated=_heightUpdated;
@property(nonatomic) _Bool followActionOngoing; // @synthesize followActionOngoing=_followActionOngoing;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MMFinderLiveAchievementsModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveAchievementsPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (id)liveTask;
- (void)followActionEx;
- (void)showCancelFollowSheetForAnchor;
- (id)layoutSectionForFullSection;
- (id)layoutSectionForCompactSection;
- (id)layoutSectionForProfileSection;
- (void)initializeComponents;
- (void)onFollowButtonTappedInCell:(id)arg1;
- (void)onProfileInfoTappedInCell:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 model:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

