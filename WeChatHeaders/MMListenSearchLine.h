//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenSearchResultFinderVoice, MMListenSearchResultGenre, MMListenSearchResultMpUser, MMListenSearchResultMusic, MMListenSearchResultMusicAlbum, MMListenSearchResultNonMusic, MMListenSearchResultPlaylist, MMListenSearchResultSinger;

@interface MMListenSearchLine : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenSearchResultFinderVoice *finderVoice; // @dynamic finderVoice;
@property(retain, nonatomic) MMListenSearchResultGenre *genre; // @dynamic genre;
@property(retain, nonatomic) MMListenSearchResultMpUser *mpUser; // @dynamic mpUser;
@property(retain, nonatomic) MMListenSearchResultMusic *music; // @dynamic music;
@property(retain, nonatomic) MMListenSearchResultMusicAlbum *musicAlbum; // @dynamic musicAlbum;
@property(retain, nonatomic) MMListenSearchResultNonMusic *nonMusic; // @dynamic nonMusic;
@property(retain, nonatomic) MMListenSearchResultPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) MMListenSearchResultSinger *singer; // @dynamic singer;
@property(nonatomic) int type; // @dynamic type;

@end

