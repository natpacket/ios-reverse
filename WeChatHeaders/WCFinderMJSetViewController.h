//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMNavBarInteractiveDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderMJSetTemplateViewModelDelegate-Protocol.h"
#import "WCFinderTabPageViewDataSource-Protocol.h"
#import "WCFinderTabPageViewDelegate-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSNumber, NSString, UIBarButtonItem, UILabel, WCFinderAnimationLoadingView, WCFinderMJSetReportInfo, WCFinderMJSetTemplateViewModel, WCFinderTabPageView;

@interface WCFinderMJSetViewController : MMUIViewController <WCFinderTabPageViewDelegate, WCFinderTabPageViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderMJSetTemplateViewModelDelegate, MMNavBarInteractiveDelegate>
{
    WCFinderMJSetTemplateViewModel *_viewModel;
    WCFinderTabPageView *_tabPageView;
    NSMutableDictionary *_feedFlowViewMap;
    NSMapTable *_feedFlowViewDataMap;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_statusLabel;
    UIBarButtonItem *_rightButtonItem;
    NSNumber *_needReportEnterTimeRecard;
    WCFinderMJSetReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMJSetReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) NSNumber *needReportEnterTimeRecard; // @synthesize needReportEnterTimeRecard=_needReportEnterTimeRecard;
@property(retain, nonatomic) UIBarButtonItem *rightButtonItem; // @synthesize rightButtonItem=_rightButtonItem;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMapTable *feedFlowViewDataMap; // @synthesize feedFlowViewDataMap=_feedFlowViewDataMap;
@property(retain, nonatomic) NSMutableDictionary *feedFlowViewMap; // @synthesize feedFlowViewMap=_feedFlowViewMap;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) WCFinderMJSetTemplateViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)getCurMediaListObject;
- (unsigned long long)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)onClickPost;
- (void)onClickContact;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (double)leftMarginForTabContainerInFinderTabPageView:(id)arg1;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)normalRightButton;
- (id)fadeRightButton;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (id)fadeTintColor;
- (void)displayStatusView:(id)arg1 action:(SEL)arg2;
- (void)setupNavItem:(_Bool)arg1;
- (void)onMJSetTempVM:(id)arg1 fetchDataFinish:(_Bool)arg2;
- (void)adjustIpadScrollViewLayout;
- (void)onClickMenuBtn;
- (void)startLoadingData;
- (id)navigationTitleColor;
- (void)setupFadeNav;
- (void)viewWillLayoutSubviews;
- (id)enter21874UDFKV;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)reportEnter;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMJTemplateTopicId:(id)arg1 reportInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

