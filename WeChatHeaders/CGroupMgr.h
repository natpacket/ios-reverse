//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IContactMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CGroupDB, CGroupOpLog, ChatRoomPanelDynamicWeAppCache, ChatRoomToolMgr, NSMutableArray, NSMutableDictionary, NSString, OpenImChatRoomMigrateMgr;

@interface CGroupMgr : MMUserService <IContactMgrExt, MMServiceProtocol, PBMessageObserverDelegate, IMsgExt>
{
    CGroupDB *m_oGroupDB;
    CGroupOpLog *m_oGroupOpLog;
    NSMutableArray *m_gettingMemberDetailQueue;
    NSMutableArray *m_gettingInfoQueue;
    ChatRoomToolMgr *m_chatRoomToolMgr;
    OpenImChatRoomMigrateMgr *m_openImChatRoomMigrateMgr;
    NSString *m_createGroupSessionId;
    NSMutableArray *_m_panelDynamicWeAppAr;
    double _m_panelDynamicUpdateTime;
    ChatRoomPanelDynamicWeAppCache *_m_panelDynamicWeAppCache;
    NSMutableDictionary *_m_dicQuitGroup;
    NSMutableDictionary *_dicShouldDeleteAllMsgAfterQuit;
}

+ (_Bool)isSupportOpenIMGroup;
+ (id)getGruopTipWithSupportAdminOrNO:(id)arg1 tipKey:(id)arg2 noAdminTipKey:(id)arg3;
+ (_Bool)isSupportOpenGroupAdmin:(id)arg1;
+ (_Bool)IsReservedGroupTopic:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicShouldDeleteAllMsgAfterQuit; // @synthesize dicShouldDeleteAllMsgAfterQuit=_dicShouldDeleteAllMsgAfterQuit;
@property(retain, nonatomic) NSMutableDictionary *m_dicQuitGroup; // @synthesize m_dicQuitGroup=_m_dicQuitGroup;
@property(retain, nonatomic) ChatRoomPanelDynamicWeAppCache *m_panelDynamicWeAppCache; // @synthesize m_panelDynamicWeAppCache=_m_panelDynamicWeAppCache;
@property(nonatomic) double m_panelDynamicUpdateTime; // @synthesize m_panelDynamicUpdateTime=_m_panelDynamicUpdateTime;
@property(retain, nonatomic) NSMutableArray *m_panelDynamicWeAppAr; // @synthesize m_panelDynamicWeAppAr=_m_panelDynamicWeAppAr;
- (void)reportOnlyAdminModifyTopic:(id)arg1 role:(unsigned int)arg2 memberCount:(unsigned int)arg3 action:(unsigned int)arg4;
- (_Bool)changeChatRoomChatBoxType:(id)arg1 inChatBox:(_Bool)arg2 sync:(_Bool)arg3;
- (id)getCreateGroupSessionId;
- (id)openImChatRoomMigrateMgr;
- (id)chatRoomToolMgr;
- (void)onModifyContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnOplogResp:(id)arg1;
- (void)OnOplogRespForChangeChatRoomOnlyAdminModTopic:(id)arg1 Resp:(id)arg2;
- (void)OnOplogRespForChangeChatRoomAccessType:(id)arg1 Resp:(id)arg2;
- (void)OnOplogRespForModTopic:(id)arg1 Resp:(id)arg2;
- (_Bool)didHandleChatRoomInfoDetailCompatibleCGIDataWithpbRequest:(id)arg1 pbResponse:(id)arg2;
- (void)reloadChatRoomInfoDetailCompatibleCGIDataWithUserName:(id)arg1;
- (_Bool)DismissChatRoom:(id)arg1;
- (void)OnDismissChatRoomResp:(id)arg1;
- (void)OnSetChatRoomDescResp:(id)arg1;
- (_Bool)p_SetChatRoomDesc:(id)arg1 Desc:(id)arg2 Flag:(unsigned int)arg3;
- (_Bool)SetChatRoomDesc:(id)arg1 Desc:(id)arg2 Flag:(unsigned int)arg3;
- (void)updateOpenImChatRoomMigrate:(id)arg1;
- (void)updateFamilyChatRoomtToolHadGetContactDetail:(id)arg1;
- (void)clearUnshownRoomDesc:(id)arg1;
- (void)handleGetChatRoomInfoResp:(id)arg1 response:(id)arg2 request:(id)arg3;
- (void)OnGetChatRoomInfoResp:(id)arg1;
- (void)OnDeleteOpenIMGroupAdmin:(id)arg1;
- (_Bool)DeleteOpenIMGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (void)OnDeleteGroupAdmin:(id)arg1;
- (_Bool)p_DeleteGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (_Bool)DeleteGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (void)OnAddOpenIMGroupAdmin:(id)arg1;
- (_Bool)AddOpenIMGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (void)OnAddGroupAdmin:(id)arg1;
- (_Bool)p_AddGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (_Bool)AddGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (void)OnApproveGroupMember:(id)arg1;
- (_Bool)p_ApproveGroupMember:(id)arg1 withInviterName:(id)arg2 withInviteeList:(id)arg3 withTicket:(id)arg4 withUserData:(id)arg5 withApproveMsgid:(unsigned long long)arg6;
- (_Bool)ApproveGroupMember:(id)arg1 withInviterName:(id)arg2 withInviteeList:(id)arg3 withTicket:(id)arg4 withUserData:(id)arg5 withApproveMsgid:(unsigned long long)arg6;
- (_Bool)ChangeChatRoomOnlyAdminModTopic:(id)arg1 on:(_Bool)arg2;
- (_Bool)p_ChangeChatRoomAccessType:(id)arg1 type:(unsigned int)arg2;
- (_Bool)ChangeChatRoomAccessType:(id)arg1 type:(unsigned int)arg2;
- (void)OnChangeChatRoomOwnerResp:(id)arg1;
- (unsigned int)p_SetChatRoomSelfDisplayName:(id)arg1 DisplayName:(id)arg2;
- (unsigned int)SetChatRoomSelfDisplayName:(id)arg1 DisplayName:(id)arg2;
- (_Bool)p_ChangeChatRoomOwner:(id)arg1 NewOwner:(id)arg2;
- (_Bool)ChangeChatRoomOwner:(id)arg1 NewOwner:(id)arg2;
- (void)OnInviteChatRoomMemberResp:(id)arg1;
- (_Bool)p_InviteGroupMember:(id)arg1 withMemberList:(id)arg2 withInviterScene:(unsigned int)arg3 withTicket:(id)arg4 withUserData:(id)arg5 withMsgHistoryInfo:(id)arg6;
- (_Bool)InviteGroupMember:(id)arg1 withMemberList:(id)arg2 withInviterScene:(unsigned int)arg3 withTicket:(id)arg4 withUserData:(id)arg5 withMsgHistoryInfo:(id)arg6;
- (_Bool)InviteGroupMember:(id)arg1 withMemberList:(id)arg2;
- (int)CanDonateChatRoom;
- (int)CanUpgradeChatRoom;
- (_Bool)p_GetChatRoomInfo:(id)arg1;
- (_Bool)GetChatRoomInfo:(id)arg1;
- (_Bool)GetEntireChatRoomMemberDetail:(id)arg1;
- (_Bool)p_GetChatRoomMemberDetail:(id)arg1;
- (_Bool)GetChatRoomMemberDetail:(id)arg1;
- (unsigned int)createProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3 eventHandler:(Class)arg4;
- (unsigned int)createProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3;
- (void)onGetChatRoomUpgradeStatus:(id)arg1;
- (void)OnUpdateContact:(id)arg1;
- (void)updateChatRoomSpecialAttentionMemList:(id)arg1 chatRoomData:(id)arg2;
- (void)OnGetChatRoomMemberDetail:(id)arg1;
- (void)OnUpgradeChatRoom:(id)arg1;
- (int)OnCreateChatRoom:(id)arg1;
- (id)HandleCreateChatRoomOK:(id)arg1;
- (void)addCreateMsg:(id)arg1 ContactList:(id)arg2;
- (void)OnDeleteChatRoomMemberResponse:(id)arg1;
- (void)OnAddChatRoomMember:(id)arg1;
- (id)genContactFromMemberResp:(id)arg1;
- (void)addChatMemberSystemTipMsg:(id)arg1 contactList:(id)arg2 systemTipContentFormat:(id)arg3 systemTipContent:(id)arg4;
- (void)addChatMemberNeedVerifyMsg:(id)arg1 ContactList:(id)arg2;
- (_Bool)UnShowInContactBook:(id)arg1 sync:(_Bool)arg2;
- (_Bool)ShowInContactBook:(id)arg1 sync:(_Bool)arg2;
- (_Bool)IsUsrInChatRoom:(id)arg1 Usr:(id)arg2;
- (id)GetGroupMemberWithOutMyself:(id)arg1;
- (id)GetChatRoomSpecialAttentionUserList:(id)arg1 chatRoomMemList:(id)arg2;
- (id)GetGroupMemberUserListByContact:(id)arg1;
- (id)GetGroupMember:(id)arg1;
- (id)GetGroupAdminUserName:(id)arg1;
- (id)GetGroupSpecialAttentionMemList:(id)arg1;
- (id)GetGroupAdmin:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (_Bool)p_QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (_Bool)QuitGroup:(id)arg1 withUsrName:(id)arg2 deleteAllMsg:(_Bool)arg3;
- (_Bool)p_SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (_Bool)SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (_Bool)p_SetShowDislayName:(_Bool)arg1 forGroup:(id)arg2 sync:(_Bool)arg3;
- (_Bool)SetShowDislayName:(_Bool)arg1 forGroup:(id)arg2 sync:(_Bool)arg3;
- (_Bool)p_DeleteGroupMember:(id)arg1 withMemberList:(id)arg2 scene:(unsigned long long)arg3;
- (_Bool)DeleteGroupMember:(id)arg1 withMemberList:(id)arg2 scene:(unsigned long long)arg3;
- (_Bool)p_AddGroupMember:(id)arg1 memberList:(id)arg2 desp:(id)arg3 historyInfo:(id)arg4;
- (_Bool)AddGroupMember:(id)arg1 memberList:(id)arg2 desp:(id)arg3 historyInfo:(id)arg4;
- (_Bool)p_CreateGroup:(id)arg1 withMemberList:(id)arg2;
- (_Bool)CreateGroup:(id)arg1 withMemberList:(id)arg2;
- (void)initDB:(id)arg1 withLock:(id)arg2;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;
- (id)getChatRoomTopMsgInfoWithUserName:(id)arg1 messageTopId:(unsigned long long)arg2;
- (_Bool)checkIsHadTopMsgWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (_Bool)setChatRoomTopMsgExposureTimeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2 exposureTime:(unsigned int)arg3;
- (_Bool)setChatRoomTopMsgLocalRevokeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (id)getInsertTopMsgInfoListFromNetWork:(id)arg1 topMsgInfoItemList:(id)arg2;
- (void)updateChatRoomtTopMsgInfoListFromNetWork:(id)arg1 topMsgInfoItemList:(id)arg2;
- (_Bool)removeChatRoomTopMsgLocalWithUserName:(id)arg1 topId:(unsigned int)arg2;
- (id)getChatRoomTopMsgInfoListWithUserName:(id)arg1;
- (void)OnSetRoomTopMsg:(id)arg1;
- (_Bool)setRoomTopMsg:(id)arg1 topMsgOpType:(unsigned int)arg2 msgSvrID:(unsigned long long)arg3 msgType:(unsigned int)arg4 msgSummary:(id)arg5 msgUserName:(id)arg6 addMsgData:(id)arg7;
- (_Bool)unsetRoomTopMsg:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (_Bool)setRoomTopMsg:(id)arg1 msgWrap:(id)arg2;
- (void)OnSetRoomtToolSalterWXapp:(id)arg1;
- (_Bool)setRoomtToolSalterWXapp:(id)arg1 withWeAppInfoList:(id)arg2;
- (id)getMMKVpanelDynamicWeAppHadRedDotArKey;
- (id)getPanelDynamicWeAppHadRedDotAr;
- (void)clearRemoveDWeAppInRedDotHadShowArWithAllPanelDynamicWeAppAr:(id)arg1;
- (void)saveHadShowPanelDynamicWeAppRedDotInAttachmentButtonWithBusinessType:(unsigned long long)arg1;
- (_Bool)isShowPanelDynamicWeAppRedDotInAttachmentButtonWithBusinessType:(unsigned long long)arg1;
- (id)changPanelDynamicWeAppJSONToItemAr:(id)arg1;
- (id)getChatRoomPanelDynamicWeAppAr;
- (long long)getInputToolWeAppNotShowIndexWithBusinessType:(unsigned long long)arg1;
- (id)getChatRoomPanelDynamicWeAppArWithBusinessType:(unsigned long long)arg1;
- (void)processRoomAnnouncement:(id)arg1 userName:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processNewXmlChatRoomTopMsg:(id)arg1 andNsUsrName:(id)arg2;
- (void)processNewXmlUpgradeAssociateChatRoom:(id)arg1 andNsUsrName:(id)arg2;
- (void)disableChatRoomAccessVerifyWithSystemMsgWrap:(id)arg1 andNsUsrName:(id)arg2;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (void)processNewXMLInApproveScene:(id)arg1;
- (void)OnUpgradeAssociateChatRoom:(id)arg1;
- (_Bool)UpgradeAssociateChatRoom:(id)arg1 andTicket:(id)arg2 andScene:(unsigned int)arg3;
- (void)OnGetUpgradeAssociateAtRoomManageInfo:(id)arg1;
- (_Bool)GetUpgradeAssociateAtRoomManageInfo:(id)arg1 andTicket:(id)arg2 andScene:(unsigned int)arg3;
- (_Bool)GetUpgradeAssociateAtRoomManageInfo:(id)arg1;
- (_Bool)checkIsCanUpgradeOpenIMGroupContact;
- (_Bool)checkUpgradeChatRoomNeedShowSystemMessageAndRedDotWithGroupUserName:(id)arg1;
- (_Bool)checkToBeUpgradeChatRoomMemberMoreThanMax:(id)arg1;
- (_Bool)checkHadUpgradeHadChatRoom:(id)arg1;
- (_Bool)checkToBeUpgradeHadNotUpgradeChatRoom:(id)arg1;
- (_Bool)isCheckShowUpgradeChatRoomRedDot:(id)arg1;
- (_Bool)simpleCheckUpgradeChatRoomNeedShowSystemMessageAndRedDot:(id)arg1;
- (_Bool)CheckForwardUpgradeChatRoomSwitch;
- (void)sendUpgradeChatRoomNeedShowSystemMessageWithGroupUserName:(id)arg1 andMessageContent:(id)arg2;
- (void)sendUpgradeChatRoomNeedShowSystemMessageWithGroupUserName:(id)arg1;
- (void)requestUpgradeChatRoomRedDot;
- (void)updateChatRoomLocalSendUpgradeTypeWithGroupUserName:(id)arg1;
- (void)reportUpgradeChatRoomNeedShowSystemMessageWithGroupUserName:(id)arg1 upgradeChatRoomShowSystemMessageTyp:(unsigned int)arg2;
- (void)handleUpgradeChatRoomNeedShowSystemMessageAndRedDotWithGroupUserName:(id)arg1;
- (_Bool)isShowUpgradeChatRoomEntranceWithGroupUserName:(id)arg1 andFuncFlag:(unsigned int)arg2;
- (_Bool)p_addOplogType:(unsigned int)arg1 buffer:(id)arg2 needSync:(_Bool)arg3;
- (unsigned int)p_startOplogType:(unsigned int)arg1 buffer:(id)arg2 isSelfHandle:(_Bool)arg3;
- (unsigned int)p_createOpenIMProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3 eventHandler:(Class)arg4;
- (id)p_genContactFromMemberResp:(id)arg1;
- (id)p_handleMemContact:(id)arg1;
- (void)OpenIMMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnOpenIMOplogResp:(id)arg1;
- (void)OnOpenIMOplogRespForChangeChatRoomAccessType:(id)arg1 Resp:(id)arg2;
- (void)OnOpenIMOplogRespForModTopic:(id)arg1 Resp:(id)arg2;
- (void)OnOpenIMOplogRespForSetChatRoomAnnouncement:(id)arg1 Resp:(id)arg2;
- (_Bool)changeOpenImChatRoomAccessType:(id)arg1 type:(unsigned int)arg2;
- (_Bool)setOpenImChatRoom:(id)arg1 mute:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setOpenImChatRoom:(id)arg1 top:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setOpenImChatRoom:(id)arg1 inContactBook:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)SetOpenIMGroupShowDislayName:(_Bool)arg1 forGroup:(id)arg2 sync:(_Bool)arg3;
- (unsigned int)SetOpenIMGroupSelfDisplayName:(id)arg1 DisplayName:(id)arg2;
- (_Bool)SetOpenIMChatRoomAnnouncement:(id)arg1 Announcement:(id)arg2;
- (void)OnOpenIMOplogRespForOpenIMQuitGroup:(id)arg1 Resp:(id)arg2;
- (_Bool)QuitOpenIMGroup:(id)arg1 withUsrName:(id)arg2;
- (_Bool)SetOpenIMGroupTopic:(id)arg1 withTopic:(id)arg2;
- (void)OnOpenIMGetChatRoomMemberDetail:(id)arg1;
- (_Bool)GetOpenIMChatRoomMemberDetail:(id)arg1;
- (void)OnGetOpenIMChatRoomInfoResp:(id)arg1;
- (_Bool)GetOpenIMChatRoomInfo:(id)arg1;
- (void)OnApproveOpenIMGroupMember:(id)arg1;
- (_Bool)ApproveOpenIMGroupMember:(id)arg1 withInviterName:(id)arg2 withInviteeList:(id)arg3 withTicket:(id)arg4 withUserData:(id)arg5;
- (void)OnChangeOpenIMChatRoomOwnerResp:(id)arg1;
- (_Bool)ChangeOpenIMChatRoomOwner:(id)arg1 NewOwner:(id)arg2;
- (void)OnInviteOpenIMChatRoomMemberResp:(id)arg1;
- (_Bool)InviteOpenIMGroupMember:(id)arg1 withMemberList:(id)arg2 withUserData:(id)arg3;
- (void)OnDeleteOpenIMChatRoomMemberResponse:(id)arg1;
- (_Bool)DeleteOpenIMGroupMember:(id)arg1 withMemberList:(id)arg2;
- (void)OnAddOpenIMChatRoomMember:(id)arg1;
- (_Bool)AddOpenIMGroupMember:(id)arg1 withMemberList:(id)arg2 withDesp:(id)arg3;
- (id)HandleCreateOpenIMChatRoomOK:(id)arg1;
- (int)OnOpenIMCreateChatRoom:(id)arg1;
- (_Bool)CreateOpenIMGroupWithMemberList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

