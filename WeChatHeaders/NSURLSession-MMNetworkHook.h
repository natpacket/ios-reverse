//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLSession.h>

@interface NSURLSession (MMNetworkHook)
+ (id)mmNetworkHook_sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (void)hook;
+ (void)initialize;
- (id)mmDownloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mmDownloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mmDataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mmDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

