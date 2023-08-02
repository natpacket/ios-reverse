//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"
#import "MMLiveCDNPlayerViewDelegate-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"

@class MMFinderLiveActivityView, MMFinderLiveCompleteRecommendItemViewConfig, MMLiveCDNPlayerView, NSString, RichTextView, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderFeedContentVM, WCFinderHeadImageView;
@protocol MMFinderLiveCompleteRecommendItemViewDelegate;

@interface MMFinderLiveCompleteRecommendItemView : UIView <WCFinderFeedContentVMExt, MMLiveCDNPlayerViewDelegate, ILinkEventExt>
{
    _Bool _hiddenVideo;
    _Bool _canShowVolumeEduView;
    _Bool _canShowLiveActivityView;
    _Bool _isJustTappedByUser;
    id <MMFinderLiveCompleteRecommendItemViewDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    MMLiveCDNPlayerView *_playerView;
    UIView *_endMaskView;
    UIView *_endTipsView;
    UIView *_gradientView;
    RichTextView *_recommendReasonLabel;
    UIView *_recommendReasonView;
    RichTextView *_descLabel;
    UIView *_authorView;
    UIView *_avatorContainer;
    WCFinderHeadImageView *_avatorImageView;
    RichTextView *_nicknameTV;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_audienceNumLabel;
    UIImageView *_soundVolumeAnimationView;
    UIView *_playEduView;
    UIView *_playEduTipsView;
    UILabel *_playEduTipsLabel;
    UIImageView *_eduVoiceView;
    unsigned long long _startPlayTimestamp;
    unsigned long long _playerConnectTimestamp;
    MMFinderLiveActivityView *_liveActivityView;
    MMFinderLiveCompleteRecommendItemViewConfig *_config;
}

+ (double)bannerCellHeightInWidth:(double)arg1;
+ (double)cellHeightInWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveCompleteRecommendItemViewConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isJustTappedByUser; // @synthesize isJustTappedByUser=_isJustTappedByUser;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(nonatomic) unsigned long long playerConnectTimestamp; // @synthesize playerConnectTimestamp=_playerConnectTimestamp;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
@property(retain, nonatomic) UIImageView *eduVoiceView; // @synthesize eduVoiceView=_eduVoiceView;
@property(retain, nonatomic) UILabel *playEduTipsLabel; // @synthesize playEduTipsLabel=_playEduTipsLabel;
@property(retain, nonatomic) UIView *playEduTipsView; // @synthesize playEduTipsView=_playEduTipsView;
@property(retain, nonatomic) UIView *playEduView; // @synthesize playEduView=_playEduView;
@property(nonatomic) _Bool canShowVolumeEduView; // @synthesize canShowVolumeEduView=_canShowVolumeEduView;
@property(retain, nonatomic) UIImageView *soundVolumeAnimationView; // @synthesize soundVolumeAnimationView=_soundVolumeAnimationView;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) RichTextView *nicknameTV; // @synthesize nicknameTV=_nicknameTV;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIView *avatorContainer; // @synthesize avatorContainer=_avatorContainer;
@property(retain, nonatomic) UIView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *recommendReasonView; // @synthesize recommendReasonView=_recommendReasonView;
@property(retain, nonatomic) RichTextView *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *endTipsView; // @synthesize endTipsView=_endTipsView;
@property(retain, nonatomic) UIView *endMaskView; // @synthesize endMaskView=_endMaskView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool hiddenVideo; // @synthesize hiddenVideo=_hiddenVideo;
@property(nonatomic) __weak id <MMFinderLiveCompleteRecommendItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForMorphTransition;
- (void)updateAllUIElementsShow:(_Bool)arg1 animate:(_Bool)arg2;
- (void)layoutLiveActivityView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPlayMuteByNotifyOuter:(_Bool)arg1;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)removeBlurEffectIfNeed;
- (void)addBlurEffectIfNeed;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onAuthorViewDidClick;
- (void)startAnimatingAsyncLoadImagesIfNeeded;
- (void)updateSoundVolumeAnimationViewHidden;
- (void)updateSoundVolumeAnimationView;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onTapItem:(id)arg1;
- (void)markTappedByUser;
- (_Bool)isEduViewHidden;
- (void)updateShowVolumeEduView:(_Bool)arg1;
- (_Bool)isPlaying;
- (_Bool)isPlayingWithSound;
- (void)hideTouchEduView;
- (void)showTouchEduViewWithTip:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)stop;
- (void)playWithSound:(_Bool)arg1;
- (void)onConfigUpdated;
- (void)updateLiveCardBlurState;
- (void)relayoutNickname;
- (void)updateWithContentVM:(id)arg1 config:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

