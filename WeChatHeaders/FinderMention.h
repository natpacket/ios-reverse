//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderCommentMentionedUser, FinderContact, FinderMentionAggregated, FinderMentionContact, FinderMentionExtInfo, FinderMention_FinderMentionThankInfo, FinderMention_LikeContactInfo, FinderNotification, NSMutableArray, NSString;

@interface FinderMention : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderMentionAggregated *aggregated; // @dynamic aggregated;
@property(retain, nonatomic) NSMutableArray *aggregatedContactList; // @dynamic aggregatedContactList;
@property(nonatomic) unsigned int aggregatedCount; // @dynamic aggregatedCount;
@property(retain, nonatomic) FinderContact *authorContact; // @dynamic authorContact;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) FinderCommentMentionedUser *commentMentionedUser; // @dynamic commentMentionedUser;
@property(retain, nonatomic) FinderMentionContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int createtime; // @dynamic createtime;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) FinderMentionExtInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int extflag; // @dynamic extflag;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int followExpireTime; // @dynamic followExpireTime;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(nonatomic) unsigned long long followId; // @dynamic followId;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) FinderMention_LikeContactInfo *likeInfo; // @dynamic likeInfo;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *mentionContent; // @dynamic mentionContent;
@property(nonatomic) unsigned long long mentionId; // @dynamic mentionId;
@property(nonatomic) unsigned int mentionType; // @dynamic mentionType;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderNotification *notification; // @dynamic notification;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;
@property(retain, nonatomic) NSString *refContent; // @dynamic refContent;
@property(nonatomic) unsigned long long refFavId; // @dynamic refFavId;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned int refObjectType; // @dynamic refObjectType;
@property(nonatomic) unsigned long long refVideoObjectId; // @dynamic refVideoObjectId;
@property(retain, nonatomic) NSString *refVideoObjectNonceId; // @dynamic refVideoObjectNonceId;
@property(retain, nonatomic) FinderMentionContact *replyContact; // @dynamic replyContact;
@property(retain, nonatomic) NSString *replyNickname; // @dynamic replyNickname;
@property(retain, nonatomic) NSString *replyUsername; // @dynamic replyUsername;
@property(nonatomic) unsigned long long svrMentionId; // @dynamic svrMentionId;
@property(retain, nonatomic) FinderMention_FinderMentionThankInfo *thankInfo; // @dynamic thankInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

