//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderHotWordsFeedViewModelDelegate-Protocol.h"

@class NSString, WCFinderFeedListView, WCFinderHotWordsFeedViewModel;

@interface WCFinderHotWordsFeedListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderHotWordsFeedViewModelDelegate>
{
    long long _scrollToIndexWhenViewDidAppear;
    WCFinderHotWordsFeedViewModel *_viewModel;
    WCFinderFeedListView *_feedListView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderHotWordsFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long scrollToIndexWhenViewDidAppear; // @synthesize scrollToIndexWhenViewDidAppear=_scrollToIndexWhenViewDidAppear;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)linkTopicVMStateChanged:(id)arg1;
- (void)linkTopicVM:(id)arg1 fetchDataFinishWithAppendDataWithRange:(struct _NSRange)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useTransparentNavibar;
- (void)setupListView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

