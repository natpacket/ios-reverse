//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveSdkAudioParams, LiveSdkChannelParams, LiveSdkVideoParams, NSMutableArray;

@interface LiveSdkParams : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) LiveSdkAudioParams *audioParams; // @dynamic audioParams;
@property(retain, nonatomic) LiveSdkChannelParams *channelParams; // @dynamic channelParams;
@property(retain, nonatomic) NSMutableArray *channelParamsDesc; // @dynamic channelParamsDesc;
@property(retain, nonatomic) LiveSdkVideoParams *videoParams; // @dynamic videoParams;

@end

