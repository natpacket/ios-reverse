//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface GameLitePkgUpdateMgr : MMUserService <MMServiceProtocol>
{
}

- (void)callComplectionWithPkgId:(id)arg1 liteAppId:(id)arg2 complectionBlock:(CDUnknownBlockType)arg3 liteItem:(id)arg4;
- (id)doubleCheckGetLiteAppInfoItemWithPkgId:(id)arg1 liteAppId:(id)arg2;
- (_Bool)getGameLitePkgWithPkgId:(id)arg1 liteAppId:(id)arg2 complectionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

