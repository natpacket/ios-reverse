//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChosenInfo, MsgChannelInfo, NSData, NSMutableArray, NSString, TickleInfo, TopicInfo, VoteInfo;

@interface MsgOptions : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *atList; // @dynamic atList;
@property(nonatomic) unsigned int bgType; // @dynamic bgType;
@property(retain, nonatomic) ChosenInfo *chosenInfo; // @dynamic chosenInfo;
@property(retain, nonatomic) NSData *cliLocalData; // @dynamic cliLocalData;
@property(retain, nonatomic) NSString *complaintUrl; // @dynamic complaintUrl;
@property(nonatomic) unsigned int msgBizType; // @dynamic msgBizType;
@property(retain, nonatomic) MsgChannelInfo *msgChannelInfo; // @dynamic msgChannelInfo;
@property(nonatomic) unsigned long long replySeq; // @dynamic replySeq;
@property(nonatomic) _Bool selfMsg; // @dynamic selfMsg;
@property(retain, nonatomic) TickleInfo *tickleInfo; // @dynamic tickleInfo;
@property(retain, nonatomic) TopicInfo *topicInfo; // @dynamic topicInfo;
@property(retain, nonatomic) VoteInfo *voteInfo; // @dynamic voteInfo;

@end

