//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveConnectMicAnchorInvitePkContainerViewDelegate-Protocol.h"
#import "MMFinderLiveConnectMicConditionChooseDelegate-Protocol.h"
#import "MMFinderLiveConnectMicContainerViewDelegate-Protocol.h"
#import "MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate-Protocol.h"
#import "MMFinderLiveConnectMicModePageSheetViewDelegate-Protocol.h"
#import "MMFinderLiveConnectedMicUserCellViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMFinderLiveConnectMicAnchorContainerView, MMFinderLiveConnectMicAnchorInvitePkContainerView, MMFinderLiveConnectMicAudienceContainerView, MMFinderLiveConnectMicBaseContainerView, MMFinderLiveConnectMicIncomingAudienceSettingsPanel, MMFinderLiveConnectMicLayoutModeSubtitleWrap, MMFinderLiveConnectMicSearchAudienceView, MMFinderLiveConnectMicTabView, MMFinderLiveTaskId, MMUnderlineTabsView, NSString, UIView;
@protocol MMFinderLiveConnectMicOperationPanelDelegate;

@interface MMFinderLiveConnectMicOperationPanel : MMPageSheetBaseView <UIGestureRecognizerDelegate, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveConnectMicContainerViewDelegate, MMFinderLiveConnectMicAnchorInvitePkContainerViewDelegate, MMFinderLiveConnectMicModePageSheetViewDelegate, MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate, MMFinderLiveConnectMicConditionChooseDelegate>
{
    _Bool _enableOperation;
    _Bool _isShowing;
    _Bool _canAutoConnect;
    _Bool _canSelectMicMode;
    id <MMFinderLiveConnectMicOperationPanelDelegate> _actionDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_panelView;
    MMUnderlineTabsView *_tabsView;
    MMFinderLiveConnectMicTabView *_audienceTabView;
    MMFinderLiveConnectMicTabView *_anchorTabView;
    MMFinderLiveConnectMicAudienceContainerView *_audienceContainerView;
    MMFinderLiveConnectMicAnchorContainerView *_anchorContainerView;
    MMFinderLiveConnectMicAnchorInvitePkContainerView *_anchorInvitePkContainerView;
    unsigned long long _curConditionType;
    unsigned long long _micLayoutMode;
    MMFinderLiveConnectMicLayoutModeSubtitleWrap *_micLayoutModeSubtitleWrap;
    MMFinderLiveConnectMicSearchAudienceView *_searchAudiencePanel;
    MMFinderLiveConnectMicBaseContainerView *_currentContainerView;
    MMFinderLiveConnectMicIncomingAudienceSettingsPanel *_audienceSettingsPanel;
}

