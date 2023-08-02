//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton, TingPlayListSearchButtonView;
@protocol TingPlayToolBoxHeaderViewDelegate;

@interface TingPlayToolBoxHeaderView : MMUIView
{
    id <TingPlayToolBoxHeaderViewDelegate> _delegate;
    TingPlayListSearchButtonView *_searchBar;
    MMUIButton *_profileBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *profileBtn; // @synthesize profileBtn=_profileBtn;
@property(retain, nonatomic) TingPlayListSearchButtonView *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <TingPlayToolBoxHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSearchIconViewSize:(struct CGSize)arg1;
- (void)updateSearchTitleFontSize:(double)arg1;
- (void)updateSearchTitle:(id)arg1;
- (void)onProfileButtonClicked:(id)arg1;
- (void)onSearchButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end

