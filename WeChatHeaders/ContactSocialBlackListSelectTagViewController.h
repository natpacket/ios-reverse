//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContactTagListViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;
@protocol ContactSocialBlackListSelectTagViewControllerDelegate;

@interface ContactSocialBlackListSelectTagViewController : ContactTagListViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <ContactSocialBlackListSelectTagViewControllerDelegate> _m_delegate;
    MMTableView *_tableView;
    NSMutableArray *_arrContactTagData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrContactTagData; // @synthesize arrContactTagData=_arrContactTagData;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ContactSocialBlackListSelectTagViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeContactItemCellContent:(id)arg1 withIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getMemberDesc:(id)arg1;
- (void)reloadDataAndView;
- (void)initTable;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

