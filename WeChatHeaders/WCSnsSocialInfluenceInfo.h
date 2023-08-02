//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCSnsSocialInfluenceInfo : MMObject <PBCoding>
{
    int _maxLikeCount;
    int _maxCommentCount;
    NSString *_layerId;
    NSString *_expId;
}

+ (void)initialize;
+ (void)PBArrayAdd_maxCommentCount;
+ (void)PBArrayAdd_maxLikeCount;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
- (void).cxx_destruct;
@property(nonatomic) int maxCommentCount; // @synthesize maxCommentCount=_maxCommentCount;
@property(nonatomic) int maxLikeCount; // @synthesize maxLikeCount=_maxLikeCount;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

