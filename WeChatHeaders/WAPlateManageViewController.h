//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAPlateEditViewControllerDelegate-Protocol.h"

@class MMUIButton, MMUILabel, NSMutableArray, NSObject, NSString, UITableView, WAReportPlateManageActionItem;
@protocol WAPlateManageViewControllerDelegate;

@interface WAPlateManageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate, WAPlateEditViewControllerDelegate>
{
    _Bool _firstIn;
    NSObject<WAPlateManageViewControllerDelegate> *_delegate;
    WAReportPlateManageActionItem *_reportAction;
    NSString *_createSubDesc;
    NSMutableArray *_plateList;
    UITableView *_listView;
    MMUILabel *_defaultLabel;
    MMUIButton *_defaultAddBtn;
    MMUIButton *_addButton;
    MMUILabel *_addInfoLabel;
    long long _currentEditIdx;
    long long _currentDeleteIdx;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool firstIn; // @synthesize firstIn=_firstIn;
@property(nonatomic) long long currentDeleteIdx; // @synthesize currentDeleteIdx=_currentDeleteIdx;
@property(nonatomic) long long currentEditIdx; // @synthesize currentEditIdx=_currentEditIdx;
@property(retain, nonatomic) MMUILabel *addInfoLabel; // @synthesize addInfoLabel=_addInfoLabel;
@property(retain, nonatomic) MMUIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) MMUIButton *defaultAddBtn; // @synthesize defaultAddBtn=_defaultAddBtn;
@property(retain, nonatomic) MMUILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) NSMutableArray *plateList; // @synthesize plateList=_plateList;
@property(retain, nonatomic) NSString *createSubDesc; // @synthesize createSubDesc=_createSubDesc;
@property(retain, nonatomic) WAReportPlateManageActionItem *reportAction; // @synthesize reportAction=_reportAction;
@property(nonatomic) __weak NSObject<WAPlateManageViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)plateFormatString:(id)arg1;
- (void)onPlateManagerDelete;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleDeleteUserPlateInfo:(id)arg1;
- (void)handleUpdatePlateInfo:(id)arg1;
- (void)handleCreatePlateInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)issueUpdatePlateRequestWithOld:(id)arg1 andNew:(id)arg2;
- (void)issueDeletePlateRequest:(id)arg1;
- (void)issueCreatePlateRequest:(id)arg1;
- (void)issueGetPlateRequest;
- (void)onPlateEditViewControllerFinished:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_pushNewPageViewController:(id)arg1;
- (void)onDefaultAddBtnClicked:(id)arg1;
- (id)getPlateEditVCWithStyle:(unsigned long long)arg1;
- (double)tableViewHeight;
- (void)layoutSubViews;
- (id)navigationBarBackgroundColor;
- (void)initViews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)updatePlateList:(id)arg1;
- (id)init;
- (id)initWithPlateList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
