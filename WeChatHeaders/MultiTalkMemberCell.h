//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MultiTalkMemberExt-Protocol.h"
#import "MultiTalkMemberWaittingExt-Protocol.h"

@class CContact, MultiTalkHDHeadView, MultiTalkMuteIconView, MultiTalkSharingScreenTipsView, NSMutableArray, NSString, UIColor, UIImageView, UILabel, WCVideoRender;

@interface MultiTalkMemberCell : UIView <MultiTalkMemberExt, MultiTalkMemberWaittingExt>
{
    _Bool _muteIconHidden;
    _Bool _busyLabelHidden;
    _Bool _highlighted;
    _Bool _renderDisplayed;
    _Bool _screenSharingTipsEnable;
    _Bool _isTalking;
    _Bool _disableVirtualBackground;
    unsigned int _talkingQuality;
    CDUnknownBlockType _clickActionCallback;
    WCVideoRender *_render;
    CContact *_contact;
    UIView *_backgroundMaskView;
    UIColor *_maskColor;
    MultiTalkHDHeadView *_headImageView;
    UIImageView *_talkingImageView;
    UIImageView *_waittingImageView;
    unsigned long long _waittingImageListIndex;
    NSMutableArray *_waittingImageList;
    UIImageView *_netQualityImageView;
    UILabel *_busyLabel;
    MultiTalkMuteIconView *_muteIconView;
    MultiTalkSharingScreenTipsView *_screenSharingTipsView;
    UIView *_renderView;
    UIView *_clickView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *clickView; // @synthesize clickView=_clickView;
@property(nonatomic) _Bool disableVirtualBackground; // @synthesize disableVirtualBackground=_disableVirtualBackground;
@property(nonatomic) unsigned int talkingQuality; // @synthesize talkingQuality=_talkingQuality;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(nonatomic) _Bool screenSharingTipsEnable; // @synthesize screenSharingTipsEnable=_screenSharingTipsEnable;
@property(nonatomic) _Bool renderDisplayed; // @synthesize renderDisplayed=_renderDisplayed;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) MultiTalkSharingScreenTipsView *screenSharingTipsView; // @synthesize screenSharingTipsView=_screenSharingTipsView;
@property(retain, nonatomic) MultiTalkMuteIconView *muteIconView; // @synthesize muteIconView=_muteIconView;
@property(retain, nonatomic) UILabel *busyLabel; // @synthesize busyLabel=_busyLabel;
@property(retain, nonatomic) UIImageView *netQualityImageView; // @synthesize netQualityImageView=_netQualityImageView;
@property(retain, nonatomic) NSMutableArray *waittingImageList; // @synthesize waittingImageList=_waittingImageList;
@property(nonatomic) unsigned long long waittingImageListIndex; // @synthesize waittingImageListIndex=_waittingImageListIndex;
@property(retain, nonatomic) UIImageView *waittingImageView; // @synthesize waittingImageView=_waittingImageView;
@property(retain, nonatomic) UIImageView *talkingImageView; // @synthesize talkingImageView=_talkingImageView;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCVideoRender *render; // @synthesize render=_render;
@property(copy, nonatomic) CDUnknownBlockType clickActionCallback; // @synthesize clickActionCallback=_clickActionCallback;
@property(nonatomic) _Bool busyLabelHidden; // @synthesize busyLabelHidden=_busyLabelHidden;
@property(nonatomic) _Bool muteIconHidden; // @synthesize muteIconHidden=_muteIconHidden;
- (void)onMultiTalkMemberWaittingTimerCheckWithIndex:(unsigned long long)arg1;
- (void)onMultiTalkMemberQualityChange:(unsigned int)arg1;
- (void)onMultiTalkMemberSilent;
- (void)onMultiTalkMemberTalking;
- (void)onTapWithSender:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateMaskColorWithIndex:(unsigned long long)arg1 membersCount:(unsigned long long)arg2;
- (void)updateContact:(id)arg1;
- (void)updateRender:(id)arg1;
- (void)updateScreenSharingTipsEnable:(_Bool)arg1;
- (void)updateRenderDisplayed:(_Bool)arg1;
- (_Bool)getRenderDisplayed;
- (void)updateHighlighted:(_Bool)arg1;
- (void)layoutClickView;
- (void)layoutRenderView;
- (void)layoutScreenSharingTipsView;
- (void)layoutMultiTalkMuteIconView;
- (void)layoutBusyLabel;
- (void)layoutNetQualityImageView;
- (void)layoutTalkingImageView;
- (void)layoutWaittingImageView;
- (void)layoutHeadImageView;
- (void)layoutBackgroundMaskView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

