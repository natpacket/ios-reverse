//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "RingBackInfoDisplaySheetViewDelegate-Protocol.h"
#import "WCFinderCustomTransitionProtocol-Protocol.h"
#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderFeedListViewMinimizeDelegate-Protocol.h"
#import "WCFinderMinimizeColdBootVCProtocol-Protocol.h"
#import "WCFinderShareAbstractCell-Protocol.h"
#import "WCFinderShareCustomTransitionProtocol-Protocol.h"

@class NSString, UIViewController, WCFinderCommentDetailViewController, WCFinderContact, WCFinderCreateCoordinator, WCFinderFeedContentVM, WCFinderFeedListView, WCFinderShareCustomTransition, WCFinderShareListReportModel;
@protocol WCFinderCommentBaseViewProtocol;

@interface WCFinderMentionDetailViewController : MMUIViewController <WCFinderFeedContentVMExt, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderDataItemExt, RingBackInfoDisplaySheetViewDelegate, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderShareCustomTransitionProtocol, WCFinderFeedListViewMinimizeDelegate, WCFinderMinimizeColdBootVCProtocol, WCFinderFeedBaseViewControllerProtocol>
{
    _Bool _showFromSystemMsg;
    _Bool _supportMinimize;
    _Bool _showMoreAction;
    _Bool _fromFirstLike;
    _Bool _hasShowTopComment;
    _Bool _isSilencePlay;
    _Bool _hasShowComment;
    _Bool _needsResumeTimelineVideo;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _autoShowListType;
    unsigned long long _scene;
    NSString *_navigationTitle;
    WCFinderShareListReportModel *_reportModel;
    WCFinderFeedListView *_feedListView;
    double _startExposureTime;
    WCFinderCommentDetailViewController *_commentVC;
    WCFinderCreateCoordinator *_createCoordinator;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    double _currentVideoPlayProgress;
    WCFinderShareCustomTransition *_animator;
    WCFinderContact *_authorContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *authorContact; // @synthesize authorContact=_authorContact;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(nonatomic) double currentVideoPlayProgress; // @synthesize currentVideoPlayProgress=_currentVideoPlayProgress;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) __weak WCFinderCommentDetailViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(nonatomic) _Bool hasShowComment; // @synthesize hasShowComment=_hasShowComment;
@property(nonatomic) double startExposureTime; // @synthesize startExposureTime=_startExposureTime;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(nonatomic) _Bool hasShowTopComment; // @synthesize hasShowTopComment=_hasShowTopComment;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) _Bool fromFirstLike; // @synthesize fromFirstLike=_fromFirstLike;
@property(nonatomic) _Bool showMoreAction; // @synthesize showMoreAction=_showMoreAction;
@property(nonatomic) _Bool supportMinimize; // @synthesize supportMinimize=_supportMinimize;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool showFromSystemMsg; // @synthesize showFromSystemMsg=_showFromSystemMsg;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long autoShowListType; // @synthesize autoShowListType=_autoShowListType;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (id)minimizeDisplayContentView;
- (id)minimizeDelegate;
- (void)registerYReportSdk;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (void)doShareAnimation;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onRingToneSheetDisappear;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)deleteFeedWithContenVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (_Bool)finderFeedListViewFriendsLikeListShouldShowFirstLikeLabel:(id)arg1;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)isMemberShipFeedWithVisitorStatusVisitant;
- (void)profileViewDidClickFullTextWithTid:(id)arg1;
- (void)showDetialCommentListVCOnlyList:(_Bool)arg1;
- (void)showCommentListWithContentVM:(id)arg1 showEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3;
- (void)showAllThumbsUpList;
- (void)showAllLikeList;
- (void)onRefreshToolbarUI:(id)arg1;
- (void)onFinderDataItemBeSetPrivateWithTid:(id)arg1;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (_Bool)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (_Bool)isInSubScene;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2;
@property(readonly, nonatomic) _Bool shouldReloadDataItem;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)onClickCloseLeftItem;
- (void)updateNaviLeftCloseItem;
- (void)viewDidLoad;
- (id)initWithCurrentAuthorContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
