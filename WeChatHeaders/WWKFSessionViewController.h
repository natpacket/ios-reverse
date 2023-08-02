//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWWKFSessionMgrExt-Protocol.h"
#import "MMBaseSessionCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, MMUILabel, NSString, WWKFContactOpLogic;

@interface WWKFSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IWWKFSessionMgrExt, MMBaseSessionCellDelegate>
{
    MMUILabel *_emptyTipsLabel;
    MMTableView *_tableView;
    WWKFContactOpLogic *_contactOpLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WWKFContactOpLogic *contactOpLogic; // @synthesize contactOpLogic=_contactOpLogic;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
- (void)registerYReportSdk;
- (void)reportCellLeftSlideAction:(long long)arg1 cellData:(id)arg2;
- (void)onMenuItemsAppearInSessionCellData:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1 sessionCellData:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onWWKFSessionsChanged;
- (void)unbindWWKFContactOnIndexPath:(id)arg1;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateEmptyTipsLabelState;
- (void)setupEmptyTipsLabel;
- (void)setupMainTableView;
- (void)dealloc;
- (id)init;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

