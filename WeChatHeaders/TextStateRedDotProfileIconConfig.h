//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TextStateRedDotProfileIconConfig : NSObject
{
    NSArray *_durations;
    NSArray *_parsedDurations;
}

+ (long long)secondsFromDurationString:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *parsedDurations; // @synthesize parsedDurations=_parsedDurations;
@property(retain, nonatomic) NSArray *durations; // @synthesize durations=_durations;
- (struct _NSRange)hitDurationForLocation:(long long)arg1;

@end

