//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WAAppTaskPageRecord : MMObject <PBCoding>
{
    _Bool _isRecoverReloaded;
    _Bool _hasHtmlWeb;
    _Bool _isSkyline;
    unsigned int _webviewId;
    NSString *_pagePath;
    NSString *_lastPageJsError;
    NSString *_openType;
    NSString *_navId;
    NSMutableArray *_downloadedModulesWhenRoute;
}

+ (void)initialize;
+ (void)PBArrayAdd_isSkyline;
+ (void)PBArrayAdd_hasHtmlWeb;
+ (void)PBArrayAdd_isRecoverReloaded;
+ (void)PBArrayAdd_navId;
+ (void)PBArrayAdd_openType;
+ (void)PBArrayAdd_lastPageJsError;
+ (void)PBArrayAdd_pagePath;
+ (void)PBArrayAdd_webviewId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *downloadedModulesWhenRoute; // @synthesize downloadedModulesWhenRoute=_downloadedModulesWhenRoute;
@property(nonatomic) _Bool isSkyline; // @synthesize isSkyline=_isSkyline;
@property(nonatomic) _Bool hasHtmlWeb; // @synthesize hasHtmlWeb=_hasHtmlWeb;
@property(nonatomic) _Bool isRecoverReloaded; // @synthesize isRecoverReloaded=_isRecoverReloaded;
@property(copy, nonatomic) NSString *navId; // @synthesize navId=_navId;
@property(copy, nonatomic) NSString *openType; // @synthesize openType=_openType;
@property(copy, nonatomic) NSString *lastPageJsError; // @synthesize lastPageJsError=_lastPageJsError;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned int webviewId; // @synthesize webviewId=_webviewId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

