//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactSearchLogicDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class ContactSearchLogic, MMTableView, MMUILabel, NSString, UIButton, UIImageView, UIView, WCDataSearcher, WCTimeLineFooterView;

@interface OpenIMFriendViewController : MMUIViewController <MMTableViewDelegate, contactInfoDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCSearchDelegate, WCDataSearchDelegate, ContactSearchLogicDelegate>
{
    ContactSearchLogic *_contactSearchLogic;
    UIImageView *_searchBarWrap;
    UIView *_searchBarSuperView;
    UIButton *_backButton;
    WCDataSearcher *_searcher;
    _Bool _bForbidSearchControllerCallBack;
    WCTimeLineFooterView *_loadingFooterView;
    UIView *_emptyFooterView;
    MMUILabel *_emptyFooterLable;
    MMTableView *m_tableView;
    _Bool _bIsSearchingFromNetwork;
    NSString *_reportSessionId;
    _Bool _islastVCNavBarHidden;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool islastVCNavBarHidden; // @synthesize islastVCNavBarHidden=_islastVCNavBarHidden;
- (void)onBackBtnClick;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)setLoadingStatus;
- (void)didEndSearch;
- (void)beginSearch;
- (void)initData;
- (void)updateEmptyFooterView:(id)arg1;
- (void)initSearchTableFoot;
- (void)initBackButton;
- (void)initTable;
- (void)initSearchBar;
- (void)initView;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)UISplitViewWillChangeSplitMode;
- (_Bool)isSeachActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

