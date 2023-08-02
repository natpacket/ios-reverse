//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate;

@interface WXVoIPAudioHardwareSystemNotificationsLifelongObserver : NSObject
{
    _Bool _isInterrupted;
    _Bool _isAPPActive;
    id <WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property _Bool isAPPActive; // @synthesize isAPPActive=_isAPPActive;
@property _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(nonatomic) __weak id <WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateApplicationActiveState;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)dealloc;
- (void)observeSystemNotifications;
- (void)initAPPActiveState;
- (void)runAfter:(int)arg1 block:(CDUnknownBlockType)arg2;
- (void)syncRun:(CDUnknownBlockType)arg1;
- (void)asyncRun:(CDUnknownBlockType)arg1;
- (id)init:(id)arg1;

@end
