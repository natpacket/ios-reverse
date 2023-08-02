//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface WXGChatSyncKeyService : MMRootService <MMServiceProtocol>
{
    NSString *_publicKey;
    NSString *_privateKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
- (void)genRsaKeyPair;
- (id)getPrivateKeyString;
- (id)getPublicKeyString;
- (id)getSyncPublicKey;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

