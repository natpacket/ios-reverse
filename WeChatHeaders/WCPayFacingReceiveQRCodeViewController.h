//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IdleTimerUtilExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayFacingQRCodeImageViewDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"
#import "WCPayQRCoverPageViewDelegate-Protocol.h"
#import "WCPayQrcodeUsageHalfPage-Protocol.h"
#import "WCPaySaveQrcodeSuccessHalfPageDelegate-Protocol.h"
#import "WCPayWebImageViewDelegate-Protocol.h"

@class DataMatrix, MMPanelView, MMUILabel, MMUIView, NSMutableArray, NSString, QREncoder, RichTextView, UIButton, UIColor, UIImageView, UIView, WCPayBannerNotice, WCPayFacingQRCodeImageView, WCPayFacingReceiveErrorTipsView, WCPayQRCoverPageView, WCPayQrcodeUsageHalfPage, WCPayWebImageView, WCUIAlertView;
@protocol WCPayFacingReceiveQRCodeViewControllerDelegate;

@interface WCPayFacingReceiveQRCodeViewController : WCPayBaseViewController <WCPayQRCoverPageViewDelegate, WCPayWebImageViewDelegate, IdleTimerUtilExt, WCPayNoticeBannerDelegate, WCPayQrcodeUsageHalfPage, WCPaySaveQrcodeSuccessHalfPageDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayFacingQRCodeImageViewDelegate>
{
    UIButton *m_footerButton;
    id <WCPayFacingReceiveQRCodeViewControllerDelegate> m_delegate;
    double _oldBrightness;
    UIView *m_oTotalMoneyView;
    NSMutableArray *m_arrPayerInfoView;
    NSMutableArray *m_arrAnimationedMessageStruct;
    RichTextView *balanceRichTextView;
    UIView *m_oTotalMoneyBottomLine;
    NSMutableArray *m_arrPayerBottomLine;
    _Bool bDidBePoed;
    _Bool qrcodeIsAnimated;
    UIButton *toBalanceBtn;
    UIColor *originalBarTintColor;
    double bannerHeight;
    _Bool _ignoreScreenShotTips;
    _Bool _isShowingActionSheet;
    _Bool _bNeedRemoveReddotFromOtherView;
    _Bool _bHasUsageHalfPageShown;
    _Bool _bIsHalfPageShown;
    UIImageView *_m_bizImageQRCodeView;
    MMUIView *_m_bizHeadImageView;
    DataMatrix *_m_bizQrMatrix;
    QREncoder *_m_bizEncoder;
    WCUIAlertView *_screenShotAlert;
    WCPayBannerNotice *_m_bannerNotice;
    UIImageView *_detailReddotImgView;
    MMUILabel *_detailSubLabel;
    WCPayQRCoverPageView *_coverPageView;
    MMPanelView *_saveQRCodePanelView;
    WCPayQrcodeUsageHalfPage *_usageHalfPage;
    UIView *_tableHeaderView;
    UIView *_userCodeView;
    WCPayFacingQRCodeImageView *_userCodeContentView;
    double _userCodeMainContentHeight;
    UIImageView *_userCodeFoldIcon;
    UIButton *_userCodeFoldBtn;
    UIView *_userCodeActionBarView;
    UIView *_userCodeContentMaskView;
    UIView *_userCodeAnimateContentView;
    WCPayFacingReceiveErrorTipsView *_userCodeErrorView;
    WCPayFacingReceiveErrorTipsView *_mchCodeErrorView;
    UIView *_bottomEntranceView;
    UIButton *_bottomEntranceClickBtn;
    UIView *_mchCodeView;
    WCPayFacingQRCodeImageView *_mchCodeContentView;
    double _mchCodeMainContentHeight;
    UIView *_mchCodeApplyReddot;
    UIView *_mchActionBarNew;
    WCPayQRCoverPageView *_mchCoverPageView;
    WCPayWebImageView *_mchHeadImgView;
    UIImageView *_mchQRCodeImgView;
    UIImageView *_mchCodeFoldIcon;
    UIButton *_mchCodeFoldBtn;
    UIView *_mchCodeActionBarView;
    UIView *_mchCodeContentMaskView;
    UIView *_mchCodeAnimateContentView;
    UIView *_mchHeadImgContainerView;
    UIView *_mchTotalMoneyView;
    UIView *_mchTotalMoneyBottomLine;
    NSMutableArray *_mchArrPayerInfoView;
    NSMutableArray *_mchArrPayerBottomLine;
    NSMutableArray *_mchArrAnimationedMessageStruct;
    DataMatrix *_mchQrMatrix;
    QREncoder *_mchEncoder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QREncoder *mchEncoder; // @synthesize mchEncoder=_mchEncoder;
@property(retain, nonatomic) DataMatrix *mchQrMatrix; // @synthesize mchQrMatrix=_mchQrMatrix;
@property(retain, nonatomic) NSMutableArray *mchArrAnimationedMessageStruct; // @synthesize mchArrAnimationedMessageStruct=_mchArrAnimationedMessageStruct;
@property(retain, nonatomic) NSMutableArray *mchArrPayerBottomLine; // @synthesize mchArrPayerBottomLine=_mchArrPayerBottomLine;
@property(retain, nonatomic) NSMutableArray *mchArrPayerInfoView; // @synthesize mchArrPayerInfoView=_mchArrPayerInfoView;
@property(retain, nonatomic) UIView *mchTotalMoneyBottomLine; // @synthesize mchTotalMoneyBottomLine=_mchTotalMoneyBottomLine;
@property(retain, nonatomic) UIView *mchTotalMoneyView; // @synthesize mchTotalMoneyView=_mchTotalMoneyView;
@property(retain, nonatomic) UIView *mchHeadImgContainerView; // @synthesize mchHeadImgContainerView=_mchHeadImgContainerView;
@property(retain, nonatomic) UIView *mchCodeAnimateContentView; // @synthesize mchCodeAnimateContentView=_mchCodeAnimateContentView;
@property(retain, nonatomic) UIView *mchCodeContentMaskView; // @synthesize mchCodeContentMaskView=_mchCodeContentMaskView;
@property(retain, nonatomic) UIView *mchCodeActionBarView; // @synthesize mchCodeActionBarView=_mchCodeActionBarView;
@property(retain, nonatomic) UIButton *mchCodeFoldBtn; // @synthesize mchCodeFoldBtn=_mchCodeFoldBtn;
@property(retain, nonatomic) UIImageView *mchCodeFoldIcon; // @synthesize mchCodeFoldIcon=_mchCodeFoldIcon;
@property(retain, nonatomic) UIImageView *mchQRCodeImgView; // @synthesize mchQRCodeImgView=_mchQRCodeImgView;
@property(retain, nonatomic) WCPayWebImageView *mchHeadImgView; // @synthesize mchHeadImgView=_mchHeadImgView;
@property(retain, nonatomic) WCPayQRCoverPageView *mchCoverPageView; // @synthesize mchCoverPageView=_mchCoverPageView;
@property(retain, nonatomic) UIView *mchActionBarNew; // @synthesize mchActionBarNew=_mchActionBarNew;
@property(retain, nonatomic) UIView *mchCodeApplyReddot; // @synthesize mchCodeApplyReddot=_mchCodeApplyReddot;
@property(nonatomic) double mchCodeMainContentHeight; // @synthesize mchCodeMainContentHeight=_mchCodeMainContentHeight;
@property(retain, nonatomic) WCPayFacingQRCodeImageView *mchCodeContentView; // @synthesize mchCodeContentView=_mchCodeContentView;
@property(retain, nonatomic) UIView *mchCodeView; // @synthesize mchCodeView=_mchCodeView;
@property(retain, nonatomic) UIButton *bottomEntranceClickBtn; // @synthesize bottomEntranceClickBtn=_bottomEntranceClickBtn;
@property(retain, nonatomic) UIView *bottomEntranceView; // @synthesize bottomEntranceView=_bottomEntranceView;
@property(retain, nonatomic) WCPayFacingReceiveErrorTipsView *mchCodeErrorView; // @synthesize mchCodeErrorView=_mchCodeErrorView;
@property(retain, nonatomic) WCPayFacingReceiveErrorTipsView *userCodeErrorView; // @synthesize userCodeErrorView=_userCodeErrorView;
@property(retain, nonatomic) UIView *userCodeAnimateContentView; // @synthesize userCodeAnimateContentView=_userCodeAnimateContentView;
@property(retain, nonatomic) UIView *userCodeContentMaskView; // @synthesize userCodeContentMaskView=_userCodeContentMaskView;
@property(retain, nonatomic) UIView *userCodeActionBarView; // @synthesize userCodeActionBarView=_userCodeActionBarView;
@property(retain, nonatomic) UIButton *userCodeFoldBtn; // @synthesize userCodeFoldBtn=_userCodeFoldBtn;
@property(retain, nonatomic) UIImageView *userCodeFoldIcon; // @synthesize userCodeFoldIcon=_userCodeFoldIcon;
@property(nonatomic) double userCodeMainContentHeight; // @synthesize userCodeMainContentHeight=_userCodeMainContentHeight;
@property(retain, nonatomic) WCPayFacingQRCodeImageView *userCodeContentView; // @synthesize userCodeContentView=_userCodeContentView;
@property(retain, nonatomic) UIView *userCodeView; // @synthesize userCodeView=_userCodeView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) _Bool bIsHalfPageShown; // @synthesize bIsHalfPageShown=_bIsHalfPageShown;
@property(nonatomic) _Bool bHasUsageHalfPageShown; // @synthesize bHasUsageHalfPageShown=_bHasUsageHalfPageShown;
@property(retain, nonatomic) WCPayQrcodeUsageHalfPage *usageHalfPage; // @synthesize usageHalfPage=_usageHalfPage;
@property(retain, nonatomic) MMPanelView *saveQRCodePanelView; // @synthesize saveQRCodePanelView=_saveQRCodePanelView;
@property(retain, nonatomic) WCPayQRCoverPageView *coverPageView; // @synthesize coverPageView=_coverPageView;
@property(nonatomic) _Bool bNeedRemoveReddotFromOtherView; // @synthesize bNeedRemoveReddotFromOtherView=_bNeedRemoveReddotFromOtherView;
@property(retain, nonatomic) MMUILabel *detailSubLabel; // @synthesize detailSubLabel=_detailSubLabel;
@property(retain, nonatomic) UIImageView *detailReddotImgView; // @synthesize detailReddotImgView=_detailReddotImgView;
@property(retain, nonatomic) WCPayBannerNotice *m_bannerNotice; // @synthesize m_bannerNotice=_m_bannerNotice;
@property(retain, nonatomic) WCUIAlertView *screenShotAlert; // @synthesize screenShotAlert=_screenShotAlert;
@property(retain, nonatomic) QREncoder *m_bizEncoder; // @synthesize m_bizEncoder=_m_bizEncoder;
@property(retain, nonatomic) DataMatrix *m_bizQrMatrix; // @synthesize m_bizQrMatrix=_m_bizQrMatrix;
@property(retain, nonatomic) MMUIView *m_bizHeadImageView; // @synthesize m_bizHeadImageView=_m_bizHeadImageView;
@property(retain, nonatomic) UIImageView *m_bizImageQRCodeView; // @synthesize m_bizImageQRCodeView=_m_bizImageQRCodeView;
@property(nonatomic) _Bool isShowingActionSheet; // @synthesize isShowingActionSheet=_isShowingActionSheet;
@property(nonatomic) _Bool ignoreScreenShotTips; // @synthesize ignoreScreenShotTips=_ignoreScreenShotTips;
- (void)ClickBottomEntrance;
- (void)refreshBottomEntrance;
- (_Bool)hasMchQrcode;
- (long long)getErrorViewState:(long long)arg1;
- (void)hideShortTermQrCodeView:(long long)arg1;
- (void)showShortTermQrCodeErrorView:(long long)arg1 withErrorMsg:(id)arg2;
- (void)showShortTermQrCodeLoadingView:(long long)arg1 withForceLoading:(_Bool)arg2;
- (void)onClickSaveQrcodeSuccessConfirmButton:(id)arg1;
- (void)onClickSaveQrcodeSuccessCancelButton:(id)arg1;
- (void)onClickUsageHalfPageConfirmButton:(id)arg1;
- (void)onClickUsageHalfPageCancelButton:(id)arg1;
- (void)overseaScreenShotEvents;
- (void)overseaLongPressEvents;
- (void)onWCPayQRCoverPageView:(id)arg1 clickWithButtonInfo:(id)arg2;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (id)getCurrentShowingQRCodeUrl;
- (id)getMchCodeUrl;
- (id)getUserCodeUrl;
- (_Bool)isMchCodeFixMoneyFacingReceive;
- (_Bool)isUserCodeFixMoneyFacingReceive;
- (_Bool)isShowingFixMoneyFacingReceive;
- (_Bool)isShowingUserFacingReceiveCode;
- (_Bool)isOverseaFacingReceive;
- (id)genRichTextViewLinkContent:(id)arg1 content:(id)arg2;
- (void)qrcodeSaveNotify:(unsigned int)arg1;
- (_Bool)isDomestic;
- (void)reportLocation;
- (int)getMchQrcodeLevel;
- (int)getUserQrcodeLevel;
- (id)mchHeaderImageWithPayIconForLocalSave;
- (id)mchHeaderImageWithPayIcon;
- (id)headerImageWithPayIcon:(_Bool)arg1;
- (id)imageFromView:(id)arg1;
- (id)getDisplayTruthNameInfo;
- (id)getDisplayNameInfo;
- (void)reportUserAction:(int)arg1;
- (void)reportQrcodeSaveWithActionType:(unsigned long long)arg1 showType:(int)arg2 buttonType:(int)arg3;
- (void)reportApplyWithScene:(unsigned long long)arg1;
- (void)showOpenSystemPushSoundTips;
- (void)showSetPushSoundResultSuccess:(_Bool)arg1 soundStatus:(_Bool)arg2;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (id)getNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)ShowMchPayerStartedPayMoneyAnimation:(id)arg1 OnlyChangedOldCell:(_Bool)arg2;
- (void)ShowPayerStartedPayMoneyAnimation:(id)arg1 OnlyChangedOldCell:(_Bool)arg2;
- (void)insertNewView:(id)arg1;
- (void)ShowReceivedMoneyAnimation:(id)arg1;
- (void)EndReceivedMoneyAnimation:(id)arg1;
- (void)RemoveMessageStructAndShowedMoney:(id)arg1;
- (void)saveQRCodeWithReport;
- (void)saveQRCodeImageButtonPressOversea;
- (void)doSaveMchQRCodeSuccess;
- (void)doSaveQRCodeSuccess;
- (void)requestSaveQrcode;
- (void)requestApplyQrcode;
- (void)saveQRCodeImageButtonPress;
- (void)OnWCPayFacingQRCodeImageViewLongPress:(id)arg1;
- (void)updateActionBarViewState;
- (void)userChangeShowingCodeType;
- (void)mchCodeFoldBtnClick;
- (void)userCodeFoldBtnClick;
- (void)clickApplyMchCodeCell;
- (void)saveImageToAlbum;
- (void)onClickQRButtonInfo:(id)arg1 saveNotifyType:(int)arg2 actionType:(unsigned long long)arg3;
- (void)showLongPressView:(id)arg1 saveNotifyType:(int)arg2;
- (void)showCoverPage:(id)arg1 saveNotifyType:(int)arg2;
- (void)onHalfPageClickClose:(id)arg1;
- (void)showHalfPage:(id)arg1 saveNotifyType:(int)arg2;
- (void)showWithQRActionInfo:(id)arg1 saveNotifyType:(int)arg2;
- (void)doApplyQRCodeSuccess:(id)arg1;
- (id)getLocalSaveAlbumImageViewV2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMchCodeActionSheet;
- (void)showActionSheetWithSetting:(_Bool)arg1;
- (void)showActionList;
- (void)onClickToReceiveDetailButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onRightBarButtonClick;
- (void)OnLeftBarButtonDone;
- (id)genTopCornerShapeLayerWithBarView:(id)arg1;
- (id)genMchCodeDetailEnteranceViewWithNeedBottomCorner:(_Bool)arg1;
- (id)genUserCodeDetailEnteranceViewWithNeedBottomCorner:(_Bool)arg1;
- (id)genBizF2FHeadImageViewWithImageSize:(struct CGSize)arg1 delegate:(id)arg2;
- (id)genVertialSepLinkView;
- (id)genSettingTextView:(double)arg1;
- (id)genSaveQRCodeTextView:(double)arg1;
- (id)genMchCodeSetMoneyTextView:(double)arg1;
- (id)genUserCodeSetMoneyTextView:(double)arg1;
- (id)genMchQRCodeImageView;
- (id)genUserQRCodeImageView;
- (void)updateMchCodeCoverPageView:(struct CGRect)arg1 bottomCorner:(_Bool)arg2 baseView:(id)arg3;
- (void)setupMchCodeMoneyReceiveListView;
- (void)setupMchCodeTextEntryViewAndBottomView;
- (void)setupMchQRCodeContent;
- (void)setupMchQRCodePanelHeaderContent;
- (void)setupMchQRCodePanelViewWithStartY:(double)arg1;
- (id)setupMchCodeActionBarView;
- (void)setupMchQRCodeContentView;
- (void)setupMchQRCodeApplyCell;
- (void)updateUserCodeCoverPageView:(struct CGRect)arg1 bottomCorner:(_Bool)arg2 baseView:(id)arg3;
- (void)setupUserCodeMoneyReceiveListView;
- (void)setupUserCodeTextEntryViewAndBottomView;
- (void)setupUserQRCodeContent;
- (void)setupUserQRCodePanelHeaderContent:(_Bool)arg1;
- (void)setupUserQRCodePanelViewWithStartY:(double)arg1 hasActionBarView:(_Bool)arg2;
- (id)setupUserCodeActionBarView;
- (void)setupMchCodeContainerView;
- (void)setupUserCodeContainerView;
- (void)setupContentView;
- (void)checkSpeechStatus;
- (void)reloadTableView;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

