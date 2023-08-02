//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContactBaseSelectListViewController.h"

#import "ContactSelectListViewControllerDelegate-Protocol.h"
#import "ContactSocialBlackListSelectTagViewControllerDelegate-Protocol.h"
#import "GroupSelectContactsViewControllerDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class ContactSocialBlackListSelectTagViewController, GroupSelectContactsViewController, MMUIView, NSString;

@interface ContactSocialBlackListViewController : ContactBaseSelectListViewController <IContactMgrExt, WCActionSheetDelegate, ContactSelectListViewControllerDelegate, GroupSelectContactsViewControllerDelegate, ContactSocialBlackListSelectTagViewControllerDelegate, MultiSelectContactsViewControllerDelegate>
{
    MMUIView *m_bottomToolView;
    GroupSelectContactsViewController *m_groupSelectContactsViewController;
    ContactSocialBlackListSelectTagViewController *m_contactSocialBlackListSelectTagViewController;
    double m_firstSectionIndexHeight;
    NSString *m_ssesionID;
    unsigned long long m_currentSocialBlackFriendNum;
}

- (void).cxx_destruct;
- (void)registerYReportSdk;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onModifyContact:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickDeleteBtn;
- (void)onClickAddBtn;
- (void)openSelectdContactTag;
- (void)openSelectGroup;
- (id)genContactAddSocialBlackViewController;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)didSelectContactTag:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (_Bool)onShouldSelectContact:(id)arg1;
- (id)getReloadContactDataList;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)initTableHeaderView;
- (id)getAllExistContactDic;
- (double)getTableViewHeight;
- (id)getButton:(id)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)initBottomToolView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

