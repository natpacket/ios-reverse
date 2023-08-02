//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, MMWebImageView, NSString, TextStateTopicModel;

@interface TextStateFriendSquareSectionHeaderView : UICollectionReusableView
{
    NSString *_ownTopicId;
    TextStateTopicModel *_friendTopic;
    MMWebImageView *_iconImageView;
    MMUILabel *_clusterLabel;
}

+ (double)height;
+ (double)alignX;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *clusterLabel; // @synthesize clusterLabel=_clusterLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) TextStateTopicModel *friendTopic; // @synthesize friendTopic=_friendTopic;
@property(retain, nonatomic) NSString *ownTopicId; // @synthesize ownTopicId=_ownTopicId;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOwnTopicId:(id)arg1 friendTopic:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initLayout;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

