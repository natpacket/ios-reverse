//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMapTable, NSString;

@interface MMFlutterEngineCache : MMRootService <MMServiceProtocol>
{
    NSMapTable *_cachedEngines;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *cachedEngines; // @synthesize cachedEngines=_cachedEngines;
- (void)dealloc;
- (void)remove:(id)arg1;
- (void)put:(id)arg1 engine:(id)arg2;
- (id)get:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)createEngineWithEntryPoint:(id)arg1 initialRoute:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

