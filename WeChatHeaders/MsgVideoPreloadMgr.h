//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface MsgVideoPreloadMgr : MMUserService <MMServiceProtocol, IMsgExt>
{
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResumePreload;
- (void)PausePreload;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

