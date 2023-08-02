//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCSightViewDelegate-Protocol.h"

@class ForwardMessageLogicController, MMUIView, NSString, UIImageView, WCAdFinderLiveLogic, WCAdFinderLivePlayerView, WCAdLiveDisplayView, WCSightView;

@interface WCContentItemViewTemplateNewSight : WCContentItemBaseView <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCSightViewDelegate>
{
    WCSightView *_sightView;
    UIImageView *_adWeAppIconView;
    ForwardMessageLogicController *m_forwardMsgLogic;
    unsigned long long _legalityType;
    WCAdLiveDisplayView *_liveDisplayView;
    MMUIView *_mediaHolder;
    WCAdFinderLivePlayerView *_finderLivePlayerView;
    WCAdFinderLiveLogic *_finderLiveLogic;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFinderLiveLogic *finderLiveLogic; // @synthesize finderLiveLogic=_finderLiveLogic;
@property(retain, nonatomic) WCAdFinderLivePlayerView *finderLivePlayerView; // @synthesize finderLivePlayerView=_finderLivePlayerView;
@property(retain, nonatomic) MMUIView *mediaHolder; // @synthesize mediaHolder=_mediaHolder;
@property(retain, nonatomic) WCAdLiveDisplayView *liveDisplayView; // @synthesize liveDisplayView=_liveDisplayView;
@property(nonatomic) unsigned long long legalityType; // @synthesize legalityType=_legalityType;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onExposeWithDataItem;
- (void)sendSightToFriend;
- (id)getVisibleViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onMore:(id)arg1;
- (_Bool)canShareToOpenSDK;
- (void)onShareToOpenSDK;
- (void)onFavoriteAdd:(id)arg1;
- (void)onLongTouch;
- (void)onShowSightAction;
- (void)onLongPressedWCSightFullScreenWindow:(id)arg1;
- (void)onLongPressedWCSight:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)updateLiveStatus:(int)arg1;
- (void)initLiveInfoView:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (double)fetchVideoCurrentPlaybackTime;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)sightVideoPath;
- (void)onClickFinderLivePlayer;
- (void)addFinderLivePlayer:(id)arg1;
- (id)createFinderLivePlayer:(id)arg1;
- (void)addSightView:(id)arg1 mediaItem:(id)arg2;
- (id)createSightView:(id)arg1 mediaItem:(id)arg2 size:(struct CGSize)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (void)initMediaView:(id)arg1 mediaItem:(id)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

