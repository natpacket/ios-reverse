//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AlertPrivacyInfo, BaseResponse, NSString, UserPlateInfo, UserPrivacyProtectInfo;

@interface GetUserPlateInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authSubDesc; // @dynamic authSubDesc;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *createSubDesc; // @dynamic createSubDesc;
@property(retain, nonatomic) UserPlateInfo *plateInfo; // @dynamic plateInfo;
@property(retain, nonatomic) AlertPrivacyInfo *privacyInfo; // @dynamic privacyInfo;
@property(retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo; // @dynamic privacyProtectInfo;

@end

