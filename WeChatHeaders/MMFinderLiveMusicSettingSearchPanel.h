//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveMusicSettingSearchDelegate-Protocol.h"
#import "MMFinderLiveMusicSettingSearchTableDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"

@class MMFinderLiveMusicSettingSearchTableViewModel, MMFinderLiveMusicSettingSearchViewModel, MMFinderLiveTaskId, MMTableView, MMUIActivityIndicatorView, MMUILabel, MMUISearchBar, NSString, UILabel, UIView, WCTimeLineFooterView;

@interface MMFinderLiveMusicSettingSearchPanel : MMPageSheetBaseView <MMFinderLiveMusicSettingSearchDelegate, MMRefreshTableFooterDelegate, MMFinderLiveMusicSettingSearchTableDelegate>
{
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMUISearchBar *_searchBar;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    UILabel *_tipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUILabel *_emptyTipsLabel;
    MMFinderLiveMusicSettingSearchViewModel *_searchViewModel;
    MMFinderLiveMusicSettingSearchTableViewModel *_searchTableViewModel;
    NSString *_curSearchText;
}

+ (id)createSearchBar;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *curSearchText; // @synthesize curSearchText=_curSearchText;
@property(retain, nonatomic) MMFinderLiveMusicSettingSearchTableViewModel *searchTableViewModel; // @synthesize searchTableViewModel=_searchTableViewModel;
@property(retain, nonatomic) MMFinderLiveMusicSettingSearchViewModel *searchViewModel; // @synthesize searchViewModel=_searchViewModel;
@property(retain, nonatomic) MMUILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onMMFinderLiveMusicSettingSearchTableScroll;
- (void)handleAfterGetSearchResultWithContinueFlag:(unsigned int)arg1;
- (void)onGetMusicDataContinueSearchResult:(int)arg1 resultArray:(id)arg2 continueFlag:(unsigned int)arg3;
- (void)onGetMusicDataSearchResult:(int)arg1 resultArray:(id)arg2 continueFlag:(unsigned int)arg3;
- (void)musicDataSearchBarWillSearch:(id)arg1 searchText:(id)arg2;
- (void)musicDataSearchBarTextDidBeginEditing:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (id)createSearchTableFooterView;
- (id)createTitleView;
- (id)createSearchViewModel;
- (id)createSearchTableViewModel;
- (double)contentHeight;
- (double)contentWidth;
- (void)stopLoading;
- (void)startLoading;
- (void)hideTipsLabel;
- (void)showTipsLabelWithText:(id)arg1;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)hideFooterView;
- (void)hideEmptyTips;
- (void)layoutActivityIndicatorView;
- (void)layoutTipLabel;
- (void)layoutTableView;
- (void)layoutSearchBar;
- (void)layoutContentView;
- (void)createEmptyTipsLabel;
- (void)layoutEmptyTipsLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

