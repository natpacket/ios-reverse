//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSMutableArray;

@protocol MMFinderLiveGoodsManagerViewControllerDelegate <NSObject>
- (void)clearManagerVC;
- (void)onUpdate;
- (void)onAddFromStore;
- (void)onManagerGoodsFromVC:(MMUIViewController *)arg1 reorder:(_Bool)arg2 displayViewModelItems:(NSMutableArray *)arg3 needToast:(_Bool)arg4;
@end

