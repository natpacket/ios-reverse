//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCWebviewEvent-Protocol.h"

@class NSObject, NSString;

@interface WCWebviewEvent : MMObject <WCWebviewEvent>
{
    _Bool _bCanceled;
    NSObject *_eventContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *eventContext; // @synthesize eventContext=_eventContext;
@property(nonatomic) _Bool bCanceled; // @synthesize bCanceled=_bCanceled;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)eventHashValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

