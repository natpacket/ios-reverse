//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMListenDiscoverItem, MMUILabel, MMWebImageView;

@interface TingSingerWallCell : UICollectionViewCell
{
    MMListenDiscoverItem *_discoverItem;
    MMWebImageView *_singerAvatarImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *singerAvatarImageView; // @synthesize singerAvatarImageView=_singerAvatarImageView;
@property(retain, nonatomic) MMListenDiscoverItem *discoverItem; // @synthesize discoverItem=_discoverItem;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)updateWithItem:(id)arg1;
- (void)setupDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

@end

