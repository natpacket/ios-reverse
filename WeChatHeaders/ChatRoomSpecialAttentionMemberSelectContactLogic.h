//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ChatRoomSpecialAttentionMemberLogicDelegate-Protocol.h"
#import "RoomContactSelectDelegate-Protocol.h"

@class CContact, ChatRoomSpecialAttentionMemberLogic, ChatRoomSpecialAttentionMemberSelectViewController, NSArray, NSString, OrderedDictionary;
@protocol ChatRoomSpecialAttentionMemberSelectContactLogicDelegate;

@interface ChatRoomSpecialAttentionMemberSelectContactLogic : MMObject <RoomContactSelectDelegate, ChatRoomSpecialAttentionMemberLogicDelegate>
{
    ChatRoomSpecialAttentionMemberSelectViewController *m_vc;
    OrderedDictionary *m_dicModifySpecialAttentionMember;
    ChatRoomSpecialAttentionMemberLogic *m_chatRoomSpecialAttentionMemberLogic;
    _Bool m_bIsAddSpecialAttentionMember;
    id <ChatRoomSpecialAttentionMemberSelectContactLogicDelegate> m_delegate;
    CContact *_m_chatRoomContact;
    NSArray *_m_attentionMemberContactList;
    NSArray *_m_chatRoomMemContactList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_chatRoomMemContactList; // @synthesize m_chatRoomMemContactList=_m_chatRoomMemContactList;
@property(retain, nonatomic) NSArray *m_attentionMemberContactList; // @synthesize m_attentionMemberContactList=_m_attentionMemberContactList;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
@property(nonatomic) _Bool m_bIsAddSpecialAttentionMember; // @synthesize m_bIsAddSpecialAttentionMember;
@property(nonatomic) __weak id <ChatRoomSpecialAttentionMemberSelectContactLogicDelegate> m_delegate; // @synthesize m_delegate;
- (id)getViewController;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 errorMsg:(id)arg3;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (id)getAllAttentionMemberContactDic;
- (void)DoModifySpecialAttentionMember;
- (_Bool)isSelected:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (unsigned int)getSpecialAttentionMemberSelectMaxNumber;
- (void)updateRightBtn;
- (void)reloadData;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

