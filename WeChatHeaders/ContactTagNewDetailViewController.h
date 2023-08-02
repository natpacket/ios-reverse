//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactTagNameEditViewControllerDelegate-Protocol.h"
#import "IContactLabelMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMTableViewIndexViewDelegate-Protocol.h"
#import "MMUITextFieldDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class ContactTagData, MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol ContactTagNewDetailViewControllerDelegate;

@interface ContactTagNewDetailViewController : MMUIViewController <IContactLabelMgrExt, IContactMgrExt, MultiSelectContactsViewControllerDelegate, ContactTagNameEditViewControllerDelegate, MMTableViewIndexViewDelegate, MMUITextFieldDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSMutableSet *m_contactSetImportFromGroup;
    NSMutableSet *m_contactSetNotImportFromGroup;
    _Bool _bIsAlreadyDisMissSelf;
    _Bool _bIsTagNameChange;
    _Bool _bAutoStartInput;
    unsigned int _m_uiFromScene;
    unsigned int _curEventID;
    NSString *_rightBarTitle;
    unsigned long long _commonSearchScene;
    id <ContactTagNewDetailViewControllerDelegate> _m_delegate;
    long long _curActionType;
    MMTableView *_tableView;
    ContactTagData *_contactTagData;
    NSMutableArray *_curMemberContactList;
    NSString *_curDisplayTagName;
    NSMutableArray *_contactsKeyArray;
    NSMutableDictionary *_contactsDict;
    long long _contactItemClickNum;
    NSMutableArray *_originalMemberContactNameList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bAutoStartInput; // @synthesize bAutoStartInput=_bAutoStartInput;
@property(retain, nonatomic) NSMutableArray *originalMemberContactNameList; // @synthesize originalMemberContactNameList=_originalMemberContactNameList;
@property(nonatomic) long long contactItemClickNum; // @synthesize contactItemClickNum=_contactItemClickNum;
@property(retain, nonatomic) NSMutableDictionary *contactsDict; // @synthesize contactsDict=_contactsDict;
@property(retain, nonatomic) NSMutableArray *contactsKeyArray; // @synthesize contactsKeyArray=_contactsKeyArray;
@property(retain, nonatomic) NSString *curDisplayTagName; // @synthesize curDisplayTagName=_curDisplayTagName;
@property(nonatomic) _Bool bIsTagNameChange; // @synthesize bIsTagNameChange=_bIsTagNameChange;
@property(nonatomic) _Bool bIsAlreadyDisMissSelf; // @synthesize bIsAlreadyDisMissSelf=_bIsAlreadyDisMissSelf;
@property(nonatomic) unsigned int curEventID; // @synthesize curEventID=_curEventID;
@property(retain, nonatomic) NSMutableArray *curMemberContactList; // @synthesize curMemberContactList=_curMemberContactList;
@property(retain, nonatomic) ContactTagData *contactTagData; // @synthesize contactTagData=_contactTagData;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long curActionType; // @synthesize curActionType=_curActionType;
@property(nonatomic) __weak id <ContactTagNewDetailViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) unsigned long long commonSearchScene; // @synthesize commonSearchScene=_commonSearchScene;
@property(retain, nonatomic) NSString *rightBarTitle; // @synthesize rightBarTitle=_rightBarTitle;
- (void)onTagNameChanged:(id)arg1;
- (void)mmTextFieldDidExceedMaxLen:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)deleteContactInTag:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (id)contactNamesComponentsJoinedByComma:(id)arg1;
- (void)contactLabelEditDataReport:(_Bool)arg1;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (unsigned int)updateTagMember;
- (_Bool)isTagNameEmptyOrExist:(id)arg1;
- (unsigned int)createOrUpdateTagName;
- (void)updateRightBarButtonStatus;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(_Bool)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onSaveBarButtonPress:(id)arg1;
- (void)onDismissBarButtonPress:(id)arg1;
- (void)internalDisMissSelfAnimated:(_Bool)arg1;
- (void)setSaveButtonEnable:(_Bool)arg1;
- (void)onClickContactItemCellWithIndexPath:(id)arg1;
- (void)onClickAddMemberCell;
- (void)onClickTagNameCell;
- (void)makeMemberContactCellContent:(id)arg1 WithIndexPath:(id)arg2;
- (void)makeTagDetailEditHeaderContent:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleDeleteContactAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sortTagContacts;
- (id)addContactSectionKey:(id)arg1;
- (void)processContactSectionData:(id)arg1;
- (void)initView;
- (void)reloadData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initViewControllerWithCreateNewTag;
- (id)initViewControllerWithContactTagData:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

