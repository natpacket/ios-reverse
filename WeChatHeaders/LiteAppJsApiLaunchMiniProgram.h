//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiteAppJsApi.h"

@class NSDictionary, NSMutableArray, WAAppIdToUsernameTransfer;

@interface LiteAppJsApiLaunchMiniProgram : LiteAppJsApi
{
    WAAppIdToUsernameTransfer *_appIDTransfer;
    NSMutableArray *_widgetParameters;
    NSDictionary *_extraParamInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraParamInfo; // @synthesize extraParamInfo=_extraParamInfo;
@property(retain, nonatomic) NSMutableArray *widgetParameters; // @synthesize widgetParameters=_widgetParameters;
- (CDUnknownBlockType)getShareAction;
- (void)launchMiniProgramWithUserName:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 launchParam:(id)arg7;
- (void)launchMiniProgramWithAppID:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 currentURL:(id)arg4 debugMode:(unsigned long long)arg5 adUxInfo:(id)arg6 launchParam:(id)arg7;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

@end
