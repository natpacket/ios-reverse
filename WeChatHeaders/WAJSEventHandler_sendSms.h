//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString;

@interface WAJSEventHandler_sendSms : WAJSEventHandler_BaseEvent <MFMessageComposeViewControllerDelegate>
{
}

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (_Bool)checkContentLengthAvailable:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

