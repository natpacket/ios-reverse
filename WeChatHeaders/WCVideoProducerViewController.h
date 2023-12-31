//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCMomentsCompositorTemplatePanelDelegate-Protocol.h"
#import "WCVideoProducerAssetClipperDelegate-Protocol.h"
#import "WCVideoProducerMusicBarDelegate-Protocol.h"
#import "WCVideoProducerMusicInfoMarqueeViewProtocol-Protocol.h"
#import "WCVideoProducerMusicSearcherDelegate-Protocol.h"
#import "WCVideoProducerTemplateBarDelegate-Protocol.h"
#import "WCVideoProducerTemplateFlowDelegate-Protocol.h"
#import "WCVideoProducerViewModelDelegate-Protocol.h"

@class CAGradientLayer, MMUIButton, NSMutableArray, NSString, UIImageView, UIView, WCColorProxy, WCMomentsCompositorTemplatePanelViewController, WCProgressMaskView, WCVideoProducerAssetClipperViewController, WCVideoProducerMusicBarViewController, WCVideoProducerMusicInfoMarqueeView, WCVideoProducerMusicSearcherViewController, WCVideoProducerTemplateBarViewController, WCVideoProducerTemplateFlowViewController, WCVideoProducerViewModel;
@protocol WCVideoProducerViewControllerDelegate;

