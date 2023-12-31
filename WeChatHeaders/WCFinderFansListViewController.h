//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderFansListViewModelDelegate-Protocol.h"
#import "WCFinderFansProfileViewControllerDelegate-Protocol.h"
#import "WCFinderFollowSearchContactViewControllerDelegate-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"

@class MMUISearchBar, NSString, UILabel, UITapGestureRecognizer, WCFinderContact, WCFinderFansListViewModel, WCFinderFollowSearchContactViewController, WCFinderRefreshTableFooterView, WCTableView;

@interface WCFinderFansListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFansListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFansProfileViewControllerDelegate, UISearchBarDelegate, WCFinderFollowSearchContactViewControllerDelegate>
{
    WCTableView *_tableView;
    WCFinderFansListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    MMUISearchBar *_searchBar;
    WCFinderContact *_selectContact;
    WCFinderFollowSearchContactViewController *_searchContactVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFollowSearchContactViewController *searchContactVC; // @synthesize searchContactVC=_searchContactVC;
@property(retain, nonatomic) WCFinderContact *selectContact; // @synthesize selectContact=_selectContact;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderFansListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCTableView *tableView; // @synthesize tableView=_tableView;
- (void)registerYReportSdk;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)didCancelSelectSearchContact;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFansListFetchFailWithErrorCode:(int)arg1;
- (void)finderFansListViewModelNeedReloadDataWithContinueFlag:(_Bool)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)clickSearchBar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)updateTitle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

