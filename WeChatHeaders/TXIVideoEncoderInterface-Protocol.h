//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXIVideoBindable-Protocol.h"

@class TXCDispatchQueue, TXCVideoEncoderSupervisor;

@protocol TXIVideoEncoderInterface <TXIVideoBindable>
@property(readonly, nonatomic) unsigned long long features;
@property(nonatomic) __weak TXCVideoEncoderSupervisor *supervisor;
@property(readonly, nonatomic) TXCDispatchQueue *queue;
- (void)enableTranscodingMode:(_Bool)arg1;
- (void)requestKeyFrame;
- (void)setBitrate:(long long)arg1;
- (void)setFrameRate:(long long)arg1;
@end
