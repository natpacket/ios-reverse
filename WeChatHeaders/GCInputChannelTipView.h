//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface GCInputChannelTipView : UIView
{
    UIButton *_titleBtn;
    UIButton *_deSelectBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *deSelectBtn; // @synthesize deSelectBtn=_deSelectBtn;
@property(retain, nonatomic) UIButton *titleBtn; // @synthesize titleBtn=_titleBtn;
- (void)layoutSubviews;
- (void)configureText:(id)arg1 showBtn:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

