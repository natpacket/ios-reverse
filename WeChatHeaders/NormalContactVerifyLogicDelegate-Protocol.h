//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BaseResponse, NSString, VerifyUserResponse;

@protocol NormalContactVerifyLogicDelegate <NSObject>

@optional
- (void)onNormalContactVerifyFail:(BaseResponse *)arg1 andVerifyUserResponse:(VerifyUserResponse *)arg2;
- (void)onNormalContactVerifyDone:(NSString *)arg1 encodeUserName:(NSString *)arg2;
@end

