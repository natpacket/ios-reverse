//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IFavoritesExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"

@class NSString;

@interface FavAddItemHelper : MMObject <IFavoritesExt, MMTipsViewControllerDelegate>
{
}

+ (void)freeFavAddHelper;
+ (id)getFavAddHelper;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)checkShowFavIntro:(id)arg1 customTips:(id)arg2;
- (void)webReport:(id)arg1;
- (void)realAddFavItem:(id)arg1 successTips:(id)arg2;
- (void)realAddFavItem:(id)arg1;
- (_Bool)addFavItemButShowWarningTip:(id)arg1 withTip:(id)arg2;
- (_Bool)addFavItemButShowExpireOrBigFileTip:(id)arg1;
- (_Bool)addFavItemButShowCapacityTip:(id)arg1;
- (void)addFavItem:(id)arg1 withTipWording:(id)arg2;
- (void)addFavItem:(id)arg1 withSuccessTips:(id)arg2;
- (void)addFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

