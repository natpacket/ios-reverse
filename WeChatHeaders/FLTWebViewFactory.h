//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterPlatformViewFactory-Protocol.h"

@class FLTCookieManager, NSString;
@protocol FlutterBinaryMessenger;

@interface FLTWebViewFactory : NSObject <FlutterPlatformViewFactory>
{
    NSObject<FlutterBinaryMessenger> *_messenger;
    FLTCookieManager *_cookieManager;
}

- (void).cxx_destruct;
- (id)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (id)initWithMessenger:(id)arg1 cookieManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

