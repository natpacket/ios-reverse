//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMListenDiscoverItem, MMUILabel, MMUIView, MMWebImageView, TingFriendFootmarkView, UIImageView;

@interface TingSocialTrendsSectionHeader : UICollectionReusableView
{
    CDUnknownBlockType _onClickAuthor;
    MMWebImageView *_headImgView;
    UIImageView *_iconImgView;
    MMUILabel *_timeLabel;
    MMUILabel *_nameLabel;
    MMUILabel *_recommandLabel;
    TingFriendFootmarkView *_markView;
    MMUIView *_contentView;
    long long _type;
    MMListenDiscoverItem *_discoverItem;
}

+ (id)reuseIdentifier;
+ (double)headerViewHeightWithTime;
+ (double)headerViewHeightDefault;
- (void).cxx_destruct;
@property(retain, nonatomic) MMListenDiscoverItem *discoverItem; // @synthesize discoverItem=_discoverItem;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TingFriendFootmarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) MMUILabel *recommandLabel; // @synthesize recommandLabel=_recommandLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) MMWebImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(copy, nonatomic) CDUnknownBlockType onClickAuthor; // @synthesize onClickAuthor=_onClickAuthor;
- (void)authorLabelClicked;
- (void)displayUIWithType;
- (void)updateDislayWith:(id)arg1 type:(long long)arg2;
- (void)configLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

