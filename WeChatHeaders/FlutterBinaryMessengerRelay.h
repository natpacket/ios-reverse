//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterBinaryMessenger-Protocol.h"

@class NSString;
@protocol FlutterBinaryMessenger;

@interface FlutterBinaryMessengerRelay : NSObject <FlutterBinaryMessenger>
{
    NSObject<FlutterBinaryMessenger> *_parent;
}

@property(nonatomic) NSObject<FlutterBinaryMessenger> *parent; // @synthesize parent=_parent;
- (void)cleanUpConnection:(long long)arg1;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(CDUnknownBlockType)arg2;
- (void)sendOnChannel:(id)arg1 message:(id)arg2 binaryReply:(CDUnknownBlockType)arg3;
- (void)sendOnChannel:(id)arg1 message:(id)arg2;
- (id)initWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

