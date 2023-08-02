//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterBinaryMessenger, FlutterMethodCodec;

@interface FlutterMethodChannel : NSObject
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSString *_name;
    NSObject<FlutterMethodCodec> *_codec;
    long long _connection;
}

+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;
+ (id)methodChannelWithName:(id)arg1 binaryMessenger:(id)arg2;
- (void)resizeChannelBuffer:(long long)arg1;
- (void)setMethodCallHandler:(CDUnknownBlockType)arg1;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)invokeMethod:(id)arg1 arguments:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 binaryMessenger:(id)arg2 codec:(id)arg3;

@end

