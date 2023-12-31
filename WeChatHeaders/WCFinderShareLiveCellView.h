//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMWebImageViewDelegate-Protocol.h"
#import "WCFinderShareLiveCellViewDelegate-Protocol.h"

@class CAGradientLayer, MMFinderLiveActivityView, MMWebImageView, NSString, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderLiveNowView, WCFinderLiveShareCellFullStatusView, WCFinderShareLiveCellViewModel;

@interface WCFinderShareLiveCellView : CommonMessageCellView <WCFinderShareLiveCellViewDelegate, MMWebImageViewDelegate>
{
    _Bool _canShowLiveActivityView;
    _Bool _isVisible;
    MMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIView *_coverViewContainer;
    MMWebImageView *_contentImageView;
    CAGradientLayer *_gradientLayer;
    UIView *_liveMaskView;
    WCFinderLiveShareCellFullStatusView *_liveMaskTipsView;
    WCFinderLiveNowView *_liveNowView;
    UIImageView *_tinyIcon;
    MMFinderLiveActivityView *_liveActivityView;
    WCFinderAuthInfoIconView *_authIconView;
    MMWebImageView *_tailTagView;
    UILabel *_coverEffectLabel;
    UILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *coverEffectLabel; // @synthesize coverEffectLabel=_coverEffectLabel;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) MMWebImageView *tailTagView; // @synthesize tailTagView=_tailTagView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) WCFinderLiveShareCellFullStatusView *liveMaskTipsView; // @synthesize liveMaskTipsView=_liveMaskTipsView;
@property(retain, nonatomic) UIView *liveMaskView; // @synthesize liveMaskView=_liveMaskView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIView *coverViewContainer; // @synthesize coverViewContainer=_coverViewContainer;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)onLiveStatusChanged;
- (void)doShareAnimation;
- (void)prepareForMorphTransition;
- (void)onTouchUpInside;
- (void)setupCallbackViewForTransitionIfNeeded;
- (id)operationMenuItems;
- (id)transitionStartImage;
- (void)refreshLiveMaskEffect;
- (void)layoutLiveActivityView;
- (void)onAppear;
- (void)updateDetailLabel;
- (void)layoutDefault;
- (void)layoutFinished;
- (void)layoutInternal;
- (void)bindYReportSdk:(id)arg1;
@property(retain, nonatomic) WCFinderShareLiveCellViewModel *viewModel; // @dynamic viewModel;
- (void)prepareForReuse;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

