//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface VOIPModelResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>
{
}

+ (id)resFileMd5:(int)arg1 subtype:(int)arg2;
+ (void)modelSaveWithName:(unsigned int)arg1 subType:(unsigned int)arg2 modelName:(id)arg3;
+ (id)modelPathWithName:(id)arg1;
+ (id)modelDir;
+ (id)VOIPDir;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

