//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSUPnPDevice, KSUPnPDeviceService, NSString, NSURL;

@interface KSUPnPAction : NSObject
{
    NSString *_instanceDescription;
    KSUPnPDevice *_device;
    KSUPnPDeviceService *_service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) KSUPnPDeviceService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak KSUPnPDevice *device; // @synthesize device=_device;
@property(readonly, copy, nonatomic) NSString *propertiesDescription;
@property(readonly, copy, nonatomic) NSString *instanceDescription; // @synthesize instanceDescription=_instanceDescription;
- (void)callFailureHandler:(CDUnknownBlockType)arg1 withRecord:(id)arg2 error:(id)arg3;
- (void)callSuccessHandler:(CDUnknownBlockType)arg1 withRecord:(id)arg2;
- (void)handleResponseWithRecord:(id)arg1 response:(id)arg2 data:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)takeActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)parseActionErrorFromXMLData:(id)arg1;
- (_Bool)parseActionBodyFromXMLData:(id)arg1;
- (id)generateXMLForActionArguments;
- (id)generateXMLForAction;
@property(readonly, nonatomic) NSURL *controlURL;
@property(readonly, copy, nonatomic) NSString *serviceType;
@property(readonly, copy, nonatomic) NSString *actionName;
- (id)initWithDevice:(id)arg1 service:(id)arg2;
- (id)stringBySanitizingAndEscapingForXML:(id)arg1;

@end

