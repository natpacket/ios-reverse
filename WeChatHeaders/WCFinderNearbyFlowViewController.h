//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderNearbyFlowViewModelDelegate-Protocol.h"

@class NSString, WCFinderFeedListView, WCFinderNearbyFlowViewModel;
@protocol WCFinderNearbyFlowViewControllerDelegate;

@interface WCFinderNearbyFlowViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderNearbyFlowViewModelDelegate>
{
    id <WCFinderNearbyFlowViewControllerDelegate> _delegate;
    WCFinderNearbyFlowViewModel *_viewModel;
    WCFinderFeedListView *_feedListView;
    long long _firstViewOffset;
    unsigned long long _eventTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderNearbyFlowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderNearbyFlowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)nearByListWillChangeOriginDataIndex;
- (void)nearByListDataWillRemoved:(id)arg1;
- (void)nearByListNextPageAppendData:(id)arg1;
- (void)nearByListDataSourceChanged;
- (void)nearByListSourceNoMoreData:(unsigned long long)arg1;
- (void)nearByListDataSourceFetchError:(unsigned long long)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

