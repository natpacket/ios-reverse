//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MusicRingBack, MusicRingBackHitInfo, NSMutableArray, NSString;

@interface MusicRingBackDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(nonatomic) unsigned long long duration; // @dynamic duration;
@property(retain, nonatomic) MusicRingBackHitInfo *hitInfo; // @dynamic hitInfo;
@property(nonatomic) unsigned int musicType; // @dynamic musicType;
@property(retain, nonatomic) MusicRingBack *ringBack; // @dynamic ringBack;
@property(nonatomic) unsigned long long settingCount; // @dynamic settingCount;
@property(retain, nonatomic) NSMutableArray *singers; // @dynamic singers;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

