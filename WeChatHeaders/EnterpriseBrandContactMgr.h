//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IContactMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface EnterpriseBrandContactMgr : MMUserService <IContactMgrExt, PBMessageObserverDelegate, MMServiceProtocol>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)callEnterpriseBrandSyncedExtension:(id)arg1 extParams:(id)arg2;
- (void)callEnterpriseBrandContactDeletedExtension:(id)arg1;
- (void)callEnterpriseBrandAttrChangedExtension:(id)arg1;
- (void)callEnterpriseBrandContactModifiedExtension:(id)arg1;
- (void)handleSwitchBrandContact:(id)arg1;
- (void)switchBrandContact:(id)arg1 enable:(_Bool)arg2;
- (void)forceUpdateEnterpriseBrandContact:(id)arg1;
- (void)updateEnterpriseBrandContactOfMainBrand:(id)arg1;
- (id)sortMainAndChatBrandContacts:(id)arg1;
- (id)getMainAndChatBrandListForConnectMsgType:(unsigned long long)arg1;
- (_Bool)hasMainBrandForConnectMsgType:(unsigned long long)arg1;
- (id)getSubBrandContacts:(id)arg1 ForConnectMsgType:(unsigned long long)arg2;
- (_Bool)hasChatExtendSubBrand:(id)arg1;
- (id)getEnterpriseChatExtendContacts:(id)arg1;
- (id)getEnterpriseChatContact:(id)arg1;
- (id)getDisabledSubBrandContactList:(id)arg1;
- (id)getEnabledSubBrandContactList:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

