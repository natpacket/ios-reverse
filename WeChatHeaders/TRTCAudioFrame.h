//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface TRTCAudioFrame : NSObject
{
    int _channels;
    NSData *_data;
    long long _sampleRate;
    unsigned long long _timestamp;
    NSData *_extraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)init;

@end

