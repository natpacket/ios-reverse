//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, WXVoIPAudioFileReaderAppleImpl;

@protocol AudioFileReaderAppleImplDelegate
- (void)audioFileReader:(WXVoIPAudioFileReaderAppleImpl *)arg1 onError:(NSError *)arg2;
- (void)audioFileReaderDidComplete:(WXVoIPAudioFileReaderAppleImpl *)arg1;
- (void)audioFileReader:(WXVoIPAudioFileReaderAppleImpl *)arg1 didGetAudioData:(struct AudioFrame *)arg2;
@end

