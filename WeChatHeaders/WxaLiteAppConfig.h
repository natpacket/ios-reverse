//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WxaRouterConfig;

@interface WxaLiteAppConfig : NSObject
{
    WxaRouterConfig *_wxaRouterConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaRouterConfig *wxaRouterConfig; // @synthesize wxaRouterConfig=_wxaRouterConfig;
- (void)setup;
- (void)addFlutterPlugin:(id)arg1;
- (void)setReleaseDefaultEngineWhenEmptyView:(_Bool)arg1;
- (void)setAutoReleaseEngine:(_Bool)arg1;
- (void)setPreloadNextEngine:(_Bool)arg1;
- (void)setPreloadEngine:(_Bool)arg1;
- (void)setEntryPointArgs:(id)arg1;
- (void)setEntryPoint:(id)arg1;
- (id)init;

@end

