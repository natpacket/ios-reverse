//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderFeedFriendsLikeGuideViewControllerDelegate-Protocol.h"
#import "WCFinderFeedFriendsLikeListTableViewCellDelegate-Protocol.h"
#import "WCFinderFeedFriendsLikeListViewModelDelegate-Protocol.h"
#import "WCFinderHalfScreenProtocol-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCFinderRefuseLikeListViewControllerDelegate-Protocol.h"

@class MMTableView, MMUIButton, NSString, UILabel, UINavigationController, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderDynamicRichTextView, WCFinderFeedFriendsLikeListViewModel, WCFinderRefreshTableFooterView;
@protocol WCFinderFeedFriendsLikeListViewControllerDelegate;

@interface WCFinderFeedFriendsLikeListViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate, WCFinderFeedFriendsLikeListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFeedFriendsLikeListTableViewCellDelegate, WCFinderFeedFriendsLikeGuideViewControllerDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderRefuseLikeListViewControllerDelegate, WCFinderHalfScreenProtocol>
{
    _Bool _highlightLocated;
    UINavigationController *_navVC;
    id <WCFinderFeedFriendsLikeListViewControllerDelegate> _friendsLikeListDelegate;
    NSString *_highlightUsername;
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    unsigned long long _totalLikeCount;
    NSString *_objectID;
    NSString *_nonceID;
    unsigned long long _fetchScene;
    unsigned long long _reportScene;
    WCFinderFeedFriendsLikeListViewModel *_viewModel;
    MMTableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    CDUnknownBlockType _likeOptionBlock;
    MMUIButton *_closeBtn;
    MMUIButton *_moreBtn;
    WCFinderDynamicRichTextView *_titleIconView;
    double _heightRatio;
    NSString *_targetUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *targetUsername; // @synthesize targetUsername=_targetUsername;
@property(nonatomic) _Bool highlightLocated; // @synthesize highlightLocated=_highlightLocated;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) WCFinderDynamicRichTextView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) CDUnknownBlockType likeOptionBlock; // @synthesize likeOptionBlock=_likeOptionBlock;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderFeedFriendsLikeListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned long long fetchScene; // @synthesize fetchScene=_fetchScene;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) unsigned long long totalLikeCount; // @synthesize totalLikeCount=_totalLikeCount;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
@property(copy, nonatomic) NSString *highlightUsername; // @synthesize highlightUsername=_highlightUsername;
@property(nonatomic) __weak id <WCFinderFeedFriendsLikeListViewControllerDelegate> friendsLikeListDelegate; // @synthesize friendsLikeListDelegate=_friendsLikeListDelegate;
@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (void)onRefuseLikeListClickBackItem;
- (void)reportFriendsLikeListWithIndex:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)exposeFriendsLikeList;
- (void)notifyAddedRefuseFriends;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)tipsViewControllerClickConfirmButton:(id)arg1;
- (void)tipsViewControllerClickCancelButton:(id)arg1;
- (void)likeListTableViewCell:(id)arg1 onClickMore:(unsigned long long)arg2 notSee:(_Bool)arg3;
- (void)likeListTableViewCell:(id)arg1 onClickLike:(unsigned long long)arg2 doLike:(_Bool)arg3;
- (void)finderFriendsLikeDoLikeFailWithErrorCode:(long long)arg1;
- (void)finderFriendsLikeDoLikeSuccessWithIndex:(unsigned long long)arg1 doLike:(_Bool)arg2;
- (void)finderFriendsLikeOptionFailWithErrorCode:(long long)arg1;
- (void)finderFriendsLikeOptionSuccess:(unsigned long long)arg1;
- (void)finderFeedFriendsLikeListFetchFailWithErrorCode:(long long)arg1;
- (void)finderFeedFriendsLikeListFetchSuccess;
- (void)finderFeedFriendsLikeListGetLocalSuccess;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleAccessibilityLabel:(unsigned long long)arg1;
- (id)displayTitle:(unsigned long long)arg1;
- (void)locateHighlightIfNeed;
- (void)refreshUIWithUpdateTitle:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)setupData;
- (void)onClickMore;
- (void)onClickClose;
- (void)updateTitleLableWithCount:(unsigned long long)arg1;
- (void)setupSubViews;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (_Bool)useBlackStatusbar;
- (double)getMaxHalfScreenHeight;
- (void)viewDidLoad;
- (id)initWithTotalLikeCount:(unsigned long long)arg1 objectID:(id)arg2 nonceID:(id)arg3 finderObjectType:(long long)arg4 feedLikedListScene:(unsigned long long)arg5 reportScene:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
