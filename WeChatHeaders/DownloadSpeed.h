//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface DownloadSpeed : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(nonatomic) unsigned long long costMs; // @dynamic costMs;
@property(nonatomic) unsigned long long endTime; // @dynamic endTime;
@property(nonatomic) unsigned long long moovCostMs; // @dynamic moovCostMs;
@property(nonatomic) unsigned long long moovSizeByte; // @dynamic moovSizeByte;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int networkId; // @dynamic networkId;
@property(retain, nonatomic) NSString *serverIp; // @dynamic serverIp;
@property(nonatomic) unsigned long long sizeByte; // @dynamic sizeByte;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;

@end

