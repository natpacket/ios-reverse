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
#import "TingViewController-Protocol.h"

@class MMPageSheetAdapter, NSMutableArray, NSString, TingSearchContentViewController, TingSearchHistoryViewController, TingSearchSmartBoxViewController, UIViewController, WCMusicSearchContext, WCStateMachine;

@interface TingSearchMainViewController : WCMusicSearchTextFieldController <TingSearchHistoryViewControllerDelegate, TingSearchSmartBoxViewControllerDelegate, TingSearchContentViewControllerDelegate, MMPageSheetAdapterDelegate, TingViewController>
{
    _Bool _isFirstAppear;
    int _searchScene;
    MMPageSheetAdapter *_adapter;
    CDUnknownBlockType _viewDidBePopedOrDismissedHandler;
    CDUnknownBlockType _didClickListenItem;
    CDUnknownBlockType _didClickListenCategoryItem;
    CDUnknownBlockType _didListenItemLike;
    CDUnknownBlockType _didListenItemListenLater;
    CDUnknownBlockType _didClickCancel;
    WCMusicSearchContext *_searchContext;
    MMPageSheetAdapter *_parentAdapter;
    UIViewController *_currentDisplayingViewController;
    NSMutableArray *_viewControllers;
    TingSearchHistoryViewController *_historyViewController;
    TingSearchSmartBoxViewController *_smartBoxViewController;
    TingSearchContentViewController *_searchViewController;
    WCStateMachine *_stateMachine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) TingSearchContentViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) TingSearchSmartBoxViewController *smartBoxViewController; // @synthesize smartBoxViewController=_smartBoxViewController;
@property(retain, nonatomic) TingSearchHistoryViewController *historyViewController; // @synthesize historyViewController=_historyViewController;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIViewController *currentDisplayingViewController; // @synthesize currentDisplayingViewController=_currentDisplayingViewController;
@property(retain, nonatomic) MMPageSheetAdapter *parentAdapter; // @synthesize parentAdapter=_parentAdapter;
@property(retain, nonatomic) WCMusicSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(copy, nonatomic) CDUnknownBlockType didClickCancel; // @synthesize didClickCancel=_didClickCancel;
@property(copy, nonatomic) CDUnknownBlockType didListenItemListenLater; // @synthesize didListenItemListenLater=_didListenItemListenLater;
@property(copy, nonatomic) CDUnknownBlockType didListenItemLike; // @synthesize didListenItemLike=_didListenItemLike;
@property(copy, nonatomic) CDUnknownBlockType didClickListenCategoryItem; // @synthesize didClickListenCategoryItem=_didClickListenCategoryItem;
@property(copy, nonatomic) CDUnknownBlockType didClickListenItem; // @synthesize didClickListenItem=_didClickListenItem;
@property(copy, nonatomic) CDUnknownBlockType viewDidBePopedOrDismissedHandler; // @synthesize viewDidBePopedOrDismissedHandler=_viewDidBePopedOrDismissedHandler;
@property(nonatomic) __weak MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
- (_Bool)shouldNotShowHomeButton;
- (_Bool)shouldNotShowBackButton;
- (void)updateQuery:(id)arg1;
- (void)cancelLastSearch;
- (void)doSearch;
- (void)lazySearch:(id)arg1;
- (void)displayViewController:(id)arg1;
- (void)setupViewControllers;
- (id)generateAdapter;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)tingSearchContentViewController:(id)arg1 didCellClickListenLater:(id)arg2;
- (void)tingSearchContentViewController:(id)arg1 didCellClickLike:(id)arg2 button:(id)arg3;
- (void)tingSearchContentViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)tingSearchContentViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)tingSearchSmartBoxViewController:(id)arg1 didSelectSearchResultItem:(id)arg2 indexPath:(id)arg3;
- (void)tingSearchSmartBoxViewController:(id)arg1 didSelectItemWithText:(id)arg2 indexPath:(id)arg3;
- (void)tingSearchSmartBoxViewController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)tingSearchHistoryViewConroller:(id)arg1 didSelectItemWithSearchHistory:(id)arg2 indexPath:(id)arg3;
- (void)tingSearchHistoryViewConroller:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)popSelf;
- (void)clearSearchView;
- (void)showSearchView;
- (void)showSuggestionView;
- (void)showHistoryView;
- (void)onLeftBackButtonClicked;
- (void)onDoneButtonClicked;
- (void)onTextCleared;
- (void)onTextChanged:(id)arg1;
- (void)showAsHalfScreen;
- (void)pushFromAdapter:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (void)setupNavigationBar;
- (_Bool)useTransparentNavibar;
- (id)initWithSearchScene:(unsigned int)arg1;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)setupSearchStateMachine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

