//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol WSWebViewPluginableProtocol;

@interface WSWebViewPluginScheduler : NSObject
{
    id <WSWebViewPluginableProtocol> _webViewOwner;
    NSMutableDictionary *_pluginInstanceDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pluginInstanceDict; // @synthesize pluginInstanceDict=_pluginInstanceDict;
@property(nonatomic) __weak id <WSWebViewPluginableProtocol> webViewOwner; // @synthesize webViewOwner=_webViewOwner;
- (void)observeLifeCircleFor:(id)arg1;
- (id)loadPlugin:(id)arg1;
- (id)loadPluginWith:(id)arg1;
- (void)loadingPlugins:(id)arg1;
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2;
- (id)getExistPluginInstanceByName:(id)arg1;
- (id)getPluginInstanceByName:(id)arg1;
- (_Bool)containPlugin:(id)arg1;
- (void)registerPlugin:(id)arg1;
- (void)registerPlugins:(id)arg1;
- (id)initWithWebViewOwner:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)onApplicationDidRotate:(id)arg1;
- (void)onApplicationEnterForeground:(id)arg1;
- (void)onApplicationEnterBackground:(id)arg1;
- (void)observeNotifications;

@end

