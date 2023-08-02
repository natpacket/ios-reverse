//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, TingVoiceInputLogic;

@protocol TingVoiceInputLogicDelegate <NSObject>
- (void)tingVoiceInputLogicRecordEnd:(TingVoiceInputLogic *)arg1;
- (void)tingVoiceInputLogicDidStartRecoring:(TingVoiceInputLogic *)arg1;

@optional
- (void)tingVoiceInputLogic:(TingVoiceInputLogic *)arg1 voiceDetectSpeakingToSlience:(long long)arg2;
- (void)tingVoiceInputLogicVoiceSilentTooLong:(TingVoiceInputLogic *)arg1;
- (void)tingVoiceInputLogic:(TingVoiceInputLogic *)arg1 didFailWithError:(NSError *)arg2;
- (void)tingVoiceInputLogic:(TingVoiceInputLogic *)arg1 didRecognizedWithText:(NSString *)arg2;
- (void)tingVoiceInputLogic:(TingVoiceInputLogic *)arg1 onPeakPower:(float)arg2;
@end

