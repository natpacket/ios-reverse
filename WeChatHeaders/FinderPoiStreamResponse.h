//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderPoiStreamNearbyInfo, FinderPoiStreamResponse_PoiPrepare, FinderPoiStreamTabList, FinderPreloadInfo, NSData, NSMutableArray, NSString, SnsPoiDetail;

@interface FinderPoiStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addressSubLabelType; // @dynamic addressSubLabelType;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int currentTabId; // @dynamic currentTabId;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int nearbyFlag; // @dynamic nearbyFlag;
@property(retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo; // @dynamic nearbyInfo;
@property(retain, nonatomic) NSString *noticeWording; // @dynamic noticeWording;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int onlyShowPoiName; // @dynamic onlyShowPoiName;
@property(nonatomic) unsigned int poiFriendLikeCount; // @dynamic poiFriendLikeCount;
@property(retain, nonatomic) FinderPoiStreamResponse_PoiPrepare *poiPrepare; // @dynamic poiPrepare;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(retain, nonatomic) SnsPoiDetail *snsPoiDetail; // @dynamic snsPoiDetail;
@property(retain, nonatomic) FinderPoiStreamTabList *tabList; // @dynamic tabList;
@property(nonatomic) unsigned int totalFeedsCount; // @dynamic totalFeedsCount;

@end

