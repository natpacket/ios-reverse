//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TingProfileAudioHistorySperateSectionHeader : UIView
{
    UILabel *_titleLabel;
    UIView *_upperLine;
    UIView *_bottomLine;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *upperLine; // @synthesize upperLine=_upperLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)setTitle:(id)arg1;
- (id)init;

@end
