//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "MMWebImageViewDelegate-Protocol.h"
#import "ServiceNotifyMsgMgrExt-Protocol.h"

@class MMUIButton, MMUILabel, MMWebImageView, NSString, NotifyMessageViewModel, UILabel, UIView, WCFinderLiveInfo, WCFinderLiveNowView;

@interface TemplateNotifyMessageCellView : BaseMessageCellView <MMWebImageViewDelegate, ServiceNotifyMsgMgrExt>
{
    _Bool _liveImageLoaded;
    WCFinderLiveInfo *_liveInfo;
    MMUILabel *_blockSloganLabel;
    MMWebImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    MMWebImageView *_authIconImageView;
    MMUIButton *_headerMenuButton;
    UIView *_lineView;
    UILabel *_titleLabel;
    UIView *_liveMaskView;
    WCFinderLiveNowView *_logoView;
    WCFinderLiveNowView *_liveMaskTipsView;
    MMWebImageView *_liveImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool liveImageLoaded; // @synthesize liveImageLoaded=_liveImageLoaded;
@property(retain, nonatomic) MMWebImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) WCFinderLiveNowView *liveMaskTipsView; // @synthesize liveMaskTipsView=_liveMaskTipsView;
@property(retain, nonatomic) WCFinderLiveNowView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *liveMaskView; // @synthesize liveMaskView=_liveMaskView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUIButton *headerMenuButton; // @synthesize headerMenuButton=_headerMenuButton;
@property(retain, nonatomic) MMWebImageView *authIconImageView; // @synthesize authIconImageView=_authIconImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMUILabel *blockSloganLabel; // @synthesize blockSloganLabel=_blockSloganLabel;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void)onNotifyInfoChangeWithMsg:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isFinderLiveFansGroupLiveMsg;
- (_Bool)isFinderGameLiveRefundMsg;
- (_Bool)isFinderLiveTeamUpMsg;
- (void)onLiveInfoUpdated;
- (void)complaintEntry;
- (_Bool)shouldShowComplaintEntry;
- (_Bool)shouldShowMoreButton;
- (void)onTouchUpInside;
- (void)onMoreButton:(id)arg1;
- (void)updateLiveStatus;
- (void)refreshLiveMaskEffect;
- (id)genHeaderMenuButton;
- (id)genAuthIconImageView;
- (id)genAvatarImageView;
- (void)initLiveImageView;
- (id)genTitleLabel;
- (id)genblockSloganLabel;
- (struct CGSize)muteSloganSize;
- (id)muteSloganFont;
- (id)muteSloganStr;
- (id)genNickNameLabel;
- (id)genLineView;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3 maxLine:(unsigned long long)arg4;
- (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)genDisplayViewWithItemInfo:(id)arg1 longestKeyLabelWidth:(double)arg2 maxDisplayViewWidth:(double)arg3;
- (id)genDisplayViewWithExtItemInfo:(id)arg1 maxDisplayViewWidth:(double)arg2;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NotifyMessageViewModel *viewModel;

@end

