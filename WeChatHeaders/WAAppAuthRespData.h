//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, WxaUseUserInfo;

@interface WAAppAuthRespData : MMObject
{
    NSArray *_authInfoList;
    WxaUseUserInfo *_useUserInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WxaUseUserInfo *useUserInfo; // @synthesize useUserInfo=_useUserInfo;
@property(retain, nonatomic) NSArray *authInfoList; // @synthesize authInfoList=_authInfoList;

@end

