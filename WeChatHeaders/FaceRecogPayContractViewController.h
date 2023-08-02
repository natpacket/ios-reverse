//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FaceRecogPayContractConfirmViewDelegate-Protocol.h"

@class MMUIButton, MMUILabel, NSString, UIButton, UIImageView;
@protocol FaceRecogPayContractViewControllerDelegate;

@interface FaceRecogPayContractViewController : MMUIViewController <FaceRecogPayContractConfirmViewDelegate>
{
    _Bool _hasContract;
    id <FaceRecogPayContractViewControllerDelegate> _delegate;
    NSString *_hintText;
    NSString *_contractUrl;
    NSString *_contractTitle;
    NSString *_contractDesc;
    NSString *_otherVerifyTitle;
    UIImageView *_topIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIButton *_confirmButton;
    MMUIButton *_otherVerifyWayBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *otherVerifyWayBtn; // @synthesize otherVerifyWayBtn=_otherVerifyWayBtn;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *topIconView; // @synthesize topIconView=_topIconView;
@property(retain, nonatomic) NSString *otherVerifyTitle; // @synthesize otherVerifyTitle=_otherVerifyTitle;
@property(retain, nonatomic) NSString *contractDesc; // @synthesize contractDesc=_contractDesc;
@property(retain, nonatomic) NSString *contractTitle; // @synthesize contractTitle=_contractTitle;
@property(retain, nonatomic) NSString *contractUrl; // @synthesize contractUrl=_contractUrl;
@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(nonatomic) _Bool hasContract; // @synthesize hasContract=_hasContract;
@property(nonatomic) __weak id <FaceRecogPayContractViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didConfirmContract;
- (void)onClickOtherVerifyButton;
- (void)onStartVerify;
- (void)onBack;
- (_Bool)needSignContract;
- (void)setupUI;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

