//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderLivePermissionVerifyInfo, NSString;

@interface FinderGetLiveNoticeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorFinderUsername; // @dynamic anchorFinderUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int lastNoticeStartTime; // @dynamic lastNoticeStartTime;
@property(nonatomic) unsigned int noticeAggregateType; // @dynamic noticeAggregateType;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;
@property(nonatomic) unsigned int order; // @dynamic order;
@property(retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

