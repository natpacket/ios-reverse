//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ExtStatsReddotInfo, FinderLiveEndPageReportInfo, FinderLivePromoteComponentReportInfo, NSData, NSMutableArray, NSString;

@interface ExtStats : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveEndPageReportInfo *endPageReport; // @dynamic endPageReport;
@property(retain, nonatomic) NSData *feedActionValue; // @dynamic feedActionValue;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSMutableArray *jumpinfoReportList; // @dynamic jumpinfoReportList;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) FinderLivePromoteComponentReportInfo *promoteReport; // @dynamic promoteReport;
@property(retain, nonatomic) ExtStatsReddotInfo *reddotInfo; // @dynamic reddotInfo;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int videoDuration; // @dynamic videoDuration;

@end

