//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMUseCaseCallback-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCPayOverseaGetOfflinePayUrlCgiDelegate-Protocol.h"

@class NSString, WCPayOverseaGetOfflinePayUrlCgi;

@interface WCPayOverseaOfflinePayControlLogic : WCPayControlLogic <WCPayOverseaGetOfflinePayUrlCgiDelegate, MMWebViewDelegate, MMUseCaseCallback>
{
    WCPayOverseaGetOfflinePayUrlCgi *_getOfflinePayUrlCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOverseaGetOfflinePayUrlCgi *getOfflinePayUrlCgi; // @synthesize getOfflinePayUrlCgi=_getOfflinePayUrlCgi;
- (void)call:(id)arg1;
- (void)webViewDidReturn:(id)arg1;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseOK:(id)arg1;
- (void)onWCPayOverseaGetOfflinePayUrlCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

