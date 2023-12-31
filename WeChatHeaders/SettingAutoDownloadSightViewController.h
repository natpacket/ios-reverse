//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class DelaySwitchSettingLogic, MMTableViewInfo;

@interface SettingAutoDownloadSightViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    unsigned int curImgSettingValue;
    long long _from;
    DelaySwitchSettingLogic *_delaySwitchLogic;
    unsigned long long _settingViewType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long settingViewType; // @synthesize settingViewType=_settingViewType;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic; // @synthesize delaySwitchLogic=_delaySwitchLogic;
@property(readonly, nonatomic) long long from; // @synthesize from=_from;
- (void)reportOperate:(long long)arg1;
- (void)voipDoubleLinkSettingChanged:(id)arg1;
- (void)silentDownloadChanged;
- (void)saveIntelligentImgChanged:(id)arg1;
- (void)saveVideoAutoPlayChanged:(id)arg1;
- (void)saveVideoToLibraryChanged:(id)arg1;
- (void)savePhotoToLibraryChanged:(id)arg1;
- (long long)checkMarkOrNoneWithOption:(unsigned int)arg1 toMatch:(unsigned int)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onReturn;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 from:(long long)arg2;
- (id)init;

@end

