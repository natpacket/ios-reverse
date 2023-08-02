//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TPPlayerSetMediaInfoParams : NSObject
{
    NSNumber *_playerId;
    NSString *_mediaId;
    NSString *_path;
    NSString *_url;
    NSString *_urlToken;
    NSString *_decodeKey;
    NSNumber *_videoWidth;
    NSNumber *_videoHeight;
    NSNumber *_videoDuration;
    NSString *_fileFormat;
    NSString *_thumbPath;
    NSString *_thumbUrl;
    NSString *_thumbUrlToken;
    NSNumber *_isLocal;
}

+ (id)nullableFromMap:(id)arg1;
+ (id)fromMap:(id)arg1;
+ (id)makeWithPlayerId:(id)arg1 mediaId:(id)arg2 path:(id)arg3 url:(id)arg4 urlToken:(id)arg5 decodeKey:(id)arg6 videoWidth:(id)arg7 videoHeight:(id)arg8 videoDuration:(id)arg9 isLocal:(id)arg10;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isLocal; // @synthesize isLocal=_isLocal;
@property(copy, nonatomic) NSString *thumbUrlToken; // @synthesize thumbUrlToken=_thumbUrlToken;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(copy, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(retain, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSNumber *videoHeight; // @synthesize videoHeight=_videoHeight;
@property(retain, nonatomic) NSNumber *videoWidth; // @synthesize videoWidth=_videoWidth;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey=_decodeKey;
@property(copy, nonatomic) NSString *urlToken; // @synthesize urlToken=_urlToken;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) NSNumber *playerId; // @synthesize playerId=_playerId;
- (id)toMap;

@end
