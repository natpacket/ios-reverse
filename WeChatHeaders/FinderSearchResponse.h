//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderSearchHotWord, FinderSearchSecurityTips, NSData, NSMutableArray, NSString;

@interface FinderSearchResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) FinderSearchHotWord *hotwordInfo; // @dynamic hotwordInfo;
@property(retain, nonatomic) NSMutableArray *infoList; // @dynamic infoList;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(retain, nonatomic) NSMutableArray *multiFeedStream; // @dynamic multiFeedStream;
@property(nonatomic) unsigned int musicContinueFlag; // @dynamic musicContinueFlag;
@property(retain, nonatomic) NSMutableArray *musicInfoList; // @dynamic musicInfoList;
@property(nonatomic) unsigned int objectContinueFlag; // @dynamic objectContinueFlag;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *requsetId; // @dynamic requsetId;
@property(retain, nonatomic) FinderSearchSecurityTips *securityTips; // @dynamic securityTips;
@property(nonatomic) unsigned int topicContinueFlag; // @dynamic topicContinueFlag;
@property(retain, nonatomic) NSMutableArray *topicInfoList; // @dynamic topicInfoList;

@end

