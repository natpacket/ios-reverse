//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderGetTopicListResponse, FinderLocation, NSArray, NSString, WCFinderSectionInfo;
@protocol WCFinderEventViewControllerDelegate;

@interface WCFinderTopicListParams : NSObject
{
    unsigned long long _type;
    NSString *_topic;
    FinderLocation *_location;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_refObjectId;
    FinderGetTopicListResponse *_cacheResponse;
    NSArray *_cacheDataItems;
    WCFinderSectionInfo *_sectionInfo;
    long long _tabType;
    long long _fromType;
    NSString *_refUsername;
    unsigned long long _eventTopicId;
    NSString *_encryptedTopicId;
    id <WCFinderEventViewControllerDelegate> _eventDelegate;
    unsigned long long _musicTopicId;
    unsigned long long _eventEnterScene;
    unsigned long long _sourceType;
    unsigned long long _entryType;
    NSString *_jsapiKVReportInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jsapiKVReportInfo; // @synthesize jsapiKVReportInfo=_jsapiKVReportInfo;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned long long eventEnterScene; // @synthesize eventEnterScene=_eventEnterScene;
@property(nonatomic) unsigned long long musicTopicId; // @synthesize musicTopicId=_musicTopicId;
@property(nonatomic) __weak id <WCFinderEventViewControllerDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(copy, nonatomic) NSString *refUsername; // @synthesize refUsername=_refUsername;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(retain, nonatomic) NSArray *cacheDataItems; // @synthesize cacheDataItems=_cacheDataItems;
@property(retain, nonatomic) FinderGetTopicListResponse *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setBindEvent:(id)arg1;

@end

