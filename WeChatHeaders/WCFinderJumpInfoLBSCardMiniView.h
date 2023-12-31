//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMUIButton, UIImageView, UILabel, WCFinderJumpInfo;
@protocol WCFinderJumpInfoLBSCardViewDelegate;

@interface WCFinderJumpInfoLBSCardMiniView : UIView
{
    id <WCFinderJumpInfoLBSCardViewDelegate> _delegate;
    FinderJumpInfo_Style *_style;
    UIImageView *_iconView;
    UILabel *_poiTitle;
    MMUIButton *_favButton;
    long long _showPosition;
    WCFinderJumpInfo *_jumpInfo;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) long long showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) MMUIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) UILabel *poiTitle; // @synthesize poiTitle=_poiTitle;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) __weak id <WCFinderJumpInfoLBSCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCardClicked:(id)arg1;
- (void)onFavBtnClicked:(id)arg1;
- (void)updateWithStyle:(id)arg1;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(long long)arg2;
- (void)layoutSubviews;
- (void)updateUI;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

