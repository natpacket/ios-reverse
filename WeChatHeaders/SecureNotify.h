//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SecureNotify : NSObject
{
}

+ (id)decodeDataWithEncryptAlgo:(unsigned int)arg1 encryptVer:(unsigned int)arg2 encryptSalt:(unsigned int)arg3 compressAlgo:(unsigned int)arg4 compressVer:(unsigned int)arg5 compressLen:(unsigned int)arg6 checkSum:(unsigned int)arg7 data:(id)arg8;
+ (id)decodeSecureNotifyData:(char *)arg1 length:(unsigned long long)arg2;
+ (id)decodeSecureActionNotifyData:(id)arg1 extraData:(id)arg2;

@end

