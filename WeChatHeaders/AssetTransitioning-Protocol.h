//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AssetSetView, NSArray;

@protocol AssetTransitioning <NSObject>

@optional
- (void)assetTransitioningHideAnimationEnd:(_Bool)arg1;
- (void)assetTransitioningHideAnimation:(_Bool)arg1;
- (void)assetTransitioningShowAnimationEnd;
- (void)assetTransitioningShowAnimation;
- (id)getAssetTransitionObj;
- (AssetSetView *)getAssetSetView;
- (NSArray *)itemsForAssetTransition:(id)arg1 animationType:(int)arg2;
@end

