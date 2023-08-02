//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMFinderLiveTask, MMFinderLiveTaskId, MMTableView, MMUILabel, NSData, NSMutableArray, NSString, WCTimeLineFooterView;

@interface WCFinderLiveLotteryWinRecordViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    unsigned int _supportMultiType;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_winRecordList;
    NSMutableArray *_milestoneWinRecordList;
    MMTableView *_lotterySelfWinRecordTableView;
    WCTimeLineFooterView *_footerView;
    MMUILabel *_lawDescriptionLabel;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int supportMultiType; // @synthesize supportMultiType=_supportMultiType;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) MMUILabel *lawDescriptionLabel; // @synthesize lawDescriptionLabel=_lawDescriptionLabel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *lotterySelfWinRecordTableView; // @synthesize lotterySelfWinRecordTableView=_lotterySelfWinRecordTableView;
@property(retain, nonatomic) NSMutableArray *milestoneWinRecordList; // @synthesize milestoneWinRecordList=_milestoneWinRecordList;
@property(retain, nonatomic) NSMutableArray *winRecordList; // @synthesize winRecordList=_winRecordList;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pushCustomeLotteryAtIndexPath:(id)arg1;
- (void)pushMilestoneLotteryAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)reloadData;
- (id)getCurrentWinRecordListFrom:(id)arg1;
- (id)getCurrentMilestoneWinRecordListFrom:(id)arg1;
- (unsigned int)getSupportMultiTypeFrom:(id)arg1;
- (_Bool)isMilestoneSupportMultiType;
- (_Bool)fetchWinRecordList;
- (void)layoutLawDescriptionLabel;
- (void)layoutLotterySelfWinRecordTableView;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
