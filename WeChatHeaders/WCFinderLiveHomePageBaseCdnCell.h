//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MMLiveCDNPlayerViewDelegate-Protocol.h"
#import "WCFinderLiveHomePageCellPlayProtocol-Protocol.h"

@class MMLiveCDNPlayerView, NSString, UIImageView, UILabel, UIView, WCFinderLiveStreamElementModel;
@protocol WCFinderLiveHomePageBaseCdnCellDelegate;

@interface WCFinderLiveHomePageBaseCdnCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate, WCFinderLiveHomePageCellPlayProtocol>
{
    _Bool _isJustTappedByUser;
    _Bool _canShowDesLabel;
    _Bool _canShowVolumeEduView;
    unsigned long long _startPlayTimestamp;
    unsigned long long _playerConnectTimestamp;
    id <WCFinderLiveHomePageBaseCdnCellDelegate> _delegate;
    MMLiveCDNPlayerView *_playerView;
    UIView *_endMaskView;
    UIView *_endTipsView;
    UIView *_gradientView;
    UIImageView *_soundVolumeAnimationView;
    WCFinderLiveStreamElementModel *_elementModel;
    UIView *_playEduView;
    UIView *_playEduTipsView;
    UILabel *_playEduTipsLabel;
    UIImageView *_eduVoiceView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *eduVoiceView; // @synthesize eduVoiceView=_eduVoiceView;
@property(retain, nonatomic) UILabel *playEduTipsLabel; // @synthesize playEduTipsLabel=_playEduTipsLabel;
@property(retain, nonatomic) UIView *playEduTipsView; // @synthesize playEduTipsView=_playEduTipsView;
@property(retain, nonatomic) UIView *playEduView; // @synthesize playEduView=_playEduView;
@property(retain, nonatomic) WCFinderLiveStreamElementModel *elementModel; // @synthesize elementModel=_elementModel;
@property(nonatomic) _Bool canShowVolumeEduView; // @synthesize canShowVolumeEduView=_canShowVolumeEduView;
@property(retain, nonatomic) UIImageView *soundVolumeAnimationView; // @synthesize soundVolumeAnimationView=_soundVolumeAnimationView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool canShowDesLabel; // @synthesize canShowDesLabel=_canShowDesLabel;
@property(nonatomic) __weak id <WCFinderLiveHomePageBaseCdnCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isJustTappedByUser; // @synthesize isJustTappedByUser=_isJustTappedByUser;
@property(nonatomic) unsigned long long playerConnectTimestamp; // @synthesize playerConnectTimestamp=_playerConnectTimestamp;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
- (void)prepareForMorphTransition;
- (void)onPlayMuteByNotifyOuter:(_Bool)arg1;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onForwardGestureAction:(id)arg1;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (void)startAnimatingAsyncLoadImagesIfNeeded;
- (void)updateSoundVolumeAnimationViewHidden;
- (void)updateSoundVolumeAnimationView;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)takePlayerViewSnapshot;
- (void)markTappedByUser;
- (_Bool)isEduViewHidden;
- (void)updateShowVolumeEduView:(_Bool)arg1;
- (_Bool)isPlayingWithSound;
- (void)hideTouchEduView;
- (void)showTouchEduViewWithTip:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)updateLiveCardBlurState;
- (void)updateWithElementModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

