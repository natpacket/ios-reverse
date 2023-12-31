//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface FWFInstanceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMapTable *_identifiersToInstances;
    NSMapTable *_instancesToIdentifiers;
}

- (void).cxx_destruct;
@property(retain) NSMapTable *instancesToIdentifiers; // @synthesize instancesToIdentifiers=_instancesToIdentifiers;
@property(retain) NSMapTable *identifiersToInstances; // @synthesize identifiersToInstances=_identifiersToInstances;
@property(retain) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
- (long long)identifierForInstance:(id)arg1;
- (id)instanceForIdentifier:(long long)arg1;
- (long long)removeInstance:(id)arg1;
- (id)removeInstanceWithIdentifier:(long long)arg1;
- (void)addInstance:(id)arg1 withIdentifier:(long long)arg2;
- (id)init;

@end

