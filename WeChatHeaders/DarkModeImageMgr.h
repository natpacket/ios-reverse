//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMapTable, NSString;

@interface DarkModeImageMgr : MMRootService <MMServiceProtocol>
{
    NSMapTable *_darkToLightMapTable;
    NSMapTable *_lightToDarkMapTable;
    struct _opaque_pthread_rwlock_t _lock;
}

- (void).cxx_destruct;
@property(nonatomic) struct _opaque_pthread_rwlock_t lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *lightToDarkMapTable; // @synthesize lightToDarkMapTable=_lightToDarkMapTable;
@property(retain, nonatomic) NSMapTable *darkToLightMapTable; // @synthesize darkToLightMapTable=_darkToLightMapTable;
- (_Bool)hasRegistedImage:(id)arg1;
- (id)registerPairWithLightImage:(id)arg1 darkImage:(id)arg2;
- (id)lightModeImageForImage:(id)arg1;
- (id)darkModeImageForImage:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

