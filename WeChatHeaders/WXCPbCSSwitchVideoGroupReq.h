//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WXCPbCSSwitchVideoGroupReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned int roomSdkmode; // @dynamic roomSdkmode;
@property(retain, nonatomic) NSString *screenSharingFileId; // @dynamic screenSharingFileId;
@property(retain, nonatomic) NSString *screenSharingFileMd5; // @dynamic screenSharingFileMd5;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *wxGroupId; // @dynamic wxGroupId;

@end

