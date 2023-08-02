//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"
#import "WCAdFollowItemViewDelegate-Protocol.h"

@class MMUILabel, NSString, WCAdCombineFollowInfo, WCAdFollowItemView, WCAdURLImageView;
@protocol WCAdHalfScreenCombineFollowViewDelegate;

@interface WCAdHalfScreenCombineFollowView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, WCAdFollowItemViewDelegate>
{
    _Bool _isBrandFollowed;
    _Bool _isFinderFollowed;
    id <WCAdHalfScreenCombineFollowViewDelegate> _delegate;
    WCAdCombineFollowInfo *_combineFollowInfo;
    WCAdURLImageView *_headImageView;
    MMUILabel *_headTitleLabel;
    WCAdFollowItemView *_brandFollowItemView;
    WCAdFollowItemView *_finderFollowItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFollowItemView *finderFollowItemView; // @synthesize finderFollowItemView=_finderFollowItemView;
@property(retain, nonatomic) WCAdFollowItemView *brandFollowItemView; // @synthesize brandFollowItemView=_brandFollowItemView;
@property(retain, nonatomic) MMUILabel *headTitleLabel; // @synthesize headTitleLabel=_headTitleLabel;
@property(retain, nonatomic) WCAdURLImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool isFinderFollowed; // @synthesize isFinderFollowed=_isFinderFollowed;
@property(nonatomic) _Bool isBrandFollowed; // @synthesize isBrandFollowed=_isBrandFollowed;
@property(retain, nonatomic) WCAdCombineFollowInfo *combineFollowInfo; // @synthesize combineFollowInfo=_combineFollowInfo;
@property(nonatomic) __weak id <WCAdHalfScreenCombineFollowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCheckStateChanged:(id)arg1;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)genDividerView:(double)arg1;
- (void)initDetailUI;
- (void)initCommonUI;
- (void)initSubview;
- (id)initWithCombineFollowInfo:(id)arg1 isBrandFollowed:(_Bool)arg2 isFinderFollowed:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
