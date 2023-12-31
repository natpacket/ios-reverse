//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSWebSearchDataSource-Protocol.h"
#import "WSJSEventHandleDelegate-Protocol.h"

@class LocalJSLogicBase, NSString, WKWebSearchView, WSJSEventHandler, WSLocalTemplateConfig, WSResultViewLogic;
@protocol WSLocalTemplateControllerDelegate;

@interface WSLocalTemplateController : NSObject <WSJSEventHandleDelegate, FTSWebSearchDataSource>
{
    id <WSLocalTemplateControllerDelegate> _delegate;
    WKWebSearchView *_webview;
    WSJSEventHandler *_deprecatedSearchEventHandler;
    WSResultViewLogic *_resultViewLogic;
    WSLocalTemplateConfig *_config;
}

+ (void)preHeatSearchH5WithForceDarkMode:(_Bool)arg1;
+ (void)removeCache;
+ (id)getPreloadInstanceWith:(id)arg1 webviewOwner:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WSLocalTemplateConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WSResultViewLogic *resultViewLogic; // @synthesize resultViewLogic=_resultViewLogic;
@property(retain, nonatomic) WSJSEventHandler *deprecatedSearchEventHandler; // @synthesize deprecatedSearchEventHandler=_deprecatedSearchEventHandler;
@property(retain, nonatomic) WKWebSearchView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <WSLocalTemplateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)h5Version;
- (id)htmlPath;
- (id)viewStacks;
@property(readonly, nonatomic) LocalJSLogicBase *jsLogic;
- (void)setContentVC:(id)arg1;
- (void)loadH5FileFor:(unsigned long long)arg1;
- (void)loadH5File;
- (void)initJSLogic;
- (void)dealloc;
- (void)initWebview;
- (void)updateConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (void)tryRecycleSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

