//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeNoteViewController.h"

#import "IGroupMgrExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "WNRTEToolViewDelegate-Protocol.h"
#import "WNSelectionViewDelegate-Protocol.h"
#import "WNTextViewOperationDelegate-Protocol.h"

@class CContact, NSString, UIBarButtonItem;

@interface GroupNoticeViewController : WeNoteViewController <WNRTEToolViewDelegate, WNSelectionViewDelegate, IGroupMgrExt, WNTextViewOperationDelegate, IMsgRevokeExt>
{
    _Bool m_bTextDidChange;
    double m_defaultFooterHeight;
    UIBarButtonItem *m_undoBarItem;
    UIBarButtonItem *m_redoBarItem;
    UIBarButtonItem *m_doneBarItem;
    _Bool _isHistory;
    unsigned int _editTime;
    int _enterScene;
    CContact *_chatRoomContact;
    CContact *_editorContact;
}

+ (_Bool)isDisplay;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned int editTime; // @synthesize editTime=_editTime;
@property(retain, nonatomic) CContact *editorContact; // @synthesize editorContact=_editorContact;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (void)OnGroupNoticeMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 item:(id)arg3;
- (void)OnSetChatRoomDesc:(id)arg1 Desc:(id)arg2 Error:(id)arg3;
- (void)OnReturnToChat;
- (void)checkNeedReload:(id)arg1;
- (void)reportEnterScene;
- (void)setGroupNotice:(id)arg1;
- (void)onDone;
- (void)onEdit;
- (void)onCancel;
- (void)setTextViewEditable:(_Bool)arg1;
- (void)checkCanTranslateContent;
- (unsigned long long)supportedInterfaceOrientations;
- (void)checkFooterView;
- (id)getAlertTitleForType:(unsigned long long)arg1;
- (void)saveNote;
- (void)updateRightBarBtnStatus;
- (void)installMinimizationTransitionController;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)initHeaderAndFooterView;
- (void)initTableView;
- (void)configNavbar;
- (void)dealloc;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)onRedo;
- (void)onUndo;
- (void)onClickRedo;
- (void)onClickUndo;
- (void)onClickTextMore;
- (void)onClickLocation;
- (void)onClickFile;
- (void)onClickChoosePhoto;
- (id)makeFooter;
- (id)makeHeader;
- (void)initToolView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