+ (id)TabItemWithTabView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicIncomingAudienceSettingsPanel *audienceSettingsPanel; // @synthesize audienceSettingsPanel=_audienceSettingsPanel;
@property(retain, nonatomic) MMFinderLiveConnectMicBaseContainerView *currentContainerView; // @synthesize currentContainerView=_currentContainerView;
@property(nonatomic) __weak MMFinderLiveConnectMicSearchAudienceView *searchAudiencePanel; // @synthesize searchAudiencePanel=_searchAudiencePanel;
@property(retain, nonatomic) MMFinderLiveConnectMicLayoutModeSubtitleWrap *micLayoutModeSubtitleWrap; // @synthesize micLayoutModeSubtitleWrap=_micLayoutModeSubtitleWrap;
@property(nonatomic) _Bool canSelectMicMode; // @synthesize canSelectMicMode=_canSelectMicMode;
@property(nonatomic) _Bool canAutoConnect; // @synthesize canAutoConnect=_canAutoConnect;
@property(nonatomic) unsigned long long micLayoutMode; // @synthesize micLayoutMode=_micLayoutMode;
@property(nonatomic) unsigned long long curConditionType; // @synthesize curConditionType=_curConditionType;
@property(retain, nonatomic) MMFinderLiveConnectMicAnchorInvitePkContainerView *anchorInvitePkContainerView; // @synthesize anchorInvitePkContainerView=_anchorInvitePkContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicAnchorContainerView *anchorContainerView; // @synthesize anchorContainerView=_anchorContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicAudienceContainerView *audienceContainerView; // @synthesize audienceContainerView=_audienceContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicTabView *anchorTabView; // @synthesize anchorTabView=_anchorTabView;
@property(retain, nonatomic) MMFinderLiveConnectMicTabView *audienceTabView; // @synthesize audienceTabView=_audienceTabView;
@property(retain, nonatomic) MMUnderlineTabsView *tabsView; // @synthesize tabsView=_tabsView;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool enableOperation; // @synthesize enableOperation=_enableOperation;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)arg1;
- (void)onConnectMicAudienceSettingsPanelClosed:(id)arg1;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 autoConnectChanged:(_Bool)arg2;
- (void)onConnectMicAudienceSettingsPanel:(id)arg1 conditionChanged:(unsigned long long)arg2;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onMMFinderLiveConnectMicAnchorInvitePkContainerViewCloseMic;
- (void)onMMFinderLiveConnectMicAnchorInvitePkContainerViewTapPkView;
- (void)onMMFinderLiveConnectMicAnchorInvitePkContainerViewDismissRequested:(_Bool)arg1;
- (void)onConnectMicFocusChangeCanceled;
- (void)onConnectMicModeOrFocusChangeConfirmed:(unsigned long long)arg1 focusedUserId:(id)arg2 userIndices:(id)arg3;
- (void)onFinderLiveConnectMicContainerViewShowSearchAudiencePannelWithMicUserList:(id)arg1;
- (void)onFinderLiveConnectMicContainerViewShowSelectMicLayoutModePannel;
- (void)onFinderLiveConnectMicContainerViewUpdateCanAutoConnect:(_Bool)arg1;
- (_Bool)onFinderLiveConnectMicContainerViewIsFocusBlocked;
- (void)onFinderLiveConnectMicContainerViewNavigateToFocusSettingsRequested;
- (void)onFinderLiveConnectMicContainerViewCloseDetailSettingView;
- (void)onFinderLiveConnectMicContainerViewChangeConditionTypeAudience:(unsigned long long)arg1;
- (void)onFinderLiveConnectMicContainerViewOpenDetailSettingViewForAudienceMic;
- (void)onFinderLiveConnectMicContainerViewRandomMatchButtonClicked;
- (void)onFinderLiveConnectMicContainerViewOpenSearchOnlineAnchor;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)onSettingsButtonTapped;
- (void)closeAction;
- (id)configUnderlineTabsView;
@property(readonly, nonatomic) unsigned long long currentTabType;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillAppear;
- (void)updateAudiencePanelMicLayoutModeSubtitles:(id)arg1;
- (void)updateAudiencePanelCanAutoConnect:(_Bool)arg1;
- (void)updateAudiencePanelMicLayoutMode:(unsigned long long)arg1;
- (void)updateAudiencePanelMicConditionType:(unsigned long long)arg1;
- (void)changeToContainerWithType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)restoreAnchorPanelFromPk;
- (void)configureAnchorPanelForPkWithFinderContact:(id)arg1 pkState:(unsigned long long)arg2 disablePk:(_Bool)arg3;
- (void)showPanelWithTargetTabType:(unsigned long long)arg1;
- (void)scrollPanelToTopWithTabType:(unsigned long long)arg1;
- (void)updateAnchorPanelWithPkState:(unsigned long long)arg1;
- (void)updateAudiencePanelWithConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (id)makeSettingsButton;
- (id)makeCloseButton;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 canSelectMicMode:(_Bool)arg3 conditionType:(unsigned long long)arg4 micLayoutMode:(unsigned long long)arg5 andCanAutoConnect:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

