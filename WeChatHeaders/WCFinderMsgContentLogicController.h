//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BypMsgContentLogicController.h"

#import "WCFinderContactExt-Protocol.h"
#import "WCFinderFansProfileViewControllerDelegate-Protocol.h"
#import "WCFinderMsgChatInfoViewControllerDelegate-Protocol.h"
#import "WCFinderMsgSessionMgrExt-Protocol.h"
#import "WCFinderTrumpetSelectViewControllerDelegate-Protocol.h"

@class NSString, WCFinderAuthInfo, WCFinderMsgChatContentReporter, WCFinderUserBindPhoneAssist;

@interface WCFinderMsgContentLogicController : BypMsgContentLogicController <WCFinderContactExt, WCFinderMsgSessionMgrExt, WCFinderMsgChatInfoViewControllerDelegate, WCFinderTrumpetSelectViewControllerDelegate, WCFinderFansProfileViewControllerDelegate>
{
    _Bool _canSendAttachment;
    _Bool _canShowChangeRoleTips;
    WCFinderAuthInfo *_authInfo;
    WCFinderMsgChatContentReporter *_reporter;
    double _navigationBarHeightWithoutBadgeGroupView;
    WCFinderUserBindPhoneAssist *_assist;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUserBindPhoneAssist *assist; // @synthesize assist=_assist;
@property(nonatomic) double navigationBarHeightWithoutBadgeGroupView; // @synthesize navigationBarHeightWithoutBadgeGroupView=_navigationBarHeightWithoutBadgeGroupView;
@property(retain, nonatomic) WCFinderMsgChatContentReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(nonatomic) _Bool canShowChangeRoleTips; // @synthesize canShowChangeRoleTips=_canShowChangeRoleTips;
@property(nonatomic) _Bool canSendAttachment; // @synthesize canSendAttachment=_canSendAttachment;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)onFinderProfileClearAllMsg;
- (void)onFinderTrumpetSelectViewLiveIdentityDidChanged:(unsigned int)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderMsgAuthorSessionOwnerChanged;
- (void)onFinderMsgAliasSessionOwnerChanged;
- (void)onFinderPrivateMsgContactExtInfoUpdatedWithSessionId:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onWillPushFromNavigationController;
- (void)onPopFromNavigationController;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (id)GetMessageArray;
- (void)CustomToolViewEX:(id)arg1;
- (id)GetMessageFromImage:(id)arg1;
- (void)onOpenCameraController;
- (void)onOpenMediaBrowser;
- (_Bool)canSendCaptureImage;
- (_Bool)canPasteImage;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendEmoticonMessage;
- (id)makeACustomNavBarTitleView;
- (void)updateNavBarHeightAndCustomNavBarTitleView;
- (void)ViewWillAppear;
- (id)GetTitleTailImageView;
- (_Bool)hasCustomNavBarTitleView;
- (_Bool)shouldCreateBadgeGroupView;
- (void)UnRegister;
- (void)Register;
- (_Bool)checkCanUseAttachmentWithNeedAlert:(_Bool)arg1;
- (void)configReportInfoWithReporter:(id)arg1;
- (void)configWithSessionId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
