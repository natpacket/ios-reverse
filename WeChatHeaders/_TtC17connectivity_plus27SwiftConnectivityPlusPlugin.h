//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC17connectivity_plus27SwiftConnectivityPlusPlugin : NSObject
{
    // Error parsing type: , name: connectivityProvider
    // Error parsing type: , name: eventSink
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)detachFromEngineForRegistrar:(id)arg1;

@end

