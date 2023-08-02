//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonCellLikeButton.h"

@class EmoticonWeAppInfo, MMWebImageView, UIButton, UILabel, UIView;

@interface EmoticonWeAppCellView : EmoticonCellLikeButton
{
    _Bool _isWeAppClicked;
    UIView *_contentView;
    EmoticonWeAppInfo *_weappInfo;
    UIView *_seperateView;
    MMWebImageView *_iconView;
    UILabel *_nameLabel;
    UIButton *_actionBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWeAppClicked; // @synthesize isWeAppClicked=_isWeAppClicked;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *seperateView; // @synthesize seperateView=_seperateView;
@property(retain, nonatomic) EmoticonWeAppInfo *weappInfo; // @synthesize weappInfo=_weappInfo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)accessibilityLabel;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onOpenWeApp;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)updateWithWeAppInfoInfo:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
