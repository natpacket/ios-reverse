//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPPreloadProxyDelegate-Protocol.h"

@class NSString;
@protocol ITPPreloadProxy;

@interface FLTVideoPreload : NSObject <TPPreloadProxyDelegate>
{
    id <ITPPreloadProxy> _preload;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ITPPreloadProxy> preload; // @synthesize preload=_preload;
- (void)onPreloadDownloadProgressUpdateWithPlayId:(int)arg1 playabelDuration:(int)arg2 downloadSpeed:(int)arg3 currentDownloadSize:(long long)arg4 totalFileSize:(long long)arg5 extInfo:(id)arg6;
- (void)onPreloadErrorWithPlayId:(int)arg1 moduleId:(int)arg2 errorCode:(int)arg3 extInfo:(id)arg4;
- (void)onPreloadSuccessWithPlayId:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

