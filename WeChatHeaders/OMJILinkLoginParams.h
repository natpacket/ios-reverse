//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJILinkLoginParams : NSObject
{
    NSString *_authCode;
    NSString *_clientInfo;
    long long _loginType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(readonly, copy, nonatomic) NSString *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
- (id)initWithAuthCode:(id)arg1 clientInfo:(id)arg2 loginType:(long long)arg3;
- (id)initWithAuthCode:(id)arg1 clientInfo:(id)arg2;

@end
