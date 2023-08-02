//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWAWebViewPluginProtocol-Protocol.h"

@class NSString, WAWebViewController;
@protocol WAWebViewPluginContextProtocol;

@interface WAWebViewPluginBase : NSObject <IWAWebViewPluginProtocol>
{
    WAWebViewController *_webViewController;
    _Bool _isRecording;
    id <WAWebViewPluginContextProtocol> _context;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) __weak id <WAWebViewPluginContextProtocol> context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak WAWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void)setWebViewOwner:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
