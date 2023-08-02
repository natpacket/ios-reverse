//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWAPrivacyConfirmService-Protocol.h"

@class NSString, WAOverseaPrivacyConfirmLogic, WOAPPrivacyConfirmLogic;

@interface WAPrivacyConfirmProxy : NSObject <IWAPrivacyConfirmService>
{
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
    WAOverseaPrivacyConfirmLogic *_overseaPrivacyLogic;
}

+ (_Bool)isNeedOverseaPrivacyConfirm;
+ (_Bool)isNeedPrivacyConfirm;
- (void).cxx_destruct;
@property(retain, nonatomic) WAOverseaPrivacyConfirmLogic *overseaPrivacyLogic; // @synthesize overseaPrivacyLogic=_overseaPrivacyLogic;
@property(retain, nonatomic) WOAPPrivacyConfirmLogic *privacyConfirmLogic; // @synthesize privacyConfirmLogic=_privacyConfirmLogic;
- (void)requestOverseaPrivacyWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestPrivacyConfirmrequirement:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

