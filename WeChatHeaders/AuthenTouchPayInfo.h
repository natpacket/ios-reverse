//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AuthenTouchPayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bioPayV2AuthenRequest; // @dynamic bioPayV2AuthenRequest;
@property(retain, nonatomic) NSString *encryptedPayInfo; // @dynamic encryptedPayInfo;
@property(retain, nonatomic) NSString *encryptedRsaSign; // @dynamic encryptedRsaSign;
@property(nonatomic) unsigned int fpIdentifyNum; // @dynamic fpIdentifyNum;
@property(retain, nonatomic) NSString *soterReq; // @dynamic soterReq;
@property(nonatomic) _Bool useTouch; // @dynamic useTouch;

@end

