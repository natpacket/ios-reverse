//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventBaseResponse, NSString, TorchCert;

@interface GetTorchCertResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseResponse *baseResp; // @dynamic baseResp;
@property(retain, nonatomic) TorchCert *torchCert; // @dynamic torchCert;
@property(retain, nonatomic) NSString *verifyInfoCert; // @dynamic verifyInfoCert;

@end

