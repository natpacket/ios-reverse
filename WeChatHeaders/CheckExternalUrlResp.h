//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CheckExternalUrlAntiSpam, NSData, NSString;

@interface CheckExternalUrlResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *actionBuffer; // @dynamic actionBuffer;
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) CheckExternalUrlAntiSpam *antispam; // @dynamic antispam;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *transBuffer; // @dynamic transBuffer;
@property(retain, nonatomic) NSString *transBufferSign; // @dynamic transBufferSign;

@end

