//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel;

@interface TingSocialTrendsHeaderView : MMUIView
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateDisplayWithCategory:(id)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

