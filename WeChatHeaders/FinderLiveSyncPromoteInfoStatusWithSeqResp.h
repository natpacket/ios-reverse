//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLivePromoteMsgInfo, NSData, NSString;

@interface FinderLiveSyncPromoteInfoStatusWithSeqResp : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)promoteID;

// Remaining properties
@property(nonatomic) unsigned int needReplaceBuffer; // @dynamic needReplaceBuffer;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *newPromoteInfo; // @dynamic newPromoteInfo;
@property(nonatomic) unsigned int noOp; // @dynamic noOp;
@property(nonatomic) unsigned int promotingFlag; // @dynamic promotingFlag;
@property(nonatomic) unsigned long long reqCurrentPromotingId; // @dynamic reqCurrentPromotingId;
@property(retain, nonatomic) NSString *reqCurrentPromotingSubId; // @dynamic reqCurrentPromotingSubId;
@property(retain, nonatomic) NSData *syncContext; // @dynamic syncContext;

@end

