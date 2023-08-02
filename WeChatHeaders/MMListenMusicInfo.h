//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenSingerInfo_JumpInfo, NSMutableArray, NSString;

@interface MMListenMusicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isChannelMusic;
- (_Bool)canPlayCompletely;
- (id)singerList;
- (id)clientStandardizeSingerName;

// Remaining properties
@property(retain, nonatomic) NSString *albumCategoryId; // @dynamic albumCategoryId;
@property(nonatomic) unsigned long long albumFeedId; // @dynamic albumFeedId;
@property(retain, nonatomic) NSString *albumId; // @dynamic albumId;
@property(retain, nonatomic) NSString *albumName; // @dynamic albumName;
@property(retain, nonatomic) NSString *albumUrl; // @dynamic albumUrl;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(retain, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) NSString *genre; // @dynamic genre;
@property(retain, nonatomic) NSString *identification; // @dynamic identification;
@property(nonatomic) _Bool isFromWechat; // @dynamic isFromWechat;
@property(nonatomic) _Bool isPlayable; // @dynamic isPlayable;
@property(nonatomic) _Bool isTry; // @dynamic isTry;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(retain, nonatomic) NSString *musicAppid; // @dynamic musicAppid;
@property(retain, nonatomic) NSString *musicDataUrl; // @dynamic musicDataUrl;
@property(retain, nonatomic) NSString *musicGetlinkMid; // @dynamic musicGetlinkMid;
@property(retain, nonatomic) NSString *musicWeburl; // @dynamic musicWeburl;
@property(nonatomic) unsigned long long mvFeedId; // @dynamic mvFeedId;
@property(retain, nonatomic) NSMutableArray *otherSingerList; // @dynamic otherSingerList;
@property(retain, nonatomic) NSString *publicTime; // @dynamic publicTime;
@property(nonatomic) unsigned long long publicTimeS; // @dynamic publicTimeS;
@property(retain, nonatomic) NSString *singer; // @dynamic singer;
@property(retain, nonatomic) NSString *singerCategoryId; // @dynamic singerCategoryId;
@property(nonatomic) unsigned long long singerFeedId; // @dynamic singerFeedId;
@property(retain, nonatomic) NSString *singerId; // @dynamic singerId;
@property(retain, nonatomic) MMListenSingerInfo_JumpInfo *singerJumpInfo; // @dynamic singerJumpInfo;
@property(retain, nonatomic) NSString *singerPic; // @dynamic singerPic;
@property(retain, nonatomic) NSString *songId; // @dynamic songId;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *songTitle; // @dynamic songTitle;

@end
