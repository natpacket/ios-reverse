//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMLimitedModeBizCellDelegate-Protocol.h"
#import "MMLimitedModeConfigListViewDelegate-Protocol.h"
#import "MMLimitedModeExt-Protocol.h"
#import "MMLimitedModeIndependentVerifyViewControllerDelegate-Protocol.h"
#import "MMUseCaseCallback-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMLimitedModeConfigListView, MMLimitedModeGuardianEntryView, MMLimitedModeMaskViewView, MMUIButton, MMUILabel, NSData, NSString, RichTextView, UIButton, UIImageView, UIScrollView;

@interface MMLimitedModeEntryViewController : MMUIViewController <MMLimitedModeConfigListViewDelegate, MMUseCaseCallback, MMLimitedModeBizCellDelegate, MMLimitedModeExt, ILinkEventExt, MMLimitedModeIndependentVerifyViewControllerDelegate, UIScrollViewDelegate>
{
    _Bool _isIndependentVerifyFlag;
    _Bool _isNeverUse;
    _Bool _isSelected;
    long long _scene;
    NSString *_ticket;
    UIScrollView *_contentScrollView;
    MMUILabel *_titleLabel;
    UIImageView *_iconImageView;
    MMUILabel *_descLabel;
    MMUILabel *_openTipLabel;
    UIButton *_openButton;
    UIButton *_closeButton;
    MMLimitedModeConfigListView *_listView;
    MMLimitedModeGuardianEntryView *_guardianEntryView;
    MMUIButton *_selectedButton;
    UIImageView *_selectImageView;
    RichTextView *_confirmTextView;
    NSData *_pay_respData;
    NSString *_pay_status;
    MMLimitedModeMaskViewView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLimitedModeMaskViewView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSString *pay_status; // @synthesize pay_status=_pay_status;
@property(retain, nonatomic) NSData *pay_respData; // @synthesize pay_respData=_pay_respData;
@property(retain, nonatomic) RichTextView *confirmTextView; // @synthesize confirmTextView=_confirmTextView;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) MMUIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMLimitedModeGuardianEntryView *guardianEntryView; // @synthesize guardianEntryView=_guardianEntryView;
@property(retain, nonatomic) MMLimitedModeConfigListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) MMUILabel *openTipLabel; // @synthesize openTipLabel=_openTipLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) _Bool isNeverUse; // @synthesize isNeverUse=_isNeverUse;
@property(nonatomic) _Bool isIndependentVerifyFlag; // @synthesize isIndependentVerifyFlag=_isIndependentVerifyFlag;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onChangeLimitedModeFail;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)deleteAllAndReloadContent;
- (void)onLimitedModeChanged;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)doSetIndependent;
- (void)doClearIndependentPwdVerify;
- (void)doModifyIndependentPwdVerify;
- (void)onMoreAction;
- (void)onSelectButtonClick;
- (void)onBack;
- (void)onCloseButtonClick;
- (void)onOpenButtonClick;
- (_Bool)onMMLimitedModeBizCellLoadingFor:(long long)arg1;
- (id)onMMLimitedModeBizCellDescFor:(long long)arg1;
- (_Bool)onMMLimitedModeBizCellDynamicDescFor:(long long)arg1;
- (void)onIndependentPasswordClearSuccessTicket:(id)arg1;
- (void)call:(id)arg1;
- (void)onSelectedAtBizCell:(long long)arg1;
- (id)navigationBarBackgroundColor;
- (void)reloadContent;
- (void)updateListViewGradientLayer;
- (void)initUI;
- (void)tryPopPreviousEntryViewControllerInNavBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithScene:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

