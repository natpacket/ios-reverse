//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, UILabel;

@interface WCFinderGroupMemberTableViewCell : UITableViewCell
{
    MMHeadImageView *_headImageView;
    UILabel *_groupNickNameLabel;
    UILabel *_videoCountLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(nonatomic) __weak UILabel *groupNickNameLabel; // @synthesize groupNickNameLabel=_groupNickNameLabel;
@property(nonatomic) __weak MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithAuthorContact:(id)arg1;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
