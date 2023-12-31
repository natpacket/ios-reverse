//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXICapturerFactoryInterface-Protocol.h"

@class NSString, TXCAppScreenCapturer, TXCDispatchQueue, TXCIOSScreenCapturer;

@interface TXCiOSScreenCapturerFactory : NSObject <TXICapturerFactoryInterface>
{
    TXCAppScreenCapturer *_appCapturer;
    TXCIOSScreenCapturer *_screenCapturer;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_outputQueue;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TXCDispatchQueue *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(retain, nonatomic) TXCIOSScreenCapturer *screenCapturer; // @synthesize screenCapturer=_screenCapturer;
@property(retain, nonatomic) TXCAppScreenCapturer *appCapturer; // @synthesize appCapturer=_appCapturer;
- (id)capturerOfType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

