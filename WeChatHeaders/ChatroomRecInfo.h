//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChatroomData, ChatroomMsgPack, ChattingInfo, NSMutableArray;

@interface ChatroomRecInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long basicUpdateTime; // @dynamic basicUpdateTime;
@property(retain, nonatomic) NSMutableArray *bulletMsgList; // @dynamic bulletMsgList;
@property(retain, nonatomic) ChattingInfo *chatingDes; // @dynamic chatingDes;
@property(retain, nonatomic) ChatroomData *chatroomData; // @dynamic chatroomData;
@property(retain, nonatomic) NSMutableArray *chosenChatroomMsg; // @dynamic chosenChatroomMsg;
@property(retain, nonatomic) ChatroomMsgPack *lastChatroomMsg; // @dynamic lastChatroomMsg;
@property(nonatomic) unsigned int userChattingCount; // @dynamic userChattingCount;

@end

