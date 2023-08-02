//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "InternalLoadingFavorDelegate-Protocol.h"
#import "InternalTransferTaskDelegate-Protocol.h"
#import "MMUseCaseCallback-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WCPayBizF2FTransferMoneyFaovrPageSheetDelegate-Protocol.h"
#import "WCPayBusiF2FGetFavorCgiDelegate-Protocol.h"
#import "WCPayDecimalKeyboardViewDelegate-Protocol.h"
#import "WCPayF2FTransferFavorItemViewDelegate-Protocol.h"
#import "WCPayTransferMoneyAntiCheatButtonDelegate-Protocol.h"

@class BusiF2FFavorCommResp, FavorComposeInfo, InternalLoadingFavor, InternalTransferTask, MMTextView, NSString, UIButton, UIImageView, UILabel, UIView, WCPayBaseNetworkingError, WCPayBizF2FExtraBuyDataHelper, WCPayBizF2FTransferMoneyFaovrPageSheet, WCPayBusiF2FGetFavorCgi, WCPayDecimalKeyboardView, WCPayF2FTransferDiscountFavorItemView, WCPayF2FTransferFavorItemView, WCPayTextField, WCPayTransferMoneyAntiCheatUIView, WCUIAlertView;
@protocol WCPayBizF2FTransferMoneyViewControllerDelegate;

