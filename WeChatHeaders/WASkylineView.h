//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FlutterEngineDelegate-Protocol.h"
#import "IWASkylineView-Protocol.h"
#import "YYWebViewInterface-Protocol.h"

@class FlutterEngine, FlutterMethodChannel, NSString, NSURLRequest, UIImageView, UIScrollView, WAFlutterViewController, WAPlatformContainerViewFactory, WASkyLineRuntime;
@protocol IWASkylineRuntime, WASkylineViewDelegate, YYWebViewDelegate;

@interface WASkylineView : UIView <FlutterEngineDelegate, IWASkylineView, YYWebViewInterface>
{
    _Bool allowsBackForwardNavigationGestures;
    _Bool canGoBack;
    _Bool canGoForward;
    _Bool loading;
    _Bool disablePreviewElement;
    _Bool _isNewEngineHomePage;
    _Bool _innerPopAnim;
    _Bool _isFirstRouteDone;
    _Bool _isReady;
    _Bool _isRouting;
    id <WASkylineViewDelegate> skylineDelegate;
    id <YYWebViewDelegate> wvDelegate;
    UIScrollView *scrollView;
    NSURLRequest *request;
    id <IWASkylineRuntime> _skylineRuntime;
    long long _windowId;
    long long _innerPopCnt;
    WAFlutterViewController *_flutterVC;
    WASkyLineRuntime *_runtime;
    FlutterEngine *_flutterEngine;
    FlutterMethodChannel *_skylineChannel;
    FlutterMethodChannel *_skylineNotifyChannel;
    WAPlatformContainerViewFactory *_containerFactory;
    UIImageView *_snapshotImageView;
    UIView *_loadingColorView;
    long long _curInputWidgetId;
}

- (void).cxx_destruct;
@property(nonatomic) long long curInputWidgetId; // @synthesize curInputWidgetId=_curInputWidgetId;
@property(nonatomic) _Bool isRouting; // @synthesize isRouting=_isRouting;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) UIView *loadingColorView; // @synthesize loadingColorView=_loadingColorView;
@property(nonatomic) _Bool isFirstRouteDone; // @synthesize isFirstRouteDone=_isFirstRouteDone;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) WAPlatformContainerViewFactory *containerFactory; // @synthesize containerFactory=_containerFactory;
@property(retain, nonatomic) FlutterMethodChannel *skylineNotifyChannel; // @synthesize skylineNotifyChannel=_skylineNotifyChannel;
@property(retain, nonatomic) FlutterMethodChannel *skylineChannel; // @synthesize skylineChannel=_skylineChannel;
@property(retain, nonatomic) FlutterEngine *flutterEngine; // @synthesize flutterEngine=_flutterEngine;
@property(nonatomic) __weak WASkyLineRuntime *runtime; // @synthesize runtime=_runtime;
@property(retain, nonatomic) WAFlutterViewController *flutterVC; // @synthesize flutterVC=_flutterVC;
@property(nonatomic) _Bool innerPopAnim; // @synthesize innerPopAnim=_innerPopAnim;
@property(nonatomic) long long innerPopCnt; // @synthesize innerPopCnt=_innerPopCnt;
@property(nonatomic) _Bool isNewEngineHomePage; // @synthesize isNewEngineHomePage=_isNewEngineHomePage;
@property(nonatomic) long long windowId; // @synthesize windowId=_windowId;
@property(nonatomic) __weak id <IWASkylineRuntime> skylineRuntime; // @synthesize skylineRuntime=_skylineRuntime;
@property(nonatomic) _Bool disablePreviewElement; // @synthesize disablePreviewElement;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward; // @synthesize canGoForward;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack; // @synthesize canGoBack;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures; // @synthesize allowsBackForwardNavigationGestures;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate;
@property(nonatomic) __weak id <WASkylineViewDelegate> skylineDelegate; // @synthesize skylineDelegate;
- (void)addScriptMessageHandlerName:(id)arg1;
- (void)enableJavaScriptPopup:(_Bool)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)reload;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onHideKeyboard:(id)arg1;
- (void)onShowKeyboard:(id)arg1;
- (id)snapshotSkyline;
- (void)snapshotEnd;
- (void)snapshotBegin;
- (void)removeNativeView:(long long)arg1;
- (void)insertNativeView:(id)arg1 viewId:(long long)arg2;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (long long)makeWindowId;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSkylineChannel;
- (void)mockWebviewLoadEvent;
- (void)updateBackgroundColorByVc:(id)arg1;
- (void)moveViewToOldPage:(id)arg1;
- (void)moveViewToNewPage:(id)arg1;
- (void)initViewInPage:(id)arg1;
- (id)makeParam:(_Bool)arg1;
- (void)onFlutterViewDidRender;
- (void)onPageFirstFrame:(long long)arg1;
- (void)onNavigateBackDone:(long long)arg1;
- (void)onNavigateBack:(long long)arg1;
- (void)onRouteDone:(long long)arg1;
- (void)notifySwitchTab:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyAutoReLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyReLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyAppLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyNavigateBack:(long long)arg1 calculatedDelta:(long long)arg2 animated:(_Bool)arg3 pageCfg:(id)arg4;
- (void)notifyRedirectTo:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyNavigateTo:(long long)arg1 pageCfg:(id)arg2;
- (void)onWindowReady;
- (void)setupLoadingColor:(id)arg1;
- (void)initFlutterView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

