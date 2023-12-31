//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCFinderPostFeedTsModel : NSObject <PBCoding>
{
    NSString *_feedId;
    long long _timeStamp;
    long long _useCount;
}

+ (_Bool)checkLatestPostDataItem:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_useCount;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_feedId;
- (void).cxx_destruct;
@property(nonatomic) long long useCount; // @synthesize useCount=_useCount;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

