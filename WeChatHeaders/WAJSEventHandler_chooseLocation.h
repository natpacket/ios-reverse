//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WALocationServiceDelegate-Protocol.h"

@class NSString;
@protocol IWALocationService;

@interface WAJSEventHandler_chooseLocation : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>
{
    id <IWALocationService> _locationService;
    struct CLLocationCoordinate2D _startCoord;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D startCoord; // @synthesize startCoord=_startCoord;
@property(retain, nonatomic) id <IWALocationService> locationService; // @synthesize locationService=_locationService;
- (void)onChooseLocation:(id)arg1;
- (void)onCancelChooseLocation;
- (void)openLocation:(id)arg1;
- (void)doNavigate;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
