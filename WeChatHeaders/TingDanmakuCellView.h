//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "TingDanmakuViewModelExtension-Protocol.h"

@class MMWebImageView, RichTextView, TingDanmakuViewModel, UIImageView;
@protocol TingDanmakuCellViewDelegate;

@interface TingDanmakuCellView : UIButton <TingDanmakuViewModelExtension>
{
    unsigned int _type;
    unsigned long long _startTimeStamp;
    id <TingDanmakuCellViewDelegate> _delegate;
    MMWebImageView *_headerView;
    RichTextView *_contentLabel;
    MMWebImageView *_contentImageView;
    UIImageView *_playImageView;
    TingDanmakuViewModel *_viewModel;
    UIImageView *_likeImageView;
    struct CGPoint _startOrigin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) TingDanmakuViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <TingDanmakuCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) struct CGPoint startOrigin; // @synthesize startOrigin=_startOrigin;
@property(nonatomic) unsigned long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
- (void)onModel:(id)arg1 isLikedChangeFromOldValue:(_Bool)arg2 newValue:(_Bool)arg3;
- (void)onDanmakuBodyClicked;
- (void)onLikeIconClicked;
- (void)onClickedWithPoint:(struct CGPoint)arg1;
- (void)attachHighlightBorder;
- (void)layoutSubviews;
- (void)applyViewModel:(id)arg1;
- (void)initViews;
- (void)dealloc;
- (id)init;

@end

