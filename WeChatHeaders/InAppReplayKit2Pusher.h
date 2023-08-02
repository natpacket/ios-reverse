//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TRTCCloudDelegate-Protocol.h"

@class NSString, TRTCCloud;

@interface InAppReplayKit2Pusher : NSObject <TRTCCloudDelegate>
{
    _Bool _isPushing;
    _Bool _isStarting;
    TRTCCloud *_trtcCloud;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStarting; // @synthesize isStarting=_isStarting;
@property(nonatomic) _Bool isPushing; // @synthesize isPushing=_isPushing;
@property(retain, nonatomic) TRTCCloud *trtcCloud; // @synthesize trtcCloud=_trtcCloud;
- (void)onNetworkQuality:(id)arg1 remoteQuality:(id)arg2;
- (void)onConnectionLost;
- (void)onEnterRoom:(long long)arg1;
- (void)onNetStatus:(id)arg1;
- (void)showRecodingStatus:(_Bool)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)resumePush;
- (void)pausePush;
- (void)stopInAppScreenCapture;
- (void)startInAppScreenCapture;
- (void)stop;
- (void)start;
- (id)initWithTRTCCloud:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

