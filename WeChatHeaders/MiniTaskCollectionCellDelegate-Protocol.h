//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MiniTaskCollectionBaseCell;

@protocol MiniTaskCollectionCellDelegate <NSObject>
- (double)collectionViewOffsetY;
- (unsigned long long)currentCellCount;
- (void)onMiniTaskCollectionCellRemoveRemind:(MiniTaskCollectionBaseCell *)arg1;
- (void)onMiniTaskCollectionCellAddRemind:(MiniTaskCollectionBaseCell *)arg1;
- (void)onMiniTaskCollectionCellFavorite:(MiniTaskCollectionBaseCell *)arg1 isFromMenu:(_Bool)arg2;
- (void)onMiniTaskCollectionCellDelete:(MiniTaskCollectionBaseCell *)arg1 isFromMenu:(_Bool)arg2;
@end
