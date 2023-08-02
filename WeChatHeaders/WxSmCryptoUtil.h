//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WxSmCryptoUtil : NSObject
{
}

+ (id)md5:(id)arg1;
+ (id)sha1:(id)arg1;
+ (id)sha256:(id)arg1;
+ (id)hashWithSM4:(id)arg1;
+ (id)encryptWithSM4:(id)arg1;
+ (id)sm4GcmDecrypt:(id)arg1 tag:(id)arg2 key:(id)arg3 iv:(id)arg4 aad:(id)arg5;
+ (id)sm4GcmEncrypt:(id)arg1 key:(id)arg2 iv:(id)arg3 aad:(id)arg4;
+ (id)sm4CtrDecrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)sm4CtrEncrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)sm4CbcDecrypt:(id)arg1 key:(id)arg2 iv:(id)arg3 noPadding:(_Bool)arg4;
+ (id)sm4CbcEncrypt:(id)arg1 key:(id)arg2 iv:(id)arg3 noPadding:(_Bool)arg4;
+ (id)generateSM4Key;
+ (id)sm3Hmac:(id)arg1 key:(id)arg2;
+ (id)sm3:(id)arg1;
+ (_Bool)sm2Verify:(id)arg1 uid:(id)arg2 sign:(id)arg3 publicKey:(id)arg4 signMode:(long long)arg5;
+ (_Bool)sm2Verify:(id)arg1 uid:(id)arg2 sign:(id)arg3 publicKey:(id)arg4;
+ (id)sm2Sign:(id)arg1 uid:(id)arg2 priKey:(id)arg3 publicKey:(id)arg4 signMode:(long long)arg5;
+ (id)sm2Sign:(id)arg1 uid:(id)arg2 priKey:(id)arg3 publicKey:(id)arg4;
+ (id)sm2Decrypt:(id)arg1 priKey:(id)arg2 cipherMode:(long long)arg3;
+ (id)sm2Decrypt:(id)arg1 priKey:(id)arg2;
+ (id)sm2Encrypt:(id)arg1 publicKey:(id)arg2 cipherMode:(long long)arg3;
+ (id)sm2Encrypt:(id)arg1 publicKey:(id)arg2;
+ (id)sm2GenPublicKey:(id)arg1;
+ (id)sm2GenKeyPair;
+ (id)getRandomBytes:(unsigned long long)arg1;
+ (void)release;
+ (int)getError;
+ (id)getVersion;
+ (void)initialize;

@end
