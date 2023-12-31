//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"

@class MMPageSheetBaseView, MMTableViewInfo, NSString;
@protocol ShakeSettingViewControllerDelegate><ShakeListDelegate;

@interface ShakeSettingViewController : MMUIViewController <MMTableViewInfoDelegate, MMPageSheetBottomViewDelegate>
{
    id <ShakeSettingViewControllerDelegate><ShakeListDelegate> m_delegate;
    MMTableViewInfo *_tableViewInfo;
    MMPageSheetBaseView *_pageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetBaseView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onSouncStatusSwitchChanged:(id)arg1;
- (void)OnOpenShakeMsgCenter;
- (void)OnOpenShakeHistoryList;
- (void)OnOpenSayHelloFromSayHelloButton;
- (void)useDefaultHideImage;
- (void)nextActionSheet;
- (void)showImagePicker;
- (_Bool)hasCustomImage;
- (void)OnChangeBackgroundPic;
- (void)reloadTableData;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)setM_Delegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

