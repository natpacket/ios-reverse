//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveApplyConnectMicAudience;

@protocol MMLiveConnectMicExt <NSObject>

@optional
- (void)onLiveConnectMicAudienceMutedByAnchorStatusChanged:(_Bool)arg1;
- (void)onLiveFreeTalkFlagChanged:(_Bool)arg1;
- (void)onLiveConnectMicConditionSettingChanged:(unsigned long long)arg1;
- (void)onLiveCanApplyConnecteMicChanged:(_Bool)arg1;
- (void)onLiveUnConnectedMic:(MMLiveApplyConnectMicAudience *)arg1;
- (void)onLiveConnectedMic:(MMLiveApplyConnectMicAudience *)arg1;
@end

