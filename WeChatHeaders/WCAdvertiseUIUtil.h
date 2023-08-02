//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCAdvertiseUIUtil : NSObject
{
}

+ (_Bool)canShowBreakFrameTagView:(id)arg1;
+ (_Bool)canShowWeAppRelievedBuyIcon:(id)arg1;
+ (_Bool)needToShowPromotion:(id)arg1;
+ (void)addShadowToView:(id)arg1 color:(id)arg2 opacity:(float)arg3 offset:(struct CGSize)arg4 radius:(double)arg5;
+ (id)fetchHeadViewForTableFromView:(id)arg1;
+ (id)fetchCellViewForView:(id)arg1;
+ (id)fetchFeedOutFrameContainerForView:(id)arg1 isDetail:(_Bool)arg2;
+ (void)adjustAdChainLabel:(id)arg1 maxWidth:(double)arg2;
+ (double)getFullCardMaxFontScale;
+ (long long)fetchActionLinkIconType:(id)arg1;
+ (long long)fetchNormalAdLogo:(id)arg1 resIndex:(long long)arg2;
+ (void)setCornerRadius:(double)arg1 toView:(id)arg2;
+ (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
+ (_Bool)isInNormalFontLevel;
+ (_Bool)shouldShowMultiProductsWithItem:(id)arg1;
+ (_Bool)canShowAtFriendIcon:(id)arg1;
+ (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
+ (id)genRichLabelWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4 lineSpacing:(double)arg5 numberOfLines:(long long)arg6 shadow:(_Bool)arg7;
+ (id)genRichLabelWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4 lineSpacing:(double)arg5 isSingleLine:(_Bool)arg6 shadow:(_Bool)arg7;
+ (id)genRichLabelWithContent:(id)arg1 textColor:(id)arg2 fontSize:(double)arg3 bold:(_Bool)arg4 maxWidth:(double)arg5 lineSpacing:(double)arg6 isSingleLine:(_Bool)arg7 shadow:(_Bool)arg8;
+ (id)createFullCardContentConainerView:(id)arg1 withWidth:(double)arg2 height:(double)arg3;
+ (void)tryToLoadAdPreferAvatarOnHeadImage:(id)arg1 andObserver:(id)arg2 andAdData:(id)arg3;
+ (unsigned long long)fetchMonitoringTypeWithTid:(id)arg1 cardView:(id)arg2 requestType:(long long)arg3;
+ (void)requestMonitoringTypeForTid:(id)arg1 cardView:(id)arg2 requestType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)findTableViewForSubView:(id)arg1;
+ (id)fetchValidTableViewForSubView:(id)arg1;

@end
