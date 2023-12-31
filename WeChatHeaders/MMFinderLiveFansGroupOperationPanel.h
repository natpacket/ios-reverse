//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveFansGroupAnchorEditPanelDelegate-Protocol.h"

@class MMFinderLiveFansGroupCreateContentView, MMFinderLiveFansGroupManageContentView, MMFinderLiveTaskId, NSString, UIView;
@protocol MMFinderLiveFansGroupOperationReportDelegate;

@interface MMFinderLiveFansGroupOperationPanel : MMPageSheetBaseView <MMFinderLiveFansGroupAnchorEditPanelDelegate>
{
    _Bool _isKeyBoardShow;
    _Bool _isPageWillClose;
    id <MMFinderLiveFansGroupOperationReportDelegate> _reportDelegate;
    MMFinderLiveTaskId *_taskId;
    long long _currentOperateState;
    UIView *_panelView;
    MMFinderLiveFansGroupCreateContentView *_createContentView;
    MMFinderLiveFansGroupManageContentView *_manageContentView;
    double _keyBoardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyBoardHeight; // @synthesize keyBoardHeight=_keyBoardHeight;
@property(nonatomic) _Bool isPageWillClose; // @synthesize isPageWillClose=_isPageWillClose;
@property(nonatomic) _Bool isKeyBoardShow; // @synthesize isKeyBoardShow=_isKeyBoardShow;
@property(retain, nonatomic) MMFinderLiveFansGroupManageContentView *manageContentView; // @synthesize manageContentView=_manageContentView;
@property(retain, nonatomic) MMFinderLiveFansGroupCreateContentView *createContentView; // @synthesize createContentView=_createContentView;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) long long currentOperateState; // @synthesize currentOperateState=_currentOperateState;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveFansGroupOperationReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)navigateToEditPanelWithViewModel:(id)arg1;
- (void)onFansGroupNameChangedTo:(id)arg1 byEditPanel:(id)arg2;
- (void)updatePageSheetCloseRecognizer;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)refreshUIForCurrentOperateState;
- (void)updateCurrentOperateState:(long long)arg1;
- (void)updateDetailViewFrame;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutManageContentView;
- (void)layoutCreateContentView;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)initNotifications;
- (void)dealloc;
- (void)innerInit;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

