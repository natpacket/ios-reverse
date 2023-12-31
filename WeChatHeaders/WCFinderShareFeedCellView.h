//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMImageLoaderObserver-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "ServiceAuthExt-Protocol.h"
#import "WCFinderShareAbstractCell-Protocol.h"
#import "WCFinderZoomAnimatorBehavior-Protocol.h"

@class CAGradientLayer, MMUIButton, MMWebImageView, NSString, SightIconView, UIImage, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderLiveNowView, WCFinderShareFeedCellViewModel;

@interface WCFinderShareFeedCellView : CommonMessageCellView <MMImageLoaderObserver, MMWebImageViewDelegate, ServiceAuthExt, WCFinderZoomAnimatorBehavior, WCFinderShareAbstractCell>
{
    MMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    WCFinderLiveNowView *_liveNowView;
    MMWebImageView *_contentImageView;
    CAGradientLayer *_gradientLayer;
    UIView *_separator;
    UIImageView *_tinyIcon;
    UILabel *_finderLabel;
    SightIconView *_playIconView;
    UIView *_photoCountDotView;
    UIImage *_fullScreenImage;
    WCFinderAuthInfoIconView *_authIconView;
    MMUIButton *_memberFlagButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *memberFlagButton; // @synthesize memberFlagButton=_memberFlagButton;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) UIView *photoCountDotView; // @synthesize photoCountDotView=_photoCountDotView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onLoadImageOK:(id)arg1;
- (void)onAppear;
- (void)doShareAnimation;
- (void)onTouchUpInside;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)operationMenuItems;
- (id)zoomAnimatorKey;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (_Bool)zoomAnimiatorShouldCacheSnapView;
- (void)onAnimatorWillBeginExpand:(id)arg1;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (id)displayViewForImageBrowser;
- (void)willOpenShareViewController;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (void)layoutBottomViews;
- (void)layoutPureText;
- (void)layoutDefault;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WCFinderShareFeedCellViewModel *viewModel; // @dynamic viewModel;

@end

