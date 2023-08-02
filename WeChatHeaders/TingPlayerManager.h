//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRemoteControlCheckExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "TingPlayTaskController-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol TingFlowPlayerProtocol;

@interface TingPlayerManager : NSObject <TingPlayTaskController, IRemoteControlCheckExt, MMImageLoaderObserver>
{
    _Bool _isHeadsetConnected;
    id <TingFlowPlayerProtocol> _activePlayer;
    id <TingFlowPlayerProtocol> _restoredPlayer;
    id <TingFlowPlayerProtocol> _dissociativePlayer;
    NSHashTable *_playerList;
    id <TingFlowPlayerProtocol> _globalPlayer;
    long long _generatedPlayerCount;
    NSMutableDictionary *_nowPlayingInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHeadsetConnected; // @synthesize isHeadsetConnected=_isHeadsetConnected;
@property(retain, nonatomic) NSMutableDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(nonatomic) long long generatedPlayerCount; // @synthesize generatedPlayerCount=_generatedPlayerCount;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> globalPlayer; // @synthesize globalPlayer=_globalPlayer;
@property(retain, nonatomic) NSHashTable *playerList; // @synthesize playerList=_playerList;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> dissociativePlayer; // @synthesize dissociativePlayer=_dissociativePlayer;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> restoredPlayer; // @synthesize restoredPlayer=_restoredPlayer;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> activePlayer; // @synthesize activePlayer=_activePlayer;
- (void)flowPlayer:(id)arg1 willChangeFromCurrentSource:(id)arg2 targetSource:(id)arg3;
- (void)flowPlayer:(id)arg1 didChangeModelFromPreviousOne:(id)arg2 currentModel:(id)arg3;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)appWillEnterForeground;
- (void)iRemoteControlCheckEvent:(id)arg1;
- (_Bool)checkIfHeadsetConnected;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateNowPlayingInfo:(id)arg1 image:(id)arg2;
- (long long)onHandleMPRemoteCommandClicked:(id)arg1;
- (void)setMPRemoteCommand:(id)arg1 enable:(_Bool)arg2;
- (void)resetRemoteControlButtonStatus;
- (void)refreshRemoteControlButtonStatus;
- (void)updatePlayingInfo:(id)arg1;
- (void)reloadAllPlayers;
- (id)popRestorePlayer;
- (void)restoreInterruptedPlayer:(id)arg1;
- (void)stopDissociativePlayer;
- (void)stopDeactivePlayers;
- (void)clearAllPlayer;
- (void)flushWatiingNotifyPlayer;
- (long long)generatePlayerId;
- (void)makePlayerActive:(id)arg1;
- (id)createPlayerWithClass:(Class)arg1 makeActive:(_Bool)arg2;
- (id)createDissociativePlayerIfNeed;
- (Class)defaultPlayerClass;
- (id)reportManager;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSMutableSet *listeners;
- (void)onPlayerChanged;
- (void)removePlayTaskControllerListener:(id)arg1;
- (void)addPlayTaskControllerListener:(id)arg1;
- (id)createTask:(id)arg1;
- (id)playingTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
