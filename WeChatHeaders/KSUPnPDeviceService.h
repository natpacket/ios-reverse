//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface KSUPnPDeviceService : NSObject
{
    NSString *_serviceType;
    NSString *_serviceId;
    NSURL *_SCPDURL;
    NSURL *_controlURL;
    NSURL *_eventSubURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *eventSubURL; // @synthesize eventSubURL=_eventSubURL;
@property(retain, nonatomic) NSURL *controlURL; // @synthesize controlURL=_controlURL;
@property(retain, nonatomic) NSURL *SCPDURL; // @synthesize SCPDURL=_SCPDURL;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;

@end

