//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VideoMonoServiceObj : NSObject
{
    _Bool _isPaused;
    unsigned long long _monoServiceBusinessType;
    unsigned long long _subBusinessType;
    NSString *_monoServiceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *monoServiceId; // @synthesize monoServiceId=_monoServiceId;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) unsigned long long subBusinessType; // @synthesize subBusinessType=_subBusinessType;
@property(nonatomic) unsigned long long monoServiceBusinessType; // @synthesize monoServiceBusinessType=_monoServiceBusinessType;

@end

