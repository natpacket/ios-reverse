//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderSubTabItem, FinderSyncTipsShowInfo, NSArray, NSData, NSString;

@interface WCFinderStreamPrefetchRequestParams : NSObject
{
    _Bool _byRedDot;
    _Bool _ignoreIntevalConf;
    _Bool _hotTabNeedTopRefresh;
    NSData *_streamBuffer;
    long long _tabType;
    unsigned long long _objectID;
    NSString *_nonceID;
    NSData *_tabTipsByPassInfo;
    NSString *_tabTipsPath;
    NSString *_userName;
    FinderSyncTipsShowInfo *_bubbleInfo;
    long long _refreshStatus;
    NSArray *_otherTabUnreadCacheFeeds;
    FinderSubTabItem *_subTabItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderSubTabItem *subTabItem; // @synthesize subTabItem=_subTabItem;
@property(retain, nonatomic) NSArray *otherTabUnreadCacheFeeds; // @synthesize otherTabUnreadCacheFeeds=_otherTabUnreadCacheFeeds;
@property(nonatomic) long long refreshStatus; // @synthesize refreshStatus=_refreshStatus;
@property(retain, nonatomic) FinderSyncTipsShowInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *tabTipsPath; // @synthesize tabTipsPath=_tabTipsPath;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @synthesize tabTipsByPassInfo=_tabTipsByPassInfo;
@property(nonatomic) _Bool hotTabNeedTopRefresh; // @synthesize hotTabNeedTopRefresh=_hotTabNeedTopRefresh;
@property(nonatomic) _Bool ignoreIntevalConf; // @synthesize ignoreIntevalConf=_ignoreIntevalConf;
@property(nonatomic) _Bool byRedDot; // @synthesize byRedDot=_byRedDot;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSData *streamBuffer; // @synthesize streamBuffer=_streamBuffer;
- (id)init;

@end

