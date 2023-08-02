//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol IMBExternalViewDelegate, IMBJsApiDelegate, IMBNetwork, IMBPkgManagement, IMBStorage, IMBVConsoleDelegate, IMBViewDelegate, wxAudioFileLoaderDelegate;

@interface MBBuildConfig : NSObject <NSCopying>
{
    _Bool _useJitMode;
    _Bool _isNonPersistentDataStore;
    id <IMBViewDelegate> _viewDelegate;
    id <IMBExternalViewDelegate> _externalViewDelegate;
    id <IMBPkgManagement> _pkgManagement;
    id <IMBJsApiDelegate> _jsApiDelegate;
    id <IMBVConsoleDelegate> _vConsoleDelegate;
    id <IMBStorage> _storage;
    id <IMBNetwork> _network;
    id _context;
    id <wxAudioFileLoaderDelegate> _wxAudioFileLoaderDelegate;
    NSString *_jitDomain;
    unsigned long long _reportSample;
    CDUnknownBlockType _provideExtraInfo;
    NSMutableDictionary *_extJsApiInfoPool;
    NSMutableDictionary *_jsApiPool;
    NSDictionary *_extEnvContents;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extEnvContents; // @synthesize extEnvContents=_extEnvContents;
@property(retain, nonatomic) NSMutableDictionary *jsApiPool; // @synthesize jsApiPool=_jsApiPool;
@property(retain, nonatomic) NSMutableDictionary *extJsApiInfoPool; // @synthesize extJsApiInfoPool=_extJsApiInfoPool;
@property(copy, nonatomic) CDUnknownBlockType provideExtraInfo; // @synthesize provideExtraInfo=_provideExtraInfo;
@property(nonatomic) unsigned long long reportSample; // @synthesize reportSample=_reportSample;
@property(nonatomic) _Bool isNonPersistentDataStore; // @synthesize isNonPersistentDataStore=_isNonPersistentDataStore;
@property(retain, nonatomic) NSString *jitDomain; // @synthesize jitDomain=_jitDomain;
@property(nonatomic) _Bool useJitMode; // @synthesize useJitMode=_useJitMode;
@property(nonatomic) __weak id <wxAudioFileLoaderDelegate> wxAudioFileLoaderDelegate; // @synthesize wxAudioFileLoaderDelegate=_wxAudioFileLoaderDelegate;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <IMBNetwork> network; // @synthesize network=_network;
@property(nonatomic) __weak id <IMBStorage> storage; // @synthesize storage=_storage;
@property(nonatomic) __weak id <IMBVConsoleDelegate> vConsoleDelegate; // @synthesize vConsoleDelegate=_vConsoleDelegate;
@property(nonatomic) __weak id <IMBJsApiDelegate> jsApiDelegate; // @synthesize jsApiDelegate=_jsApiDelegate;
@property(nonatomic) __weak id <IMBPkgManagement> pkgManagement; // @synthesize pkgManagement=_pkgManagement;
@property(nonatomic) __weak id <IMBExternalViewDelegate> externalViewDelegate; // @synthesize externalViewDelegate=_externalViewDelegate;
@property(nonatomic) __weak id <IMBViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAllMBJsApis;
- (id)getApi:(id)arg1;
- (id)getExtJsApiInfo:(id)arg1;
- (_Bool)isJsApiExist:(id)arg1;
- (void)setExtraEnvContents:(id)arg1;
- (void)addExtJsApiInfo:(id)arg1 handler:(id)arg2;
- (void)addExtJsApiInfo:(id)arg1;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(_Bool)arg3 isRunOnMainThread:(_Bool)arg4;
- (void)addExtJsApi:(id)arg1 name:(id)arg2 isSync:(_Bool)arg3;
- (void)addMBJsApis:(id)arg1;
- (void)addMBJsApi:(id)arg1;
- (id)init;

@end
