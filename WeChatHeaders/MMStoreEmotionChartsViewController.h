//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonStoreMgrExt-Protocol.h"
#import "MMEmotionChartsCellDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EmoticonStoreFootView, MMTableView, NSMutableArray, NSString;

@interface MMStoreEmotionChartsViewController : MMUIViewController <EmoticonStoreMgrExt, UITableViewDataSource, UITableViewDelegate, MMEmotionChartsCellDelegate, MMRefreshTableFooterDelegate>
{
    MMTableView *_chartsTableView;
    NSMutableArray *_chartsItemArray;
    _Bool _isLoadedFromCache;
    unsigned long long _sessionId;
    EmoticonStoreFootView *_tailView;
}

- (void).cxx_destruct;
- (void)OnEmotionChartsCellTapButton:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)OnStoreListChanged:(id)arg1 withRet:(unsigned long long)arg2 withReqType:(unsigned int)arg3 data:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reportEmoticonStoreExposure;
- (void)reloadData;
- (void)initTableFooterView;
- (void)setupTableView;
- (void)setupViews;
- (void)setupData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

