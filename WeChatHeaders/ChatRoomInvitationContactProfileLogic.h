//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OpenIMContactInfoExt-Protocol.h"
#import "WeixinContactInfoExt-Protocol.h"

@class CContact, CMessageWrap, NSString;
@protocol MMUIViewControllerDelegate;

@interface ChatRoomInvitationContactProfileLogic : NSObject <WeixinContactInfoExt, OpenIMContactInfoExt>
{
    CContact *_roomContact;
    id <MMUIViewControllerDelegate> _delegate;
    CMessageWrap *_currentInvitationMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *currentInvitationMsg; // @synthesize currentInvitationMsg=_currentInvitationMsg;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *roomContact; // @synthesize roomContact=_roomContact;
- (void)onCheckDisableAllOperation:(id)arg1 Disable:(_Bool *)arg2;
- (id)updateContactsAndGetInviterContactForInvitationMsg:(id)arg1;
- (void)openContactProfile:(id)arg1 fromInvitationMsg:(id)arg2;
- (void)dealloc;
- (id)initWithRoomContact:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

