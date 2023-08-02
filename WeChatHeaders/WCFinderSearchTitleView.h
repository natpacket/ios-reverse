//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTitleView.h"

@class MMTagTextField, MMUIButton, NSString, UIImageView;

@interface WCFinderSearchTitleView : MMTitleView
{
    long long _style;
    UIImageView *_searchIconView;
    MMTagTextField *_searchField;
    MMUIButton *_rightClearButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *rightClearButton; // @synthesize rightClearButton=_rightClearButton;
@property(retain, nonatomic) MMTagTextField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) UIImageView *searchIconView; // @synthesize searchIconView=_searchIconView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)onClickCleanButton;
- (id)tintColor;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) NSString *content;
@property(nonatomic) _Bool enableSearch;
- (void)prepareCancelButton;
- (void)prepareBottomLine;
- (void)prepareTextView;
- (id)dynamicDelegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end
