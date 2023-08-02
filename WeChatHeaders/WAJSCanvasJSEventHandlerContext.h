//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAJSEventHandlerContextDelegate-Protocol.h"

@class NSString;
@protocol WAJSCanvasJSEventHandlerContextDelegate;

@interface WAJSCanvasJSEventHandlerContext : NSObject <WAJSEventHandlerContextDelegate>
{
    NSString *_appId;
    id <WAJSCanvasJSEventHandlerContextDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAJSCanvasJSEventHandlerContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)getSessionID;
- (id)GetWeAppPluginByName:(id)arg1;
- (unsigned int)getAppType;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (id)getEventHandler:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)GetWebViewPluginByName:(id)arg1;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (id)getWAContact;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getAppId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
