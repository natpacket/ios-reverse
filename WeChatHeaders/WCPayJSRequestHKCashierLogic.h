//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayJSAuthBaseLogic.h"

@protocol WCPayJSRequestHKCashierLogicDelegate;

@interface WCPayJSRequestHKCashierLogic : WCPayJSAuthBaseLogic
{
    id <WCPayJSRequestHKCashierLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayJSRequestHKCashierLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authFail;
- (void)authOk;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

@end

