//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCFinderMentionSearchContactViewModelDelegate-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"

@class MMUILabel, MMUISearchBar, NSString, UIImageView, UILabel, UITableView, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderMentionSearchContactViewModel, WCFinderRefreshTableFooterView;
@protocol WCFinderMentionSearchViewControllerDelegate;

@interface WCFinderMentionSearchViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, UISearchBarDelegate, UITextFieldDelegate, WCFinderMentionSearchContactViewModelDelegate>
{
    _Bool _hideHistoryView;
    id <WCFinderMentionSearchViewControllerDelegate> _delegate;
    UIView *_navigationView;
    MMUISearchBar *_searchBar;
    MMUILabel *_cancelSearchLabel;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    WCFinderMentionSearchContactViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMentionSearchContactViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *cancelSearchLabel; // @synthesize cancelSearchLabel=_cancelSearchLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(nonatomic) _Bool hideHistoryView; // @synthesize hideHistoryView=_hideHistoryView;
@property(nonatomic) __weak id <WCFinderMentionSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)onClickMoreView:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)clickQuitAction;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getTableViewHeaderWithTitle:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onFinderSearchContactReload:(id)arg1;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultChanged;
- (void)onFinderSearchContactResultEmpty;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)onTextFieldChanged:(id)arg1;
- (void)configTableView;
- (void)initNaviBar;
- (void)willDisappear;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

