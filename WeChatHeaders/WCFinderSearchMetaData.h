//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSearchMetaData : NSObject
{
    long long _searchScene;
    NSString *_searchSessionId;
    unsigned long long _reportCommentScene;
    unsigned long long _searchSourceType;
    unsigned long long _reportSearchScene;
    long long _tabId;
}

- (void).cxx_destruct;
@property(nonatomic) long long tabId; // @synthesize tabId=_tabId;
@property(nonatomic) unsigned long long reportSearchScene; // @synthesize reportSearchScene=_reportSearchScene;
@property(nonatomic) unsigned long long searchSourceType; // @synthesize searchSourceType=_searchSourceType;
@property(nonatomic) unsigned long long reportCommentScene; // @synthesize reportCommentScene=_reportCommentScene;
@property(copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(nonatomic) long long searchScene; // @synthesize searchScene=_searchScene;
- (id)description;
- (id)init;

@end

