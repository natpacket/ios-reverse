//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, UIScrollView;

@interface MMLimitedModeBlockTipsView : UIView
{
    CDUnknownBlockType _onQuitBlock;
    UIScrollView *_contentView;
    MMUILabel *_descLabel;
}

+ (id)showBlockTipsInViewController:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onQuitBlock; // @synthesize onQuitBlock=_onQuitBlock;
- (void)onClickQuitBtn;
- (void)layoutSubviews;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

