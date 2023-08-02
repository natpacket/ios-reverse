//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ContactsDataLogicDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class ContactsDataLogic, NSMutableArray, NSString;

@interface ContactsAuthorityManageViewMgr : MMUserService <IContactMgrExt, ContactsDataLogicDelegate, MMServiceProtocol>
{
    NSMutableArray *m_arSocialBlackFunctionTagContact;
    NSMutableArray *m_arSnsBlackFunctionTagContact;
    NSMutableArray *m_arSnsNointerestingFunctionTagContact;
    NSMutableArray *m_arFinderBlackFunctionTagContact;
    NSMutableArray *m_arFinderOutsideFunctionTagContact;
    NSMutableArray *m_arWowHideFunctionTagContact;
    NSMutableArray *m_arWowBlockFunctionTagContact;
    NSMutableArray *m_arWeRunBlackFunctionTagContact;
    ContactsDataLogic *m_contactsDataLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsDataLogic *m_contactsDataLogic; // @synthesize m_contactsDataLogic;
- (unsigned int)getContactsAuthorityManageAuthTypeWithAuthorityID:(unsigned int)arg1;
- (unsigned int)getContactsAuthorityManageBizTypeWithAuthorityID:(unsigned int)arg1;
- (void)reportContactsAuthorityManageOperateLogWithActionCode:(unsigned int)arg1 bizType:(unsigned int)arg2 authType:(unsigned int)arg3 selectionType:(unsigned int)arg4 selectionCount:(unsigned int)arg5 selectionFriCount:(unsigned int)arg6 originListFriCount:(unsigned int)arg7 submitFriCount:(unsigned int)arg8;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)onServiceInit;
- (void)reloadNewContactFunctionTagContactList:(unsigned int)arg1;
- (void)reloadWowBlockFunctionTagContactList;
- (id)getWowBlockFunctionTagContactList;
- (void)reloadWowHideFunctionTagContactList;
- (id)getWowHideFunctionTagContactList;
- (void)preloadWowData;
- (void)reloadWeRunBlackFunctionTagContactList;
- (id)getWeRunBlackFunctionTagContactList;
- (void)reloadFinderOutsideFunctionTagContactList;
- (id)getFinderOutsideFunctionTagContactList;
- (void)reloadFinderBlackFunctionTagContactList;
- (id)getFinderBlackFunctionTagContactList;
- (void)reloadSnsNointerestingFunctionTagContactList;
- (id)getSnsNointerestingFunctionTagContactList;
- (void)reloadSnsBlackFunctionTagContactList;
- (id)getSnsBlackFunctionTagContactList;
- (void)reloadSocialBlackFunctionTagContactList;
- (id)getSocialBlackFunctionTagContactList;
- (id)getNewContactFunctionTagWithTagId:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

