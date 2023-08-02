//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ContactsCreateChatRoomLogicDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "SelectContactsViewControllerDelegate-Protocol.h"

@class CContact, ContactsCreateChatRoomLogic, MMTipsViewController, MultiSelectContactsViewController, NSMutableArray, NSMutableDictionary, NSString, SelectContactsViewController;
@protocol CreateChatLogicDelegate;

@interface CreateChatLogic : MMObject <MMTipsViewControllerDelegate, SelectContactsViewControllerDelegate, ContactsCreateChatRoomLogicDelegate, MultiSelectContactsViewControllerDelegate>
{
    id <CreateChatLogicDelegate> m_delegate;
    ContactsCreateChatRoomLogic *m_createLogic;
    MultiSelectContactsViewController *m_MultiSelectController;
    _Bool m_isCreateWXTalk;
    unsigned long long m_commonSearchScene;
    NSMutableDictionary *m_chatRoonMemberDic;
    MMTipsViewController *m_errorView;
    SelectContactsViewController *m_SelectContactsViewController;
    CContact *_contact;
    NSMutableArray *_selectedMsgList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedMsgList; // @synthesize selectedMsgList=_selectedMsgList;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) SelectContactsViewController *m_SelectContactsViewController; // @synthesize m_SelectContactsViewController;
@property(nonatomic) unsigned long long m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(nonatomic) _Bool m_isCreateWXTalk; // @synthesize m_isCreateWXTalk;
@property(readonly, nonatomic) MultiSelectContactsViewController *m_MultiSelectController; // @synthesize m_MultiSelectController;
@property(nonatomic) __weak id <CreateChatLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnCreateRoom:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)dealloc;
- (void)onMultiSelectWithMsgHistory:(id)arg1 uploadTaskId:(id)arg2;
- (void)createChatRoonWithMemberDic:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)contactForContext;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)setShowRadarCreateRoom;
- (void)setKeepCurViewAfterSelect:(_Bool)arg1;
- (void)initSelectContactsViewController;
- (void)initMultiSelectController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
