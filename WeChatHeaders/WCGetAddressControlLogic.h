//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizControlLogic.h"

#import "WCAddressInfoViewControllerDelegate-Protocol.h"
#import "WCAddressListViewControllerDelegate-Protocol.h"
#import "WCAddressLogicMgrExt-Protocol.h"

@class NSString, WCAddressControlData;
@protocol WCGetAddressControlLogicDelegate;

@interface WCGetAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCAddressInfoViewControllerDelegate, WCAddressListViewControllerDelegate>
{
    WCAddressControlData *m_data;
    id <WCGetAddressControlLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCGetAddressControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnNotAcceptGetLatestAddress;
- (void)OnImportYiXunAddress:(id)arg1 importStatus:(int)arg2 Error:(id)arg3;
- (void)OnSetRecentlyUsedAddress:(id)arg1 Error:(id)arg2;
- (void)OnModifyAddress:(id)arg1 Error:(id)arg2;
- (void)OnDelAddress:(id)arg1 Error:(id)arg2;
- (void)OnAddAddress:(id)arg1 Error:(id)arg2;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (_Bool)onError:(id)arg1;
- (void)AddressImport;
- (void)AddressListDelete:(id)arg1;
- (void)AddressListEdit:(id)arg1;
- (void)AddressListAdd;
- (void)AddressListComplete:(id)arg1;
- (void)AddressListBack;
- (void)AddressInfoNext:(id)arg1;
- (void)AddressInfoCancel;
- (void)startLogic;
- (void)stopLogic;
- (void)pause;
- (void)resume;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

