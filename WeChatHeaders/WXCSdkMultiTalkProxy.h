//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWXCVideoDataDelegate-Protocol.h"
#import "IWXTalkExt-Protocol.h"

@class NSString;

@interface WXCSdkMultiTalkProxy : NSObject <IWXTalkExt, IWXCVideoDataDelegate>
{
    NSString *_tmpUniqueID;
    NSString *_mUserName;
    long long _mUin;
}

- (void).cxx_destruct;
@property(nonatomic) long long mUin; // @synthesize mUin=_mUin;
@property(copy, nonatomic) NSString *mUserName; // @synthesize mUserName=_mUserName;
@property(copy, nonatomic) NSString *tmpUniqueID; // @synthesize tmpUniqueID=_tmpUniqueID;
- (void)onMultiTalkBannerChange:(id)arg1 WxGroupId:(id)arg2;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onDoScreenSharingSecurityCheck:(int)arg1 checkStatus:(int)arg2 fileMd5:(id)arg3;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onReceiveSubscribedVideoChangeMessage:(int)arg1;
- (void)onReceiveVideoMemberChangeMessage:(id)arg1 extArray:(id)arg2;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5 screenData:(_Bool)arg6;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)OnMuteStateChange:(_Bool)arg1;
- (void)OnSpeakerStateChange:(_Bool)arg1;
- (void)OnError:(id)arg1 errorType:(int)arg2 errorNo:(int)arg3 groupUserName:(id)arg4;
- (void)OnRoomMemberChange:(id)arg1;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)OnInviteWXTalkModeResult:(_Bool)arg1 errorType:(int)arg2 groupId:(id)arg3;
- (void)OnBeginStartDevice;
- (void)OnDeviceStartOK;
- (void)OnSelfAndOtherEntered;
- (void)OnReceiveOtherMemberTalkData;
- (void)OnDataConnectOK;
- (void)OnEnterTalkModeOK:(id)arg1;
- (void)OnCreateTalkModeOKWithGroupId:(id)arg1;
- (id)getWXCMultiTalkMemberListWithVoiceGroupMemList:(id)arg1;
- (id)getWXCMultiTalkGroupWithRoomData:(id)arg1;
- (void)onNotifyVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5 screenData:(_Bool)arg6;
- (long long)getCurMultiTalkUin;
- (id)getCurMultiTalkUserName;
- (id)genMultiTalkClientGroupId;
- (_Bool)isMultiTalkWorking;
- (_Bool)holdMultiTalk:(_Bool)arg1 holdType:(int)arg2;
- (int)engineDoMemberSelectForView:(id)arg1;
- (int)setNeedBigVideo:(_Bool)arg1 forUser:(id)arg2;
- (id)getMemberQualityInfoList:(id)arg1;
- (id)getTalkIngMember:(id)arg1;
- (_Bool)rejectMultiTalk:(id)arg1;
- (_Bool)exitCurMultiTalk:(id)arg1;
- (_Bool)addMultiTalkMemberToCurTalk:(id)arg1 wxGroupId:(id)arg2 addMemberList:(id)arg3;
- (_Bool)enterMultiTalkFromBanner:(id)arg1 routId:(int)arg2 roomId:(unsigned int)arg3 roomKey:(unsigned long long)arg4 wxGroupId:(id)arg5;
- (_Bool)enterCurMultiTalk:(id)arg1 routId:(int)arg2 isAnswerCall:(_Bool)arg3 wxGroupId:(id)arg4;
- (_Bool)startCreateMultiTalk:(id)arg1 wxGroupId:(id)arg2 memberList:(id)arg3;
- (void)setCurMuteTalkInfo:(id)arg1 uin:(long long)arg2;
- (int)ScreenEncAndSend:(char *)arg1 Length:(unsigned int)arg2 Format:(void *)arg3;
- (int)ScreenEncAndSend:(void *)arg1;
- (int)VideoEncAndSend:(char *)arg1 Length:(unsigned int)arg2 Format:(void *)arg3 resolutionMode:(int)arg4 cameraMode:(int)arg5;
- (int)VideoEncAndSend:(void *)arg1;
- (_Bool)closeVideoRecvAndSend;
- (int)getMemberIdByUserName:(id)arg1;
- (_Bool)subscribeGeneralVideoForUserList:(id)arg1;
- (_Bool)subscribeVideoForUser:(id)arg1 isSharedScreenData:(_Bool)arg2 isCancel:(_Bool)arg3;
- (_Bool)setScreenSharingStatus:(int)arg1 fileMd5:(id)arg2 fileId:(id)arg3;
- (_Bool)setVideo:(_Bool)arg1;
- (_Bool)setMute:(_Bool)arg1;
- (_Bool)getSpeakerStatus;
- (_Bool)setSpeaker:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

