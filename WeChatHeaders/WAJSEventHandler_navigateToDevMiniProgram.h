//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_navigateToDevMiniProgram : WAJSEventHandler_BaseEvent
{
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
}

- (void).cxx_destruct;
- (void)navigateToMiniProgramWitAppID:(id)arg1 userName:(id)arg2 debugMode:(unsigned long long)arg3 pagePath:(id)arg4 extraData:(id)arg5 debugLaunchInfo:(id)arg6 navigationController:(id)arg7 scene:(unsigned long long)arg8 preScene:(unsigned long long)arg9 sceneNote:(id)arg10;
- (void)navigateToDevMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3;
- (void)handleJSEvent:(id)arg1;

@end

