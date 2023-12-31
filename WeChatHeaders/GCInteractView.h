//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GCInteractBtmActioniew, GCInteractCellModel, GCInteractFourAvatarView, MMHeadImageView, MMWebImageView, RichTextView, UIButton, UILabel;

@interface GCInteractView : UIView
{
    UILabel *_titleLabel;
    MMHeadImageView *_headView;
    GCInteractFourAvatarView *_avatarGroupView;
    UILabel *_countLabel;
    UILabel *_actionDescLabel;
    UILabel *_timeLabel;
    UILabel *_actionTextLabel;
    UILabel *_quotoLabel;
    UIView *_qutoLineView;
    MMWebImageView *_rightImgView;
    UIButton *_rightFollowBtn;
    GCInteractBtmActioniew *_btmActionView;
    GCInteractCellModel *_bindCellModel;
    RichTextView *_actionRichTextView;
    RichTextView *_quotoRichTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *quotoRichTextView; // @synthesize quotoRichTextView=_quotoRichTextView;
@property(retain, nonatomic) RichTextView *actionRichTextView; // @synthesize actionRichTextView=_actionRichTextView;
@property(nonatomic) __weak GCInteractCellModel *bindCellModel; // @synthesize bindCellModel=_bindCellModel;
@property(retain, nonatomic) GCInteractBtmActioniew *btmActionView; // @synthesize btmActionView=_btmActionView;
@property(retain, nonatomic) UIButton *rightFollowBtn; // @synthesize rightFollowBtn=_rightFollowBtn;
@property(retain, nonatomic) MMWebImageView *rightImgView; // @synthesize rightImgView=_rightImgView;
@property(retain, nonatomic) UIView *qutoLineView; // @synthesize qutoLineView=_qutoLineView;
@property(retain, nonatomic) UILabel *quotoLabel; // @synthesize quotoLabel=_quotoLabel;
@property(retain, nonatomic) UILabel *actionTextLabel; // @synthesize actionTextLabel=_actionTextLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *actionDescLabel; // @synthesize actionDescLabel=_actionDescLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) GCInteractFourAvatarView *avatarGroupView; // @synthesize avatarGroupView=_avatarGroupView;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)configureBtmActionView:(id)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)removeEmPrefix:(id)arg1;
- (void)didClickJumpAllBtn;
- (void)didClickReplyBtn;
- (void)handleVote;
- (void)didClickVoteBtn;
- (void)handleFollow;
- (void)didClickFollowBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

