//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAutoLayoutSheetView.h"

#import "LocationRetrieveDelegate-Protocol.h"

@class LocationRetriever, MMLocatingCoordinateLogic, MMUILabel, NSString, SystemAuthBizInfo, _TtC6WeChat24SystemAuthCapabilityInfo;

@interface SystemAuthSettingSheetView : MMAutoLayoutSheetView <LocationRetrieveDelegate>
{
    _TtC6WeChat24SystemAuthCapabilityInfo *_capabilityInfo;
    SystemAuthBizInfo *_bizInfo;
    MMUILabel *_locationLabel;
    LocationRetriever *_locationRetriever;
    MMLocatingCoordinateLogic *_locatingLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) MMUILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) SystemAuthBizInfo *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) _TtC6WeChat24SystemAuthCapabilityInfo *capabilityInfo; // @synthesize capabilityInfo=_capabilityInfo;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)requestLocationAddress;
- (_Bool)showLocationAddress;
- (_Bool)isSwitchOn;
- (id)genSwitchView:(id)arg1;
- (void)customArrangeViews;
- (id)initWithAuthCapability:(id)arg1 scene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
