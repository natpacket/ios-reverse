//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomSpecialAttentionMemberSelectContactLogicDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CContact, ChatRoomSpecialAttentionMemberSelectContactLogic, MMAcceptAgreementCommonHeadView, MMTableView, NSMutableArray, NSString, UIButton, UIView;

@interface ChatRoomSpecialAttentionMemberViewController : MMUIViewController <ChatRoomSpecialAttentionMemberSelectContactLogicDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIView *m_seperateLineView;
    NSMutableArray *m_attentionMemberContactList;
    NSMutableArray *m_chatRoomMemContactList;
    ChatRoomSpecialAttentionMemberSelectContactLogic *m_chatRoomSpecialAttentionMemberSelectContactLogic;
    MMTableView *m_tableView;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    UIButton *m_modifyButton;
    NSMutableArray *m_initialAttentionMemberUserNameList;
    NSMutableArray *m_chatRoomMemContactUserNameList;
    CContact *_chatRoomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (id)navigationBarBackgroundColor;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2;
- (void)reportChatRoomSpecialAttentionMemberLog;
- (void)resetModifyButtonTitle;
- (void)modifySpecialAttentionMember;
- (void)updateTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)genFooterView;
- (id)genHeaderView;
- (void)reloadTableData;
- (void)reloadData;
- (void)initModifyButton;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
