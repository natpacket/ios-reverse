//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMUILabel, NSString, UIButton, WCAccountTextFieldItem;
@protocol WCAccountAffiliatedAcctDelegate;

@interface WCAccountAffiliatedAcctPasswordViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCAccountAffiliatedAcctDelegate> _delegate;
    MMUILabel *_titleLabel;
    WCAccountTextFieldItem *_textFieldPwdItem;
    WCAccountTextFieldItem *_textFieldVerifyPwdItem;
    MMUILabel *_tipsLabel;
    UIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCAccountTextFieldItem *textFieldVerifyPwdItem; // @synthesize textFieldVerifyPwdItem=_textFieldVerifyPwdItem;
@property(retain, nonatomic) WCAccountTextFieldItem *textFieldPwdItem; // @synthesize textFieldPwdItem=_textFieldPwdItem;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCAccountAffiliatedAcctDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)onDone;
- (void)checkDone;
- (id)generatePasswordTextFieldItemWithVerify:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)autoHandleKeyboardEvent;
- (_Bool)useSheetView;
- (_Bool)useRedesignStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

