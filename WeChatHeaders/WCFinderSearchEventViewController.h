//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderEmptyTipsViewDelegate-Protocol.h"
#import "WCFinderEventPosterViewControllerDelegate-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCFinderSearchEventViewModelDelegate-Protocol.h"

@class MMUISearchBar, NSString, UITableView, WCFinderEmptyTipsView, WCFinderRefreshTableFooterView, WCFinderSearchEventViewModel;
@protocol WCFinderSearchEventViewControllerDelegate;

@interface WCFinderSearchEventViewController : MMUIViewController <WCFinderSearchEventViewModelDelegate, UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, WCFinderEventPosterViewControllerDelegate, WCFinderEmptyTipsViewDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    id <WCFinderSearchEventViewControllerDelegate> _delegate;
    WCFinderSearchEventViewModel *_viewModel;
    MMUISearchBar *_searchBar;
    UITableView *_tableView;
    WCFinderEmptyTipsView *_emptyTipsView;
    WCFinderRefreshTableFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WCFinderSearchEventViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderSearchEventViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)eventPosterViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)finderSearchEventError;
- (void)finderSearchEventNoMoreData;
- (void)finderSearchEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderSearchEventReloadAllData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)setEmptyTipsViewState:(unsigned long long)arg1 config:(id)arg2;
- (void)setEventVisitId:(id)arg1;
- (void)setFlowId:(id)arg1;
- (void)OnCancel;
- (id)navigationBarBackgroundColor;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

