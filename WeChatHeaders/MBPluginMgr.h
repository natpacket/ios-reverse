//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMBPluginProxy-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMapTable, NSString;

@interface MBPluginMgr : MMUserService <MMServiceProtocol, IMBPluginProxy>
{
    NSMapTable *_extPluginsMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *extPluginsMap; // @synthesize extPluginsMap=_extPluginsMap;
- (id)providePlugin:(id)arg1 version:(id)arg2;
- (void)registerPlugin:(id)arg1 forId:(id)arg2;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

