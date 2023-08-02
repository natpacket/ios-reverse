//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class NSString, OpenMinimchGuide, UIView;
@protocol WCPayTransferOpenMiniGuidePageSheetDelegate;

@interface WCPayTransferOpenMiniGuidePageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <WCPayTransferOpenMiniGuidePageSheetDelegate> _m_delegate;
    UIView *_tipsContainerView;
    OpenMinimchGuide *_viewData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenMinimchGuide *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) UIView *tipsContainerView; // @synthesize tipsContainerView=_tipsContainerView;
@property(nonatomic) __weak id <WCPayTransferOpenMiniGuidePageSheetDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickLinkBtn:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTipsInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
