//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WAAppStateChangedContextInfo;

@interface WAAppPlatformStateChangedContext : MMObject
{
    unsigned int _changeReason;
    unsigned long long _platformType;
    unsigned long long _changeDirection;
    WAAppStateChangedContextInfo *_contextInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppStateChangedContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) unsigned int changeReason; // @synthesize changeReason=_changeReason;
@property(nonatomic) unsigned long long changeDirection; // @synthesize changeDirection=_changeDirection;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
- (id)description;

@end

