//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveHalfScreenPanelView.h"

#import "MMLiveHalfScreenTitleBarViewDelegate-Protocol.h"
#import "MMPageSheetAdapterDelegate-Protocol.h"

@class MMFinderLiveShopSettingsSelectItemView, MMFinderLiveShopSettingsSwitchItemView, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMPageSheetAdapter, NSArray, NSDictionary, NSString, UIView;
@protocol MMFinderLiveShopSettingsViewDelegate;

@interface MMFinderLiveShopSettingsView : MMLiveHalfScreenPanelView <MMPageSheetAdapterDelegate, MMLiveHalfScreenTitleBarViewDelegate>
{
    id <MMFinderLiveShopSettingsViewDelegate> _delegate;
    long long _entry;
    UIView *_backgroundView;
    MMLiveHalfScreenTitleBarView *_titleBar;
    MMPageSheetAdapter *_pageSheetAdapter;
    long long _replaySwitch;
    long long _replayType;
    MMFinderLiveShopSettingsSwitchItemView *_promoteRecordSwitchView;
    NSDictionary *_promoteTypeViews;
    MMFinderLiveShopSettingsSelectItemView *_flashSaleOrderView;
    NSArray *_settingViews;
    NSArray *_separatorLines;
    long long _disappearReason;
}

- (void).cxx_destruct;
@property(nonatomic) long long disappearReason; // @synthesize disappearReason=_disappearReason;
@property(retain, nonatomic) NSArray *separatorLines; // @synthesize separatorLines=_separatorLines;
@property(retain, nonatomic) NSArray *settingViews; // @synthesize settingViews=_settingViews;
@property(retain, nonatomic) MMFinderLiveShopSettingsSelectItemView *flashSaleOrderView; // @synthesize flashSaleOrderView=_flashSaleOrderView;
@property(retain, nonatomic) NSDictionary *promoteTypeViews; // @synthesize promoteTypeViews=_promoteTypeViews;
@property(retain, nonatomic) MMFinderLiveShopSettingsSwitchItemView *promoteRecordSwitchView; // @synthesize promoteRecordSwitchView=_promoteRecordSwitchView;
@property(nonatomic) long long replayType; // @synthesize replayType=_replayType;
@property(nonatomic) long long replaySwitch; // @synthesize replaySwitch=_replaySwitch;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long entry; // @synthesize entry=_entry;
@property(nonatomic) __weak id <MMFinderLiveShopSettingsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportAnchorAction:(long long)arg1 replaySwitch:(long long)arg2 replayType:(long long)arg3;
- (void)updateReplaySwitch:(long long)arg1 replayType:(long long)arg2;
- (void)updateItems;
- (void)onFlashSaleOrderClicked;
- (id)liveTask;
- (void)onReplayTypeValueChangedTo:(long long)arg1;
- (void)onReplaySwitchValueChangedTo:(_Bool)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)layoutHalfScreenContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)loadSettings;
- (void)initSettingItemViews;
- (void)initViews;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 entry:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId;

@end

