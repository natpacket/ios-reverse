//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveTask.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class MMFinderLiveActivityTaskId, MMFinderLiveBackgroundMusicLogic, MMFinderLiveEventInfo, MMFinderLiveWinterOlympicTorchInfo, MMFinderLiveWinterOlympicView, NSString;

@interface MMFinderLiveActivityTask : MMFinderLiveTask <AVAudioPlayerDelegate>
{
    _Bool _isLiveCdnPlayerMuted;
    unsigned int _activityResVersion;
    MMFinderLiveWinterOlympicTorchInfo *_torchInfo;
    NSString *_activityVerifyInfo;
    unsigned long long _eventType;
    MMFinderLiveEventInfo *_activityInfo;
    MMFinderLiveBackgroundMusicLogic *_backgroundMusicLogic;
}

+ (id)activityResFilePathForDefaultVersion:(id)arg1 activityId:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLiveCdnPlayerMuted; // @synthesize isLiveCdnPlayerMuted=_isLiveCdnPlayerMuted;
@property(retain, nonatomic) MMFinderLiveBackgroundMusicLogic *backgroundMusicLogic; // @synthesize backgroundMusicLogic=_backgroundMusicLogic;
@property(retain, nonatomic) MMFinderLiveEventInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *activityVerifyInfo; // @synthesize activityVerifyInfo=_activityVerifyInfo;
@property(nonatomic) unsigned int activityResVersion; // @synthesize activityResVersion=_activityResVersion;
@property(retain, nonatomic) MMFinderLiveWinterOlympicTorchInfo *torchInfo; // @synthesize torchInfo=_torchInfo;
- (void)checkAndRefreshMusic:(_Bool)arg1;
- (void)checkShowLiveStreamValueChangeWithLastValue:(_Bool)arg1;
- (void)updateActivityInfoWithLiveEventInfo:(id)arg1;
- (void)checkAndUpdateLiveRoleType;
- (id)activityResFilePath:(id)arg1;
- (void)updateMusicList:(id)arg1;
- (void)updateActivityInfoWithFinderLiveAudienceEventInfo:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveWinterOlympicView *winterOlympicsLiveView;
@property(readonly, nonatomic) _Bool isWinterOlympicsLive;
@property(readonly, nonatomic) NSString *liveEventToken;
@property(readonly, nonatomic) _Bool showLiveStream;
@property(readonly, nonatomic) Class currentLiveViewControllerClass;
@property(readonly, nonatomic) Class currentLiveViewClass;
@property(readonly, nonatomic) unsigned int activityId;
@property(readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
- (_Bool)isActivityLiveTask;
- (_Bool)unmuteCdnPlayer;
- (_Bool)muteCdnPlayer;
- (_Bool)innerResumeLiveForAudience;
- (_Bool)innerPauseLiveForAudience;
- (_Bool)hasAudienceBackgroundMusic;
- (_Bool)shouldForbidLandScapeForIphone;
- (void)generateMainCdnPlayerItem;
- (void)switchCdnOrTrtcPlay:(_Bool)arg1;
- (_Bool)startPreviewCdnPlay;
- (void)updateJoinLiveContext:(id)arg1;
- (id)createLiveViewWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (id)createNewTaskId;
- (_Bool)isLiveClaritySwitchEnabled;
- (_Bool)isLiveClearingGiftEffectEnabled;
- (_Bool)isLivePictureInPictureEnabled;
- (_Bool)isLiveAirPlayEnabled;
- (_Bool)isLiveHandoffEnabled;
- (_Bool)isWatchLiveWithoutLoginEnabled;
- (_Bool)isLiveIdentitySwitchEnabled;
- (_Bool)isLiveConnectMicEnabled;
- (_Bool)isLiveGameTeamUpSwitchButtonEnable;
- (_Bool)isLiveGameInTeamUp;
- (_Bool)isLiveGameJoinTeamEnabled;
- (_Bool)isLiveShoppingAvailable;
- (_Bool)isLiveEnableReward;
- (_Bool)isAudienceLiveRewardEnable;
- (id)initWithFinderDataItem:(id)arg1;
- (void)showAlertInLive:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)showAlertInLive:(id)arg1;
- (void)showAlert:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)showAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

