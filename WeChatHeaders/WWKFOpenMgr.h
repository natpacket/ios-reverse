//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WWKFContactOpLogic;

@interface WWKFOpenMgr : MMUserService <MMServiceProtocol>
{
    WWKFContactOpLogic *_contactOpLogic;
}

+ (_Bool)shouldShowErrWithhErrCode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WWKFContactOpLogic *contactOpLogic; // @synthesize contactOpLogic=_contactOpLogic;
- (void)doCallbackResultWithErrCode:(long long)arg1 context:(id)arg2;
- (void)doShowAlertWithSvrControlErrMsg:(id)arg1 context:(id)arg2;
- (id)dismissFlowViewControllerWhenFlowWorks:(id)arg1;
- (void)processFlowContextWhenFlowUIWorks:(id)arg1;
- (void)doJumpWWKFMsgLogicViewController:(id)arg1 navigationController:(id)arg2 inScene:(int)arg3 showPageSheet:(_Bool)arg4;
- (void)jumpToWWKFMsgLogicViewControllerWithContact:(id)arg1 context:(id)arg2;
- (void)requestAddContactWithContact:(id)arg1 context:(id)arg2 spamContext:(id)arg3;
- (void)showUserConfirmAddContactWithContact:(id)arg1 context:(id)arg2;
- (void)handleFetchContactResp:(id)arg1 context:(id)arg2 spamContext:(id)arg3;
- (void)handleWWKFContactFlowWithContact:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 openExtInfo:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)cancelCurrentWWKFRequest;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

