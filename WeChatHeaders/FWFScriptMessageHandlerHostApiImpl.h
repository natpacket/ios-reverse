//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FWFWKScriptMessageHandlerHostApi-Protocol.h"

@class FWFInstanceManager;

@interface FWFScriptMessageHandlerHostApiImpl : NSObject <FWFWKScriptMessageHandlerHostApi>
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)scriptMessageHandlerForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

