//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderShareItemProtocol-Protocol.h"

@class NSString, WCFinderFeedBindEventInfo, WCFinderTopicShareLocationItem;

@interface WCFinderTopicShareItem : NSObject <WCFinderShareItemProtocol>
{
    unsigned int _topicType;
    NSString *_topic;
    NSString *_iconUrl;
    NSString *_desc;
    WCFinderTopicShareLocationItem *_location;
    NSString *_patMusicId;
    unsigned long long _musicType;
    unsigned long long _topicCount;
    WCFinderFeedBindEventInfo *_event;
}

+ (void)initialize;
+ (void)PBArrayAdd_event;
+ (void)PBArrayAdd_topicCount;
+ (void)PBArrayAdd_musicType;
+ (void)PBArrayAdd_patMusicId;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_topic;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedBindEventInfo *event; // @synthesize event=_event;
@property(nonatomic) unsigned long long topicCount; // @synthesize topicCount=_topicCount;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
@property(copy, nonatomic) NSString *patMusicId; // @synthesize patMusicId=_patMusicId;
@property(retain, nonatomic) WCFinderTopicShareLocationItem *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int topicType; // @synthesize topicType=_topicType;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, copy) NSString *description;
- (id)titleDisplayWithType:(unsigned long long)arg1;
- (double)momentsHeightForMedia:(id)arg1;
- (id)momentsDesc;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)momentsSourceText;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(_Bool)arg3;
- (id)chatDesc;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

