//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIImageView, MMUILabel;

@interface IntelligentMsgImgFigureHeaderView : MMUIView
{
    MMUILabel *m_titleLabel;
    MMUIImageView *m_figureImageView;
    MMUILabel *m_figureCountLabel;
}

- (void).cxx_destruct;
- (double)calculationHeight;
- (void)updateFigureImageView:(id)arg1 figureCount:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)layoutFigureCountLabel;
- (void)layoutFigureImageView;
- (void)layoutTitleLabel;
- (void)layoutView;
- (id)init;

@end

