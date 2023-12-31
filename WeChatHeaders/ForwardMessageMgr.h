//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class ForwardMessageLogicController, NSMutableArray, NSMutableDictionary, NSString, UIViewController;

@interface ForwardMessageMgr : MMUserService <MMServiceProtocol, ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController *m_forwardLogicController;
    UIViewController *m_forwardFromViewController;
    NSMutableDictionary *_forwardMessageLogics;
    NSMutableArray *_sessionStackPages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sessionStackPages; // @synthesize sessionStackPages=_sessionStackPages;
@property(retain, nonatomic) NSMutableDictionary *forwardMessageLogics; // @synthesize forwardMessageLogics=_forwardMessageLogics;
- (id)currentLogicController;
- (void)onLeaveSessionPage:(id)arg1;
- (void)onEnterSessionPage:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 forwardType:(int)arg3;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3;
- (id)getCurrentViewController;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

