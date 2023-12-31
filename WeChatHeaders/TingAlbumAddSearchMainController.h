//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCMusicSearchTextFieldController.h"

#import "MMPageSheetAdapterDelegate-Protocol.h"
#import "TingSearchContentViewControllerDelegate-Protocol.h"
#import "TingSearchHistoryViewControllerDelegate-Protocol.h"
#import "TingSearchSmartBoxViewControllerDelegate-Protocol.h"
#import "WCStateMachineDelegate-Protocol.h"

@class MMListenCategoryItem, MMPageSheetAdapter, NSMutableArray, NSString, TingAlbumAddSearchContentController, TingSearchHistoryViewController, TingSearchSmartBoxViewController, UIViewController, WCMusicSearchContext, WCStateMachine;

@interface TingAlbumAddSearchMainController : WCMusicSearchTextFieldController <TingSearchHistoryViewControllerDelegate, TingSearchSmartBoxViewControllerDelegate, MMPageSheetAdapterDelegate, WCStateMachineDelegate, TingSearchContentViewControllerDelegate>
{
    _Bool _isFirstAppear;
    MMPageSheetAdapter *_adapter;
    CDUnknownBlockType _viewDidBePopedOrDismissedHandler;
    CDUnknownBlockType _didClickListenItem;
    CDUnknownBlockType _didClickCancel;
    WCMusicSearchContext *_searchContext;
    MMPageSheetAdapter *_parentAdapter;
    UIViewController *_currentDisplayingViewController;
    NSMutableArray *_viewControllers;
    TingSearchHistoryViewController *_historyViewController;
    TingSearchSmartBoxViewController *_smartBoxViewController;
    TingAlbumAddSearchContentController *_searchViewController;
    WCStateMachine *_stateMachine;
    MMListenCategoryItem *_category;
    NSMutableArray *_addToListArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *addToListArray; // @synthesize addToListArray=_addToListArray;
@property(retain, nonatomic) MMListenCategoryItem *category; // @synthesize category=_category;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) TingAlbumAddSearchContentController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) TingSearchSmartBoxViewController *smartBoxViewController; // @synthesize smartBoxViewController=_smartBoxViewController;
@property(retain, nonatomic) TingSearchHistoryViewController *historyViewController; // @synthesize historyViewController=_historyViewController;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIViewController *currentDisplayingViewController; // @synthesize currentDisplayingViewController=_currentDisplayingViewController;
@property(nonatomic) __weak MMPageSheetAdapter *parentAdapter; // @synthesize parentAdapter=_parentAdapter;
@property(retain, nonatomic) WCMusicSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(copy, nonatomic) CDUnknownBlockType didClickCancel; // @synthesize didClickCancel=_didClickCancel;
@property(copy, nonatomic) CDUnknownBlockType didClickListenItem; // @synthesize didClickListenItem=_didClickListenItem;
@property(copy, nonatomic) CDUnknownBlockType viewDidBePopedOrDismissedHandler; // @synthesize viewDidBePopedOrDismissedHandler=_viewDidBePopedOrDismissedHandler;
@property(nonatomic) __weak MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
- (void)tingSearchSmartBoxViewController:(id)arg1 didSelectItemWithText:(id)arg2 indexPath:(id)arg3;
- (void)tingSearchSmartBoxViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)tingSearchHistoryViewConroller:(id)arg1 didSelectItemWithSearchHistory:(id)arg2 indexPath:(id)arg3;
- (void)tingSearchHistoryViewConroller:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (id)generateAdapter;
- (id)searchViewControllerWithSearchContext:(id)arg1;
- (void)popSelf;
- (void)showSearchView;
- (void)showSuggestionView;
- (void)showHistoryView;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)displayViewController:(id)arg1;
- (void)setupSearchStateMachine;
- (void)updateQuery:(id)arg1;
- (void)cancelLastSearch;
- (void)doSearch;
- (void)lazySearch:(id)arg1;
- (void)onLeftBackButtonClicked;
- (void)onDoneButtonClicked;
- (void)onTextCleared;
- (void)onTextChanged:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)setupViewControllers;
- (void)pushFromAdapter:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCategory:(id)arg1 addToListArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

