//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class CAGradientLayer, FaceRecog3rdVerifyConfirmLogic, FaceRecogResultView, MMUILabel, MMWebImageView, NSString, UIButton, UIScrollView, UIView, WCAgreementCheckBox;
@protocol FaceRecog3rdVerifyConfirmViewControllerDelegate;

@interface FaceRecog3rdVerifyConfirmViewController : MMUIViewController
{
    _Bool _agreementSelected;
    _Bool _overseaAgreementSelected;
    id <FaceRecog3rdVerifyConfirmViewControllerDelegate> _delegate;
    UIScrollView *_scrollContentView;
    UIView *_detailView;
    CAGradientLayer *_gradientLayer;
    WCAgreementCheckBox *_overseaAgreementCheckView;
    WCAgreementCheckBox *_agreementCheckView;
    UIButton *_feedbackButton;
    MMWebImageView *_iconView;
    MMUILabel *_nameLabel;
    MMUILabel *_sloganLabel;
    MMUILabel *_descLabel;
    UIButton *_confirmInvokeBtn;
    FaceRecogResultView *_failResultView;
    FaceRecog3rdVerifyConfirmLogic *_confirmLogic;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool overseaAgreementSelected; // @synthesize overseaAgreementSelected=_overseaAgreementSelected;
@property(nonatomic) _Bool agreementSelected; // @synthesize agreementSelected=_agreementSelected;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic; // @synthesize confirmLogic=_confirmLogic;
@property(retain, nonatomic) FaceRecogResultView *failResultView; // @synthesize failResultView=_failResultView;
@property(retain, nonatomic) UIButton *confirmInvokeBtn; // @synthesize confirmInvokeBtn=_confirmInvokeBtn;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) WCAgreementCheckBox *agreementCheckView; // @synthesize agreementCheckView=_agreementCheckView;
@property(retain, nonatomic) WCAgreementCheckBox *overseaAgreementCheckView; // @synthesize overseaAgreementCheckView=_overseaAgreementCheckView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIScrollView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConfirmButton;
- (void)updateViewWithFailReason:(id)arg1 desc:(id)arg2 confirmLogic:(id)arg3;
- (void)updateView:(id)arg1;
- (void)onConfirmFail;
- (void)onCancel;
- (void)onStartFaceReco;
- (void)onFeedback;
- (id)faceRecogVerifyGetFeedbackUrl;
- (void)viewDidLayoutSubviews;
- (void)initLayout;
- (id)genAgreementCheckBox;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (id)initWithAppId:(id)arg1;

@end

