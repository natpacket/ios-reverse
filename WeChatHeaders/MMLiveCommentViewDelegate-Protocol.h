//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveCommentView, NSArray, WCLiveBottomTextButton;

@protocol MMLiveCommentViewDelegate <NSObject>

@optional
- (double)getTopCommentOriginYForCommentView:(MMLiveCommentView *)arg1;
- (void)onEnablePrivateCommentChanged:(_Bool)arg1;
- (_Bool)isDisplayOperationWidgetsForAudience;
- (void)onVerifyRealNameForComment;
- (NSArray *)getLiveCommentViewCustomHitViews;
- (_Bool)getIsShoppingAvailable;
- (double)getCommentButtonLeft;
- (double)getCommentTableTop;
- (double)getCommentTableLandscapeBottom;
- (double)getCommentTableBottom;
- (double)getBottomWidgetsBottom;
- (void)layoutCommentButtonInOperationView:(WCLiveBottomTextButton *)arg1 commentButtonMaxWidth:(double)arg2 commentButtonLeft:(double)arg3 realCanShowTalkButton:(_Bool)arg4;
- (void)updateCommentButtonTopPosition:(WCLiveBottomTextButton *)arg1;
- (double)getRightWidgetsLeft;
- (double)getTopWidgetsBottom;
- (double)getStaticTopWidgetsBottom;
- (void)onCommentViewDidTaped:(struct CGPoint)arg1;
- (void)updateButtonHiddenForInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
@end

