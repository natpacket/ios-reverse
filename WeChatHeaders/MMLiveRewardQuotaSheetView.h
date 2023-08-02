//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "ILinkEventExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMUIButton, MMUILabel, NSString, RichTextView, UILabel, UIView, UIVisualEffectView;
@protocol MMLiveRewardQuotaSheetViewDelegate;

@interface MMLiveRewardQuotaSheetView : MMPageSheetBaseView <UIGestureRecognizerDelegate, ILinkEventExt>
{
    _Bool _wecoinBalanceUpdated;
    id <MMLiveRewardQuotaSheetViewDelegate> _operationDelegate;
    NSString *_consumeQuotaVerifyUrl;
    MMFinderLiveRewardGiftItem *_giftItem;
    FinderLiveRewardGiftExtInfo *_rewardExtInfo;
    long long _currentBalance;
    CDUnknownBlockType _confirmedCallback;
    UIView *_contentView;
    UILabel *_titleLabel;
    MMUILabel *_descLabel;
    RichTextView *_settingGuideLabel;
    UIVisualEffectView *_visualEfView;
    MMUIButton *_actionButton;
    MMUIButton *_cancelButton;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _rewardQuota;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewardQuota; // @synthesize rewardQuota=_rewardQuota;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) RichTextView *settingGuideLabel; // @synthesize settingGuideLabel=_settingGuideLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType confirmedCallback; // @synthesize confirmedCallback=_confirmedCallback;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long currentBalance; // @synthesize currentBalance=_currentBalance;
@property(retain, nonatomic) FinderLiveRewardGiftExtInfo *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) NSString *consumeQuotaVerifyUrl; // @synthesize consumeQuotaVerifyUrl=_consumeQuotaVerifyUrl;
@property(nonatomic) __weak id <MMLiveRewardQuotaSheetViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickCancelButton:(id)arg1;
- (void)onActionButtonClicked;
- (id)liveTask;
- (_Bool)faceVerify;
@property(readonly, nonatomic) NSString *cancelButtonText;
@property(readonly, nonatomic) NSString *actionButtonText;
@property(readonly, nonatomic) NSString *settingGuide;
@property(readonly, nonatomic) NSString *desc;
@property(readonly, nonatomic) NSString *title;
- (void)showPageSheet;
- (void)hidePageSheet;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 rewardQuota:(unsigned long long)arg2 giftItem:(id)arg3 rewardExtInfo:(id)arg4 currentBalance:(long long)arg5 wecoinBalanceUpdated:(_Bool)arg6 consumeQuotaVerifyUrl:(id)arg7 confirmedCallback:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
