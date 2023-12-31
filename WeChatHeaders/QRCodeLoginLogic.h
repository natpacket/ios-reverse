//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CheckQRCodeLoginDelegate-Protocol.h"

@class CheckQRCodeLoginCGI, NSString, WCCgiBlockHelper;
@protocol QRCodeLoginLogicDelegate;

@interface QRCodeLoginLogic : NSObject <CheckQRCodeLoginDelegate>
{
    CheckQRCodeLoginCGI *m_checkQRCodeLoginCGI;
    id <QRCodeLoginLogicDelegate> _delegate;
    WCCgiBlockHelper *_getLoginQRCodeCgiHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCgiBlockHelper *getLoginQRCodeCgiHelper; // @synthesize getLoginQRCodeCgiHelper=_getLoginQRCodeCgiHelper;
@property(nonatomic) __weak id <QRCodeLoginLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CheckQRCodeLoginCGI *m_checkQRCodeLoginCGI; // @synthesize m_checkQRCodeLoginCGI;
- (id)OnCheckQRCodeLogicGetCurrentViewController;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)OnCheckQRCodeLoginScaned:(id)arg1 nickName:(id)arg2 authUrl:(id)arg3;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)onGetLoginQRCodeWithResponse:(id)arg1;
- (void)StopQRCodeLogin;
- (void)StartQRCodeLogin;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

