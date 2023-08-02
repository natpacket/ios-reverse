//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView;
@protocol TXLivePushJSAdapterDelegate;

@protocol TXLivePushJSAdapterProtocol <NSObject>
@property(readonly, nonatomic) _Bool enableMic;
@property(readonly, nonatomic) _Bool muted;
@property(readonly, nonatomic) unsigned int pusherId;
@property(readonly, nonatomic) _Bool isVoip;
@property(readonly, nonatomic) _Bool isPreviewing;
@property(readonly, nonatomic) _Bool isPublishing;
@property(nonatomic) __weak id <TXLivePushJSAdapterDelegate> delegate;
- (void)onMonoServiceRejectMsg;
- (double)cameraZoomMaxRatio;
- (void)stopPreview;
- (void)startPreview;
- (void)enablePureAudioPush:(_Bool)arg1;
- (_Bool)setAudioActive:(_Bool)arg1;
- (void)restoreMicSetting;
- (void)saveAndForceDisableMic;
- (void)foregroundPush;
- (void)backgroundPush:(_Bool)arg1;
- (void)orientationChange;
- (void)enterForeground;
- (void)enterBackgroundThrowingEvent:(_Bool)arg1;
- (_Bool)operateLivePusherWithType:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)updateLivePusherWithConfigs:(NSDictionary *)arg1;
- (id)initLivePusherWithId:(unsigned int)arg1 configs:(NSDictionary *)arg2 preview:(UIView *)arg3 appId:(NSString *)arg4 delegate:(id <TXLivePushJSAdapterDelegate>)arg5;
@end

