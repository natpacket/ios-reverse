//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWALimitModeHelper-Protocol.h"
#import "MMLimitedModeAuthorizationUtilLogicDelegate-Protocol.h"

@class MMLimitedModeAuthorizationUtilLogic, NSString, WAContact;
@protocol WALimitModeHelperDelegate;

@interface WALimitModeHelper : NSObject <MMLimitedModeAuthorizationUtilLogicDelegate, IWALimitModeHelper>
{
    MMLimitedModeAuthorizationUtilLogic *_utilLogic;
    WAContact *_pendingContact;
    id <WALimitModeHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WALimitModeHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAContact *pendingContact; // @synthesize pendingContact=_pendingContact;
@property(retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *utilLogic; // @synthesize utilLogic=_utilLogic;
- (void)onVerifyCancelWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyPasswordSuccessWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)sendVerifiedResult:(id)arg1 bizType:(long long)arg2 isVerified:(_Bool)arg3;
- (_Bool)tryBlockedByLimitModeWithContact:(id)arg1 inNavVC:(id)arg2;
- (id)genLimitedModeBizKeyWithAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

