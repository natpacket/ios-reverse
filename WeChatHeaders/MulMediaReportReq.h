//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MulMediaInfo, NSMutableArray;

@interface MulMediaReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *extNew; // @dynamic extNew;
@property(nonatomic) unsigned long long fromUin; // @dynamic fromUin;
@property(retain, nonatomic) MulMediaInfo *media; // @dynamic media;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

