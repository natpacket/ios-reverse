//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderCommentKeywordInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned long long keywordId; // @dynamic keywordId;
@property(retain, nonatomic) NSString *keywordWording; // @dynamic keywordWording;
@property(retain, nonatomic) NSString *refData; // @dynamic refData;
@property(nonatomic) unsigned int type; // @dynamic type;

@end
