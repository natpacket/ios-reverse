//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@interface WAJSEventHandler_openChannelsLive : WAJSEventHandler_BaseEvent
{
    _Bool _isCallByAds;
}

@property(nonatomic) _Bool isCallByAds; // @synthesize isCallByAds=_isCallByAds;
- (_Bool)endOnOpen;
- (id)createAdsParamsWithExtraData:(id)arg1;
- (id)createLivePermissionVerifyInfWithExtraData:(id)arg1;
- (void)failBlockHandler:(int)arg1;
- (void)handleJSEvent:(id)arg1;

@end

