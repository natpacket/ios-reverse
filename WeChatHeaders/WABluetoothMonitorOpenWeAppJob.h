//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WABluetoothMonitoredDevice;

@interface WABluetoothMonitorOpenWeAppJob : NSObject
{
    NSString *_appId;
    WABluetoothMonitoredDevice *_monitoredDevice;
    CDUnknownBlockType _terminateHandler;
    CDUnknownBlockType _openSuccessHandler;
    CDUnknownBlockType _openFailHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType openFailHandler; // @synthesize openFailHandler=_openFailHandler;
@property(copy, nonatomic) CDUnknownBlockType openSuccessHandler; // @synthesize openSuccessHandler=_openSuccessHandler;
@property(copy, nonatomic) CDUnknownBlockType terminateHandler; // @synthesize terminateHandler=_terminateHandler;
@property(retain, nonatomic) WABluetoothMonitoredDevice *monitoredDevice; // @synthesize monitoredDevice=_monitoredDevice;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

