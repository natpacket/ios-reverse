//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface PreviewBottomButton : UIButton
{
    UILabel *_contentLabel;
    UIImageView *_iconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 title:(id)arg2;
- (double)totalHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

