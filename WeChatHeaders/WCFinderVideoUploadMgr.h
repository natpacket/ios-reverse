//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCFinderVideoUploadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>
{
    NSMutableDictionary *_uploadDict;
    NSMutableArray *_uploadWaitingArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadWaitingArray; // @synthesize uploadWaitingArray=_uploadWaitingArray;
@property(retain, nonatomic) NSMutableDictionary *uploadDict; // @synthesize uploadDict=_uploadDict;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)realUploadVideoWithMeta:(id)arg1;
- (void)checkQueue;
- (void)cancelUploadvideoPath:(id)arg1;
- (void)startUploadAudioPath:(id)arg1 requestHeader:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 complecteBlock:(CDUnknownBlockType)arg4;
- (void)startUploadvideoPath:(id)arg1 thumbPath:(id)arg2 requestHeader:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 complecteBlock:(CDUnknownBlockType)arg5;
- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

