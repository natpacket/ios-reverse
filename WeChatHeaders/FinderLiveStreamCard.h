//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderAdExtInfo, FinderBannerExtInfo, FinderLiveRelatedExtInfo, FinderLiveStreamJumper, FinderLiveStreamNoticeCard, FinderObject, NSMutableArray, NSString;

@interface FinderLiveStreamCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderAdExtInfo *adExtinfo; // @dynamic adExtinfo;
@property(retain, nonatomic) FinderBannerExtInfo *bannerExtinfo; // @dynamic bannerExtinfo;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(retain, nonatomic) FinderLiveStreamJumper *jumper; // @dynamic jumper;
@property(nonatomic) unsigned long long layoutId; // @dynamic layoutId;
@property(retain, nonatomic) FinderLiveStreamNoticeCard *noticeInfo; // @dynamic noticeInfo;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) NSString *objectWording; // @dynamic objectWording;
@property(retain, nonatomic) NSMutableArray *relateLiving; // @dynamic relateLiving;
@property(retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo; // @dynamic relatedExtInfo;
@property(nonatomic) unsigned int style; // @dynamic style;

@end

