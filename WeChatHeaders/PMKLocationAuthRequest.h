//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface PMKLocationAuthRequest : NSObject <CLLocationManagerDelegate>
{
    int _initialAuthorizationState;
    CDUnknownBlockType _resolve;
    id _retainCycle;
    CLLocationManager *_manager;
}

- (void).cxx_destruct;
@property(nonatomic) int initialAuthorizationState; // @synthesize initialAuthorizationState=_initialAuthorizationState;
@property(retain, nonatomic) CLLocationManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) id retainCycle; // @synthesize retainCycle=_retainCycle;
@property(copy, nonatomic) CDUnknownBlockType resolve; // @synthesize resolve=_resolve;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)pRequestWhenInUseAuthorization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
