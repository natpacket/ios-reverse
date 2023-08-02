//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError, NSString;

@interface WCMomentsPostOperation : NSObject <NSCopying>
{
    _Bool _isSuccessful;
    NSString *_compositionId;
    long long _source;
    long long _feedType;
    double _startTime;
    double _finishTime;
    long long _failedCount;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) _Bool isSuccessful; // @synthesize isSuccessful=_isSuccessful;
@property(nonatomic) double finishTime; // @synthesize finishTime=_finishTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *compositionId; // @synthesize compositionId=_compositionId;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

