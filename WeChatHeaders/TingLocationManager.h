//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LocationRetrieveDelegate-Protocol.h"

@class CLLocation, LocationRetriever, NSString;

@interface TingLocationManager : NSObject <LocationRetrieveDelegate>
{
    LocationRetriever *_locationRetriever;
    CLLocation *_currentLocation;
    CDUnknownBlockType _pendingCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion; // @synthesize pendingCompletion=_pendingCompletion;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
- (void)fetchCity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)convertLocationToCity:(id)arg1;
- (void)onNotifyResult;
- (void)onLocationUpdated:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)stopRetrieveLocation;
- (void)startRetrieveLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

