//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DiscoverEntranceSettingAbstractCellHandler.h"

#import "MMWebViewDelegate-Protocol.h"

@class NSString;

@interface DiscoverEntranceSettingCellHandler_Search : DiscoverEntranceSettingAbstractCellHandler <MMWebViewDelegate>
{
}

- (void)onEntranceSwitchChanged:(id)arg1;
- (unsigned long long)settingEntranceSwitchType;
- (_Bool)isWeixinServiceForOversea;
- (unsigned long long)serviceAuthType;
- (_Bool)originalEntraceSwitchOn;
- (id)iconImage;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
