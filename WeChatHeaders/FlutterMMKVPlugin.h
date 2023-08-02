//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterMMKVHost-Protocol.h"
#import "MMFlutterPlugin-Protocol.h"

@class NSString;

@interface FlutterMMKVPlugin : NSObject <MMFlutterPlugin, FlutterMMKVHost>
{
}

- (id)mmkvWithName:(id)arg1;
- (void)putStringRequest:(id)arg1 error:(id *)arg2;
- (void)putIntRequest:(id)arg1 error:(id *)arg2;
- (void)putBoolRequest:(id)arg1 error:(id *)arg2;
- (id)getStringRequest:(id)arg1 error:(id *)arg2;
- (id)getIntRequest:(id)arg1 error:(id *)arg2;
- (id)getBoolRequest:(id)arg1 error:(id *)arg2;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

