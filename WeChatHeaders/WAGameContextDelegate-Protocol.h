//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSContext, NSString, WAJSVarInjectionTool, WAOpenGLView;

@protocol WAGameContextDelegate <NSObject>
- (void)initWASM:(WAOpenGLView *)arg1;
- (NSString *)getPreloadAppLaunchConfig;
- (void)onAfterGameBridgeScriptEvaluated;
- (WAJSVarInjectionTool *)getAppLaunchConfigJSVarInjectToolForWebView:(_Bool)arg1;
- (const struct OpaqueJSValue *)getNativeGlobal;
- (JSContext *)getJSContext;
- (struct OpaqueJSContext *)getContext;

@optional
- (void)onEvaluateJavaScript:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
@end
