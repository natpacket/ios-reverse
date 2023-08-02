//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMHeadImageView, MMUIButton, UILabel, UIView, WCFinderLikeInfo;
@protocol WCFinderFeedFriendsLikeListTableViewCellDelegate;

@interface WCFinderFeedFriendsLikeListTableViewCell : MMTableViewCell
{
    id <WCFinderFeedFriendsLikeListTableViewCellDelegate> _delegate;
    unsigned long long _row;
    MMHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    MMUIButton *_likeBtn;
    MMUIButton *_moreBtn;
    UIView *_separatorLine;
    UIView *_highLightBGView;
    UILabel *_firstLikeLabel;
    WCFinderLikeInfo *_likeInfo;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property(retain, nonatomic) UILabel *firstLikeLabel; // @synthesize firstLikeLabel=_firstLikeLabel;
@property(retain, nonatomic) UIView *highLightBGView; // @synthesize highLightBGView=_highLightBGView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) __weak id <WCFinderFeedFriendsLikeListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLikeBtn;
- (void)onClickMoreBtn;
- (void)showHighlightAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateNotSee:(_Bool)arg1;
- (void)updateLiked:(_Bool)arg1;
- (void)layoutAllSubviews;
- (void)setupLikeInfo:(id)arg1 needsSeparatorLine:(_Bool)arg2 showFirstLikeLabel:(_Bool)arg3;
- (void)setupSubViews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
