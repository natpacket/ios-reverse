//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavTagViewDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FavoritesItem, MMTableView, NSString;

@interface FavBaseDetailViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, IFavoritesExt, FavTagViewDelegate>
{
    MMTableView *m_tableView;
    FavoritesItem *m_favItem;
}

- (void).cxx_destruct;
- (void)onFavTagEditOK;
- (void)onFavTagEditBegin:(int)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)convertToNoteViewController;
- (_Bool)canShowConvertToNoteActionSheet;
- (void)genFooterContent:(id)arg1 indexPath:(id)arg2;
- (void)genHeadCell:(id)arg1 indexPath:(id)arg2;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)onAction:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)initTableView;
- (void)initNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
