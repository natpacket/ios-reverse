//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PrivateCommonApiHandler.h"

#import "PasswordLogicDelegate-Protocol.h"

@class NSString, PasswordLogic;

@interface MMChangeQQLoginTypeHandler : PrivateCommonApiHandler <PasswordLogicDelegate>
{
    int _lastLoginAcountType;
    PasswordLogic *_pwdLogic;
    NSString *_loginName;
}

- (void).cxx_destruct;
@property(nonatomic) int lastLoginAcountType; // @synthesize lastLoginAcountType=_lastLoginAcountType;
@property(retain, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(retain, nonatomic) PasswordLogic *pwdLogic; // @synthesize pwdLogic=_pwdLogic;
- (void)unknownFail:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)failWithShouldSetContent:(_Bool)arg1;
- (void)handleCommonApiWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

