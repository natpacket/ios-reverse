//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizAiScanImageAdInfo, BizAiScanImageJsapiInfo, BizAiScanImageLocation, NSMutableArray;

@interface ScanV2UploadRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizAiScanImageAdInfo *adInfo; // @dynamic adInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *images; // @dynamic images;
@property(nonatomic) _Bool isPreload; // @dynamic isPreload;
@property(retain, nonatomic) BizAiScanImageJsapiInfo *jsapiInfo; // @dynamic jsapiInfo;
@property(retain, nonatomic) BizAiScanImageLocation *location; // @dynamic location;
@property(nonatomic) unsigned int mode; // @dynamic mode;
@property(nonatomic) unsigned int scanType; // @dynamic scanType;
@property(nonatomic) unsigned long long sendSvrTime; // @dynamic sendSvrTime;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;

@end

