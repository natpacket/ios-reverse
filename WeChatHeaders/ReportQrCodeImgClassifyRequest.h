//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ReportQrCodeImgClassifyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int cls; // @dynamic cls;
@property(retain, nonatomic) NSString *clsScore; // @dynamic clsScore;
@property(nonatomic) int color; // @dynamic color;
@property(retain, nonatomic) NSString *colorScore; // @dynamic colorScore;
@property(retain, nonatomic) NSString *ocrText; // @dynamic ocrText;
@property(nonatomic) int qrCodeType; // @dynamic qrCodeType;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

