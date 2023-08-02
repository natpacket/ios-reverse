//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderContactExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"

@class NSString, PrepareFinder, WCFinderContact, WCFinderUserMessage;

@interface WCFinderPersonalContactModel : NSObject <WCFinderContactExt, WCFinderRedDotNotifyExt>
{
    WCFinderContact *_contact;
    PrepareFinder *_prepare;
    WCFinderUserMessage *_userMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUserMessage *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) PrepareFinder *prepare; // @synthesize prepare=_prepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)onFinderNotifyUnreadMentionCountNeedReloadWithUsername:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (id)finderMsgRedDotInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
