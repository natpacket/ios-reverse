//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveStickerEditingViewController, MMFinderLiveStickerItemBase;

@protocol MMFinderLiveStickerEditingViewControllerDelegate <NSObject>

@optional
- (void)onLiveStickerEditingViewController:(MMFinderLiveStickerEditingViewController *)arg1 cancelingWithOriginalSticker:(MMFinderLiveStickerItemBase *)arg2;
- (void)onLiveStickerEditingViewController:(MMFinderLiveStickerEditingViewController *)arg1 removingSticker:(MMFinderLiveStickerItemBase *)arg2;
- (void)onLiveStickerEditingViewController:(MMFinderLiveStickerEditingViewController *)arg1 addingOrChangingSticker:(MMFinderLiveStickerItemBase *)arg2;
@end
