//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "KindaUIViewDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayAddressRemarkViewDelegate-Protocol.h"
#import "WCPayGetTransferWordingCgiDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"
#import "WCPayTransferMoneyStatusViewControllerExt-Protocol.h"

@class GetTransferWordingResponse, MMTipsViewController, NSMutableDictionary, NSString, OpenMinimchGuide, WCActionSheet, WCPayGetTransferWordingCgi, WCPayNoticeItemView;
@protocol WCPayTransferMoneyStatusViewControllerDelegate;

@interface WCPayTransferMoneyStatusViewController : WCPayBaseViewController <KindaUIViewDelegate, WCPayTransferMoneyStatusViewControllerExt, WCPayAddressRemarkViewDelegate, WCPayGetTransferWordingCgiDelegate, WCPayNoticeBannerDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate;
    _Bool _m_shouldRefreshDataOnAppear;
    _Bool _m_expendAddress;
    _Bool _hasShowChannelHalfTips;
    _Bool _m_bHasChannelTypeExpousreReport;
    _Bool _m_bNeedRefresh;
    _Bool _m_bShowingBalanceDescription;
    OpenMinimchGuide *_resumeGuide;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayNoticeItemView *_noticeBanner;
    WCActionSheet *_m_actionSheet;
    MMTipsViewController *_resendTipsView;
    NSMutableDictionary *_receiveAccountDownImages;
}

+ (long long)indexInLocation:(struct CGPoint)arg1 withLabel:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *receiveAccountDownImages; // @synthesize receiveAccountDownImages=_receiveAccountDownImages;
@property(nonatomic) _Bool m_bShowingBalanceDescription; // @synthesize m_bShowingBalanceDescription=_m_bShowingBalanceDescription;
@property(nonatomic) _Bool m_bNeedRefresh; // @synthesize m_bNeedRefresh=_m_bNeedRefresh;
@property(nonatomic) _Bool m_bHasChannelTypeExpousreReport; // @synthesize m_bHasChannelTypeExpousreReport=_m_bHasChannelTypeExpousreReport;
@property(nonatomic) _Bool hasShowChannelHalfTips; // @synthesize hasShowChannelHalfTips=_hasShowChannelHalfTips;
@property(retain, nonatomic) MMTipsViewController *resendTipsView; // @synthesize resendTipsView=_resendTipsView;
@property(retain, nonatomic) WCActionSheet *m_actionSheet; // @synthesize m_actionSheet=_m_actionSheet;
@property(nonatomic) _Bool m_expendAddress; // @synthesize m_expendAddress=_m_expendAddress;
@property(retain, nonatomic) WCPayNoticeItemView *noticeBanner; // @synthesize noticeBanner=_noticeBanner;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(retain, nonatomic) OpenMinimchGuide *resumeGuide; // @synthesize resumeGuide=_resumeGuide;
@property(nonatomic) _Bool m_shouldRefreshDataOnAppear; // @synthesize m_shouldRefreshDataOnAppear=_m_shouldRefreshDataOnAppear;
- (void)setShowRecvChannelOnceUsageTips:(int)arg1;
- (_Bool)hasShowRecvChannelOnceUsageTips:(int)arg1;
- (void)sizeDidChange:(id)arg1;
- (void)didTap:(id)arg1;
- (void)onJsapiConfirmTransfer;
- (id)getTransferChatContact;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)rightBarButtonPress;
- (id)getSenderDisplayName:(id)arg1;
- (id)getReceiverDisplayName:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showResendTipsView;
- (void)reportAction:(unsigned long long)arg1;
- (void)onWCPayAddressRemarkViewCopy;
- (void)onWCPayAddressRemarkViewExpend;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getSubTitleWordingInLocal:(_Bool)arg1;
- (id)getMainTitleWordingInLocal:(_Bool)arg1 receiverContact:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onOpenQA;
- (void)requestWording;
- (void)OnRealnameSucceed;
- (void)reportLocationAndWifi;
- (void)OnConfirmTransferMoneyBtnDone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)onClickJumpInfo:(id)arg1;
- (void)onClickAddressJumpInfo;
- (void)onClickTextInfo;
- (_Bool)isNotSentFromMeAndWaitingForReceive;
- (void)updateFooterButton:(id)arg1;
- (void)updateExposureView;
- (void)onClickRecvChannel:(id)arg1;
- (void)recvChanelTypeClickReport:(int)arg1 actionType:(int)arg2;
- (void)onClickMiddleInfo;
- (void)delayShowRecvChannelTips:(id)arg1 channelType:(int)arg2 showType:(int)arg3;
- (void)showFirstChooseGuide:(id)arg1;
- (void)onClickRecvChannelInfoBtn:(id)arg1;
- (void)delayShowRecvChannelFirstTips;
- (void)reloadTableView;
- (id)checkBreakLine:(double)arg1 preStr:(id)arg2 openImName:(id)arg3;
- (double)measureWidth:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)OnHistoryOrderDetailBack;
- (_Bool)shouldInteractivePop;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

