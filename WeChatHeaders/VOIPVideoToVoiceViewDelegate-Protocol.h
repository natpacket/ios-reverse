//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol VOIPVideoToVoiceViewDelegate <NSObject>
- (_Bool)getIsVoiceMode;
- (_Bool)getIfThisTalkIlink;
- (void)ReportVoIPButtonStatus:(NSString *)arg1 dialStatus:(int)arg2 audioData:(NSString *)arg3;

@optional
- (int)videoToVoiceViewRecentStatusUserSexType;
- (id)videoToVoiceViewRecentStatusModel;
- (NSString *)videoToVoiceViewRecentStatusUserName;
- (_Bool)isVideoToVoiceViewRecentStatusEnable;
- (_Bool)getVoiceViewSpeakerMode;
- (_Bool)onVoiceViewIsVoipTalking;
- (void)onClickMinimizeButton;
- (_Bool)isInitWithVideoMode;
- (void)onVoiceViewCloseSpeaker;
- (void)onVoiceViewOpenSpeaker;
- (void)onVoiceViewCloseMic;
- (void)onVoiceViewOpenMic;
- (void)onVoiceViewHangup;
@end
