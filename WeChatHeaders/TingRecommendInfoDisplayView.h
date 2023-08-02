//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMListenRecommendInfo, MMUILabel;

@interface TingRecommendInfoDisplayView : MMUIView
{
    CDUnknownBlockType _onRecommendInfoClickedBlock;
    MMUIView *_containerView;
    MMUILabel *_nickNameLabel;
    MMUILabel *_descLabel;
    MMListenRecommendInfo *_recommendInfo;
    double _maxWidth;
    double _recommendDescWidth;
    double _nicknameMinWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double nicknameMinWidth; // @synthesize nicknameMinWidth=_nicknameMinWidth;
@property(nonatomic) double recommendDescWidth; // @synthesize recommendDescWidth=_recommendDescWidth;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @synthesize recommendInfo=_recommendInfo;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onRecommendInfoClickedBlock; // @synthesize onRecommendInfoClickedBlock=_onRecommendInfoClickedBlock;
- (void)initNicknameLabel;
- (void)setTextColor:(id)arg1;
- (void)updateWithRecommendInfo:(id)arg1 onlyAppendRecommendInfoDesc:(_Bool)arg2 maxWidth:(double)arg3;
- (id)firstNickNameTextWithRecommendInfo:(id)arg1 onlyAppendRecommendInfoDesc:(_Bool)arg2;
- (id)currentRecommendDescriptionWording:(id)arg1 onlyAppendRecommendInfoDesc:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1 maxWidth:(double)arg2;

@end

