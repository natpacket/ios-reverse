//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, WKWebView;

@interface WCWebEventsStore : MMObject
{
    WKWebView *_webView;
    NSMutableArray *_curNavigationEventsQueue;
    NSMutableSet *_curEventsStore;
    NSMutableArray *_curEventActions;
    NSMutableDictionary *_reqToFullUrlDic;
}

+ (id)eventSetDescription:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reqToFullUrlDic; // @synthesize reqToFullUrlDic=_reqToFullUrlDic;
@property(retain, nonatomic) NSMutableArray *curEventActions; // @synthesize curEventActions=_curEventActions;
@property(retain, nonatomic) NSMutableSet *curEventsStore; // @synthesize curEventsStore=_curEventsStore;
@property(retain, nonatomic) NSMutableArray *curNavigationEventsQueue; // @synthesize curNavigationEventsQueue=_curNavigationEventsQueue;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
- (void)appendArrWebEventAction:(id)arg1;
- (id)webviewEventsInStore;
- (void)resetWebEventStore;
- (void)appendWebEvent:(id)arg1;
- (void)checkActions;
- (void)__dispatchWebEvent:(id)arg1;
- (id)init;

@end

