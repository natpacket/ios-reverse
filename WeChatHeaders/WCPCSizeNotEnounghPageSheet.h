//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class NSString;

@interface WCPCSizeNotEnounghPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    CDUnknownBlockType _confirmCallBack;
    CDUnknownBlockType _cancelCallBack;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelCallBack; // @synthesize cancelCallBack=_cancelCallBack;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (void)setupDetailViewWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

