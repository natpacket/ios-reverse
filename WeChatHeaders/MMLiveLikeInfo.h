//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiveTaskId;

@interface MMLiveLikeInfo : NSObject
{
    MMLiveTaskId *_liveTaskId;
    unsigned long long _likeCount;
    unsigned long long _displayLikeCount;
    unsigned long long _selfLikeCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selfLikeCount; // @synthesize selfLikeCount=_selfLikeCount;
@property(nonatomic) unsigned long long displayLikeCount; // @synthesize displayLikeCount=_displayLikeCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)addDisplayLikeCount;

@end

