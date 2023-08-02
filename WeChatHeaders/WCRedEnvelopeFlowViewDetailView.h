//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCRedEnvelopesReceiveHomeTemplateViewDelegate-Protocol.h"

@class HbEnvelopSource, NSString, UIButton, UILabel, WCRedEnvelopesReceiveHomeTemplateItem, WCRedEnvelopesReceiveHomeTemplateView;
@protocol WCRedEnvelopeFlowViewDetailViewDelegate;

@interface WCRedEnvelopeFlowViewDetailView : UIView <WCRedEnvelopesReceiveHomeTemplateViewDelegate>
{
    UIView *_m_skinBackgroundView;
    UILabel *_m_corpNameLabel;
    UILabel *_overtimeLabel;
    UIButton *_m_doneBtn;
    UIButton *_m_previewBtn;
    UIButton *_m_closeBtn;
    WCRedEnvelopesReceiveHomeTemplateItem *_m_templateItem;
    WCRedEnvelopesReceiveHomeTemplateView *_templateItemView;
    HbEnvelopSource *_hbShowResource;
    id <WCRedEnvelopeFlowViewDetailViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCRedEnvelopeFlowViewDetailViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) HbEnvelopSource *hbShowResource; // @synthesize hbShowResource=_hbShowResource;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateItemView; // @synthesize templateItemView=_templateItemView;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *m_templateItem; // @synthesize m_templateItem=_m_templateItem;
@property(retain, nonatomic) UIButton *m_closeBtn; // @synthesize m_closeBtn=_m_closeBtn;
@property(retain, nonatomic) UIButton *m_previewBtn; // @synthesize m_previewBtn=_m_previewBtn;
@property(retain, nonatomic) UIButton *m_doneBtn; // @synthesize m_doneBtn=_m_doneBtn;
@property(retain, nonatomic) UILabel *overtimeLabel; // @synthesize overtimeLabel=_overtimeLabel;
@property(retain, nonatomic) UILabel *m_corpNameLabel; // @synthesize m_corpNameLabel=_m_corpNameLabel;
@property(retain, nonatomic) UIView *m_skinBackgroundView; // @synthesize m_skinBackgroundView=_m_skinBackgroundView;
- (void)gotoPreview;
- (void)onPreviewBtnTap;
- (void)onTapUseCoverBtn;
- (void)OnCancelButtonDone;
- (void)updateView;
- (void)updateViewWithData:(id)arg1;
- (id)getTemplateItemData:(id)arg1;
- (void)removeView;
- (void)showAnimation;
- (void)endAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
