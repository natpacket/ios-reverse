//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class MMTableView, NSMutableArray, NSString;

@interface WCEditGroupViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, MultiSelectContactsViewControllerDelegate, WCFacadeExt>
{
    MMTableView *m_tableView;
    NSMutableArray *m_arrMyGroup;
}

- (void).cxx_destruct;
- (void)onWCGroupUpdatedReturn:(_Bool)arg1;
- (void)onWCGroupUpdated;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onNewGroup;
- (void)OnEditDone;
- (void)OnEdit;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)stopLoading;
- (void)startLoadingWithTitle:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)initData;
- (void)loadMyGroups;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

