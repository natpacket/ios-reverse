//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"

@class MMUIButton, NSString, RichTextView;
@protocol MMAcceptAgreementProtocolViewDelegate;

@interface MMAcceptAgreementProtocolView : MMUIView <ILinkEventExt>
{
    RichTextView *m_protocolTextView;
    _Bool m_isAgreedProtocol;
    MMUIButton *m_isAgreedProtocolButton;
    NSString *m_protocolText;
    id <MMAcceptAgreementProtocolViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMAcceptAgreementProtocolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)protocolTextColor;
- (id)protocolButtonUncheckedColor;
- (id)protocolButtonCheckedColor;
- (_Bool)isHadAgreedProtocol;
- (void)onClickAgreedProtocolBtn:(id)arg1;
- (id)getLeftImage;
- (void)layoutIsAgreedProtocolButton;
- (void)layoutProtocolTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andProtocolText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
