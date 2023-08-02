//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class EmoticonBoardCrossCollectionEmoticonHeaderModel, MMBadgeView, MMUILabel, MMWebImageView, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface EmoticonBoardCrossCollectionEmoticonHeaderView : UICollectionReusableView
{
    EmoticonBoardCrossCollectionEmoticonHeaderModel *_viewModel;
    CDUnknownBlockType _actionBlock;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tapGestureRecongnizer;
    MMUILabel *_designerNameLabel;
    MMWebImageView *_designerHeadView;
    UIImageView *_rightArrow;
    MMBadgeView *_badgeView;
    UIView *_voiceOverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *voiceOverView; // @synthesize voiceOverView=_voiceOverView;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) MMWebImageView *designerHeadView; // @synthesize designerHeadView=_designerHeadView;
@property(retain, nonatomic) MMUILabel *designerNameLabel; // @synthesize designerNameLabel=_designerNameLabel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecongnizer; // @synthesize tapGestureRecongnizer=_tapGestureRecongnizer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)handleSingleTap:(id)arg1;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

