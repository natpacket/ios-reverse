//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CustomAudioModel : NSObject
{
    double _Time;
    NSString *_EventType;
    NSString *_EventWaveformPath;
    NSArray *_EventParameters;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *EventParameters; // @synthesize EventParameters=_EventParameters;
@property(copy, nonatomic) NSString *EventWaveformPath; // @synthesize EventWaveformPath=_EventWaveformPath;
@property(copy, nonatomic) NSString *EventType; // @synthesize EventType=_EventType;
@property(nonatomic) double Time; // @synthesize Time=_Time;

@end

