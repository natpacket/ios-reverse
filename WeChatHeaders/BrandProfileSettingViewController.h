//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMMTemplateMsgAuthServiceExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class BrandProfileReporter, CContact, JSAPIGetAllUseUserInfoResponse, MMTableViewInfo, MMUILabel, NSMutableDictionary, NSString;
@protocol BrandProfileSettingViewControllerDelegate;

@interface BrandProfileSettingViewController : MMUIViewController <WCActionSheetDelegate, IMMTemplateMsgAuthServiceExt, PBMessageObserverDelegate>
{
    _Bool _isNewMessageNotifySwitchOn;
    _Bool _isReceiveMessageSwitchOn;
    _Bool _isProvideLocationSwitchOn;
    _Bool _hasTemplateMsgAuthCell;
    BrandProfileReporter *_reporter;
    MMTableViewInfo *_tableViewInfo;
    double _tableViewWidth;
    unsigned int _scene;
    unsigned int _profileEnterTimeStamps;
    id <BrandProfileSettingViewControllerDelegate> _delegate;
    CContact *_brandContact;
    NSMutableDictionary *_extInfo;
    JSAPIGetAllUseUserInfoResponse *_jsAPIGetAllUseUserInfoResponse;
    MMUILabel *_emptyLabel;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) MMUILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) JSAPIGetAllUseUserInfoResponse *jsAPIGetAllUseUserInfoResponse; // @synthesize jsAPIGetAllUseUserInfoResponse=_jsAPIGetAllUseUserInfoResponse;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int profileEnterTimeStamps; // @synthesize profileEnterTimeStamps=_profileEnterTimeStamps;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) __weak id <BrandProfileSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isInMyContactList;
- (void)handleModBizUseUserInfoResponse:(id)arg1;
- (void)handleGetBizAuthInfoResponse:(id)arg1;
- (void)requsetModifyUsedUserInfoWithScope:(id)arg1 Switch:(id)arg2;
- (void)requestAuthorizedInfo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportClearMessage;
- (void)clickClearMessageCell;
- (void)openAuthList;
- (void)openAuthorizedScopeVC;
- (void)clickSubscriptionMessageCell;
- (void)onProvideLocationCancel;
- (void)onProvideLocationConfirm;
- (void)switchLocationScopeAuthState:(id)arg1;
- (void)switchRecordScopeAuthState:(id)arg1;
- (void)switchProvideLocationCell:(id)arg1;
- (void)switchReceiveMessageCell:(id)arg1;
- (void)switchNewMessageNotificationCell:(id)arg1;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(_Bool)arg3;
- (void)reloadTableViewInfo;
- (void)viewDidLayoutSubviews;
- (void)initEmptyWordingView;
- (void)initTableViewInfo;
- (void)viewWillBePoped:(_Bool)arg1;
- (id)init;
- (void)addLocalSystemMessageWhenReceiveMessageSwitchChanged;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

