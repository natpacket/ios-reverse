//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPPreloadProxy-Protocol.h"
#import "ITPPreloadProxyLifeCycleDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TPDownloadProxy, TPLock;
@protocol TPPreloadProxyDelegate;

@interface TPProxyPreloadManager : NSObject <ITPPreloadProxyLifeCycleDelegate, ITPPreloadProxy>
{
    _Bool _initialized;
    int _serviceType;
    id <TPPreloadProxyDelegate> _delegate;
    TPDownloadProxy *_downloadProxy;
    NSMutableDictionary *_delegates;
    TPLock *_delegateLock;
    long long _initializeTryCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long initializeTryCount; // @synthesize initializeTryCount=_initializeTryCount;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) TPLock *delegateLock; // @synthesize delegateLock=_delegateLock;
@property(retain, nonatomic) NSMutableDictionary *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) TPDownloadProxy *downloadProxy; // @synthesize downloadProxy=_downloadProxy;
@property(nonatomic) __weak id <TPPreloadProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLifeCycleEndWithPlayId:(int)arg1;
- (_Bool)initializeProxyImpl;
- (_Bool)initialzeProxyIfNeeded;
- (_Bool)isValidPlayId:(int)arg1;
- (id)errorCodeStringWithPreloadId:(int)arg1;
- (_Bool)isAvailable;
- (void)pushEvent:(long long)arg1;
- (void)stopPreloadWithPreloadId:(int)arg1;
- (int)startClipPreloadWithFileId:(id)arg1 downloadParamList:(id)arg2;
- (int)startPreloadWithFileId:(id)arg1 downloadParam:(id)arg2 httpHeader:(id)arg3;
- (int)startPreloadWithFileId:(id)arg1 downloadParam:(id)arg2;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

