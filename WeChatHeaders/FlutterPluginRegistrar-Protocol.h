//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlutterMethodChannel, NSObject, NSString;
@protocol FlutterBinaryMessenger, FlutterPlatformViewFactory, FlutterPlugin, FlutterTextureRegistry;

@protocol FlutterPluginRegistrar <NSObject>
- (NSString *)lookupKeyForAsset:(NSString *)arg1 fromPackage:(NSString *)arg2;
- (NSString *)lookupKeyForAsset:(NSString *)arg1;
- (void)addApplicationDelegate:(NSObject<FlutterPlugin> *)arg1;
- (void)addMethodCallDelegate:(NSObject<FlutterPlugin> *)arg1 channel:(FlutterMethodChannel *)arg2;
- (void)publish:(NSObject *)arg1;
- (void)registerViewFactory:(NSObject<FlutterPlatformViewFactory> *)arg1 withId:(NSString *)arg2 gestureRecognizersBlockingPolicy:(int)arg3;
- (void)registerViewFactory:(NSObject<FlutterPlatformViewFactory> *)arg1 withId:(NSString *)arg2;
- (NSObject<FlutterTextureRegistry> *)textures;
- (NSObject<FlutterBinaryMessenger> *)messenger;
@end

