//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChatroomBanAction, KickOutCardInfo, NSMutableArray, NSString, PremadeCardInfo, UserBanAction;

@interface RealtimeControlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ChatroomBanAction *chatroomBanAction; // @dynamic chatroomBanAction;
@property(nonatomic) _Bool disableEmoji; // @dynamic disableEmoji;
@property(nonatomic) _Bool enableCustomEmoji; // @dynamic enableCustomEmoji;
@property(retain, nonatomic) KickOutCardInfo *kickOutCardInfo; // @dynamic kickOutCardInfo;
@property(retain, nonatomic) NSString *kickOutWording; // @dynamic kickOutWording;
@property(retain, nonatomic) PremadeCardInfo *premadeCardInfo; // @dynamic premadeCardInfo;
@property(retain, nonatomic) NSMutableArray *updateUserDataList; // @dynamic updateUserDataList;
@property(retain, nonatomic) UserBanAction *userBanAction; // @dynamic userBanAction;
@property(nonatomic) unsigned int userChatroomRelation; // @dynamic userChatroomRelation;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end
