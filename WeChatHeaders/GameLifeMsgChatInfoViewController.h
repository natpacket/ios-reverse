//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameCenterNativeVc.h"

#import "GameLifeBlackHalfViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CBaseContact, MMTableViewInfo, NSString;
@protocol GameLifeMsgChatInfoViewControllerDelegate;

@interface GameLifeMsgChatInfoViewController : GameCenterNativeVc <WCActionSheetDelegate, GameLifeBlackHalfViewControllerDelegate>
{
    _Bool _isInBlackList;
    _Bool _isAssociateWithWxGame;
    id <GameLifeMsgChatInfoViewControllerDelegate> _delegate;
    CBaseContact *_myRoleContact;
    CBaseContact *_sessionContact;
    CBaseContact *_realChatContact;
    MMTableViewInfo *_tableViewMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewMgr; // @synthesize tableViewMgr=_tableViewMgr;
@property(retain, nonatomic) CBaseContact *realChatContact; // @synthesize realChatContact=_realChatContact;
@property(retain, nonatomic) CBaseContact *sessionContact; // @synthesize sessionContact=_sessionContact;
@property(retain, nonatomic) CBaseContact *myRoleContact; // @synthesize myRoleContact=_myRoleContact;
@property(nonatomic) __weak id <GameLifeMsgChatInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportBlackListDialogUserAction:(_Bool)arg1 isAssociateWithWxGame:(_Bool)arg2 isCancel:(_Bool)arg3;
- (void)reportBlackListDialogExposure:(_Bool)arg1;
- (void)reportClickBlackListDialog;
- (void)reportExpose;
- (void)reportClearMsg:(int)arg1;
- (void)reportClickAvatar;
- (void)reportChattingInfoUIExposure;
- (id)getSessionId;
- (void)onConfirmClick:(_Bool)arg1 isAssociateWithWxGame:(_Bool)arg2;
- (void)onCancelClick:(_Bool)arg1 isAssociateWithWxGame:(_Bool)arg2;
- (void)showDealBlackDialog:(id)arg1 accoutType:(unsigned int)arg2 isBlack:(_Bool)arg3 isAssociate:(_Bool)arg4;
- (void)addBlackList:(id)arg1;
- (void)onExpose:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearAllMsg;
- (void)onClearAllMessage:(id)arg1;
- (void)openContactInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)makeContactInfo:(id)arg1 CellInfo:(id)arg2;
- (void)checkBlackListStatus:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)disMissSelf;
- (void)reloadTableViewData;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

