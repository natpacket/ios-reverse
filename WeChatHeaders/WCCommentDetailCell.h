//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class NSString, UILabel, WCCommentLikeView, WCFinderHeadImageView;

@interface WCCommentDetailCell : UITableViewCell <WCFinderHeadImageViewDelegate>
{
    _Bool _enableShowFinder;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_timeLabel;
    UILabel *_nickNameLabel;
    UILabel *_authorBadgeLabel;
    UILabel *_authorLikeLabel;
    long long _section;
    WCCommentLikeView *_commentLikeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCommentLikeView *commentLikeView; // @synthesize commentLikeView=_commentLikeView;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) _Bool enableShowFinder; // @synthesize enableShowFinder=_enableShowFinder;
@property(retain, nonatomic) UILabel *authorLikeLabel; // @synthesize authorLikeLabel=_authorLikeLabel;
@property(retain, nonatomic) UILabel *authorBadgeLabel; // @synthesize authorBadgeLabel=_authorBadgeLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (id)backgroundColorInNormalMode;
- (void)longPress:(id)arg1;
- (void)onClickLikeComment;
- (void)clickAvatar;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (struct CGSize)avatarSize;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

