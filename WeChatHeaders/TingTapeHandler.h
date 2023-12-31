//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingItemDataServiceExtension-Protocol.h"
#import "TingTapeHandlerDelegate-Protocol.h"

@class NSString, TingNativeTapeInfo;
@protocol TingTapeHandlerDelegate;

@interface TingTapeHandler : NSObject <TingTapeHandlerDelegate, TingItemDataServiceExtension>
{
    id <TingTapeHandlerDelegate> _delegate;
    TingNativeTapeInfo *_tapeInfo;
}

+ (_Bool)isTingPlayerModuleActive;
+ (id)generateTapeInfoWithPlayer:(id)arg1;
+ (id)genPlayingInfoForPlayingItem:(id)arg1 tapeInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TingNativeTapeInfo *tapeInfo; // @synthesize tapeInfo=_tapeInfo;
@property(nonatomic) __weak id <TingTapeHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentPlayer;
- (void)onTingItemUpdatedWithId:(id)arg1 item:(id)arg2;
- (void)onTingItemServerUUIDAvailable:(id)arg1 localUUID:(id)arg2;
- (void)updateCurrentPlayingInfoWithPlayer:(id)arg1;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (id)curPlayingInfo;
- (id)curTapeInfo;
- (void)onStop;
- (void)onResume;
- (void)onPause;
- (void)onPlay;
- (void)unregiesterObserver;
- (void)registerObserver;
- (void)dealloc;
- (id)initWithTapeInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

