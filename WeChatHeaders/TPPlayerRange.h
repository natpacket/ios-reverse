//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TPPlayerRange : NSObject
{
    NSNumber *_startTimeMs;
    NSNumber *_endTimeMs;
}

+ (id)nullableFromMap:(id)arg1;
+ (id)fromMap:(id)arg1;
+ (id)makeWithStartTimeMs:(id)arg1 endTimeMs:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(retain, nonatomic) NSNumber *startTimeMs; // @synthesize startTimeMs=_startTimeMs;
- (id)toMap;

@end

