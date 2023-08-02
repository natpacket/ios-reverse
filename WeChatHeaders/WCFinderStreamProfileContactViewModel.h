//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderLiveExt-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderStreamProfileExt-Protocol.h"
#import "WCFinderStreamProfileSubViewModelProtocol-Protocol.h"
#import "WCFinderTopicDataKeyExt-Protocol.h"

@class FinderClubInfo, FinderJumpInfo, MMFinderProfileLiveNoticeContext, NSNumber, NSString, UIColor, WCFinderBGCover, WCFinderContact, WCFinderDataItem, WCFinderFriendsAlsoFollowViewModel, WCFinderProfileJustWatchState, WCFinderPushProfileParams, WCFinderSteamProfileHeaderTheme, WCFinderStreamProfileExtInfo, WCFinderUserMessage;
@protocol WCFinderStreamProfileContactViewModelDelegate, WCFinderStreamProfileContactViewModelVCDelegate;

@interface WCFinderStreamProfileContactViewModel : NSObject <WCFinderRedDotExt, WCFinderTopicDataKeyExt, WCFinderLiveExt, WCFinderStreamProfileExt, WCFinderStreamProfileSubViewModelProtocol>
{
    WCFinderStreamProfileExtInfo *_extInfo;
    MMFinderProfileLiveNoticeContext *_liveNoticeContext;
    _Bool _isAuthor;
    _Bool _displayLimitModeContent;
    _Bool _isSignatureExpanded;
    _Bool _postEntryOnHeader;
    _Bool _showWXProfileChecker;
    _Bool _hasRedPacketEventEntrance;
    id <WCFinderStreamProfileContactViewModelDelegate> _delegate;
    id <WCFinderStreamProfileContactViewModelVCDelegate> _coverDelegate;
    NSString *_username;
    WCFinderContact *_contact;
    unsigned long long _currentCommentScene;
    NSString *_dataScene;
    WCFinderPushProfileParams *_params;
    unsigned long long _reportScene;
    UIColor *_coverThemeColor;
    UIColor *_coverAndMaskColor;
    WCFinderSteamProfileHeaderTheme *_theme;
    WCFinderFriendsAlsoFollowViewModel *_followRecommend;
    WCFinderDataItem *_liveDataItem;
    long long _showInWXProfileCheckBoxState;
    WCFinderProfileJustWatchState *_justWatch;
    NSNumber *_hasExposeJustWatchWhenEnter;
    UIColor *_displayThemeBGColor;
}

+ (id)coverMaskColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRedPacketEventEntrance; // @synthesize hasRedPacketEventEntrance=_hasRedPacketEventEntrance;
@property(retain, nonatomic) UIColor *displayThemeBGColor; // @synthesize displayThemeBGColor=_displayThemeBGColor;
@property(nonatomic) _Bool showWXProfileChecker; // @synthesize showWXProfileChecker=_showWXProfileChecker;
@property(retain, nonatomic) NSNumber *hasExposeJustWatchWhenEnter; // @synthesize hasExposeJustWatchWhenEnter=_hasExposeJustWatchWhenEnter;
@property(retain, nonatomic) WCFinderProfileJustWatchState *justWatch; // @synthesize justWatch=_justWatch;
@property(nonatomic) long long showInWXProfileCheckBoxState; // @synthesize showInWXProfileCheckBoxState=_showInWXProfileCheckBoxState;
@property(retain, nonatomic) WCFinderDataItem *liveDataItem; // @synthesize liveDataItem=_liveDataItem;
@property(nonatomic) _Bool postEntryOnHeader; // @synthesize postEntryOnHeader=_postEntryOnHeader;
@property(retain, nonatomic) WCFinderFriendsAlsoFollowViewModel *followRecommend; // @synthesize followRecommend=_followRecommend;
@property(retain, nonatomic) WCFinderSteamProfileHeaderTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool isSignatureExpanded; // @synthesize isSignatureExpanded=_isSignatureExpanded;
@property(retain, nonatomic) UIColor *coverAndMaskColor; // @synthesize coverAndMaskColor=_coverAndMaskColor;
@property(retain, nonatomic) UIColor *coverThemeColor; // @synthesize coverThemeColor=_coverThemeColor;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) WCFinderPushProfileParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(nonatomic) unsigned long long currentCommentScene; // @synthesize currentCommentScene=_currentCommentScene;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool displayLimitModeContent; // @synthesize displayLimitModeContent=_displayLimitModeContent;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) __weak id <WCFinderStreamProfileContactViewModelVCDelegate> coverDelegate; // @synthesize coverDelegate=_coverDelegate;
@property(nonatomic) __weak id <WCFinderStreamProfileContactViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onProfileExtInfoMVCovertedFinishStateTurnOn:(id)arg1 setter:(CDUnknownBlockType)arg2;
- (void)onProfileExtInfoCoverChanged:(id)arg1;
- (void)modUserShowFinderInWXProfile:(_Bool)arg1 failure:(CDUnknownBlockType)arg2;
- (void)modUserShowFinderInWXProfile:(_Bool)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)doNotifyChanged;
- (void)notifyChanged;
- (void)deletefinderEventWithEventId:(id)arg1;
- (void)requestFollowRecommend:(CDUnknownBlockType)arg1;
- (_Bool)filterRedDotPath:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onContactDidUpdate;
- (void)onProfileExtInfoChanged;
@property(readonly, nonatomic) FinderClubInfo *clubInfo;
- (_Bool)isGroupFinder;
- (void)notifyJustWatchEvent:(long long)arg1;
@property(readonly, nonatomic) MMFinderProfileLiveNoticeContext *liveNoticeContext;
@property(readonly, nonatomic) FinderJumpInfo *olympicsJumpInfo;
- (void)safeCallDelegateNotifyCoverChanged:(long long)arg1;
- (void)notifyCoverChanged:(id)arg1;
- (void)setCover:(id)arg1;
- (_Bool)displayCover;
@property(readonly, nonatomic) WCFinderBGCover *cover;
- (void)onExtInfoChangeFromOld:(id)arg1 toExtInfo:(id)arg2;
@property(retain, nonatomic) WCFinderStreamProfileExtInfo *extInfo;
@property(readonly, nonatomic) _Bool showThinkRedPacketEvent;
- (void)updateShowInWXProfileCheckBodxState;
- (void)updateShowInWXProfileCheckerFirstTime;
- (void)hideCoverMask;
- (_Bool)showPostInHeader;
- (_Bool)canFollow;
@property(readonly, nonatomic) WCFinderUserMessage *userMessage;
- (_Bool)isBelongMyFinderContact;
- (_Bool)isSelf;
- (_Bool)shouldShowBanner;
- (_Bool)shouldShowRedBadgeForMoreAction;
- (id)extKey;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 params:(id)arg2 isAuthor:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
