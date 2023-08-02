//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class NSMutableArray, UIView;

@interface MuteBrandTipView : MMPageSheetBaseView
{
    NSMutableArray *_displayContactNameArr;
    UIView *_headView;
    UIView *_contentView;
    UIView *_unreadLabel;
    UIView *_redDotView;
    UIView *_bigHeadImage;
    UIView *_bigView;
    UIView *_shadowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *bigView; // @synthesize bigView=_bigView;
@property(retain, nonatomic) UIView *bigHeadImage; // @synthesize bigHeadImage=_bigHeadImage;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIView *unreadLabel; // @synthesize unreadLabel=_unreadLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSMutableArray *displayContactNameArr; // @synthesize displayContactNameArr=_displayContactNameArr;
- (void)onDarkModeChange:(_Bool)arg1;
- (void)startAnimation;
- (void)close;
- (id)centerImageView:(struct CGSize)arg1;
- (void)initContactList:(id)arg1;
- (void)pageSheetDidAppear;
- (void)showWithAnimated:(_Bool)arg1;
- (id)initWithContact:(id)arg1;

@end
