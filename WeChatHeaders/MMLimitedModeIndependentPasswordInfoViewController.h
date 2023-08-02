//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLimitedModeSetPasswordLogicDelegate-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class MMLimitedModeSetPasswordLogic, MMTableViewInfo, MMUIActivityIndicatorView, MMUILabel, NSString, UIButton, UITableViewCell, UITextView, WCTableViewNormalCellManager;

@interface MMLimitedModeIndependentPasswordInfoViewController : MMUIViewController <MMTableViewInfoDelegate, UITextViewDelegate, UITextFieldDelegate, MMLimitedModeSetPasswordLogicDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    UITextView *m_tfInputName;
    UITextView *m_tfInputIdCard;
    UIButton *m_acceptBtn;
    double m_fKeyboardHeight;
    MMUILabel *m_inputNameTitleLabel;
    MMUILabel *m_inputIdCardTitleLabel;
    UITableViewCell *m_inputNameCell;
    UITableViewCell *m_inputIdCardCell;
    WCTableViewNormalCellManager *m_inputNameCellInfo;
    WCTableViewNormalCellManager *m_inputIdCardCellInfo;
    MMUIActivityIndicatorView *m_buttonLoadingView;
    MMLimitedModeSetPasswordLogic *m_setPasswordLogic;
    _Bool m_isShowErrorTip;
    unsigned int _m_setLimitedModePwdType;
    NSString *_m_inputPassword;
    long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int m_setLimitedModePwdType; // @synthesize m_setLimitedModePwdType=_m_setLimitedModePwdType;
@property(retain, nonatomic) NSString *m_inputPassword; // @synthesize m_inputPassword=_m_inputPassword;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)checkAcceptBtnBottomLocal;
- (void)OnReturn;
- (void)didAccept;
- (_Bool)checkEdit;
- (_Bool)idCardNumberAgeUnder18:(id)arg1;
- (_Bool)isValidIdCardNumber:(id)arg1;
- (void)buttonStopLoading;
- (void)buttonStartLoading;
- (double)getkeyboardShowAcceptBtnBottom;
- (double)getkeyboardHideAcceptBtnBottom;
- (void)initAcceptBtn;
- (void)initInputTitleLabel;
- (void)initInputIdCardEdit;
- (void)initInputNameEdit;
- (void)fixIdCardCellHeight;
- (void)fixNameCellHeight;
- (void)updateInputTitleLabelSize;
- (void)makeInputIdCardEdit:(id)arg1;
- (void)makeInputNameEdit:(id)arg1;
- (id)getIndependentPasswordInfoHeadView;
- (void)reloadTableViewInfo;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)initTableView;
- (void)resetRightBarButton;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
