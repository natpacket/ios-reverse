//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderLiveMilestoneLotteryInfo_AttendInfo_Choice, UIImageView, UILabel;

@interface MMFinderLiveSpringLotteryDetailQuestionOptionView : UIView
{
    _Bool _selected;
    _Bool _showCount;
    FinderLiveMilestoneLotteryInfo_AttendInfo_Choice *_choice;
    unsigned long long _maxChoiceCount;
    CDUnknownBlockType _onTapped;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_checkMarkImageView;
    UIView *_progressView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *checkMarkImageView; // @synthesize checkMarkImageView=_checkMarkImageView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onTapped; // @synthesize onTapped=_onTapped;
@property(nonatomic) _Bool showCount; // @synthesize showCount=_showCount;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long maxChoiceCount; // @synthesize maxChoiceCount=_maxChoiceCount;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_AttendInfo_Choice *choice; // @synthesize choice=_choice;
- (void)updateColorAndLayout;
- (void)onChoiceUpdated;
- (void)layoutSubviews;
- (void)onTapped:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
