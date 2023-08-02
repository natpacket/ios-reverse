//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TAVSourceExportAudioConfiguration : NSObject
{
    NSDictionary *_inputSettings;
    unsigned long long _sampleRate;
    unsigned long long _encoderBitRate;
    unsigned long long _channelCount;
    NSDictionary *_audioOutputSetting;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *audioOutputSetting; // @synthesize audioOutputSetting=_audioOutputSetting;
@property(nonatomic) unsigned long long channelCount; // @synthesize channelCount=_channelCount;
@property(nonatomic) unsigned long long encoderBitRate; // @synthesize encoderBitRate=_encoderBitRate;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSDictionary *inputSettings; // @synthesize inputSettings=_inputSettings;
- (id)makeOutputSetting;
- (id)init;

@end

