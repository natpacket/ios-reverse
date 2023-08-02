//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WAAppPlatformStateChangedContext;

@interface WAAppStateChangedEvent : MMObject
{
    unsigned long long _eventType;
    WAAppPlatformStateChangedContext *_context;
    unsigned long long _resourceType;
    unsigned long long _sharedResourceType;
    unsigned long long _closeReason;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) unsigned long long sharedResourceType; // @synthesize sharedResourceType=_sharedResourceType;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) WAAppPlatformStateChangedContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;

@end

