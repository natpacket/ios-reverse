//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, RoomBindAppList, RoomTools, SKBuiltinBuffer_t;

@interface GetChatRoomInfoDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *announcement; // @dynamic announcement;
@property(retain, nonatomic) NSString *announcementEditor; // @dynamic announcementEditor;
@property(nonatomic) unsigned int announcementPublishTime; // @dynamic announcementPublishTime;
@property(retain, nonatomic) NSString *associateOpenImroomName; // @dynamic associateOpenImroomName;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long chatRoomBusinessType; // @dynamic chatRoomBusinessType;
@property(nonatomic) unsigned int chatRoomInfoVersion; // @dynamic chatRoomInfoVersion;
@property(nonatomic) unsigned int chatRoomStatus; // @dynamic chatRoomStatus;
@property(retain, nonatomic) SKBuiltinBuffer_t *finderInfo; // @dynamic finderInfo;
@property(retain, nonatomic) RoomBindAppList *roomBindAppList; // @dynamic roomBindAppList;
@property(retain, nonatomic) RoomTools *roomTools; // @dynamic roomTools;
@property(nonatomic) unsigned int spamStatus; // @dynamic spamStatus;
@property(retain, nonatomic) SKBuiltinBuffer_t *topMsgInfo; // @dynamic topMsgInfo;
@property(retain, nonatomic) NSString *xmlAnnouncement; // @dynamic xmlAnnouncement;

@end

