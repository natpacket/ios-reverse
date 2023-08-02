//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAudioSenderExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IRemoteControlCheckExt-Protocol.h"
#import "MonoServiceLogicExt-Protocol.h"

@class MMTimer, NSString;
@protocol RecordControllerDelegate;

@interface RecordController : MMObject <MonoServiceLogicExt, IAudioSenderExt, IRemoteControlCheckExt, IMsgExt>
{
    MMTimer *m_TimeoutTimer;
    id <RecordControllerDelegate> m_delegate;
    _Bool m_bRecording;
    _Bool m_bRecordEnabled;
    unsigned int m_uiTmpRecordID;
    _Bool m_bRemoteControl;
    unsigned int m_currentTmpFormat;
    double m_iLastMsgSentTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiTmpRecordID; // @synthesize m_uiTmpRecordID;
@property(nonatomic) __weak id <RecordControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)dealloc;
- (void)Reset;
- (void)onVoiceMsgSent:(id)arg1;
- (void)OnSendError:(id)arg1 ErrNo:(int)arg2;
- (void)OnMsgSent:(id)arg1;
- (void)OnAddMsg:(id)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnRecordStartFail:(id)arg1;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (_Bool)canRemoteRecord;
- (void)interruptRecording;
- (void)stopRecording_notification:(id)arg1;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)CancelRecording;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (void)StopRecording;
- (void)StopRecordingInternal:(id)arg1;
- (void)StopRecordingInternal;
- (_Bool)StartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2 UserInfo:(id)arg3;
- (void)StartTmpRecording;
- (void)StartTmpRecording:(unsigned int)arg1;
- (void)StartTmpRecordInternal;
- (void)StartRecordingInternal:(id)arg1;
- (void)RecordingTimeOutCounting;
- (void)TooLongTips;
- (void)TooShortTips;
- (void)ResetStateWithNotifyResetTips:(id)arg1;
- (void)setButtonHighlighted:(_Bool)arg1;
- (_Bool)isRecording;
- (id)init;
- (void)UnRegister;
- (void)Register;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
