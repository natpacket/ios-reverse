//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenSearchResultFinderVoice, MMListenSearchResultGenre, MMListenSearchResultMpUser, MMListenSearchResultMusic, MMListenSearchResultMusicAlbum, MMListenSearchResultNonMusic, MMListenSearchResultPlaylist, MMListenSearchResultSinger, NSMutableArray;

@interface MMListenSearchResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenSearchResultFinderVoice *finderVoice; // @dynamic finderVoice;
@property(retain, nonatomic) MMListenSearchResultGenre *genre; // @dynamic genre;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *lines; // @dynamic lines;
@property(retain, nonatomic) MMListenSearchResultMpUser *mpUser; // @dynamic mpUser;
@property(retain, nonatomic) MMListenSearchResultMusic *music; // @dynamic music;
@property(retain, nonatomic) MMListenSearchResultMusicAlbum *musicAlbum; // @dynamic musicAlbum;
@property(retain, nonatomic) MMListenSearchResultNonMusic *nonMusic; // @dynamic nonMusic;
@property(retain, nonatomic) MMListenSearchResultPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) MMListenSearchResultSinger *singer; // @dynamic singer;

@end

