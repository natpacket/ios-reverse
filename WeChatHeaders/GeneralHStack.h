//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class MMUILabel, UIImageView, UISlider, UISwitch;

@interface GeneralHStack : UIStackView
{
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UISwitch *_uiSwitch;
    UISlider *_uiSlider;
    UIImageView *_imageView;
    UIImageView *_accessoryView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UISlider *uiSlider; // @synthesize uiSlider=_uiSlider;
@property(retain, nonatomic) UISwitch *uiSwitch; // @synthesize uiSwitch=_uiSwitch;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)init;

@end
