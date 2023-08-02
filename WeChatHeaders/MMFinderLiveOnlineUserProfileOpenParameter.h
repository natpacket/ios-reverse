//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class FinderLiveBadgeInfo, MMFinderLiveConnectMicUser, MMFinderLiveTask, MMFinderLiveTaskId, NSData, UIColor, UIView, WCFinderContact;

@interface MMFinderLiveOnlineUserProfileOpenParameter : MMObject
{
    _Bool _enableMoreOperation;
    _Bool _isSendPrivateMsgEnable;
    _Bool _isRewardEnable;
    _Bool _isFinderLiveAliasRole;
    _Bool _isSwitchLiveEnabled;
    _Bool _isFromOnlineStateView;
    _Bool _isCommentAssistant;
    _Bool _isDarkMode;
    _Bool _isNeedObserveDarkModeChange;
    _Bool _userIsAnchor;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderLiveTask *_finderLiveTask;
    WCFinderContact *_finderContact;
    MMFinderLiveConnectMicUser *_micUserInfo;
    FinderLiveBadgeInfo *_liveBadgeInfo;
    long long _disableCommentDef;
    double _highlightRectCornerRadius;
    NSData *_liveContactExtInfo;
    UIColor *_maskViewColor;
    UIView *_parentView;
    unsigned long long _openProfileScene;
    unsigned long long _userLiveIdentity;
    CDUnknownBlockType _complaintActionCallback;
    CDUnknownBlockType _kickoutActionCallback;
    CDUnknownBlockType _banCommentActionCallback;
    CDUnknownBlockType _noSenseBanCommentActionCallback;
    CDUnknownBlockType _sendPrivateMsgActionCallback;
    CDUnknownBlockType _followActionCallback;
    CDUnknownBlockType _openStreamProfileActionCallback;
    CDUnknownBlockType _openRewardGiftViewActionCallback;
    CDUnknownBlockType _modifyCommentAssistantRoleCallback;
    CDUnknownBlockType _viewDidOpenCallback;
    CDUnknownBlockType _viewDidDismissCallback;
    CDUnknownBlockType _actionSheetCancelCallback;
    CDUnknownBlockType _actionSheetWillDismissCallback;
    CDUnknownBlockType _switchLiveRoomActionCallback;
    CDUnknownBlockType _muteMicUserActionCallback;
    struct CGRect _highlightRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType muteMicUserActionCallback; // @synthesize muteMicUserActionCallback=_muteMicUserActionCallback;
@property(copy, nonatomic) CDUnknownBlockType switchLiveRoomActionCallback; // @synthesize switchLiveRoomActionCallback=_switchLiveRoomActionCallback;
@property(copy, nonatomic) CDUnknownBlockType actionSheetWillDismissCallback; // @synthesize actionSheetWillDismissCallback=_actionSheetWillDismissCallback;
@property(copy, nonatomic) CDUnknownBlockType actionSheetCancelCallback; // @synthesize actionSheetCancelCallback=_actionSheetCancelCallback;
@property(copy, nonatomic) CDUnknownBlockType viewDidDismissCallback; // @synthesize viewDidDismissCallback=_viewDidDismissCallback;
@property(copy, nonatomic) CDUnknownBlockType viewDidOpenCallback; // @synthesize viewDidOpenCallback=_viewDidOpenCallback;
@property(copy, nonatomic) CDUnknownBlockType modifyCommentAssistantRoleCallback; // @synthesize modifyCommentAssistantRoleCallback=_modifyCommentAssistantRoleCallback;
@property(copy, nonatomic) CDUnknownBlockType openRewardGiftViewActionCallback; // @synthesize openRewardGiftViewActionCallback=_openRewardGiftViewActionCallback;
@property(copy, nonatomic) CDUnknownBlockType openStreamProfileActionCallback; // @synthesize openStreamProfileActionCallback=_openStreamProfileActionCallback;
@property(copy, nonatomic) CDUnknownBlockType followActionCallback; // @synthesize followActionCallback=_followActionCallback;
@property(copy, nonatomic) CDUnknownBlockType sendPrivateMsgActionCallback; // @synthesize sendPrivateMsgActionCallback=_sendPrivateMsgActionCallback;
@property(copy, nonatomic) CDUnknownBlockType noSenseBanCommentActionCallback; // @synthesize noSenseBanCommentActionCallback=_noSenseBanCommentActionCallback;
@property(copy, nonatomic) CDUnknownBlockType banCommentActionCallback; // @synthesize banCommentActionCallback=_banCommentActionCallback;
@property(copy, nonatomic) CDUnknownBlockType kickoutActionCallback; // @synthesize kickoutActionCallback=_kickoutActionCallback;
@property(copy, nonatomic) CDUnknownBlockType complaintActionCallback; // @synthesize complaintActionCallback=_complaintActionCallback;
@property(nonatomic) _Bool userIsAnchor; // @synthesize userIsAnchor=_userIsAnchor;
@property(nonatomic) unsigned long long userLiveIdentity; // @synthesize userLiveIdentity=_userLiveIdentity;
@property(nonatomic) unsigned long long openProfileScene; // @synthesize openProfileScene=_openProfileScene;
@property(nonatomic) _Bool isNeedObserveDarkModeChange; // @synthesize isNeedObserveDarkModeChange=_isNeedObserveDarkModeChange;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool isCommentAssistant; // @synthesize isCommentAssistant=_isCommentAssistant;
@property(nonatomic) _Bool isFromOnlineStateView; // @synthesize isFromOnlineStateView=_isFromOnlineStateView;
@property(nonatomic) _Bool isSwitchLiveEnabled; // @synthesize isSwitchLiveEnabled=_isSwitchLiveEnabled;
@property(retain, nonatomic) UIColor *maskViewColor; // @synthesize maskViewColor=_maskViewColor;
@property(retain, nonatomic) NSData *liveContactExtInfo; // @synthesize liveContactExtInfo=_liveContactExtInfo;
@property(nonatomic) double highlightRectCornerRadius; // @synthesize highlightRectCornerRadius=_highlightRectCornerRadius;
@property(nonatomic) struct CGRect highlightRect; // @synthesize highlightRect=_highlightRect;
@property(nonatomic) _Bool isFinderLiveAliasRole; // @synthesize isFinderLiveAliasRole=_isFinderLiveAliasRole;
@property(nonatomic) _Bool isRewardEnable; // @synthesize isRewardEnable=_isRewardEnable;
@property(nonatomic) _Bool isSendPrivateMsgEnable; // @synthesize isSendPrivateMsgEnable=_isSendPrivateMsgEnable;
@property(nonatomic) long long disableCommentDef; // @synthesize disableCommentDef=_disableCommentDef;
@property(nonatomic) _Bool enableMoreOperation; // @synthesize enableMoreOperation=_enableMoreOperation;
@property(retain, nonatomic) FinderLiveBadgeInfo *liveBadgeInfo; // @synthesize liveBadgeInfo=_liveBadgeInfo;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUserInfo; // @synthesize micUserInfo=_micUserInfo;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)clearCallBacks;
- (_Bool)isFinderUser;
- (id)init;

@end

