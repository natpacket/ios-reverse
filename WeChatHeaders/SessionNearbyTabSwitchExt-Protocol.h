//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SessionNearbyTabSwitchExt <NSObject>

@optional
- (void)onNearbyLifeSubTabDisappear:(unsigned long long)arg1;
- (void)onNearbyLifeSubTabAppear:(unsigned long long)arg1;
- (void)onNearbyLifeDisappear;
- (void)onNearbyLifeAppear;
- (void)onNearbyLiveSubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyLiveSubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyTabDisappear:(unsigned long long)arg1;
- (void)onNearbyTabAppear:(unsigned long long)arg1;
@end
