//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlutterEngine, NSMutableArray, NSMutableDictionary, WxaRouterConfig;

@interface WxaRouter : NSObject
{
    _Bool _isDefaultEngineUsed;
    int _engineId;
    int _defaultEngineId;
    FlutterEngine *_defaultFlutterEngine;
    WxaRouterConfig *_config;
    NSMutableDictionary *_pluginMap;
    NSMutableDictionary *_flutterEngineIdMap;
    NSMutableArray *_destroyingEngines;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *destroyingEngines; // @synthesize destroyingEngines=_destroyingEngines;
@property(nonatomic) _Bool isDefaultEngineUsed; // @synthesize isDefaultEngineUsed=_isDefaultEngineUsed;
@property(nonatomic) int defaultEngineId; // @synthesize defaultEngineId=_defaultEngineId;
@property int engineId; // @synthesize engineId=_engineId;
@property(retain, nonatomic) NSMutableDictionary *flutterEngineIdMap; // @synthesize flutterEngineIdMap=_flutterEngineIdMap;
@property(retain, nonatomic) NSMutableDictionary *pluginMap; // @synthesize pluginMap=_pluginMap;
@property(retain, nonatomic) WxaRouterConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) FlutterEngine *defaultFlutterEngine; // @synthesize defaultFlutterEngine=_defaultFlutterEngine;
- (void)clearAllEngine;
- (id)getFlutterEngine:(int)arg1;
- (void)removeFlutterEngine:(int)arg1;
- (void)recordFlutterEngineId:(int)arg1 engine:(id)arg2;
- (void)releaseEngine:(int)arg1;
- (void)removeConsumer:(int)arg1 conusmer:(id)arg2;
- (void)addConsumer:(int)arg1 conusmer:(id)arg2;
- (void)invokeMethod:(int)arg1 method:(id)arg2 arguments:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)invokeMethod:(int)arg1 method:(id)arg2 arguments:(id)arg3;
- (void)createFlutterEngine;
- (void)registerPlugins:(id)arg1;
- (int)provideFlutterEngine:(_Bool)arg1;
- (void)destroyPreloadFlutterEngine;
- (void)preloadFlutterEngine;
- (_Bool)isFlutterEngineReady;
- (void)destroy:(id)arg1 engineId:(int)arg2;
- (void)detach:(id)arg1 engineId:(int)arg2;
- (void)attach:(id)arg1 engineId:(int)arg2;
- (void)prepareNextEngine:(id)arg1;
- (void)create:(id)arg1 engineId:(int)arg2;
- (_Bool)isSetup;
- (void)setup:(id)arg1;
- (id)init;

@end

