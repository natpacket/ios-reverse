//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseViewController.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCPayQrcodeUsagehalfPageCellDelegate-Protocol.h"

@class CgiApplyQrcodeResp, MMTableView, MMUILabel, NSString, WCPayQrcodeUsagehalfPageCell;
@protocol WCPayQrcodeUsageHalfPage;

@interface WCPayQrcodeUsageHalfPage : MMPageSheetBaseViewController <WCPayQrcodeUsagehalfPageCellDelegate, MMPageSheetBottomViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isKeyboardShowing;
    id <WCPayQrcodeUsageHalfPage> _delegate;
    NSString *_codeUsage;
    MMUILabel *_titleLabel;
    MMTableView *_usageTableView;
    WCPayQrcodeUsagehalfPageCell *_lastChooseCell;
    CgiApplyQrcodeResp *_resp;
    long long _selectedRow;
    long long _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) long long keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) CgiApplyQrcodeResp *resp; // @synthesize resp=_resp;
@property(retain, nonatomic) WCPayQrcodeUsagehalfPageCell *lastChooseCell; // @synthesize lastChooseCell=_lastChooseCell;
@property(retain, nonatomic) MMTableView *usageTableView; // @synthesize usageTableView=_usageTableView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *codeUsage; // @synthesize codeUsage=_codeUsage;
@property(nonatomic) __weak id <WCPayQrcodeUsageHalfPage> delegate; // @synthesize delegate=_delegate;
- (void)updateTextFieldContent:(id)arg1;
- (void)setConfirmButtonState:(_Bool)arg1;
- (void)updateTableViewOffset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onKeyboradDidShow:(id)arg1;
- (void)onKeyboradWillHide:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (void)onTapCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (double)pageSheetContentHeight;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)pageSheetDidAppear;
- (id)pageSheetDetailContentView;
- (double)pageSheetContentWidth;
- (void)viewDidLoad;
- (id)initWithResp:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

