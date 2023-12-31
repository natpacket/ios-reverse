//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFinderLiveCreateLotteryViewModelDelegate-Protocol.h"
#import "WCFinderLiveStartLotteryViewControllerDelegate-Protocol.h"

@class CContact, FinderJumpInfo, FinderLiveNoticeInfo, FinderLivePromptInfo, FinderLiveStreamDecor, FinderLiveTagInfo, MMFinderLiveAudioModeBackgroundUploadModel, MMFinderLiveCreateLotteryViewModel, MMLiveTaskId, NSArray, NSData, NSMutableArray, NSString, UIImage, UIViewController, WCFinderDataItem, WCFinderLiveShareItem, WCLocationInfo;

@interface WCFinderStarterLiveViewModel : NSObject <MMFinderLiveCreateLotteryViewModelDelegate, WCFinderLiveStartLotteryViewControllerDelegate>
{
    _Bool _isMemberFree;
    unsigned int _chargeUnitPriceInWecoin;
    unsigned int _trialTimeHour;
    unsigned int _trialTimeMinute;
    unsigned int _maxVisibilityChatroomCount;
    unsigned int _maxVisibilityFriendContactCount;
    int _liveMode;
    MMLiveTaskId *_liveTaskId;
    WCFinderLiveShareItem *_shareItem;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    FinderLiveTagInfo *_tagInfo;
    long long _visibilityMode;
    long long _chargeFlag;
    long long _purchaseLivePreviewType;
    NSMutableArray *_freeOfChargeUsernameList;
    NSMutableArray *_freeOfChargeChatroomIdList;
    NSArray *_fullFreeOfChargeContactList;
    NSArray *_selectedFreeRosterList;
    UIImage *_selfHeadImg;
    NSString *_selfHeadImgPath;
    unsigned long long _lastGoodsCount;
    MMFinderLiveAudioModeBackgroundUploadModel *_audioModeBackgroundUploadModel;
    CContact *_groupContact;
    NSArray *_visibilityFileList;
    long long _lastSelectMode;
    FinderLivePromptInfo *_promptInfo;
    FinderJumpInfo *_opPromptInfo;
    unsigned long long _action;
    FinderLiveStreamDecor *_liveDecor;
    CDUnknownBlockType _noticeInfoUpdatedCallback;
    UIImage *_coverImageOrigin;
    UIImage *_coverImage16Vs9;
    UIImage *_coverImage4Vs3;
    WCFinderDataItem *_dataItem;
    WCLocationInfo *_poiInfo;
    NSArray *_liveNoticeList;
    FinderLiveNoticeInfo *_normalNoticeInfo;
    FinderLiveNoticeInfo *_memberNoticeInfo;
    NSMutableArray *_visibilityFileIdLists;
    NSArray *_visibilityChatRoomIdList;
    NSArray *_visibilityUsernameList;
    NSData *_spamCheckInfo;
    MMFinderLiveCreateLotteryViewModel *_createLotteryViewModel;
    NSMutableArray *_lotteryArray;
    UIViewController *_liveStarterVC;
    UIViewController *_gameLiveStarterVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *gameLiveStarterVC; // @synthesize gameLiveStarterVC=_gameLiveStarterVC;
@property(nonatomic) __weak UIViewController *liveStarterVC; // @synthesize liveStarterVC=_liveStarterVC;
@property(retain, nonatomic) NSMutableArray *lotteryArray; // @synthesize lotteryArray=_lotteryArray;
@property(retain, nonatomic) MMFinderLiveCreateLotteryViewModel *createLotteryViewModel; // @synthesize createLotteryViewModel=_createLotteryViewModel;
@property(retain, nonatomic) NSData *spamCheckInfo; // @synthesize spamCheckInfo=_spamCheckInfo;
@property(nonatomic) _Bool isMemberFree; // @synthesize isMemberFree=_isMemberFree;
@property(retain, nonatomic) NSArray *visibilityUsernameList; // @synthesize visibilityUsernameList=_visibilityUsernameList;
@property(retain, nonatomic) NSArray *visibilityChatRoomIdList; // @synthesize visibilityChatRoomIdList=_visibilityChatRoomIdList;
@property(retain, nonatomic) NSMutableArray *visibilityFileIdLists; // @synthesize visibilityFileIdLists=_visibilityFileIdLists;
@property(retain, nonatomic) FinderLiveNoticeInfo *memberNoticeInfo; // @synthesize memberNoticeInfo=_memberNoticeInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo *normalNoticeInfo; // @synthesize normalNoticeInfo=_normalNoticeInfo;
@property(retain, nonatomic) NSArray *liveNoticeList; // @synthesize liveNoticeList=_liveNoticeList;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) UIImage *coverImage4Vs3; // @synthesize coverImage4Vs3=_coverImage4Vs3;
@property(retain, nonatomic) UIImage *coverImage16Vs9; // @synthesize coverImage16Vs9=_coverImage16Vs9;
@property(retain, nonatomic) UIImage *coverImageOrigin; // @synthesize coverImageOrigin=_coverImageOrigin;
@property(copy, nonatomic) CDUnknownBlockType noticeInfoUpdatedCallback; // @synthesize noticeInfoUpdatedCallback=_noticeInfoUpdatedCallback;
@property(retain, nonatomic) FinderLiveStreamDecor *liveDecor; // @synthesize liveDecor=_liveDecor;
@property(nonatomic) int liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) FinderJumpInfo *opPromptInfo; // @synthesize opPromptInfo=_opPromptInfo;
@property(retain, nonatomic) FinderLivePromptInfo *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(nonatomic) long long lastSelectMode; // @synthesize lastSelectMode=_lastSelectMode;
@property(nonatomic) unsigned int maxVisibilityFriendContactCount; // @synthesize maxVisibilityFriendContactCount=_maxVisibilityFriendContactCount;
@property(nonatomic) unsigned int maxVisibilityChatroomCount; // @synthesize maxVisibilityChatroomCount=_maxVisibilityChatroomCount;
@property(retain, nonatomic) NSArray *visibilityFileList; // @synthesize visibilityFileList=_visibilityFileList;
@property(retain, nonatomic) CContact *groupContact; // @synthesize groupContact=_groupContact;
@property(retain, nonatomic) MMFinderLiveAudioModeBackgroundUploadModel *audioModeBackgroundUploadModel; // @synthesize audioModeBackgroundUploadModel=_audioModeBackgroundUploadModel;
@property(nonatomic) unsigned long long lastGoodsCount; // @synthesize lastGoodsCount=_lastGoodsCount;
@property(retain, nonatomic) NSString *selfHeadImgPath; // @synthesize selfHeadImgPath=_selfHeadImgPath;
@property(retain, nonatomic) UIImage *selfHeadImg; // @synthesize selfHeadImg=_selfHeadImg;
@property(retain, nonatomic) NSArray *selectedFreeRosterList; // @synthesize selectedFreeRosterList=_selectedFreeRosterList;
@property(retain, nonatomic) NSArray *fullFreeOfChargeContactList; // @synthesize fullFreeOfChargeContactList=_fullFreeOfChargeContactList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList; // @synthesize freeOfChargeChatroomIdList=_freeOfChargeChatroomIdList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeUsernameList; // @synthesize freeOfChargeUsernameList=_freeOfChargeUsernameList;
@property(nonatomic) unsigned int trialTimeMinute; // @synthesize trialTimeMinute=_trialTimeMinute;
@property(nonatomic) unsigned int trialTimeHour; // @synthesize trialTimeHour=_trialTimeHour;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(nonatomic) unsigned int chargeUnitPriceInWecoin; // @synthesize chargeUnitPriceInWecoin=_chargeUnitPriceInWecoin;
@property(nonatomic) long long chargeFlag; // @synthesize chargeFlag=_chargeFlag;
@property(nonatomic) long long visibilityMode; // @synthesize visibilityMode=_visibilityMode;
@property(retain, nonatomic) FinderLiveTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(retain, nonatomic) WCFinderLiveShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)createLivePrepareSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)currentLiveTask;
- (id)getCurrentViewController;
- (void)updateGameLiveStarterVC:(id)arg1;
- (void)updateLiveStarterVC:(id)arg1;
- (void)startLotteryViewControllerSaveLottery:(id)arg1;
- (void)lotteryBodyClick:(id)arg1;
- (void)onLiveLotteryRecordClick;
- (void)deleteLotteryClick:(id)arg1 session:(long long)arg2;
- (void)createLotteryClick;
- (void)tryClearLotteryDataInKV;
- (id)tryGetAddLotteryPanel;
- (void)showLotteryView;
- (void)tryTransferLotteryArray;
- (void)trySaveLotteryArray;
- (void)tryLoadLotteryArray;
- (void)showStartLotteryVC;
- (void)hideCreateLotteryView;
- (void)showCreateLotteryView;
- (void)checkLoadSelfHeadImg;
- (void)updateLiveBulletinInfo:(id)arg1;
- (id)toLiveCreateParamsModel;
- (void)updateVisibilityMode:(long long)arg1;
- (void)updateLiveNoticeInfo;
- (void)updateLiveNoticeList:(id)arg1;
- (void)updateLiveShareItem:(id)arg1;
- (void)udpateDataItemMediaType;
- (void)updateDataItemMedia:(id)arg1;
- (id)getVisibilityUsernameList;
- (id)getVisibilityChatRoomIdList;
- (id)getVisibilityFileIdLists;
- (void)setLiveChargableWithFlag:(long long)arg1 liveMode:(int)arg2 chargeUnitPriceInWecoin:(unsigned int)arg3 purchaseLivePreviewType:(long long)arg4 trialTimeHour:(unsigned int)arg5 trialTimeMinute:(unsigned int)arg6 freeOfChargeChatroomIdList:(id)arg7 freeOfChargeUsernameList:(id)arg8 fullFreeOfChargeContactList:(id)arg9 selectedFreeRosterList:(id)arg10 memberFree:(_Bool)arg11;
- (void)setVisibilityMode:(long long)arg1 liveMode:(int)arg2 andIdList:(id)arg3 chatRoomIdList:(id)arg4 visibleUsernameList:(id)arg5;
- (void)udpateDefaultDescriptionPromptWording;
- (void)setCurrentTagInfo:(id)arg1;
- (void)setPOIInfo:(id)arg1;
- (id)getPOIInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

