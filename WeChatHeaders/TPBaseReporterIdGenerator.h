//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TPRecursiveLock;

@interface TPBaseReporterIdGenerator : NSObject
{
    int _instanceID;
    TPRecursiveLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) int instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) TPRecursiveLock *lock; // @synthesize lock=_lock;
- (int)reporterInstanceBaseID;
- (id)init;

@end

