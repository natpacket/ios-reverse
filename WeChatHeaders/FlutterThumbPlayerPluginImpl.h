//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlutterStreamHandler-Protocol.h"
#import "MMFlutterPlugin-Protocol.h"
#import "TPFlutterApi-Protocol.h"

@class FlutterEventChannel, NSMutableDictionary, NSString;
@protocol FlutterBinaryMessenger, FlutterTextureRegistry;

@interface FlutterThumbPlayerPluginImpl : NSObject <FlutterStreamHandler, MMFlutterPlugin, TPFlutterApi>
{
    NSObject<FlutterTextureRegistry> *_registry;
    NSObject<FlutterBinaryMessenger> *_messenger;
    FlutterEventChannel *_playerEventChannel;
    CDUnknownBlockType _playerEventSink;
    NSMutableDictionary *_playerMap;
}

- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *playerMap; // @synthesize playerMap=_playerMap;
@property(copy, nonatomic) CDUnknownBlockType playerEventSink; // @synthesize playerEventSink=_playerEventSink;
@property(retain, nonatomic) FlutterEventChannel *playerEventChannel; // @synthesize playerEventChannel=_playerEventChannel;
@property(readonly, nonatomic) NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)tpGetVideoSizePlayerId:(id)arg1 error:(id *)arg2;
- (id)tpSetOnFirstFrameRenderedListenerPlayerId:(id)arg1 error:(id *)arg2;
- (id)tpSetOnPreparedListenerPlayerId:(id)arg1 error:(id *)arg2;
- (id)tpSetProgressListenerPlayerId:(id)arg1 error:(id *)arg2;
- (id)tpClearEffectPlayerId:(id)arg1 error:(id *)arg2;
- (id)tpRemoveEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpUpdateEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpAddEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpReleasePlayerId:(id)arg1 error:(id *)arg2;
- (id)tpStopPlayerId:(id)arg1 error:(id *)arg2;
- (id)tpUpdateDisplaySizeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetLoopParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetStreamTypeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMuteParams:(id)arg1 error:(id *)arg2;
- (id)tpPlaySetScaleTypeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerGetPlayRangePlayerId:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetPlayRangeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSeekParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerPausePlayerId:(id)arg1 error:(id *)arg2;
- (id)tpPlayerPlayPlayerId:(id)arg1 error:(id *)arg2;
- (id)tpPlayerPreparePlayerId:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMediaProtoParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMediaInfoParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerInitParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerCreateMediaType:(id)arg1 error:(id *)arg2;
- (id)generatePlayerId;
- (void)initWithRegistry:(id)arg1 messenger:(id)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
