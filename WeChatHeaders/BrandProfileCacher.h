//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WCEliminatedSlotMMKV;

@interface BrandProfileCacher : MMUserService <MMServiceProtocol>
{
    WCEliminatedSlotMMKV *_bizProfileSlotKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCEliminatedSlotMMKV *bizProfileSlotKV; // @synthesize bizProfileSlotKV=_bizProfileSlotKV;
- (void)checkOverwriteRespOnFeatureMsg:(id)arg1 withCacheItem:(id)arg2;
- (_Bool)writeProfileCacheItem:(id)arg1 forBrand:(id)arg2;
- (id)readProfileCacheItemForBrand:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

