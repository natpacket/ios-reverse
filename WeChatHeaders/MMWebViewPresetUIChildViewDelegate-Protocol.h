//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMWebViewController, NSDictionary, NSString, WKWebView;

@protocol MMWebViewPresetUIChildViewDelegate <NSObject>

@optional
- (void)onWebViewControllerHistoryChanged:(WKWebView *)arg1;
- (void)onWebViewControllerRecieveCloseEvent:(MMWebViewController *)arg1;
- (void)onWebViewController:(MMWebViewController *)arg1 recieveNavigationBarEvent:(NSString *)arg2 params:(NSDictionary *)arg3;
@end

