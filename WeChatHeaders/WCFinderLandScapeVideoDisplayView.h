//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCFinderFriendLikeToolbarViewDelegate-Protocol.h"
#import "WCFinderFullToolbarViewDelegate-Protocol.h"
#import "WCFinderHeadInfoViewDelegate-Protocol.h"
#import "WCFinderLandScapeVideoInteractivePlayerViewDelegate-Protocol.h"
#import "WCFinderPanelHotCommentViewDelegate-Protocol.h"

@class NSString, RichTextView, UIView, WCFinderFeedContentVM, WCFinderFriendLikeToolbarView, WCFinderFullToolbarView, WCFinderHeadInfoView, WCFinderLandScapePlayerParam, WCFinderLandScapeVideoDisplayViewInitParams, WCFinderLandScapeVideoInteractivePlayerView, WCFinderPanelHotCommentView;
@protocol WCFinderHeadInfoViewDelegate><WCFinderFullToolbarViewDelegate><WCFinderLandScapeVideoDisplayViewDelegate;

@interface WCFinderLandScapeVideoDisplayView : MMUIView <WCFinderHeadInfoViewDelegate, WCFinderFullToolbarViewDelegate, WCFinderLandScapeVideoInteractivePlayerViewDelegate, WCFinderFriendLikeToolbarViewDelegate, WCFinderPanelHotCommentViewDelegate>
{
    id <WCFinderHeadInfoViewDelegate><WCFinderFullToolbarViewDelegate><WCFinderLandScapeVideoDisplayViewDelegate> _delegate;
    UIView *_statusBarBackgroundView;
    WCFinderLandScapeVideoInteractivePlayerView *_interactivePlayerView;
    RichTextView *_descLabel;
    RichTextView *_feedTitleLabel;
    WCFinderPanelHotCommentView *_hotCommentView;
    UIView *_descInteractiveView;
    UIView *_containerView;
    WCFinderHeadInfoView *_headInfoView;
    WCFinderFullToolbarView *_toolBarView;
    WCFinderFriendLikeToolbarView *_friendLikeToolBarView;
    WCFinderFeedContentVM *_contentVM;
    WCFinderLandScapePlayerParam *_param;
    WCFinderLandScapeVideoDisplayViewInitParams *_setupParams;
}

+ (double)heightWithContentVM:(id)arg1 param:(id)arg2 width:(double)arg3 isBigCardStyle:(_Bool)arg4;
+ (_Bool)shouldShowFriendLikeToolbarViewWithContentVM:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLandScapeVideoDisplayViewInitParams *setupParams; // @synthesize setupParams=_setupParams;
@property(retain, nonatomic) WCFinderLandScapePlayerParam *param; // @synthesize param=_param;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderFriendLikeToolbarView *friendLikeToolBarView; // @synthesize friendLikeToolBarView=_friendLikeToolBarView;
@property(retain, nonatomic) WCFinderFullToolbarView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) WCFinderHeadInfoView *headInfoView; // @synthesize headInfoView=_headInfoView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *descInteractiveView; // @synthesize descInteractiveView=_descInteractiveView;
@property(retain, nonatomic) WCFinderPanelHotCommentView *hotCommentView; // @synthesize hotCommentView=_hotCommentView;
@property(retain, nonatomic) RichTextView *feedTitleLabel; // @synthesize feedTitleLabel=_feedTitleLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderLandScapeVideoInteractivePlayerView *interactivePlayerView; // @synthesize interactivePlayerView=_interactivePlayerView;
@property(retain, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(nonatomic) __weak id <WCFinderHeadInfoViewDelegate><WCFinderFullToolbarViewDelegate><WCFinderLandScapeVideoDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPanelHotComment:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickDescLabel;
- (void)onFinderLandScapeInteractiveViewNotifyVideoDidEndPlay;
- (void)onFinderLandScapeInteractiveViewContentMediaDidEndPlay;
- (void)onFinderLandScapeInteractiveViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (_Bool)shouldHiddenHeadInfoViewFollowBtn;
- (void)onFinderLandScapeInteractiveViewClickPlayNextVideoWithDataItem:(id)arg1;
- (id)finderLandScapeInteractiveViewGetNextPlayableDataItem;
- (void)onFinderLandScapeInteractiveViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewDidStartLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewEndPan;
- (void)onFinderLandScapeInteractiveViewStartPan;
- (void)onFinderLandScapeInteractiveViewClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletBtn;
- (void)onFinderLandScapeInteractiveViewClickReturnBtn;
- (void)onFinderLandScapeInteractiveViewClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickRotateBtn;
- (void)adjustLayoutInPoratialState:(_Bool)arg1;
- (void)adjustLayoutInPoratialState;
- (void)adjustPlayerViewLayoutInPortialState;
- (void)adjustLayoutInLandScapeState;
- (void)updateBulletState;
- (void)updateLikeToolStateWithContentVM:(id)arg1;
- (void)updateHotCommentUIWithContentVM:(id)arg1;
- (void)updateWithContentVM:(id)arg1 param:(id)arg2;
- (_Bool)pointIsOnPlayerArea:(struct CGPoint)arg1;
- (void)moveHeaderToolToBottom;
- (_Bool)canMoveHeaderToolToBottom;
- (void)moveHeaderToolToTop;
- (_Bool)canMoveHeaderToolToTop;
- (void)_moveReleatedViewWithY:(double)arg1;
- (void)moveHeaderToolWithY:(double)arg1;
- (double)foldMinBottom;
- (void)stopSpeedPlay;
- (void)setPlayerInteractiveEnable:(_Bool)arg1;
- (id)getPlayerViewSnapshot;
- (void)landScapeStatWillChange:(_Bool)arg1;
- (void)setupViewLandScapeState;
- (_Bool)isBigCardStyle;
- (void)setupViews;
- (void)setup;
- (void)resumeVideo;
- (void)pauseVideo;
- (id)getPlayerView;
- (_Bool)isPlayingVideo;
- (void)stopVideo;
- (void)playVideoWithStartTime:(double)arg1 isSilencePlay:(_Bool)arg2;
- (void)playVideo;
- (void)restorePlayerView:(id)arg1;
- (id)getPlayerViewAndClear;
- (void)restoreInteractiveView:(id)arg1;
- (id)getInteractiveView;
- (_Bool)isFriendLikeToolBarHidden;
- (void)changeToolBarHiddenState:(_Bool)arg1;
- (void)changeToolBarHiddenState;
- (void)reloadToolBar;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

