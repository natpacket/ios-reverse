//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMLiveHalfScreenTitleBarViewDelegate-Protocol.h"
#import "MMLiveRewardQuotaSettingViewDelegate-Protocol.h"

@class MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMMLiveRewardQuotaSettingDetailCell, MMUILabel, NSString, UISwitch, UIView;
@protocol MMLiveRewardQuotaSettingSheetViewDelegate;

@interface MMLiveRewardQuotaSettingSheetView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMLiveRewardQuotaSettingViewDelegate>
{
    id <MMLiveRewardQuotaSettingSheetViewDelegate> _operationDelegate;
    CDUnknownBlockType _closedBlock;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMLiveHalfScreenTitleBarView *_titleBar;
    UIView *_topSeparatorLine;
    UISwitch *_settingSwitch;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIView *_footerSeparatorLine;
    MMMLiveRewardQuotaSettingDetailCell *_detailCell;
    unsigned long long _rewardQuota;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewardQuota; // @synthesize rewardQuota=_rewardQuota;
@property(retain, nonatomic) MMMLiveRewardQuotaSettingDetailCell *detailCell; // @synthesize detailCell=_detailCell;
@property(retain, nonatomic) UIView *footerSeparatorLine; // @synthesize footerSeparatorLine=_footerSeparatorLine;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UISwitch *settingSwitch; // @synthesize settingSwitch=_settingSwitch;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType closedBlock; // @synthesize closedBlock=_closedBlock;
@property(nonatomic) __weak id <MMLiveRewardQuotaSettingSheetViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)updateRewardConsumptionQuota;
- (double)contentViewHeight;
- (id)liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onMMLiveRewardQuotaSettingViewChooseRewardQuota:(unsigned int)arg1;
- (void)onDetailCellTapped;
- (void)onIntroductionButtonClicked;
- (void)onSwitchChanged:(id)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)showPageSheet;
- (void)hidePageSheet;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

