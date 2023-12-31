//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class EmoticonBoardCrossSectionInfo, MMLoadMoreCollectionView, NSString, UICollectionViewFlowLayout, UIView;
@protocol EmoticonBoardCrossCollectionBasePageDelegate;

@interface EmoticonBoardCrossCollectionBasePageCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout>
{
    _Bool _darkMode;
    id <EmoticonBoardCrossCollectionBasePageDelegate> _delegate;
    EmoticonBoardCrossSectionInfo *_sectionInfo;
    MMLoadMoreCollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    UIView *_topMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) MMLoadMoreCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) EmoticonBoardCrossSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionBasePageDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionViewLayout;
- (unsigned long long)maximumNumberOfItemsInRow;
- (void)layoutSubviews;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;
- (void)setPageOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

