//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface MMBizScanConfSyncResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *confStr; // @dynamic confStr;
@property(retain, nonatomic) NSString *guide; // @dynamic guide;
@property(retain, nonatomic) NSString *retrievalLiteSuccText; // @dynamic retrievalLiteSuccText;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

