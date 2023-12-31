//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "EmoticonGridViewDelegate-Protocol.h"

@class EmoticonBoardCrossCollectionStoreGridCellModel, EmoticonGridView, NSString;
@protocol EmoticonBoardCrossCollectionStoreGridCellDelegate;

@interface EmoticonBoardCrossCollectionStoreGridCell : UICollectionViewCell <EmoticonGridViewDelegate>
{
    id <EmoticonBoardCrossCollectionStoreGridCellDelegate> _delegsate;
    EmoticonBoardCrossCollectionStoreGridCellModel *_model;
    EmoticonGridView *_gridView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) EmoticonBoardCrossCollectionStoreGridCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionStoreGridCellDelegate> delegsate; // @synthesize delegsate=_delegsate;
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 atIndex:(long long)arg2 withGridOffset:(struct CGPoint)arg3 description:(id)arg4;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 gridView:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;
- (void)hideAllFocus;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

