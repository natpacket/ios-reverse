//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiteAppJsApiPluginBase.h"

#import "TingEventPluginProtocol-Protocol.h"
#import "TingFlowPlayerNotification-Protocol.h"

@class NSString;

@interface LiteAppJsApiPlugin_TingEvent : LiteAppJsApiPluginBase <TingFlowPlayerNotification, TingEventPluginProtocol>
{
    _Bool _isNotifyTingStateChange;
    NSString *_albumId;
    NSString *_audioId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNotifyTingStateChange; // @synthesize isNotifyTingStateChange=_isNotifyTingStateChange;
@property(retain, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void)sendBackgroundStateChangeEvent:(id)arg1;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)stopObserveTingStateChange;
- (void)startObserveTingStateChange;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

