//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderMusicBaikeSummary, UIImageView, UILabel;

@interface WCFinderProfileMusicianBaikeView : UIView
{
    FinderMusicBaikeSummary *_baikeSummary;
    UIImageView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_arrowView;
    UIView *_topLine;
    UIView *_bottomLine;
    struct CGSize _cacheSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) struct CGSize cacheSize; // @synthesize cacheSize=_cacheSize;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) FinderMusicBaikeSummary *baikeSummary; // @synthesize baikeSummary=_baikeSummary;
- (id)descForBaikeCard:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)buildLayout;
- (void)_initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

