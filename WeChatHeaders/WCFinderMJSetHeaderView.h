//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIImageView, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderMJSetHeaderView : UICollectionReusableView
{
    double _horizontalPadding;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UIButton *_contactLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_usedLabel;
    UIButton *_takePhotoButton;
    UIButton *_becomeCeatorButton;
}

+ (double)displayHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *becomeCeatorButton; // @synthesize becomeCeatorButton=_becomeCeatorButton;
@property(retain, nonatomic) UIButton *takePhotoButton; // @synthesize takePhotoButton=_takePhotoButton;
@property(retain, nonatomic) UILabel *usedLabel; // @synthesize usedLabel=_usedLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UIButton *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (void)addClickPostTarget:(id)arg1 action:(SEL)arg2;
- (void)addClickContactTarget:(id)arg1 action:(SEL)arg2;
- (void)update:(id)arg1;
- (void)doLayout;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

