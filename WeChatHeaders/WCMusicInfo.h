//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface WCMusicInfo : NSObject <NSCoding, PBCoding>
{
    NSString *_title;
    NSString *_singer;
    NSString *_webUrl;
    NSString *_dataUrl;
    NSString *_lowBandUrl;
    NSString *_appId;
    NSString *_nsCoverImg;
    NSString *_nsCoverImgHD;
    NSString *_lyric;
}

+ (void)initialize;
+ (void)PBArrayAdd_lyric;
+ (void)PBArrayAdd_nsCoverImgHD;
+ (void)PBArrayAdd_nsCoverImg;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_lowBandUrl;
+ (void)PBArrayAdd_dataUrl;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(retain, nonatomic) NSString *nsCoverImgHD; // @synthesize nsCoverImgHD=_nsCoverImgHD;
@property(retain, nonatomic) NSString *nsCoverImg; // @synthesize nsCoverImg=_nsCoverImg;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *lowBandUrl; // @synthesize lowBandUrl=_lowBandUrl;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isValidForShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

