//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MMListenCreateAlbumRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) _Bool isAutoReplaceMv; // @dynamic isAutoReplaceMv;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int sourceType; // @dynamic sourceType;
@property(nonatomic) int verifyStatus; // @dynamic verifyStatus;

@end

