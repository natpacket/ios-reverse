//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DiscoverEntranceSettingSheetView, NSMutableArray, UISwitch;

@protocol DiscoverEntranceSettingSheetViewDelegate <NSObject>
- (void)onSheetDisppearWithSwitchChanged:(NSMutableArray *)arg1;
- (void)onSwitchChanged:(UISwitch *)arg1 switchType:(unsigned long long)arg2 sheetView:(DiscoverEntranceSettingSheetView *)arg3;
@end

