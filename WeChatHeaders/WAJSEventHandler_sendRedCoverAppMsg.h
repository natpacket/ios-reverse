//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "JSApiSelectContactsViewControllerDelegate-Protocol.h"
#import "JSApiSelectSessionViewControllerDelegate-Protocol.h"
#import "SharePreConfirmViewDelegate-Protocol.h"
#import "WCRedEnvelopesSendRedCoverAppMsgCgiDelegate-Protocol.h"

@class CContact, JSApiSelectContactsViewController, JSApiSelectSessionViewController, NSString, SharePreConfirmView;

@interface WAJSEventHandler_sendRedCoverAppMsg : WAJSEventHandler_BaseEvent <JSApiSelectSessionViewControllerDelegate, JSApiSelectContactsViewControllerDelegate, WCRedEnvelopesSendRedCoverAppMsgCgiDelegate, SharePreConfirmViewDelegate>
{
    NSString *_receiveUri;
    JSApiSelectSessionViewController *_selectSessionViewController;
    JSApiSelectContactsViewController *_selectContactViewController;
    SharePreConfirmView *_sharePreConfirmView;
    CContact *_selectedContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) JSApiSelectContactsViewController *selectContactViewController; // @synthesize selectContactViewController=_selectContactViewController;
@property(retain, nonatomic) JSApiSelectSessionViewController *selectSessionViewController; // @synthesize selectSessionViewController=_selectSessionViewController;
@property(retain, nonatomic) NSString *receiveUri; // @synthesize receiveUri=_receiveUri;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(id)arg1;
- (void)startSendAppMsgRequest:(id)arg1;
- (void)showSharePreConfirmView:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
