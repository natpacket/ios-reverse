//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUIViewController, NSDictionary, NSMutableDictionary, NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface GCWebViewCustomEventParam : NSObject
{
    MMUIViewController<WXCustomWebViewControllerProtocol> *_webVc;
    NSString *_eventName;
    NSMutableDictionary *_customParam;
    NSDictionary *_jsParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *jsParam; // @synthesize jsParam=_jsParam;
@property(retain, nonatomic) NSMutableDictionary *customParam; // @synthesize customParam=_customParam;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) MMUIViewController<WXCustomWebViewControllerProtocol> *webVc; // @synthesize webVc=_webVc;

@end

