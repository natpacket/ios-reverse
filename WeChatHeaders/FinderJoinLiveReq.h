//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FeedsPreviewJoinLiveMultiStyleInfo, FinderBaseRequest, FinderJoinLiveTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FinderLiveDynamicCardVersion, FinderLiveReportBaseInfo, NSData, NSString;

@interface FinderJoinLiveReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus; // @dynamic beforeJoinLiveRoomStatus;
@property(retain, nonatomic) FinderLiveClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) FinderLiveDynamicCardVersion *dynamicCardVersion; // @dynamic dynamicCardVersion;
@property(retain, nonatomic) NSString *ecSource; // @dynamic ecSource;
@property(retain, nonatomic) FeedsPreviewJoinLiveMultiStyleInfo *feedsPreviewLiveMultiStyleInfo; // @dynamic feedsPreviewLiveMultiStyleInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderForwardSource; // @dynamic finderForwardSource;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(nonatomic) int joinType; // @dynamic joinType;
@property(retain, nonatomic) FinderJoinLiveTabTipsInfo *joinliveTabTipsInfo; // @dynamic joinliveTabTipsInfo;
@property(retain, nonatomic) NSString *joinliveWithPersonalColumnId; // @dynamic joinliveWithPersonalColumnId;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *livePkId; // @dynamic livePkId;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(retain, nonatomic) NSData *liveSei; // @dynamic liveSei;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) _Bool onlyPlusUv; // @dynamic onlyPlusUv;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *shareUsername; // @dynamic shareUsername;
@property(retain, nonatomic) NSString *srcUrl; // @dynamic srcUrl;
@property(retain, nonatomic) NSData *uxInfo; // @dynamic uxInfo;

@end
