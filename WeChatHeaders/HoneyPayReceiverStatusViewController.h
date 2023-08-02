//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"

@class NSString, QryHoneyUserDetailResp, UIView, WCPayAgreementView, WCPayNoticeItemView;
@protocol HoneyPayReceiverStatusViewControllerDelegate;

@interface HoneyPayReceiverStatusViewController : HoneyPayBaseViewController <ILinkEventExt>
{
    id <HoneyPayReceiverStatusViewControllerDelegate> _delegate;
    QryHoneyUserDetailResp *_detail;
    UIView *_introInfosView;
    WCPayAgreementView *_agreementView;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) WCPayAgreementView *agreementView; // @synthesize agreementView=_agreementView;
@property(retain, nonatomic) UIView *introInfosView; // @synthesize introInfosView=_introInfosView;
@property(retain, nonatomic) QryHoneyUserDetailResp *detail; // @synthesize detail=_detail;
@property(nonatomic) __weak id <HoneyPayReceiverStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)done;
- (id)agreementWording;
- (id)detailCellContentWithInfos:(id)arg1 width:(double)arg2;
- (id)statusViewHeader:(double)arg1 icon:(id)arg2 status:(id)arg3 attention:(id)arg4;
- (id)unbindHeaderView;
- (id)expiredHeaderView;
- (id)inuseHeaderView;
- (id)createdHeaderView;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
