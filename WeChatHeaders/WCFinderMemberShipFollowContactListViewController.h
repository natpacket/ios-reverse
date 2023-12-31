//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderMemberShipFollowContactListViewModelDelegate-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"

@class NSString, UILabel, UITapGestureRecognizer, WCFinderMemberShipFollowContactListViewModel, WCFinderMembershipContact, WCFinderRefreshTableFooterView, WCTableView;

@interface WCFinderMemberShipFollowContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderMemberShipFollowContactListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    WCTableView *_tableView;
    WCFinderMemberShipFollowContactListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderMembershipContact *_selectedContact;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderMembershipContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderMemberShipFollowContactListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTableView *tableView; // @synthesize tableView=_tableView;
- (void)onMembershipFollowContactListViewModelFetchFailWithErrorCode:(int)arg1;
- (void)onMembershipFollowContactListViewModelNeedReloadDataWithContinueFlag:(_Bool)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)updateTitle;
- (void)configureTableView;
- (void)bindPageReport;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

