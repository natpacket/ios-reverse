//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;
@protocol MMLiteAppDownloadMgrDelegate;

@interface MMLiteAppDownloadMgr : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, ICdnComMgrExt>
{
    id <MMLiteAppDownloadMgrDelegate> _delegate;
    NSURLSession *_session;
    NSMutableDictionary *_downloadingStatus;
    NSMutableArray *_downloadingItemQueue;
    NSMutableArray *_waitingItemQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *waitingItemQueue; // @synthesize waitingItemQueue=_waitingItemQueue;
@property(retain, nonatomic) NSMutableArray *downloadingItemQueue; // @synthesize downloadingItemQueue=_downloadingItemQueue;
@property(retain, nonatomic) NSMutableDictionary *downloadingStatus; // @synthesize downloadingStatus=_downloadingStatus;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <MMLiteAppDownloadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)OnCdnDownload:(id)arg1;
- (void)checkQueue;
- (void)startDownloadLiteApp:(id)arg1;
- (void)addDownloadLiteAppTask:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
