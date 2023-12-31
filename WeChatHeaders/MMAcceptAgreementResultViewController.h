//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAcceptAgreementBaseViewController.h"

#import "MMAcceptAgreementCommonHeadViewDelegate-Protocol.h"

@class MMAcceptAgreementCommonHeadView, NSString, UIButton, UIImage;
@protocol MMAcceptAgreementResultViewControllerDelegate;

@interface MMAcceptAgreementResultViewController : MMAcceptAgreementBaseViewController <MMAcceptAgreementCommonHeadViewDelegate>
{
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    UIButton *m_actionBtn;
    NSString *m_headTitle;
    NSString *m_headContent;
    NSString *m_headContentWithLink;
    _Bool m_isWeakActionBtn;
    _Bool _m_isShowLeftCloseBarButton;
    _Bool _m_isShowLeftBackBarButton;
    _Bool _m_bHiddenOperateButton;
    UIImage *m_logoSVGImage;
    NSString *m_actionBtnStr;
    CDUnknownBlockType _m_resultActionBlock;
    id <MMAcceptAgreementResultViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMAcceptAgreementResultViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(copy, nonatomic) CDUnknownBlockType m_resultActionBlock; // @synthesize m_resultActionBlock=_m_resultActionBlock;
@property(nonatomic) _Bool m_bHiddenOperateButton; // @synthesize m_bHiddenOperateButton=_m_bHiddenOperateButton;
@property(nonatomic) _Bool m_isShowLeftBackBarButton; // @synthesize m_isShowLeftBackBarButton=_m_isShowLeftBackBarButton;
@property(nonatomic) _Bool m_isShowLeftCloseBarButton; // @synthesize m_isShowLeftCloseBarButton=_m_isShowLeftCloseBarButton;
@property(nonatomic) _Bool m_isWeakActionBtn; // @synthesize m_isWeakActionBtn;
@property(retain, nonatomic) NSString *m_actionBtnStr; // @synthesize m_actionBtnStr;
@property(retain, nonatomic) UIImage *m_logoSVGImage; // @synthesize m_logoSVGImage;
- (void)onHeadContentLinkClicked:(id)arg1;
- (void)didClickLeftCloseBarButton;
- (void)doAction;
- (void)layoutActionBtn;
- (void)layoutCommonHeadView;
- (void)layoutView;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithHeadTitle:(id)arg1 headContentWithLink:(id)arg2;
- (id)initWithHeadTitle:(id)arg1 headContent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

