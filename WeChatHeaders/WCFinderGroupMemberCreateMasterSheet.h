//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderCustomPanelSheet.h"

#import "ILinkEventExt-Protocol.h"
#import "WCFinderCreateUserViewControllerDelegate-Protocol.h"

@class MMUIButton, NSString, RichTextView, UIView, WCFinderHeadImageView;

@interface WCFinderGroupMemberCreateMasterSheet : WCFinderCustomPanelSheet <ILinkEventExt, WCFinderCreateUserViewControllerDelegate>
{
    UIView *_contentContainerView;
    WCFinderHeadImageView *_headImageView;
    MMUIButton *_aggreCheckBox;
    RichTextView *_aggrementView;
    RichTextView *_nickNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) RichTextView *aggrementView; // @synthesize aggrementView=_aggrementView;
@property(retain, nonatomic) MMUIButton *aggreCheckBox; // @synthesize aggreCheckBox=_aggreCheckBox;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)createUserFinished:(id)arg1;
- (void)shakeAggreetView;
- (struct UIEdgeInsets)contentInset;
- (long long)closeButtonStyle;
- (void)clickEditAction;
- (void)createGroupContact;
- (void)onAgreementCheckBoxClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (double)maxHeight;
- (id)loadContentView;
- (id)createAgrementView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
