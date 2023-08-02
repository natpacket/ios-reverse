//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class FlutterMethodChannel, NSString;

@interface FLTWKNavigationDelegate : NSObject <WKNavigationDelegate>
{
    FlutterMethodChannel *_methodChannel;
    _Bool _hasDartNavigationDelegate;
    _Bool _shouldEnableZoom;
}

+ (id)errorCodeToString:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEnableZoom; // @synthesize shouldEnableZoom=_shouldEnableZoom;
@property(nonatomic) _Bool hasDartNavigationDelegate; // @synthesize hasDartNavigationDelegate=_hasDartNavigationDelegate;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)onWebResourceError:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
