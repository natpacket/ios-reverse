//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PstnCheckNumberRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientCountry; // @dynamic clientCountry;
@property(nonatomic) unsigned int dialScene; // @dynamic dialScene;
@property(retain, nonatomic) NSString *lastCountry; // @dynamic lastCountry;
@property(retain, nonatomic) NSString *osCountry; // @dynamic osCountry;
@property(retain, nonatomic) NSString *pureNumber; // @dynamic pureNumber;
@property(retain, nonatomic) NSString *simCountry; // @dynamic simCountry;

@end

