//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSRecursiveLock, NSString, RsaCertInfo;

@interface RsaCertMgr : MMUserService <MMServiceProtocol>
{
    NSRecursiveLock *m_oLock;
    RsaCertInfo *m_oRsaCertInfo;
}

+ (id)GetInfoStringMd5For:(id)arg1;
+ (id)GetPathOfRsaCertInfoVerify;
+ (id)GetPathOfRsaCertInfo;
- (void).cxx_destruct;
- (id)GetMutableRsaCertInfo;
- (id)GetKVCommCertInfo;
- (id)GetAuthCertInfo;
- (id)GetBaseRsaCertInfo;
- (void)SaveRsaCertInfo;
- (void)SaveRsaCertInfoVerify;
- (void)LoadRsaCertInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

