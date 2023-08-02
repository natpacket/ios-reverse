//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMWebImageViewDelegate-Protocol.h"

@class CAGradientLayer, MMWebImageView, NSString, UIImageView, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderShareCoverImageView : UIView <MMWebImageViewDelegate>
{
    _Bool _blurEnabled;
    MMWebImageView *_imageView;
    UIImageView *_tinyIcon;
    UILabel *_nameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    MMWebImageView *_tailTagView;
    UIView *_photoDotsView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *photoDotsView; // @synthesize photoDotsView=_photoDotsView;
@property(retain, nonatomic) MMWebImageView *tailTagView; // @synthesize tailTagView=_tailTagView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(nonatomic) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateBlurEnabled;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutPhotoDotsIfNeededWithFinderShareItem:(id)arg1;
- (void)layoutAuthorInfoWithAuthIconURL:(id)arg1 authIconType:(unsigned long long)arg2 nickname:(id)arg3 tailTagURL:(id)arg4;
- (void)layoutImageWithURL:(id)arg1;
- (void)renderWithLiveShareItem:(id)arg1 size:(struct CGSize)arg2;
- (void)renderWithFinderShareItem:(id)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

