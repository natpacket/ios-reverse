//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, WCDataItem, WCLikeButton;

@interface WCPhotoMutipleImageBottomView : UIView
{
    WCDataItem *_dataItem;
    WCLikeButton *_likeButton;
    CDUnknownBlockType _likeOpBlock;
    MMUIButton *_commentButton;
    CDUnknownBlockType _commentBlock;
    MMUIButton *_detailButton;
    CDUnknownBlockType _detailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType detailBlock; // @synthesize detailBlock=_detailBlock;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(copy, nonatomic) CDUnknownBlockType commentBlock; // @synthesize commentBlock=_commentBlock;
@property(retain, nonatomic) MMUIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(copy, nonatomic) CDUnknownBlockType likeOpBlock; // @synthesize likeOpBlock=_likeOpBlock;
@property(retain, nonatomic) WCLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)suitableFontSizeForLikeButton:(id)arg1 commentButton:(id)arg2 detailButton:(id)arg3;
- (struct CGSize)buttonSize:(id)arg1 minTitleWidth:(double)arg2 maxButtonWith:(double)arg3;
- (void)onDetailButtonClicked:(id)arg1;
- (void)onCommentButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithDataItem:(id)arg1;
- (void)initDetailButton;
- (void)initCommentButton;
- (void)initLikeButton;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 likeOpBlock:(CDUnknownBlockType)arg3 commentBlock:(CDUnknownBlockType)arg4 detailBlock:(CDUnknownBlockType)arg5;

@end

