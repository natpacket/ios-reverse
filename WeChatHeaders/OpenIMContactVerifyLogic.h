//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IOpenImContactMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OpenIMContactVerifyLogicDelegate;

@interface OpenIMContactVerifyLogic : NSObject <PBMessageObserverDelegate, IOpenImContactMgrExt>
{
    NSMutableDictionary *m_dicWaitingCGIWrap;
    id <OpenIMContactVerifyLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OpenIMContactVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onOpenImGetContactDone:(id)arg1 contact:(id)arg2;
- (void)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3 spamContext:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

