//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPAppleAudioRouteImpl-Protocol.h"

@class NSString;

@interface TPIOSAudioRouteManagerImpl : NSObject <ITPAppleAudioRouteImpl>
{
    struct set<ITPAudioRouteManagerCallback *, std::less<ITPAudioRouteManagerCallback *>, std::allocator<ITPAudioRouteManagerCallback *>> _callbacks;
    deque_19df0b0c _currentRoutes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateCurrentRoute:(id)arg1;
- (void)onAudioSessionRouteChange:(id)arg1;
- (void)unRegisterObserver;
- (void)registerObserver;
- (void)initCurrentRoutes;
- (void)updateCurrentRoutesFromOutputs:(id)arg1;
- (int)getRouteTypeFromAVAudioSessionPort:(id)arg1;
- (_Bool)isRouteTypeOn:(int)arg1;
- (deque_19df0b0c)getCurrentRoutes;
- (void)removeCallback:(struct ITPAudioRouteManagerCallback *)arg1;
- (void)addCallback:(struct ITPAudioRouteManagerCallback *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
