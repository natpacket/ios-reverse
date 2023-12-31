//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SendMusicRequest : NSObject
{
    NSString *_musicId;
    NSString *_songName;
    NSString *_singer;
    NSString *_dataUrl;
    NSString *_appid;
    NSString *_webUrl;
    NSString *_coverUrl;
    NSString *_mid;
    NSString *_lyric;
    NSNumber *_requestCode;
}

+ (id)fromMap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *requestCode; // @synthesize requestCode=_requestCode;
@property(copy, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(copy, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
- (id)toMap;

@end

