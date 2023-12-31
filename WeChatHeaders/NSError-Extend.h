//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (Extend)
+ (id)videoRingErrorWithCode:(long long)arg1 message:(id)arg2;
+ (id)fbUnknownErrorWithMessage:(id)arg1;
+ (id)fbRequiredArgumentErrorWithName:(id)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)fbRequiredArgumentErrorWithDomain:(id)arg1 name:(id)arg2 message:(id)arg3;
+ (id)fbRequiredArgumentErrorWithName:(id)arg1 message:(id)arg2;
+ (id)fbInvalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)fbInvalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4;
+ (id)fbInvalidArgumentErrorWithDomain:(id)arg1 name:(id)arg2 value:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)fbInvalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (id)fbInvalidArgumentErrorWithDomain:(id)arg1 name:(id)arg2 value:(id)arg3 message:(id)arg4;
+ (id)fbInvalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3;
+ (id)fbErrorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 message:(id)arg4 underlyingError:(id)arg5;
+ (id)fbErrorWithCode:(long long)arg1 userInfo:(id)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (id)fbErrorWithDomain:(id)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (id)fbErrorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)fbErrorWithDomain:(id)arg1 code:(long long)arg2 message:(id)arg3;
+ (id)fbErrorWithCode:(long long)arg1 message:(id)arg2;
+ (id)fbErrorWithSystemAccountStoreDeniedError:(id)arg1 isCancellation:(_Bool *)arg2;
+ (id)fbErrorFromServerError:(id)arg1;
+ (id)fbErrorFromReturnURLParameters:(id)arg1;
+ (id)fbErrorForSystemPasswordChange:(id)arg1;
+ (id)fbErrorForFailedLoginWithCode:(long long)arg1 innerError:(id)arg2;
+ (id)fbErrorForFailedLoginWithCode:(long long)arg1;
@property(nonatomic) _Bool wcErrorHandled;
@property(nonatomic) long long wcErrorType;
@property(readonly, nonatomic) NSString *vc_errorMediaFilePHLocalIdentifier;
@property(readonly, nonatomic) NSString *vc_errorMediaFilePath;
@property(readonly, nonatomic) long long vc_internalErrorCode;
@property(readonly, nonatomic, getter=isNetworkError) _Bool networkError;
@end

