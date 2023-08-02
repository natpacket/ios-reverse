//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface LinkWeAppJumpInfo : NSObject
{
    NSString *_appId;
    NSString *_pagePath;
    NSNumber *_appState;
    NSNumber *_isForbidSSignal;
    NSString *_shareKey;
    NSNumber *_scene;
    NSString *_sceneNote;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithAppId:(id)arg1 pagePath:(id)arg2 appState:(id)arg3 isForbidSSignal:(id)arg4 shareKey:(id)arg5 scene:(id)arg6 sceneNote:(id)arg7;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(retain, nonatomic) NSNumber *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(retain, nonatomic) NSNumber *isForbidSSignal; // @synthesize isForbidSSignal=_isForbidSSignal;
@property(retain, nonatomic) NSNumber *appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toMap;

@end
