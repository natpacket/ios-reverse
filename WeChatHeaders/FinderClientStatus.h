//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderClientPerformance, NSMutableArray, NSString;

@interface FinderClientStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bandwidthKbps; // @dynamic bandwidthKbps;
@property(retain, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(retain, nonatomic) FinderClientPerformance *clientPerformance; // @dynamic clientPerformance;
@property(nonatomic) unsigned int clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(nonatomic) unsigned int deviceTypeId; // @dynamic deviceTypeId;
@property(retain, nonatomic) NSMutableArray *finderFluencyInfo; // @dynamic finderFluencyInfo;
@property(retain, nonatomic) NSMutableArray *lastPreloadDownloadInfo; // @dynamic lastPreloadDownloadInfo;
@property(retain, nonatomic) NSMutableArray *lastVideosDownloadInfo; // @dynamic lastVideosDownloadInfo;
@property(retain, nonatomic) NSString *netName; // @dynamic netName;
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSMutableArray *nextVideosDownloadInfo; // @dynamic nextVideosDownloadInfo;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(retain, nonatomic) NSMutableArray *recentFinderDownloadSpeed; // @dynamic recentFinderDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *recentNonfinderNonquicDownloadSpeed; // @dynamic recentNonfinderNonquicDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *recentNonfinderQuicDownloadSpeed; // @dynamic recentNonfinderQuicDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *recentWechatDownloadSpeed; // @dynamic recentWechatDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *supportedCodingFormat; // @dynamic supportedCodingFormat;

@end

