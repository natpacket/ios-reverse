//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

@class MMFinderLiveTaskId, MMTableViewInfo, UIView;

@interface MMFinderLiveSettingPanel : MMPageSheetBaseView
{
    CDUnknownBlockType _pipSwitchChangeCallback;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMTableViewInfo *_settingTableViewInfo;
}

+ (_Bool)hasSettingEntranceForLive:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *settingTableViewInfo; // @synthesize settingTableViewInfo=_settingTableViewInfo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType pipSwitchChangeCallback; // @synthesize pipSwitchChangeCallback=_pipSwitchChangeCallback;
- (void)pageSheetDidDisappear;
- (void)onPIPSettingSwitch:(id)arg1;
- (void)leftButtonAction;
- (void)addPIPSwitchCellInSection:(id)arg1;
- (void)reloadSettingTable;
- (void)layoutSettingTable;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)getCurrentLeftButton;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

@end

