//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveBaseTask, MMLiveSEIConnectMicMsg, NSArray, NSString;

@protocol MMLiveBaseTaskDelegate <NSObject>

@optional
- (void)onLiveTask:(MMLiveBaseTask *)arg1 otherConnectMicAnchor:(NSString *)arg2 anchorSeiStatus:(unsigned int)arg3;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 isPureAudioModeChanged:(_Bool)arg2;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 SEIMicMsgInfoUpdated:(MMLiveSEIConnectMicMsg *)arg2 listChanged:(_Bool)arg3;
- (void)onLiveTask:(MMLiveBaseTask *)arg1 SEIConnectMicUserInfoListUpdated:(NSArray *)arg2 listChanged:(_Bool)arg3;
@end

