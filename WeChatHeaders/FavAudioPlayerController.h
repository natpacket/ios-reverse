//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IFavAudioPlayerExt-Protocol.h"

@class FavAudioInfo, NSString, UIImageView, UILabel, UIView;

@interface FavAudioPlayerController : MMUIView <IFavAudioPlayerExt>
{
    FavAudioInfo *m_audioInfo;
    UIView *m_backgroundView;
    _Bool m_bBtnForPlay;
    UILabel *m_durationLabel;
    unsigned int m_uiVoiceTime;
    UIImageView *playingImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavAudioInfo *m_audioInfo; // @synthesize m_audioInfo;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)onClickObject;
- (void)setUnSelected;
- (void)setSelected;
- (void)onTouchEnd:(id)arg1;
- (void)onTouchBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnBeginPlay:(id)arg1;
- (void)stop;
- (void)play;
- (void)onPlayBtnClick;
- (_Bool)isCurrentControllForPlayer;
- (void)showPlayingView;
- (void)showNormalView;
- (void)updateBtnImage;
- (id)getDuration:(int)arg1;
- (void)initDurationLabel;
- (void)initBtn;
- (void)layoutSubviews;
- (void)layoutSubviewsWithDefault;
- (void)initView;
- (id)initWithFavAudioInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

