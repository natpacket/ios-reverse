//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderRefuseLikeListModelDelegate-Protocol.h"
#import "WCStoryDismissInteractiveTransitionDelegate-Protocol.h"

@class NSMutableArray, NSString, RichTextView, UILabel, UITableView, UITapGestureRecognizer, WCFinderRefuseLikeListModel, WCStoryDismissInteractiveTransition, WCStoryFriendsCollectionDismissTransition;
@protocol WCFinderRefuseLikeListViewControllerDelegate;

@interface WCFinderRefuseLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefuseLikeListModelDelegate, MultiSelectContactsViewControllerDelegate, WCStoryDismissInteractiveTransitionDelegate>
{
    id <WCFinderRefuseLikeListViewControllerDelegate> _delegate;
    NSString *_objectId;
    UITableView *_tableView;
    WCFinderRefuseLikeListModel *_viewModel;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    unsigned long long _scene;
    NSMutableArray *_deleteUsernameArray;
    RichTextView *_richTextView;
    WCStoryDismissInteractiveTransition *_transition;
    WCStoryFriendsCollectionDismissTransition *_dismissAnimateTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryFriendsCollectionDismissTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) WCStoryDismissInteractiveTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) NSMutableArray *deleteUsernameArray; // @synthesize deleteUsernameArray=_deleteUsernameArray;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefuseLikeListModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) __weak id <WCFinderRefuseLikeListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (void)finderRefuseLikeListFetchFailWithErrorCode:(int)arg1;
- (void)finderRefuseLikeListCGISuc;
- (void)finderRefuseLikeListFetchSuccess;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)updateMenuItemCell:(id)arg1 contact:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)clickRightAddButton;
- (void)configureRightButton;
- (void)updateNavTitle;
- (id)getTitleViewText;
- (void)setupNavBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithObjectId:(id)arg1 commentScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