@interface WCVideoProducerViewController : MMUIViewController <WCVideoProducerViewModelDelegate, WCVideoProducerMusicInfoMarqueeViewProtocol, WCVideoProducerAssetClipperDelegate, WCVideoProducerTemplateBarDelegate, WCVideoProducerTemplateFlowDelegate, WCMomentsCompositorTemplatePanelDelegate, WCVideoProducerMusicBarDelegate, WCVideoProducerMusicSearcherDelegate>
{
    UIView *_proxyRootView;
    id <WCVideoProducerViewControllerDelegate> _delegate;
    WCVideoProducerViewModel *_videoProducerVM;
    UIView *_topActionBarView;
    CAGradientLayer *_topActionBarGradientLayer;
    MMUIButton *_cancelButton;
    MMUIButton *_doneButton;
    WCVideoProducerMusicInfoMarqueeView *_musicInfoMarqueeView;
    WCProgressMaskView *_progressLoadingView;
    UIView *_previewRenderView;
    UIImageView *_previewThumbView;
    WCColorProxy *_colorProxy;
    NSMutableArray *_showingChildVCStack;
    WCVideoProducerAssetClipperViewController *_assetClipperVC;
    WCVideoProducerTemplateBarViewController *_templateBarVC;
    WCVideoProducerTemplateFlowViewController *_templateFlowVC;
    WCMomentsCompositorTemplatePanelViewController *_templatePanelVC;
    WCVideoProducerMusicBarViewController *_musicBarVC;
    WCVideoProducerMusicSearcherViewController *_musicSearcherVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCVideoProducerMusicSearcherViewController *musicSearcherVC; // @synthesize musicSearcherVC=_musicSearcherVC;
@property(retain, nonatomic) WCVideoProducerMusicBarViewController *musicBarVC; // @synthesize musicBarVC=_musicBarVC;
@property(retain, nonatomic) WCMomentsCompositorTemplatePanelViewController *templatePanelVC; // @synthesize templatePanelVC=_templatePanelVC;
@property(retain, nonatomic) WCVideoProducerTemplateFlowViewController *templateFlowVC; // @synthesize templateFlowVC=_templateFlowVC;
@property(retain, nonatomic) WCVideoProducerTemplateBarViewController *templateBarVC; // @synthesize templateBarVC=_templateBarVC;
@property(retain, nonatomic) WCVideoProducerAssetClipperViewController *assetClipperVC; // @synthesize assetClipperVC=_assetClipperVC;
@property(retain, nonatomic) NSMutableArray *showingChildVCStack; // @synthesize showingChildVCStack=_showingChildVCStack;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(retain, nonatomic) UIImageView *previewThumbView; // @synthesize previewThumbView=_previewThumbView;
@property(retain, nonatomic) UIView *previewRenderView; // @synthesize previewRenderView=_previewRenderView;
@property(retain, nonatomic) WCProgressMaskView *progressLoadingView; // @synthesize progressLoadingView=_progressLoadingView;
@property(retain, nonatomic) WCVideoProducerMusicInfoMarqueeView *musicInfoMarqueeView; // @synthesize musicInfoMarqueeView=_musicInfoMarqueeView;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) CAGradientLayer *topActionBarGradientLayer; // @synthesize topActionBarGradientLayer=_topActionBarGradientLayer;
@property(retain, nonatomic) UIView *topActionBarView; // @synthesize topActionBarView=_topActionBarView;
@property(retain, nonatomic) WCVideoProducerViewModel *videoProducerVM; // @synthesize videoProducerVM=_videoProducerVM;
@property(nonatomic) __weak id <WCVideoProducerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initProgressMaskView;
- (void)_initTopActionBarView;
- (void)_relayoutView;
- (void)initView;
- (void)_dismissAllStackChildVC;
- (void)_dismissChildVC:(id)arg1 withAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showChildVC:(id)arg1 withAnimated:(_Bool)arg2 hideTopActionBar:(_Bool)arg3 hideOtherVC:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_onVideoProducerFinishedWithError:(id)arg1 sightDraft:(id)arg2;
- (void)_onClickCancelButton;
- (void)_onClickDoneButton;
- (void)_updateMusicInfoBar;
- (void)_disableTopActionBarViewThatExceptsCancelButton;
- (void)_disableTopActionBarView;
- (void)_enableTopActionBarView;
- (void)_hideTopActionBarView;
- (void)_showTopActionBarView;
- (void)_onClickPreviewRenderView;
- (struct CGRect)_getPreviewRenderViewFitFrameWithContainerFrame:(struct CGRect)arg1 marginTop:(double)arg2 marginBottom:(double)arg3 canReachOut:(_Bool)arg4;
- (void)_resetPreviewRenderViewTransformForContainerFrame:(struct CGRect)arg1;
- (_Bool)_transformPreviewRenderViewWithContainerFrame:(struct CGRect)arg1;
- (void)_relayoutPreviewRenderViewWithContainerFrame:(struct CGRect)arg1;
- (void)_adjustPreviewRenderViewToResetDefaultSize;
- (void)_adjustPreviewRenderViewToFitTemplateFlowHanging;
- (void)_adjustPreviewRenderViewToFitTemplateFlowShowing;
- (void)_adjustPreviewRenderViewtoFitTemplateFlowCurrently;
- (void)_adjustPreviewRenderViewToFitAssetClipperShowing;
- (void)_checkPreviewRenderView;
- (void)_checkFirstFrameView;
- (void)_relayoutProgressLoadingView;
- (void)_stopProgressLoadingWithText:(id)arg1 success:(_Bool)arg2 delayCompletion:(CDUnknownBlockType)arg3;
- (void)_updateLoadingUserInteraction:(_Bool)arg1;
- (void)_startProgressLoadingWithText:(id)arg1 progress:(double)arg2 canCancel:(_Bool)arg3;
- (void)_startProgressLoadingInfinityWithText:(id)arg1 canCancel:(_Bool)arg2;
- (void)_tryToLaunchMJApp;
- (_Bool)_changeTemplate:(id)arg1 atOrder:(long long)arg2;
- (void)_onPlayFirstTemplate;
- (void)_onTemplateProvided;
- (void)musicSearcherVC:(id)arg1 didRequestAudioModule:(_Bool)arg2;
- (void)musicSearcherVC:(id)arg1 didCancelWithMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didCommitMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicSearcherVC:(id)arg1 didRequestSearchKey:(id)arg2;
- (void)_muteMusicSearcherVC:(_Bool)arg1;
- (void)_showMusicSearcherVC;
- (void)onCloseMusicBarVC:(id)arg1;
- (void)musicBarVC:(id)arg1 didClickSearchButton:(id)arg2;
- (void)musicBarVC:(id)arg1 didChangeStatusForMusic:(id)arg2 isBGMEnabled:(_Bool)arg3 isOSTEnabled:(_Bool)arg4;
- (void)musicBarVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicBarVC:(id)arg1 willShowMusic:(id)arg2 atIndex:(id)arg3;
- (void)_updateMusicBarVC;
- (void)_showMusicBarVC:(id)arg1;
- (void)onCloseTemplatePanelSelector:(id)arg1;
- (void)templatePanelSelector:(id)arg1 didSelectTemplate:(id)arg2 index:(id)arg3;
- (void)_showTemplatePanelVC;
- (void)templateFlowVC:(id)arg1 didCancelWithCellVM:(id)arg2 originalTemplate:(id)arg3;
- (void)templateFlowVC:(id)arg1 didCommitWithCellVM:(id)arg2;
- (void)templateFlowVC:(id)arg1 didSelectCellVM:(id)arg2 repeated:(_Bool)arg3 atIndex:(id)arg4;
- (void)templateFlowVC:(id)arg1 didSlideToHanging:(double)arg2;
- (void)templateFlowVC:(id)arg1 didSlideToShowing:(double)arg2;
- (void)templateFlowVC:(id)arg1 didSlideFromOriginalTop:(double)arg2 withDiffTop:(double)arg3;
- (void)templateFlowVC:(id)arg1 didChangeScrolling:(_Bool)arg2;
- (void)templateFlowVC:(id)arg1 didLoadMoreWithBlock:(CDUnknownBlockType)arg2;
- (void)_updateTemplateFlowVCSelection:(id)arg1;
- (void)_updateTemplateFlowVCDataSource;
- (void)_dismissTemplateFlowVC;
- (void)_showTemplateFlowVC;
- (void)templateBarVC:(id)arg1 didSelectCellVM:(id)arg2 repeated:(_Bool)arg3 atIndex:(id)arg4;
- (void)templateBarVC:(id)arg1 willShowTemplate:(id)arg2 atIndex:(id)arg3;
- (void)_updateTemplateBarVCSelection:(id)arg1;
- (void)_updateTemplateBarVCDataSource;
- (void)_showTemplateBarVC;
- (void)assetClipperVC:(id)arg1 didCancelWithCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didCommitWithCellVM:(id)arg2;
- (void)assetClipperVC:(id)arg1 didLaunchMJApp:(_Bool)arg2 withCellVMList:(id)arg3;
- (void)assetClipperVC:(id)arg1 didPlaySegmentWithId:(id)arg2 forTimeRangeInClip:(CDStruct_e83c9415)arg3;
- (void)assetClipperVC:(id)arg1 didSeekSegmentWithId:(id)arg2 toTimeInClip:(CDStruct_1b6d18a9)arg3;
- (id)assetClipperVC:(id)arg1 didFindAssetInfoForLocalIdentifier:(id)arg2;
- (void)_updateAssetClipperVCDataSource;
- (void)_dismissAssetClipperVC;
- (void)_showAssetClipperVCWithAnimationSyncBlock:(CDUnknownBlockType)arg1;
- (void)onMusicInfoMarqueeViewClicked:(id)arg1;
- (void)videoProducerDidChangeAudioModuleAbility:(_Bool)arg1;
- (void)createVideo;
- (void)prepareVideoProducer;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (_Bool)hidesStatusBar;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)view;
- (void)_onAppBackground:(id)arg1;
- (void)_onAppForeground:(id)arg1;
- (void)_removeAppStatusObserver;
- (void)_addAppStatusObserver;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

