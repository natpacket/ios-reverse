//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPPlayerBaseDelegate-Protocol.h"

@class NSString, TPPlayerAdapter, TPPlayerEventPublisher;
@protocol ITPPlayerBaseDelegate;

@interface TPPlayerAdapterProxyDelegate : NSObject <ITPPlayerBaseDelegate>
{
    id <ITPPlayerBaseDelegate> _outerDelegate;
    TPPlayerEventPublisher *_publisher;
    TPPlayerAdapter *_playerAdapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerAdapter *playerAdapter; // @synthesize playerAdapter=_playerAdapter;
@property(retain, nonatomic) TPPlayerEventPublisher *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) __weak id <ITPPlayerBaseDelegate> outerDelegate; // @synthesize outerDelegate=_outerDelegate;
- (id)onSdpExchange:(id)arg1 localSdp:(id)arg2 ids:(int)arg3;
- (void)onPlayer:(id)arg1 drmInfo:(id)arg2;
- (void)onPlayer:(id)arg1 detailInfo:(id)arg2;
- (void)onPlayer:(id)arg1 stateChangedWhenPictureInPictureActive:(unsigned long long)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 airplayDidActive:(_Bool)arg2;
- (id)onPlayer:(id)arg1 assembleAVAssetWithUrl:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onRetryEnd:(id)arg1;
- (void)onRetryStart:(id)arg1;
- (id)onPlayer:(id)arg1 audioProcessFrameOut:(id)arg2;
- (id)onPlayer:(id)arg1 videoProcessFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 audioFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 subtitleData:(id)arg2;
- (void)onVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onSeekComplete:(id)arg1;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onCompletion:(id)arg1;
- (void)onPrepared:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

