//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderCustomTransitionProtocol-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderFeedListViewMinimizeDelegate-Protocol.h"
#import "WCFinderFeedListViewReportDelegate-Protocol.h"
#import "WCFinderMemberShipPaymentGuideTableViewCellDelegate-Protocol.h"
#import "WCFinderShareAbstractCell-Protocol.h"
#import "WCFinderShareCustomTransitionProtocol-Protocol.h"

@class NSString, WCFinderFeedContentVM, WCFinderFeedListView, WCFinderMemberShipIntroducePlayViewModel, WCFinderShareCustomTransition;
@protocol WCFinderMemberShipIntroducePlayViewControllerDelegate;

@interface WCFinderMemberShipIntroducePlayViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedListViewReportDelegate, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderMemberShipPaymentGuideTableViewCellDelegate>
{
    id <WCFinderMemberShipIntroducePlayViewControllerDelegate> _delegate;
    WCFinderFeedListView *_feedListView;
    WCFinderFeedContentVM *_preVCData;
    WCFinderShareCustomTransition *_animator;
    WCFinderMemberShipIntroducePlayViewModel *_viewModel;
    unsigned long long _memberPrice;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long memberPrice; // @synthesize memberPrice=_memberPrice;
@property(retain, nonatomic) WCFinderMemberShipIntroducePlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderFeedContentVM *preVCData; // @synthesize preVCData=_preVCData;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) __weak id <WCFinderMemberShipIntroducePlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmButtonClicked;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (_Bool)isInSubScene;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)deleteContentVM:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContentVMs:(id)arg1 currentIndex:(unsigned long long)arg2 memberPrice:(unsigned long long)arg3 feedType:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

