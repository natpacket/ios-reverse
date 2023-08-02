//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "TingVoiceInputManagerDelegate-Protocol.h"

@class NSString, TingVoiceInputManager;

@interface TingVoiceInputHandler : MMObject <TingVoiceInputManagerDelegate>
{
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _wordingBlock;
    CDUnknownBlockType _peakPowerBlock;
    TingVoiceInputManager *_voiceInputManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingVoiceInputManager *voiceInputManager; // @synthesize voiceInputManager=_voiceInputManager;
@property(copy, nonatomic) CDUnknownBlockType peakPowerBlock; // @synthesize peakPowerBlock=_peakPowerBlock;
@property(copy, nonatomic) CDUnknownBlockType wordingBlock; // @synthesize wordingBlock=_wordingBlock;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void)tingVoiceInputManager:(id)arg1 didGetResult:(id)arg2;
- (void)tingVoiceInputManagerVoiceSilentTooLong:(id)arg1;
- (void)tingVoiceInputManager:(id)arg1 didRecognizedWithText:(id)arg2;
- (void)tingVoiceInputManager:(id)arg1 onPeakPower:(float)arg2;
- (void)cancelRecord;
- (void)stopRecord;
- (void)startRecord;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
