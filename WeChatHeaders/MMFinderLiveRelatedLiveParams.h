//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveRelatedExtInfo, NSArray;

@interface MMFinderLiveRelatedLiveParams : NSObject
{
    unsigned long long _liveId;
    NSArray *_relatedLiveContentVMs;
    FinderLiveRelatedExtInfo *_relatedExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo; // @synthesize relatedExtInfo=_relatedExtInfo;
@property(retain, nonatomic) NSArray *relatedLiveContentVMs; // @synthesize relatedLiveContentVMs=_relatedLiveContentVMs;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)description;

@end