@interface WCPayBizF2FTransferMoneyViewController : WCPayBaseViewController <InternalLoadingFavorDelegate, InternalTransferTaskDelegate, WCPayBusiF2FGetFavorCgiDelegate, UITextFieldDelegate, UITextViewDelegate, ILinkEventExt, MMUseCaseCallback, WCPayF2FTransferFavorItemViewDelegate, WCPayDecimalKeyboardViewDelegate, WCPayTransferMoneyAntiCheatButtonDelegate, WCPayBizF2FTransferMoneyFaovrPageSheetDelegate>
{
    _Bool _m_userHasSelectCompose;
    id <WCPayBizF2FTransferMoneyViewControllerDelegate> _delegate;
    NSString *_comment;
    UILabel *_m_favorTitleLabel;
    WCPayF2FTransferDiscountFavorItemView *_m_discountFavorItemView;
    WCPayF2FTransferFavorItemView *_m_extraBuyFavorItemView;
    UIView *_m_favorBottomLine;
    UIImageView *_m_favorArrowView;
    UILabel *_m_favorMoneyTitleLabel;
    UILabel *_m_favorMoneyLabel;
    WCUIAlertView *_m_alertView;
    BusiF2FFavorCommResp *_m_getFavorResp;
    FavorComposeInfo *_m_selectedComposeInfo;
    WCPayBizF2FExtraBuyDataHelper *_extraBuyHelper;
    WCPayBusiF2FGetFavorCgi *_getFavorCgi;
    InternalTransferTask *_m_transferTask;
    WCPayBaseNetworkingError *_m_getFavorErr;
    InternalLoadingFavor *_m_internalLoadingFavor;
    UIView *_m_headerView;
    UIView *_m_bannerView;
    UILabel *_m_mchNameLabel;
    UILabel *_m_nickNameLabel;
    UIView *_m_imageView;
    UIView *_m_contentView;
    UILabel *_m_amountTitle;
    WCPayTransferMoneyAntiCheatUIView *_m_antiCheatView;
    UILabel *_m_unitLabel;
    WCPayTextField *_m_textField;
    UIView *_m_textFieldLine;
    UILabel *_m_amountLabel;
    UIButton *_m_transferButton;
    UIView *_m_commentView;
    MMTextView *_payerDescTextView;
    WCPayDecimalKeyboardView *_keyboardView;
    UIView *_m_footerMask;
    double _keyboardHeight;
    WCPayBizF2FTransferMoneyFaovrPageSheet *_m_favorPageSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBizF2FTransferMoneyFaovrPageSheet *m_favorPageSheet; // @synthesize m_favorPageSheet=_m_favorPageSheet;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIView *m_footerMask; // @synthesize m_footerMask=_m_footerMask;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) MMTextView *payerDescTextView; // @synthesize payerDescTextView=_payerDescTextView;
@property(retain, nonatomic) UIView *m_commentView; // @synthesize m_commentView=_m_commentView;
@property(retain, nonatomic) UIButton *m_transferButton; // @synthesize m_transferButton=_m_transferButton;
@property(retain, nonatomic) UILabel *m_amountLabel; // @synthesize m_amountLabel=_m_amountLabel;
@property(retain, nonatomic) UIView *m_textFieldLine; // @synthesize m_textFieldLine=_m_textFieldLine;
@property(retain, nonatomic) WCPayTextField *m_textField; // @synthesize m_textField=_m_textField;
@property(retain, nonatomic) UILabel *m_unitLabel; // @synthesize m_unitLabel=_m_unitLabel;
@property(retain, nonatomic) WCPayTransferMoneyAntiCheatUIView *m_antiCheatView; // @synthesize m_antiCheatView=_m_antiCheatView;
@property(retain, nonatomic) UILabel *m_amountTitle; // @synthesize m_amountTitle=_m_amountTitle;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) UIView *m_imageView; // @synthesize m_imageView=_m_imageView;
@property(retain, nonatomic) UILabel *m_nickNameLabel; // @synthesize m_nickNameLabel=_m_nickNameLabel;
@property(retain, nonatomic) UILabel *m_mchNameLabel; // @synthesize m_mchNameLabel=_m_mchNameLabel;
@property(retain, nonatomic) UIView *m_bannerView; // @synthesize m_bannerView=_m_bannerView;
@property(retain, nonatomic) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(retain, nonatomic) InternalLoadingFavor *m_internalLoadingFavor; // @synthesize m_internalLoadingFavor=_m_internalLoadingFavor;
@property(retain, nonatomic) WCPayBaseNetworkingError *m_getFavorErr; // @synthesize m_getFavorErr=_m_getFavorErr;
@property(retain, nonatomic) InternalTransferTask *m_transferTask; // @synthesize m_transferTask=_m_transferTask;
@property(retain, nonatomic) WCPayBusiF2FGetFavorCgi *getFavorCgi; // @synthesize getFavorCgi=_getFavorCgi;
@property(retain, nonatomic) WCPayBizF2FExtraBuyDataHelper *extraBuyHelper; // @synthesize extraBuyHelper=_extraBuyHelper;
@property(nonatomic) _Bool m_userHasSelectCompose; // @synthesize m_userHasSelectCompose=_m_userHasSelectCompose;
@property(retain, nonatomic) FavorComposeInfo *m_selectedComposeInfo; // @synthesize m_selectedComposeInfo=_m_selectedComposeInfo;
@property(retain, nonatomic) BusiF2FFavorCommResp *m_getFavorResp; // @synthesize m_getFavorResp=_m_getFavorResp;
@property(retain, nonatomic) WCUIAlertView *m_alertView; // @synthesize m_alertView=_m_alertView;
@property(retain, nonatomic) UILabel *m_favorMoneyLabel; // @synthesize m_favorMoneyLabel=_m_favorMoneyLabel;
@property(retain, nonatomic) UILabel *m_favorMoneyTitleLabel; // @synthesize m_favorMoneyTitleLabel=_m_favorMoneyTitleLabel;
@property(retain, nonatomic) UIImageView *m_favorArrowView; // @synthesize m_favorArrowView=_m_favorArrowView;
@property(retain, nonatomic) UIView *m_favorBottomLine; // @synthesize m_favorBottomLine=_m_favorBottomLine;
@property(retain, nonatomic) WCPayF2FTransferFavorItemView *m_extraBuyFavorItemView; // @synthesize m_extraBuyFavorItemView=_m_extraBuyFavorItemView;
@property(retain, nonatomic) WCPayF2FTransferDiscountFavorItemView *m_discountFavorItemView; // @synthesize m_discountFavorItemView=_m_discountFavorItemView;
@property(retain, nonatomic) UILabel *m_favorTitleLabel; // @synthesize m_favorTitleLabel=_m_favorTitleLabel;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCPayBizF2FTransferMoneyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)kvLog19821StringWithActionType:(unsigned int)arg1;
- (void)activeTextField;
- (void)updateAmount:(unsigned int)arg1;
- (void)clearTextField;
- (void)showFloatConfirmBtn;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)reportWithScene:(unsigned long long)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateRequiredPayerDescView;
- (void)updateCommentTextView;
- (void)updateCommentView;
- (double)updateTransferButton:(double)arg1;
- (void)updateTextFieldLine;
- (void)adjustUnitAndTextField;
- (id)placeHolder;
- (void)updateAmountLabel;
- (double)getWCPayTextFieldOffsetY;
- (double)getWCPayTextFieldOffsetX;
- (void)updateTextField;
- (_Bool)shouldShowKeyboardFloatButton;
- (void)updateUnitTitle;
- (void)updateAmountTitle;
- (void)onWCPayAntiCheatButtonClickWithNative:(id)arg1;
- (void)onWCPayAntiCheatButtonClickWithMiniProgram:(id)arg1 path:(id)arg2;
- (void)onWCPayAntiCheatButtonClickWithH5:(id)arg1;
- (void)updateAntiCheatView;
- (void)updateContentView;
- (void)updateImageView;
- (void)adjustMchNameAndNickName;
- (void)updateNickNameLabel;
- (void)updateMchNameLabel;
- (void)updateBannerView;
- (void)updateHeaderView;
- (void)updateView;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (unsigned int)getOriginalAmountInCent;
- (void)onInternalTransferTaskExecute;
- (void)onInternalLoadingFavorError:(id)arg1;
- (void)onInternalLoadingFavor:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiResp:(id)arg1;
- (void)onWCPayBizF2FFavorSelectViewSelect:(id)arg1;
- (void)call:(id)arg1;
- (void)startExtraBuyKindaUseCase;
- (void)favorItemViewDidChangeCheckState:(id)arg1;
- (void)favorItemViewDidClickInfoButton:(id)arg1;
- (void)favorItemViewDidClickView:(id)arg1;
- (void)onDiscountFavorViewClicked;
- (void)updateConfirmButtonState;
- (void)clearFavorInfo;
- (void)refreshTransferButton;
- (void)commentCancel;
- (void)commentConfirm;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)getFavorWithOriginalAmount:(unsigned int)arg1 andDelegate:(id)arg2;
- (void)textFieldDidChange;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)transferBtnClick;
- (void)leftBarButtonItemClick;
- (void)viewWillPop:(_Bool)arg1;
- (void)onFavorButtonClick;
- (void)updateFavorArea;
- (void)updateExrtaBuyFavorItemSubTitle;
- (void)updateFavorMoney;
- (void)updateDiscountFavorItemSubTitle;
- (id)favorMoneyText;
- (unsigned long long)favorMoneyInt;
- (double)updateFavorMoneyLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorMoneyTitleLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorBottomLineWithYOffset:(double)arg1 baseView:(id)arg2;
- (_Bool)shouldEnableDiscountFavorItemView;
- (double)updateExtraBuyFavorWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateDiscountFavorWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorTitleLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorViewWithYOffset:(double)arg1 baseView:(id)arg2;
- (id)discountFavorSubTitle;
- (id)safeDiscountFavorSubTitle;
- (id)discountFavorSubTitleColor;
- (id)favorResp;
- (_Bool)shouldShowDiscountFavorItem;
- (_Bool)shouldShowFavor;
- (_Bool)shouldGetFavor;
- (double)amountInputLabelHeight;
- (double)amountInputLabelFontSize;
- (void)setupNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

