//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface ShakeMusicItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    int _musicID;
    unsigned int _createTime;
    unsigned int _type;
    NSString *_musicName;
    NSString *_singer;
    NSString *_albumName;
    NSString *_coverImageUrl;
    NSString *_lyrics;
    NSString *_musicUrl;
    NSString *_musicLowBandUrl;
    NSString *_webUrl;
    NSString *_appId;
    NSString *_songMid;
    NSMutableArray *_music;
}

+ (void)initialize;
+ (void)PBArrayAdd_music;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_songMid;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_musicLowBandUrl;
+ (void)PBArrayAdd_musicUrl;
+ (void)PBArrayAdd_lyrics;
+ (void)PBArrayAdd_coverImageUrl;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_musicName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *music; // @synthesize music=_music;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *songMid; // @synthesize songMid=_songMid;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int musicID; // @synthesize musicID=_musicID;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *musicLowBandUrl; // @synthesize musicLowBandUrl=_musicLowBandUrl;
@property(retain, nonatomic) NSString *musicUrl; // @synthesize musicUrl=_musicUrl;
@property(retain, nonatomic) NSString *lyrics; // @synthesize lyrics=_lyrics;
@property(retain, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

