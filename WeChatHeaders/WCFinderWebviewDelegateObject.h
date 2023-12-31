//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "MMWebViewDelegate-Protocol.h"

@class MMWebViewController, NSObject, NSString;
@protocol MMWebViewDelegate;

@interface WCFinderWebviewDelegateObject : NSProxy <MMWebViewDelegate>
{
    MMWebViewController *_webviewController;
    NSObject<MMWebViewDelegate> *_delegate;
    NSObject<MMWebViewDelegate> *_target;
}

+ (id)delegateWithWebviewController:(id)arg1 target:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<MMWebViewDelegate> *target; // @synthesize target=_target;
@property(nonatomic) __weak NSObject<MMWebViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMWebViewController *webviewController; // @synthesize webviewController=_webviewController;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)onWebViewPerformClose:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)restore;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

