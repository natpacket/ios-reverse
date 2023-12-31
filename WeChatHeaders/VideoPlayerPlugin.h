//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterPlugin-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol FlutterBinaryMessenger, FlutterPluginRegistrar, FlutterTextureRegistry;

@interface VideoPlayerPlugin : NSObject <FlutterPlugin>
{
    NSObject<FlutterTextureRegistry> *_registry;
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSMutableDictionary *_players;
    NSObject<FlutterPluginRegistrar> *_registrar;
}

+ (void)registerWithRegistrar:(id)arg1;
+ (void)setPluginImplClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<FlutterPluginRegistrar> *registrar; // @synthesize registrar=_registrar;
@property(readonly, nonatomic) NSMutableDictionary *players; // @synthesize players=_players;
@property(readonly, nonatomic) __weak NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
@property(readonly, nonatomic) __weak NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onPlayerSetup:(id)arg1 frameUpdater:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (void)engineWillDestroy;
- (void)becomeActive;
- (void)initThumbPlayerConfig;
- (id)initWithRegistrar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

