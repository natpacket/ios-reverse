//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, TPPlayerAdapter, TPPlayerEventPublisher;

@interface TPEventTrackingPublisher : NSObject
{
    TPPlayerEventPublisher *_publisher;
    TPPlayerAdapter *_playerAdapter;
    NSDictionary *_invocationHandlerTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *invocationHandlerTable; // @synthesize invocationHandlerTable=_invocationHandlerTable;
@property(retain, nonatomic) TPPlayerAdapter *playerAdapter; // @synthesize playerAdapter=_playerAdapter;
@property(retain, nonatomic) TPPlayerEventPublisher *publisher; // @synthesize publisher=_publisher;
- (id)handlerInvocationWithSEL:(SEL)arg1;
- (void)handleSelectTrack:(id)arg1;
- (void)handleSetPlaySpeedRatio:(id)arg1;
- (void)handleSeekTo:(id)arg1;
- (void)handleReleasePlayer:(id)arg1;
- (void)handleReset:(id)arg1;
- (void)handleStop:(id)arg1;
- (void)handlePause:(id)arg1;
- (void)handleStart:(id)arg1;
- (void)handlePrepareAsync:(id)arg1;
- (void)setupInvocationHandlerTable;
- (id)initWithAdapter:(id)arg1 publisher:(id)arg2;

@end
