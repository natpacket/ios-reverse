//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMHeadImageView, UILabel;

@interface MMFinderLiveCommentAssistantCollectionViewCell : UICollectionViewCell
{
    _Bool _circleHeader;
    MMHeadImageView *_headerImageView;
    UILabel *_nameLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool circleHeader; // @synthesize circleHeader=_circleHeader;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void)initUI;
- (void)layoutSubviews;
- (void)resetHeaderImageView;
- (void)switchToAddStyle;
- (void)switchToDeleteStyle;
- (void)configWithContact:(id)arg1;

@end

