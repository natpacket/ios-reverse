//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTogetherBaseCell.h"

@class InteractionLabel, UIImageView, UILabel, UIView, WCTogetherFriendsListViewItem;

@interface WCTogetherFriendsListCell : WCTogetherBaseCell
{
    UILabel *_titleLabel;
    UIView *_togetherFriendsListView;
    InteractionLabel *_friendsNameLabel;
    InteractionLabel *_friendsCountLabel;
    UIImageView *_arrowImageView;
}

+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)createTitleLabel;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) InteractionLabel *friendsCountLabel; // @synthesize friendsCountLabel=_friendsCountLabel;
@property(retain, nonatomic) InteractionLabel *friendsNameLabel; // @synthesize friendsNameLabel=_friendsNameLabel;
@property(retain, nonatomic) UIView *togetherFriendsListView; // @synthesize togetherFriendsListView=_togetherFriendsListView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)friendsLabelClicked:(id)arg1;
- (void)layoutSubviews;
- (id)createHeaderViewWithSize:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

// Remaining properties
@property(retain, nonatomic) WCTogetherFriendsListViewItem *viewItem; // @dynamic viewItem;

@end
