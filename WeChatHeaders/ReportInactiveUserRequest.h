//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AndroidDeviceInfo, BaseRequest, IosDeviceInfo, NSString;

@interface ReportInactiveUserRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AndroidDeviceInfo *androidDeviceInfo; // @dynamic androidDeviceInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) IosDeviceInfo *iosDeviceInfo; // @dynamic iosDeviceInfo;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;

@end

