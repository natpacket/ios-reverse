//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WeAppData;

@interface BizFinderLiveResp_BizFinderLiveInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizusername; // @dynamic bizusername;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(retain, nonatomic) NSString *finderFeedExportId; // @dynamic finderFeedExportId;
@property(nonatomic) unsigned int liveScene; // @dynamic liveScene;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) _Bool useWeapp; // @dynamic useWeapp;
@property(retain, nonatomic) WeAppData *weappData; // @dynamic weappData;

@end

