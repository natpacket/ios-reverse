//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC6WeChat27MMFinderLiveTaskKaraQuality : NSObject
{
    // Error parsing type: , name: currentLiveID
    // Error parsing type: , name: eventCollection
    // Error parsing type: , name: statusCollection
}

- (void).cxx_destruct;
- (void)onStartCustomPixelTransferChange;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)collectStatusWithLive:(id)arg1 anchorStatus:(long long)arg2;
- (void)collectEventWithLive:(id)arg1 playerEvent:(long long)arg2 parameters:(id)arg3;
- (void)collectEventWithLive:(id)arg1 oldPlayerStatus:(long long)arg2 newPlayerStatus:(long long)arg3;
- (_Bool)canProphetStep:(id)arg1;
- (_Bool)isProphetStarted;
- (void)stopProphetWithLive:(id)arg1;
- (void)stopProphet;
- (id)stepProphetWithLive:(id)arg1 QoS:(id)arg2 videoQualityLevel:(int)arg3 isH265:(_Bool)arg4 isEnhanceEnabled:(_Bool)arg5;
- (_Bool)startProphetWithLive:(id)arg1;
- (_Bool)restartProphetWithLive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

