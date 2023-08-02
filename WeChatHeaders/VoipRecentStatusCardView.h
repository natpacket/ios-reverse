//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface VoipRecentStatusCardView : UIView
{
    _Bool _isCloseBtnHidden;
    UIView *_contentsView;
    CDUnknownBlockType _didClickCloseButtonCallback;
    UIView *_closeView;
    UIImageView *_closeLogoImageView;
    UIView *_closeHotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *closeHotView; // @synthesize closeHotView=_closeHotView;
@property(retain, nonatomic) UIImageView *closeLogoImageView; // @synthesize closeLogoImageView=_closeLogoImageView;
@property(retain, nonatomic) UIView *closeView; // @synthesize closeView=_closeView;
@property(copy, nonatomic) CDUnknownBlockType didClickCloseButtonCallback; // @synthesize didClickCloseButtonCallback=_didClickCloseButtonCallback;
@property(nonatomic) _Bool isCloseBtnHidden; // @synthesize isCloseBtnHidden=_isCloseBtnHidden;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
- (void)onTerminate;
- (void)onCardShow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)preferredHeight;
- (void)onClickCloseViewWithSender:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

