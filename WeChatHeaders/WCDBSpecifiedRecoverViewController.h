//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "WCActionSheetDelegate-Protocol.h"

@class MMUILabel, NSArray, NSObject, NSString, UIButton;
@protocol WCDBSpecifiedRecoverViewControllerDelegate;

@interface WCDBSpecifiedRecoverViewController : MMWindowViewController <WCActionSheetDelegate>
{
    MMUILabel *m_tipLabel;
    MMUILabel *m_commentLabel;
    UIButton *m_button;
    UIButton *m_clear;
    _Bool m_isRecovering;
    NSArray *m_recoverInfo;
    _Bool _isManuallyRestore;
    NSObject<WCDBSpecifiedRecoverViewControllerDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isManuallyRestore; // @synthesize isManuallyRestore=_isManuallyRestore;
@property(nonatomic) __weak NSObject<WCDBSpecifiedRecoverViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)askForConfirmClear;
- (void)clear;
- (void)recover;
- (void)didRecover:(_Bool)arg1;
- (void)onConfirm;
- (void)onDoubleTapThreeTimes;
- (void)onEnterBackground;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

