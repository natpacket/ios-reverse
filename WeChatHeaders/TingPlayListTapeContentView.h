//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFlexBaseView.h"

@class MMUILabel, TingCategoryCoverView;

@interface TingPlayListTapeContentView : WCFlexBaseView
{
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    TingCategoryCoverView *_coverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingCategoryCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithTapeInfo:(id)arg1;
- (void)configureLayout;

@end

