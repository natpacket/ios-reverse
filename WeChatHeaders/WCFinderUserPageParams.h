//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderUserPageParams : NSObject
{
    _Bool _needFansCount;
    _Bool _requestFansCount;
    _Bool _isAuthor;
    int _tabType;
    unsigned int _enterType;
    float _longitude;
    float _latitude;
    unsigned int _scene;
    NSString *_username;
    NSString *_bizUsername;
    NSString *_pageMd5;
    NSString *_refObjectId;
    unsigned long long _maxTid;
    NSData *_lastBuffer;
    unsigned long long _reportScene;
    unsigned long long _topicId;
    unsigned long long _commentScene;
    unsigned long long _refLiveObjectId;
    NSString *_liveNoticeId;
    unsigned long long _fromCollectionID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) _Bool requestFansCount; // @synthesize requestFansCount=_requestFansCount;
@property(nonatomic) unsigned long long fromCollectionID; // @synthesize fromCollectionID=_fromCollectionID;
@property(copy, nonatomic) NSString *liveNoticeId; // @synthesize liveNoticeId=_liveNoticeId;
@property(nonatomic) unsigned long long refLiveObjectId; // @synthesize refLiveObjectId=_refLiveObjectId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool needFansCount; // @synthesize needFansCount=_needFansCount;
@property(nonatomic) unsigned long long maxTid; // @synthesize maxTid=_maxTid;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *pageMd5; // @synthesize pageMd5=_pageMd5;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

