//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveBattleInfo, FinderLiveContact, FinderLiveMicInfo_Wording, FinderLiveMicMeetInfo, FinderLiveMicPkInfo, FinderLiveRoomData, IntercomMicInfo, NSMutableArray, NSString;

@interface FinderLiveMicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveContact *acceptLiveContact; // @dynamic acceptLiveContact;
@property(retain, nonatomic) FinderLiveContact *applyContact; // @dynamic applyContact;
@property(retain, nonatomic) FinderLiveBattleInfo *battleInfo; // @dynamic battleInfo;
@property(retain, nonatomic) IntercomMicInfo *boxIntercomMicInfo; // @dynamic boxIntercomMicInfo;
@property(nonatomic) _Bool enableCrossLiveRoomMic; // @dynamic enableCrossLiveRoomMic;
@property(retain, nonatomic) NSString *liveMicId; // @dynamic liveMicId;
@property(retain, nonatomic) FinderLiveMicMeetInfo *meetInfo; // @dynamic meetInfo;
@property(retain, nonatomic) NSMutableArray *micAudienceList; // @dynamic micAudienceList;
@property(retain, nonatomic) FinderLiveRoomData *micLiveRoomData; // @dynamic micLiveRoomData;
@property(retain, nonatomic) FinderLiveMicPkInfo *micPkInfo; // @dynamic micPkInfo;
@property(nonatomic) unsigned int micType; // @dynamic micType;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) FinderLiveMicInfo_Wording *wording; // @dynamic wording;

@end

