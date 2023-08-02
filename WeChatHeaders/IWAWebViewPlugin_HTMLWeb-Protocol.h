//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IWAWebViewPluginProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL, UIColor, UIScreenEdgePanGestureRecognizer, UIView;

@protocol IWAWebViewPlugin_HTMLWeb <IWAWebViewPluginProtocol>
@property(readonly, nonatomic) NSMutableDictionary *enableScrollDic;
- (void)web_view_evaluateJavascript:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)web_view_goBack;
- (_Bool)web_view_canGoBack;
- (void)web_view_goToUrl:(NSURL *)arg1;
- (NSString *)web_view_getCurrentUrl;
- (void)web_view_handleInsertHTMLDone;
- (void)web_view_configViewFrame:(struct CGRect)arg1;
- (void)web_view_setBackgroundColor:(UIColor *)arg1;
- (void)web_view_setHtmlId:(unsigned int)arg1;
- (UIView *)web_view;
- (_Bool)web_view_isExist;
- (void)releaseHtmlVC;
- (void)setJavascriptForDisappear:(NSString *)arg1;
- (void)genHtmlVCWithExtInfo:(NSDictionary *)arg1;
- (void)insertHtmlVCIfNeed;
- (void)sendEvent:(NSString *)arg1 parma:(NSDictionary *)arg2;

@optional
- (UIScreenEdgePanGestureRecognizer *)web_backNavigationGesture;
@end
