//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCLanTransferSSCDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, WCLanTransferSSCQueue;
@protocol OS_dispatch_queue;

@interface WCLanTransferClientService : MMUserService <WCLanTransferSSCDelegate, MMServiceProtocol>
{
    WCLanTransferSSCQueue *_sscQueue;
    NSObject<OS_dispatch_queue> *_lanTransferClientQueue;
    NSMutableDictionary *_clientTaskInfo;
}

+ (_Bool)canMsgWrapUseLanTransfer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *clientTaskInfo; // @synthesize clientTaskInfo=_clientTaskInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lanTransferClientQueue; // @synthesize lanTransferClientQueue=_lanTransferClientQueue;
@property(retain, nonatomic) WCLanTransferSSCQueue *sscQueue; // @synthesize sscQueue=_sscQueue;
- (void)onLanTransferSSC:(id)arg1 downloadSuccess:(_Bool)arg2;
- (void)stopMessageWrap:(id)arg1;
- (void)addMessageWrap:(id)arg1;
- (void)checkOldTaskInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
