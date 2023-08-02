//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "YYWebViewDelegate-Protocol.h"

@class NSString, NSURLRequest, WAWxMaterialOpenInfo, WKWebSearchView;

@interface WAOpenWxMaterialListController : MMUIHalfScreenViewController <YYWebViewDelegate>
{
    NSURLRequest *_request;
    WAWxMaterialOpenInfo *_openInfo;
    WKWebSearchView *_webView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKWebSearchView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WAWxMaterialOpenInfo *openInfo; // @synthesize openInfo=_openInfo;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)js2oc_onWeAppExposure:(id)arg1;
- (void)openWeApp;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)js2oc_launchWeApp:(id)arg1;
- (_Bool)hidesStatusBar;
- (void)onClickCloseButton:(id)arg1;
- (id)contentView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 openInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

