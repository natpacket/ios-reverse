//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWASkylineRuntime-Protocol.h"

@class MMContext, MMTimer, NSMutableDictionary, NSString, WAPlatformContainerViewFactory;
@protocol WASkylineRuntimeDelegate;

@interface WASkyLineRuntime : NSObject <IWASkylineRuntime>
{
    void *_runtimeShell;
    _Bool _isDestroyed;
    _Bool _isReady;
    id <WASkylineRuntimeDelegate> _delegate;
    NSMutableDictionary *_skylineViewDic;
    NSMutableDictionary *_flutterVCDic;
    WAPlatformContainerViewFactory *_containerFactory;
    MMContext *_userContext;
    MMTimer *_timer;
}

+ (void)onSkylineCppLog:(int)arg1 file:(const char *)arg2 line:(int)arg3 str:(const char *)arg4 strLen:(int)arg5;
+ (id)getVersionString;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) WAPlatformContainerViewFactory *containerFactory; // @synthesize containerFactory=_containerFactory;
@property(retain, nonatomic) NSMutableDictionary *flutterVCDic; // @synthesize flutterVCDic=_flutterVCDic;
@property(retain, nonatomic) NSMutableDictionary *skylineViewDic; // @synthesize skylineViewDic=_skylineViewDic;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) __weak id <WASkylineRuntimeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDestroyed; // @synthesize isDestroyed=_isDestroyed;
- (id)getSkylineViewByWindowId:(long long)arg1;
- (void)onNotifyFirstFrame:(long long)arg1 pageId:(long long)arg2 totalSpan:(double)arg3;
- (void)onNotifyNavigateBackDone:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyNavigateBack:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyRouteDone:(long long)arg1 pageId:(long long)arg2;
- (void)onNotifyWindowDestroy:(long long)arg1;
- (void)onNotifyWindowReady:(long long)arg1;
- (void)onNotifyRuntimeReady;
- (void)loadResourceAsync:(id)arg1 requestId:(int)arg2;
- (id)loadResourceSync:(id)arg1;
- (void)runServiceBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)runServiceBlock:(CDUnknownBlockType)arg1 atTime:(double)arg2;
- (void)runServiceBlock:(CDUnknownBlockType)arg1;
- (void)updateKeyboardHeight:(long long)arg1 widgetId:(long long)arg2 height:(double)arg3;
- (void)updateDarkMode:(_Bool)arg1 isDarkMode:(_Bool)arg2;
- (void)updateWindowViewport:(long long)arg1 size:(struct CGSize)arg2;
- (shared_ptr_d0a3146a)makePageConfig:(id)arg1;
- (void)notifySwitchTab:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyAutoReLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyReLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyAppLaunch:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyNavigateBack:(long long)arg1 pageId:(long long)arg2 calculatedDelta:(long long)arg3 animated:(_Bool)arg4 pageCfg:(id)arg5;
- (void)notifyRedirectTo:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (void)notifyNavigateTo:(long long)arg1 pageId:(long long)arg2 pageCfg:(id)arg3;
- (long long)getRuntimeHolderPtr;
- (void)notifyJsContext:(id)arg1;
- (void)destroyWindow:(id)arg1;
- (struct RuntimeDelegate *)runtimeDelegate;
- (void)destroyRuntimeHolder;
- (double)destroyRuntime;
- (void)createRuntime;
- (void)innerRunServiceBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (id)getContainerFactory;
- (id)innerLoadResource:(id)arg1;
- (_Bool)waitWindowReady:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

