//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IRoamServiceExt-Protocol.h"

@class MMProgressView, MMTimer, MMUIActivityIndicatorView, MMUILabel, MMUINavigationBar, NSString, UIButton, UIImageView, UILabel, UINavigationItem, UIScrollView, UIView;

@interface WXGRoamWindowViewController : MMWindowViewController <IRoamServiceExt>
{
    unsigned long long m_notifyCode;
    UIView *m_imageBackgroundView;
    UIImageView *m_iconImageView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    UIButton *m_greenButton;
    UIButton *m_greyButton;
    MMProgressView *m_progressView;
    MMUILabel *m_progressLabel;
    MMUIActivityIndicatorView *m_indicatorView;
    _Bool m_lastActivity;
    _Bool m_prepareToStart;
    unsigned long long m_curSessionCnt;
    unsigned long long m_totalSessionCnt;
    _Bool m_isBackup;
    float _backupProgress;
    UIView *_backgroundView;
    UIScrollView *_sheetView;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    UIView *_autoBackupView;
    UILabel *_autoBackupLabel;
    UIView *_recoverView;
    MMTimer *_transferTimer;
    NSString *_speedString;
    NSString *_leftTimeString;
    unsigned long long _curSpeed;
    unsigned long long _speedCount;
    unsigned long long _chatLogSize;
    unsigned long long _selectedSize;
    unsigned long long _transferSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long transferSize; // @synthesize transferSize=_transferSize;
@property(nonatomic) unsigned long long selectedSize; // @synthesize selectedSize=_selectedSize;
@property(nonatomic) unsigned long long chatLogSize; // @synthesize chatLogSize=_chatLogSize;
@property(nonatomic) unsigned long long speedCount; // @synthesize speedCount=_speedCount;
@property(nonatomic) unsigned long long curSpeed; // @synthesize curSpeed=_curSpeed;
@property(nonatomic) float backupProgress; // @synthesize backupProgress=_backupProgress;
@property(retain, nonatomic) NSString *leftTimeString; // @synthesize leftTimeString=_leftTimeString;
@property(retain, nonatomic) NSString *speedString; // @synthesize speedString=_speedString;
@property(retain, nonatomic) MMTimer *transferTimer; // @synthesize transferTimer=_transferTimer;
@property(retain, nonatomic) UIView *recoverView; // @synthesize recoverView=_recoverView;
@property(retain, nonatomic) UILabel *autoBackupLabel; // @synthesize autoBackupLabel=_autoBackupLabel;
@property(retain, nonatomic) UIView *autoBackupView; // @synthesize autoBackupView=_autoBackupView;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(retain, nonatomic) UIScrollView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)onRoamServiceTransferredSize:(long long)arg1;
- (void)onRoamServiceStopFinishRet:(int)arg1;
- (void)onRoamServiceGetBackupInfo:(id)arg1 ret:(int)arg2;
- (void)onRoamServiceSelectRecover:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 totalSize:(unsigned long long)arg4;
- (void)onRoamServiceSelectBackup:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 totalSize:(unsigned long long)arg4;
- (void)onRoamServiceGetChatLogSize:(unsigned long long)arg1;
- (void)onRoamServiceRestoreCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamServiceBackupCurrent:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onRoamServiceNotifyCode:(unsigned long long)arg1;
- (void)onGetTransferStat;
- (void)onResume;
- (void)onPause;
- (void)onPressEndBtn;
- (void)onDisconnect;
- (void)onMinimizeView;
- (void)onPressCancelBtn;
- (void)onCloseView;
- (void)onManagerDevice;
- (void)onSelectPartRestore;
- (void)onRetry;
- (void)onSelectAllRestore;
- (void)onSelectPart;
- (void)onSelectAll;
- (void)addProgressView;
- (void)addGreyButton;
- (void)addGreenButton;
- (void)addSmallTipsLabel;
- (void)addTipsLabel;
- (void)addIconImageView;
- (void)addNavigationBarInfo;
- (void)setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
