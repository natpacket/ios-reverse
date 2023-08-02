//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMFlutterPlugin-Protocol.h"
#import "MusicPlayerApi-Protocol.h"

@class NSString;

@interface FlutterMusicPlayerApiImplementaion : NSObject <MusicPlayerApi, MMFlutterPlugin>
{
    unsigned long long _uiStyle;
}

+ (long long)flutterValueFromState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
- (id)getCurrentStateWithError:(id *)arg1;
- (id)canPlayMusicWithError:(id *)arg1;
- (void)clearHistoryWithError:(id *)arg1;
- (id)getHistoryWithError:(id *)arg1;
- (id)getDurationWithError:(id *)arg1;
- (id)getCurrentPositionWithError:(id *)arg1;
- (void)seekTimeMs:(id)arg1 error:(id *)arg2;
- (void)stopWithError:(id *)arg1;
- (void)resumeWithError:(id *)arg1;
- (void)pauseWithError:(id *)arg1;
- (void)playInfo:(id)arg1 error:(id *)arg2;
- (id)getCurrentMusicWithError:(id *)arg1;
- (id)playerManager;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

