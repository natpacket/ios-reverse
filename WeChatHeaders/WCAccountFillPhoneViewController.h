//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, UIButton, WCFullPhoneNumInputHelper;
@protocol WCAccountFillPhoneViewControllerDelegate;

@interface WCAccountFillPhoneViewController : WCAccountBaseViewController <WCBaseInfoItemDelegate>
{
    NSString *_restrictiveISOContryCode;
    id <WCAccountFillPhoneViewControllerDelegate> _delegate;
    NSString *_headerTip;
    WCFullPhoneNumInputHelper *_fullPhoneNumInputHelper;
    UIButton *_nextButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) WCFullPhoneNumInputHelper *fullPhoneNumInputHelper; // @synthesize fullPhoneNumInputHelper=_fullPhoneNumInputHelper;
@property(retain, nonatomic) NSString *headerTip; // @synthesize headerTip=_headerTip;
@property(nonatomic) __weak id <WCAccountFillPhoneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *restrictiveISOContryCode; // @synthesize restrictiveISOContryCode=_restrictiveISOContryCode;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)onNext;
- (void)onFillPhoneBack;
- (void)checkNextBtnEnable;
- (void)initView;
- (_Bool)autoHandleKeyboardEvent;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (_Bool)isForbidPageSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
