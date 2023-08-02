//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class FBSDKLoginManager;

@interface FacebookAuth : MMObject
{
    long long m_uiFacebookUsageType;
    FBSDKLoginManager *m_fbLogin;
}

+ (void)asyncGetMeInfoWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)tryInitSDK;
- (void).cxx_destruct;
@property(nonatomic) long long m_uiFacebookUsageType; // @synthesize m_uiFacebookUsageType;
- (void)reAuth;
- (void)requestNewPermission;
- (void)tryAuth;
- (id)getAccessToken;
- (void)fbDidExtendToken;
- (void)fbDidNotLogin:(_Bool)arg1;
- (void)fbDidLogin;
- (id)init;

@end
