//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, WAAppTask;

@interface WAAppTaskDataPipeEvent_Base : NSObject
{
    WAAppTask *_weakTask;
    NSDictionary *_dicData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dicData; // @synthesize dicData=_dicData;
@property(nonatomic) __weak WAAppTask *weakTask; // @synthesize weakTask=_weakTask;
- (id)description;
- (unsigned long long)eventType;

@end

