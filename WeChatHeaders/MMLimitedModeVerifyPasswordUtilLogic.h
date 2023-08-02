//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMLimitedModeIndependentVerifyViewControllerDelegate-Protocol.h"
#import "MMLimitedModeVerifyPasswordLogicDelegate-Protocol.h"

@class MMLimitedModeVerifyPasswordLogic, MMUIViewController, NSString;
@protocol MMLimitedModeVerifyPasswordUtilLogicDelegate;

@interface MMLimitedModeVerifyPasswordUtilLogic : NSObject <MMLimitedModeVerifyPasswordLogicDelegate, MMLimitedModeIndependentVerifyViewControllerDelegate>
{
    MMLimitedModeVerifyPasswordLogic *m_limitedModeVerifyPasswordLogic;
    unsigned int m_scene;
    _Bool m_isLoading;
    id <MMLimitedModeVerifyPasswordUtilLogicDelegate> _m_delegate;
    MMUIViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) __weak id <MMLimitedModeVerifyPasswordUtilLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)onCheckPasswordExist:(_Bool)arg1 isNeverUse:(_Bool)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)doCheckLimitedModeVerifyPasswordInViewController:(id)arg1;
- (void)goToSetLimitedModeViewController:(id)arg1 scene:(unsigned int)arg2;
- (void)startCheckLimitedModeVerifyPasswordInViewController:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
