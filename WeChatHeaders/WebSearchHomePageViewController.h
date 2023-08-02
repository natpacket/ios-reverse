//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WSWebViewPluginableProtocol-Protocol.h"
#import "WebSearchHomePage-Protocol.h"
#import "_TtP4Hero26HeroViewControllerDelegate_-Protocol.h"
#import "_TtP6WeChat33WSWebViewExceptionHandlerDelegate_-Protocol.h"

@class MMUILabel, NSString, UIButton, UIImageView, UIStackView, UIView, WCWebSearchInputProvider, WSLocalTemplateController, WSWebViewPluginScheduler, WebSearchHomePagePresenter;

@interface WebSearchHomePageViewController : MMUIViewController <_TtP4Hero26HeroViewControllerDelegate_, WebSearchHomePage, _TtP6WeChat33WSWebViewExceptionHandlerDelegate_, WSWebViewPluginableProtocol>
{
    WSWebViewPluginScheduler *_pluginScheduler;
    unsigned long long _VCType;
    UIButton *_contentSearchHitBtn;
    UIButton *_contentVoiceInputButton;
    UIStackView *_logoContainerView;
    UIView *_searchBoxContainer;
    MMUILabel *_titleLabel;
    UIImageView *_titleLogoView;
    WebSearchHomePagePresenter *_presenter;
    WSLocalTemplateController *_webviewController;
    WCWebSearchInputProvider *_inputProvider;
    NSString *_sessionId;
}

+ (void)removeCache;
+ (id)getPreloadInstance;
+ (void)preHeatSearchHomePage;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WCWebSearchInputProvider *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(retain, nonatomic) WSLocalTemplateController *webviewController; // @synthesize webviewController=_webviewController;
@property(retain, nonatomic) WebSearchHomePagePresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UIImageView *titleLogoView; // @synthesize titleLogoView=_titleLogoView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *searchBoxContainer; // @synthesize searchBoxContainer=_searchBoxContainer;
@property(retain, nonatomic) UIStackView *logoContainerView; // @synthesize logoContainerView=_logoContainerView;
@property(retain, nonatomic) UIButton *contentVoiceInputButton; // @synthesize contentVoiceInputButton=_contentVoiceInputButton;
@property(retain, nonatomic) UIButton *contentSearchHitBtn; // @synthesize contentSearchHitBtn=_contentSearchHitBtn;
@property(nonatomic) unsigned long long VCType; // @synthesize VCType=_VCType;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
- (void)registerYReportSdk;
- (void)reloadWebview;
- (id)getSessionId;
- (void)setTransitionAnime;
- (double)getSearchBoxAnimeOffsetY;
- (void)heroDidEndAnimatingToViewController:(id)arg1;
- (void)heroDidEndAnimatingFromViewController:(id)arg1;
- (void)heroWillStartAnimatingToViewController:(id)arg1;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (unsigned long long)localJSBizType;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initWebview;
- (void)initLogoView;
- (void)initView;
- (void)initData;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tryRecycleSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

