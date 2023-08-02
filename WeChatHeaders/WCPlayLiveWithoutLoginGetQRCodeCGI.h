//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableSet;
@protocol OS_dispatch_queue, WCPlayLiveWithoutLoginGetQRCodeDelegate;

@interface WCPlayLiveWithoutLoginGetQRCodeCGI : NSObject <PBMessageObserverDelegate>
{
    id <WCPlayLiveWithoutLoginGetQRCodeDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workerThreadQueue;
    NSMutableSet *_eventIdDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *eventIdDic; // @synthesize eventIdDic=_eventIdDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerThreadQueue; // @synthesize workerThreadQueue=_workerThreadQueue;
@property(nonatomic) __weak id <WCPlayLiveWithoutLoginGetQRCodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCodeLoginSuccessOnMainThread:(id)arg1 token:(id)arg2;
- (void)onCodeLoginFailOnMainThread;
- (void)handleResponse:(id)arg1 withRequest:(id)arg2 eventID:(unsigned int)arg3;
- (void)removeRequestEventID:(unsigned int)arg1;
- (_Bool)isLatestRequestEventID:(unsigned int)arg1;
- (void)addRequestEventID:(unsigned int)arg1;
- (void)internalStopRequest;
- (void)stopRequest;
- (void)sendRequest;
- (id)init;

@end

