//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView;

@interface TingRelatedSectionHeaderView : UICollectionReusableView
{
    UIView *_topLine;
    UILabel *_titleLbl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(readonly, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1;
- (void)prepareForReuse;
- (void)initTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

