//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout, UILongPressGestureRecognizer, UIView;

@protocol WAStarCollectinViewViewLayoutDelegate <UICollectionViewDelegateFlowLayout>

@optional
- (void)collectionView:(UICollectionView *)arg1 dragingView:(UIView *)arg2 didDragToPosition:(struct CGPoint)arg3;
- (void)collectionView:(UICollectionView *)arg1 itemDidDeleteSuccessAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 itemDidMoveOutDeleteAreaAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(UICollectionView *)arg1 itemDidMoveInDeleteAreaAtIndexPath:(NSIndexPath *)arg2 viewCenter:(struct CGPoint)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 onLongPress:(UILongPressGestureRecognizer *)arg3 indexPath:(NSIndexPath *)arg4;
- (void)collectionViewDidTapBackgroundView:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didEndAnimateToPos:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didEndDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 willEndDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 didBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 willBeginDraggingItemAtIndexPath:(NSIndexPath *)arg3;
@end

