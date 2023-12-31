//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MsgPreloadVideoInfo : NSObject <PBCoding>
{
    unsigned int _dailyControlTimestamp;
    unsigned int _dailyControlCount;
    NSMutableDictionary *_dicRecord;
}

+ (void)initialize;
+ (void)PBArrayAdd_dailyControlCount;
+ (void)PBArrayAdd_dailyControlTimestamp;
+ (void)PBArrayAdd_dicRecord;
- (void).cxx_destruct;
@property(nonatomic) unsigned int dailyControlCount; // @synthesize dailyControlCount=_dailyControlCount;
@property(nonatomic) unsigned int dailyControlTimestamp; // @synthesize dailyControlTimestamp=_dailyControlTimestamp;
@property(retain, nonatomic) NSMutableDictionary *dicRecord; // @synthesize dicRecord=_dicRecord;
- (void)resetDailyControlInfo;
- (_Bool)overDailyLimit:(unsigned int)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

