//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TingRelatedPageLineCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString;

@interface TingRelatedTypicalAbumsLineCell : TingRelatedPageLineCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
}

+ (double)cellHeight;
+ (unsigned long long)itemNumPerPage;
+ (double)cellWidth;
+ (double)cellSpacing;
+ (double)autosizingLineHeight;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setupCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

