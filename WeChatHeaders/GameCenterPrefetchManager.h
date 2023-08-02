//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURLSession;

@interface GameCenterPrefetchManager : MMUserService <MMServiceProtocol, NSURLSessionDelegate>
{
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)prefetchUrlArray:(id)arg1;
- (void)prefetchUrlModel:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
