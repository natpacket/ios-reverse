//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMMusicInfo, NSString;

@interface MusicPlayerActionReporter : NSObject
{
    MMMusicInfo *_musicInfo;
    NSString *_sessionId;
    double _playRate;
}

- (void).cxx_destruct;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (id)stringFromState:(unsigned long long)arg1;
- (id)traceLogWithStateState:(unsigned long long)arg1 currentTime:(double)arg2;
- (void)reportWithState:(unsigned long long)arg1 duartion:(double)arg2 currenTime:(double)arg3;
- (id)init;

@end

