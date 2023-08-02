//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterPlugin-Protocol.h"

@class NSString, WKHTTPCookieStore;

@interface FLTCookieManager : NSObject <FlutterPlugin>
{
    WKHTTPCookieStore *_httpCookieStore;
}

+ (void)registerWithRegistrar:(id)arg1;
+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) WKHTTPCookieStore *httpCookieStore; // @synthesize httpCookieStore=_httpCookieStore;
- (void)setCookieForResult:(CDUnknownBlockType)arg1 arguments:(id)arg2;
- (void)setCookieForData:(id)arg1;
- (void)setCookiesForData:(id)arg1;
- (void)clearCookies:(CDUnknownBlockType)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
