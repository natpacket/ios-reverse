//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderAdBannerViewDelegate-Protocol.h"
#import "WCFinderHotSpotBannerViewDelegate-Protocol.h"
#import "WCFinderJumpBigButtonDelegate-Protocol.h"
#import "WCFinderJumpInfoAnimationViewDelegate-Protocol.h"
#import "WCFinderJumpInfoBubbleViewDelegate-Protocol.h"
#import "WCFinderJumpInfoButtonDelegate-Protocol.h"
#import "WCFinderJumpInfoCardDelegate-Protocol.h"
#import "WCFinderJumpInfoCombinationViewDelegate-Protocol.h"
#import "WCFinderJumpInfoHardAdViewDelegate-Protocol.h"
#import "WCFinderPanelCollectionViewDelegate-Protocol.h"
#import "WCFinderTLRedCoverBubbleViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIColor, UIFont;
@protocol WCFinderJumpInfoPanelViewDelegate;

@interface WCFinderJumpInfoPanelView : UIView <WCFinderAdBannerViewDelegate, WCFinderHotSpotBannerViewDelegate, WCFinderPanelCollectionViewDelegate, WCFinderTLRedCoverBubbleViewDelegate, WCFinderJumpBigButtonDelegate, WCFinderJumpInfoAnimationViewDelegate, WCFinderJumpInfoButtonDelegate, WCFinderJumpInfoHardAdViewDelegate, WCFinderJumpInfoCardDelegate, WCFinderJumpInfoBubbleViewDelegate, WCFinderJumpInfoCombinationViewDelegate>
{
    _Bool _enableClick;
    id <WCFinderJumpInfoPanelViewDelegate> _delegate;
    long long _showPosition;
    UIFont *_textFont;
    UIColor *_textNormalColor;
    double _bannerPadding;
    UIColor *_disableIconColor;
    UIColor *_disableTextColor;
    double _maxWidth;
    NSMutableArray *_jumpInfoViewArray;
    unsigned long long _startExposeTime;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startExposeTime; // @synthesize startExposeTime=_startExposeTime;
@property(retain, nonatomic) NSMutableArray *jumpInfoViewArray; // @synthesize jumpInfoViewArray=_jumpInfoViewArray;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIColor *disableTextColor; // @synthesize disableTextColor=_disableTextColor;
@property(retain, nonatomic) UIColor *disableIconColor; // @synthesize disableIconColor=_disableIconColor;
@property(nonatomic) _Bool enableClick; // @synthesize enableClick=_enableClick;
@property(nonatomic) double bannerPadding; // @synthesize bannerPadding=_bannerPadding;
@property(retain, nonatomic) UIColor *textNormalColor; // @synthesize textNormalColor=_textNormalColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long showPosition; // @synthesize showPosition=_showPosition;
@property(nonatomic) __weak id <WCFinderJumpInfoPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickRedCoverBubbleView:(id)arg1;
- (void)onClickClipVideoTemplate;
- (void)onClickEnterLiving:(id)arg1;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(id)arg1;
- (void)onClickHotSpotView:(id)arg1;
- (void)onClickAdBannerView:(id)arg1;
- (void)onJumpInfoButtonDidClick:(id)arg1;
- (id)jumpInfoViewWithJumpInfo:(id)arg1 subStyle:(id)arg2;
- (void)onFinderJumpInfoCombinationViewDidClick:(id)arg1;
- (void)onFinderJumpInfoBubbleViewDelegateDidClick:(id)arg1;
- (void)onFinderJumpInfoCardDidClick:(id)arg1;
- (void)onFinderJumpInfoHardAdViewDidClick:(id)arg1;
- (void)onFinderJumpInfoHardAdView:(id)arg1 needChangeToStyle:(unsigned long long)arg2;
- (void)finderJumpInfoView:(id)arg1 needChangeToStyleWithIndex:(unsigned long long)arg2;
- (void)finderJumpInfoView:(id)arg1 changeToShow:(_Bool)arg2;
- (id)backgroundColorWithJumpInfo:(id)arg1;
- (void)onFinderDidClickBigBtn:(id)arg1;
- (void)hiddenJumpBigFollowBtn:(id)arg1;
- (void)onFinderShowJumpBigFollowBtn:(id)arg1;
- (void)onClickCollectionDesc;
- (void)liveFeedBubbleViewShowDetailClick:(id)arg1 username:(id)arg2;
- (void)liveFeedBubbleViewClick:(id)arg1 username:(id)arg2;
- (void)onPanelViewShowStateChanged;
- (_Bool)isJumpInfoArrayChanged:(id)arg1;
- (_Bool)needHighlightBigButton:(id)arg1;
- (void)updateLayout;
- (void)setupSubviewLayout:(id)arg1;
- (unsigned long long)getLivingIconObjectId;
- (unsigned long long)getLivingIconLiveId;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateCollectionBubbleWith:(id)arg1;
- (void)updateIsLivingWithTitle:(id)arg1 subTitle:(id)arg2 livingDataItem:(id)arg3;
- (void)updateVideoTemplateIsCameraTemplate:(_Bool)arg1;
- (void)updateFeedAppointmentWith:(id)arg1;
- (void)updateLiveAppointmentWith:(id)arg1;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)completePlayAction;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayStateChanged:(_Bool)arg1;
- (void)addJumpInfoViewWithJumpInfo:(id)arg1;
- (void)updateWithJumpInfoArray:(id)arg1;
- (id)feedBubbleViewWithOperatingType:(unsigned long long)arg1;
- (unsigned long long)firstOperatingType;
- (id)jumpInfoViewWithBusinessType:(long long)arg1;
- (void)resetReuseState;
- (id)initWithShowPosition:(long long)arg1 maxWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

