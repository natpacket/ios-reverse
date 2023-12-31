//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IVOIPWindowExt-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "RingToneHistoryViewCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSString, RingToneHistoryModel, RingToneMixPlayer, RingToneRecommendReporter_23604, UILabel, WCTimeLineFooterView;

@interface RingToneHistoryViewController : MMUIViewController <MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, RingToneHistoryViewCellDelegate, IVOIPWindowExt>
{
    _Bool _isFetchingData;
    unsigned long long _setType;
    RingToneMixPlayer *_player;
    MMTableView *_tableView;
    RingToneHistoryModel *_model;
    WCTimeLineFooterView *_footerView;
    unsigned long long _dataStatus;
    RingToneRecommendReporter_23604 *_reporter;
    UILabel *_clearLabel;
}

+ (void)report25858Data:(unsigned long long)arg1 feedID:(id)arg2 type:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *clearLabel; // @synthesize clearLabel=_clearLabel;
@property(retain, nonatomic) RingToneRecommendReporter_23604 *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RingToneHistoryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak RingToneMixPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long setType; // @synthesize setType=_setType;
- (void)onVoipWindowDidAppear;
- (void)stopAllPlay;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(_Bool)arg2;
- (void)jumpToAuthorPage:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)onClearBarItemClick;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fetchNextPage;
- (void)viewDidLoad;
- (void)dealloc;
- (void)layoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initReporter;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

