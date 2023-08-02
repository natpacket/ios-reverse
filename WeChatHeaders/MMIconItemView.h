//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMIconItemConfigDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"

@class MMIconItemViewConfig, MMUILabel, MMWebImageView, NSString, NSURL, UIColor, UIImage;
@protocol MMIconItemDelegate;

@interface MMIconItemView : UIView <MMWebImageViewDelegate, MMIconItemConfigDelegate>
{
    _Bool _changeIconColorOnAppearanceChange;
    MMIconItemViewConfig *_config;
    NSURL *_iconImageURL;
    double _textMaxWidth;
    id <MMIconItemDelegate> _delegate;
    MMWebImageView *_iconView;
    MMUILabel *_titleLabel;
    UIColor *_iconColorLM;
    UIColor *_iconColorDM;
    UIView *_bgView;
    UIImage *_iconImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIColor *iconColorDM; // @synthesize iconColorDM=_iconColorDM;
@property(retain, nonatomic) UIColor *iconColorLM; // @synthesize iconColorLM=_iconColorLM;
@property(nonatomic) _Bool changeIconColorOnAppearanceChange; // @synthesize changeIconColorOnAppearanceChange=_changeIconColorOnAppearanceChange;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <MMIconItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double textMaxWidth; // @synthesize textMaxWidth=_textMaxWidth;
@property(retain, nonatomic) NSURL *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(retain, nonatomic) MMIconItemViewConfig *config; // @synthesize config=_config;
- (void)onConfigChanged;
- (id)webImageViewWithURL:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)updateColorOnAppearanceChange;
- (struct CGSize)intrinsicContentSize;
- (void)layoutViews;
- (void)initViews;
- (void)parseConfig;
- (id)initWithConfig:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
