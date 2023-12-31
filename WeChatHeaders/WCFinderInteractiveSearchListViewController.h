//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderFeedListViewMinimizeDelegate-Protocol.h"
#import "WCFinderInteractiveSearchViewModelDelegate-Protocol.h"

@class NSString, WCFinderFeedListView, WCFinderInteractiveSearchListViewModel;

@interface WCFinderInteractiveSearchListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderInteractiveSearchViewModelDelegate, WCFinderFeedListViewMinimizeDelegate>
{
    WCFinderInteractiveSearchListViewModel *_viewModel;
    WCFinderFeedListView *_listView;
    long long _openInitialIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long openInitialIndex; // @synthesize openInitialIndex=_openInitialIndex;
@property(retain, nonatomic) WCFinderFeedListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) WCFinderInteractiveSearchListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)updateLoadState;
- (void)onSearchVMSectionLoadingStateChanged:(id)arg1;
- (void)onSearchVMSecitonChanged:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewModel:(id)arg1 index:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

