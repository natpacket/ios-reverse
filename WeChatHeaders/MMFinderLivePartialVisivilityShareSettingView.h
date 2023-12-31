//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveVisivilityShareSettingView.h"

@class MMFinderLivePartialVisivilitySettingInfo;

@interface MMFinderLivePartialVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView
{
    MMFinderLivePartialVisivilitySettingInfo *_partialSettingInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePartialVisivilitySettingInfo *partialSettingInfo; // @synthesize partialSettingInfo=_partialSettingInfo;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (void)selectVisibleContactsFromRecentSessions;
- (id)getCustomViewForCreateVisibleFileList;
- (id)getRightViewForVisibleUserFileListCell:(double)arg1;
- (id)getRightViewByCurrentVisibleUsers:(double)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)updateConfirmButtonEnabled;
- (void)updateSettingInfo:(id)arg1;
- (void)reloadTableData;
- (double)getContentHeight;
- (id)navTitle;
- (void)initSettingInfo:(id)arg1;
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(_Bool)arg3 rootVC:(id)arg4;

@end

