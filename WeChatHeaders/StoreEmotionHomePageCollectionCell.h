//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class EmojiRecommendInfo, MMUILabel, NSMutableArray, UIImageView;

@interface StoreEmotionHomePageCollectionCell : UICollectionViewCell
{
    EmojiRecommendInfo *_recommendInfo;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    NSMutableArray *_singleEmoticonViewList;
    long long _emoticonCount;
    CDUnknownBlockType _tapHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(nonatomic) long long emoticonCount; // @synthesize emoticonCount=_emoticonCount;
@property(retain, nonatomic) NSMutableArray *singleEmoticonViewList; // @synthesize singleEmoticonViewList=_singleEmoticonViewList;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) EmojiRecommendInfo *recommendInfo; // @synthesize recommendInfo=_recommendInfo;
- (void)onTapSingleEmoticonView:(id)arg1;
- (long long)maxEmoticonCount;
- (void)createOrUpdateLayout;
- (void)setSelected:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
