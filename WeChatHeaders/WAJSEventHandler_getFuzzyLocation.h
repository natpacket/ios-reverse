//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class TencentLBSLocationManager;

@interface WAJSEventHandler_getFuzzyLocation : WAJSEventHandler_BaseEvent
{
    unsigned long long m_geoLocationType;
    TencentLBSLocationManager *_locationMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TencentLBSLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
- (struct CLLocationCoordinate2D)randomDeviate:(struct CLLocationCoordinate2D)arg1;
- (void)onTencentLBSLocationError:(id)arg1;
- (void)onTencentLBSLocationGot:(id)arg1;
- (void)updateWebviewTitle;
- (void)onDelayDismiss;
- (void)startRequestAddress;
- (void)handleJSEvent:(id)arg1;

@end

