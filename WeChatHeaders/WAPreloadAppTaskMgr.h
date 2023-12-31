//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WAPreloadAppTask;

@interface WAPreloadAppTaskMgr : MMUserService <MMServiceProtocol>
{
    WAPreloadAppTask *_preloadTask;
}

+ (unsigned int)preloadReportTypeForServicePreload:(unsigned int)arg1 webViewPreload:(unsigned int)arg2 silentOpen:(_Bool)arg3;
+ (unsigned int)preloadInjectValueForPreloadMoment:(unsigned int)arg1;
+ (unsigned int)preloadDegradeType;
+ (_Bool)isCloseClientPreload;
- (void).cxx_destruct;
- (void)genNewPreloadTaskServiceIfNoTaskService:(unsigned int)arg1;
- (void)genNewPreloadTaskServiceIfNoTaskService;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView:(unsigned int)arg1;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView;
- (void)preCreateSingletonObject;
- (void)preCreateLoading;
- (void)preloadComponents;
- (void)mainThread_genNewPreloadTaskIfNoTask:(unsigned int)arg1;
- (void)genNewDegradePreloadTaskIfNoTask;
- (void)genNewPreloadTaskIfNoTaskByMoment:(unsigned int)arg1;
- (void)genNewPreloadTaskIfNoTask;
- (void)releasePreloadTaskWaitQuit:(_Bool)arg1;
- (void)releasePreloadTask;
- (void)detachCurrentPreloadTask;
- (id)getPreloadTask;
- (void)createPreloadAppTaskService:(unsigned int)arg1;
- (void)createPreloadAppTaskWebView:(unsigned int)arg1;
- (void)giveBackPreloadAppTaskWebView:(id)arg1;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

