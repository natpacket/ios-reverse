//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMessageWrap;

@protocol IAudioReceiverExt

@optional
- (void)OnEarTip;
- (void)OnEndPlaying:(CMessageWrap *)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlaying:(CMessageWrap *)arg1 success:(_Bool)arg2;
- (void)OnLevelMeter:(CMessageWrap *)arg1 Peak:(float)arg2;
@end

