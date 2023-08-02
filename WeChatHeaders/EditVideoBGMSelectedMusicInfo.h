//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString, RecommendedMusicInfo;

@interface EditVideoBGMSelectedMusicInfo : MMObject <NSCoding>
{
    int _isSearchMusic;
    int _isFromMusicTag;
    int _isMusicOn;
    int _isOriginSoundOn;
    long long _requestId;
    long long _musicIndex;
    RecommendedMusicInfo *_musicInfo;
    NSString *_musicFilePath;
    NSString *_searchMusicTag;
}

- (void).cxx_destruct;
@property(nonatomic) int isOriginSoundOn; // @synthesize isOriginSoundOn=_isOriginSoundOn;
@property(nonatomic) int isMusicOn; // @synthesize isMusicOn=_isMusicOn;
@property(retain, nonatomic) NSString *searchMusicTag; // @synthesize searchMusicTag=_searchMusicTag;
@property(nonatomic) int isFromMusicTag; // @synthesize isFromMusicTag=_isFromMusicTag;
@property(nonatomic) int isSearchMusic; // @synthesize isSearchMusic=_isSearchMusic;
@property(retain, nonatomic) NSString *musicFilePath; // @synthesize musicFilePath=_musicFilePath;
@property(retain, nonatomic) RecommendedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) long long musicIndex; // @synthesize musicIndex=_musicIndex;
@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (_Bool)hasBgmMusic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

