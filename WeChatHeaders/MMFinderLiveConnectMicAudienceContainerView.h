//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveConnectMicBaseContainerView.h"

#import "MMFinderLiveConnectedMicCellHeaderViewDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMFinderLiveConnectMicAudienceTableViewDataModel, MMFinderLiveConnectMicLayoutModeSubtitleWrap, MMTableView, MMUIButton, MMUISearchBar, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface MMFinderLiveConnectMicAudienceContainerView : MMFinderLiveConnectMicBaseContainerView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, MMFinderLiveConnectedMicCellHeaderViewDelegate>
{
    _Bool _showFocusSettings;
    _Bool _containerShowing;
    NSArray *connectMicUserList;
    UIView *_searchBarHeaderView;
    UIView *_searchBarContainerView;
    MMUISearchBar *_searchBar;
    UILabel *_tipsLabel;
    MMFinderLiveConnectMicAudienceTableViewDataModel *_tableViewDataModel;
    MMTableView *_tableView;
    UIView *_tableFooterContainerView;
    UILabel *_tipsLabelInFooterView;
    UIView *_headerContainerView;
    UIView *_conditionSettingView;
    UILabel *_conditionLabel;
    MMUIButton *_focusSettingsButton;
    NSMutableArray *_filteredConnectMicUserList;
    NSString *_highlightedText;
    unsigned long long _micLayoutMode;
    MMFinderLiveConnectMicLayoutModeSubtitleWrap *_micLayoutModeSubtitleWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicLayoutModeSubtitleWrap *micLayoutModeSubtitleWrap; // @synthesize micLayoutModeSubtitleWrap=_micLayoutModeSubtitleWrap;
@property(nonatomic) unsigned long long micLayoutMode; // @synthesize micLayoutMode=_micLayoutMode;
@property(nonatomic) _Bool containerShowing; // @synthesize containerShowing=_containerShowing;
@property(nonatomic) _Bool showFocusSettings; // @synthesize showFocusSettings=_showFocusSettings;
@property(retain, nonatomic) NSString *highlightedText; // @synthesize highlightedText=_highlightedText;
@property(retain, nonatomic) NSMutableArray *filteredConnectMicUserList; // @synthesize filteredConnectMicUserList=_filteredConnectMicUserList;
@property(retain, nonatomic) MMUIButton *focusSettingsButton; // @synthesize focusSettingsButton=_focusSettingsButton;
@property(retain, nonatomic) UILabel *conditionLabel; // @synthesize conditionLabel=_conditionLabel;
@property(retain, nonatomic) UIView *conditionSettingView; // @synthesize conditionSettingView=_conditionSettingView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UILabel *tipsLabelInFooterView; // @synthesize tipsLabelInFooterView=_tipsLabelInFooterView;
@property(retain, nonatomic) UIView *tableFooterContainerView; // @synthesize tableFooterContainerView=_tableFooterContainerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveConnectMicAudienceTableViewDataModel *tableViewDataModel; // @synthesize tableViewDataModel=_tableViewDataModel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *searchBarContainerView; // @synthesize searchBarContainerView=_searchBarContainerView;
@property(retain, nonatomic) UIView *searchBarHeaderView; // @synthesize searchBarHeaderView=_searchBarHeaderView;
@property(retain, nonatomic) NSArray *connectMicUserList; // @synthesize connectMicUserList;
- (void)onMMFinderLiveConnectedMicCellHeaderViewTapSearch;
- (id)tableView:(id)arg1 connectMicUserCellAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 settingCellViewForCellType:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)isOnsearching;
- (id)mainScrollView;
- (void)doSearchWithText:(id)arg1;
- (void)onCancelSearch;
- (void)tryActiveSearch;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSearchBar;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)onFocusSettingsButtonClicked;
- (void)showSelectMicLayoutModePannel;
- (id)getConditionTitleByType:(unsigned long long)arg1;
- (void)layoutTableFooterContainerView;
- (void)layoutTableView;
- (void)layoutContentView;
- (void)scrollListToTopAnimated:(_Bool)arg1;
- (void)onContainerWillHide;
- (void)onContainerDidShow;
- (void)updateFocusSettingsShowStatus:(_Bool)arg1;
- (void)updateConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)updateConnectingUserList:(id)arg1 micLayoutMode:(unsigned long long)arg2 subtitleWrap:(id)arg3;
- (void)updateWithConnectMicUserList:(id)arg1;
- (void)updateTableViewDataModel;
- (id)getFinderLiveTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

