//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

@class MMWebViewController;

@interface WCCanvasUltraWebViewComponent : WCCanvasComponent
{
    MMWebViewController *_webViewController;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (_Bool)isChildViewController;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (_Bool)isComponentContentViewScrolledToTop;
- (void)setComponentContentViewScrollEnabled:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)fetchRequestUrlWithUrl:(id)arg1 andUpdateExtraInfo:(inout id)arg2;
- (void)initWebView;
- (void)initViews;
- (void)layoutSubviews;

@end

