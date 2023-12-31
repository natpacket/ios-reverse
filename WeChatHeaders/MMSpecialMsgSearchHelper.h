//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "FTSMsgSearchTaskDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "MsgImgFastBrowseViewControllerDelegate-Protocol.h"
#import "RoomContactSelectDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class FTSMessageDB, FTSMsgSearchTask, MMLoadingView, MMUILabel, MMUIView, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, UIButton, UITextField, UIView, WCDataSearcher;
@protocol MMSpecialMsgSearchHelperDelegate;

@interface MMSpecialMsgSearchHelper : MMObject <MMUIViewControllerDelegate, MsgImgFastBrowseViewControllerDelegate, RoomContactSelectDelegate, FTSMsgSearchTaskDelegate, WCSearchDelegate, WCDataSearchDelegate>
{
    _Bool m_bStartSearch;
    _Bool m_bSearchBarBecomeFirstRespones;
    NSMutableArray *m_arrSearchResult;
    MMLoadingView *m_oLoadingView;
    UIView *searchBarBackgroundColorView;
    UIButton *backGroundButton;
    UIButton *cancelButton;
    id <MMSpecialMsgSearchHelperDelegate> m_delegate;
    NSMutableArray *m_buttonTitles;
    NSMutableArray *m_buttons;
    NSMutableArray *m_divLines;
    NSMutableArray *m_buttonIndexes;
    MMUILabel *m_tipLabel;
    MMUIViewController *m_searchParentVC;
    MMUIViewController *m_searchCurVC;
    UITextField *m_txtField;
    NSString *m_tagText;
    UIButton *m_leftBtn;
    UIButton *m_dateBtn;
    _Bool _hasMoving;
    double _moveStartOffset;
    double _moveCurOffset;
    double _moveContentOffsetY;
    long long startTime;
    FTSMessageDB *_ftsMessageDB;
    FTSMsgSearchTask *_ftsTask;
    NSMutableDictionary *m_dicMatchTips;
    MMUIView *m_tipLabelLineView;
    _Bool _m_bShowSearchByTime;
    _Bool _bUsePanCancelGesture;
    unsigned int _m_msgSearchBusinessType;
    WCDataSearcher *_searcher;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_msgSearchBusinessType; // @synthesize m_msgSearchBusinessType=_m_msgSearchBusinessType;
@property(nonatomic) _Bool bUsePanCancelGesture; // @synthesize bUsePanCancelGesture=_bUsePanCancelGesture;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(nonatomic) _Bool m_bShowSearchByTime; // @synthesize m_bShowSearchByTime=_m_bShowSearchByTime;
@property(nonatomic) __weak id <MMSpecialMsgSearchHelperDelegate> m_delegate; // @synthesize m_delegate;
- (void)reportSearchAtion:(unsigned int)arg1 text:(id)arg2 useTime:(long long)arg3 result:(unsigned int)arg4 oprationTime:(long long)arg5;
- (void)makeSearchResultPreview:(id)arg1;
- (id)filterViewModel:(id)arg1 msgItem:(id)arg2;
- (void)defualtMakeSearchResultPreview:(id)arg1;
- (id)defualtFilterViewModel:(id)arg1 msgItem:(id)arg2;
- (void)onMsgSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (void)cancelFTSSearch;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)makeHomePageTaskIfNil;
- (void)onSearchPanGestureMoveRight;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (_Bool)isSearchBarActive;
- (void)startSearch;
- (void)dealloc;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)cancelBtnDown;
- (_Bool)wcsSearchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (id)getSearchText:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)removeSearchVC;
- (void)moveSearchVCToRight;
- (void)cancelMoveSearchVC;
- (void)updateSearchVCPosition;
- (void)handlePanGesture:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)finishSearch;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (_Bool)wcSearcherCanPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (_Bool)wcSearcherShouldShowMenuForRowAtIndexPath:(id)arg1;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (_Bool)shouldHighlightRowAtIndexPath:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)calButtonHeight;
- (double)calButtonWidth;
- (void)endSearchAnim;
- (void)beginSearchAnim;
- (void)fixSearchBarFrame;
- (void)tryFixSearchBarFrame;
- (void)startSearch:(id)arg1;
- (void)fillSearcNoResultCell:(id)arg1;
- (void)fillSearcLoadMoreCell:(id)arg1;
- (void)fillSearcIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultCell:(id)arg1 result:(id)arg2;
- (id)searchBar;
- (_Bool)searchBarShouldBecomeFirstResponse;
- (void)resetBackGroundView;
- (void)reloadView;
- (void)msgSearchBarWillPushByIndex:(long long)arg1;
- (id)getViewController;
- (void)msgSearchBarSearchByTime;
- (void)resetTypingAttributes;
- (void)updateSearchFieldText:(id)arg1;
- (void)onTapButton:(id)arg1;
- (double)getButtonTitleFontSize;
- (void)initBackGroundView;
- (void)searchBarResignFirstResponder;
- (void)initFTSDB;
- (id)initWithContentsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

