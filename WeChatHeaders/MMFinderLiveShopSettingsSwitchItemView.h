//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveShopSettingItemView.h"

@class UISwitch;

@interface MMFinderLiveShopSettingsSwitchItemView : MMFinderLiveShopSettingItemView
{
    UISwitch *_switchView;
    CDUnknownBlockType _onSwitchChange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onSwitchChange; // @synthesize onSwitchChange=_onSwitchChange;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
- (void)layoutSubviews;
- (void)onSwitchChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
